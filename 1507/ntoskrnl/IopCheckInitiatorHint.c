/*
 * XREFs of IopCheckInitiatorHint @ 0x140111C20
 * Callers:
 *     IopAllocRealFileObject @ 0x140488940 (IopAllocRealFileObject.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     IopGetSetSpecificExtension @ 0x14007123C (IopGetSetSpecificExtension.c)
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 *     IoGetInitiatorProcess @ 0x14012D94C (IoGetInitiatorProcess.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlIsSandboxedToken @ 0x1404115C4 (RtlIsSandboxedToken.c)
 *     ObpRemoveObjectRoutine @ 0x14048AD40 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140524370 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1406AD5D0 (ObpDeregisterObject.c)
 */

__int64 __fastcall IopCheckInitiatorHint(__int64 a1, __int64 a2)
{
  _QWORD *Teb; // rbx
  __int64 v5; // r14
  NTSTATUS v6; // eax
  PVOID v7; // rbx
  signed __int64 v8; // rbx
  signed __int64 v9; // rax
  bool v10; // cc
  signed __int64 v11; // rax
  __int64 v12; // rax
  signed __int64 j; // rcx
  signed __int64 v14; // rax
  _DWORD *v15; // rax
  signed __int64 v16; // rbx
  signed __int64 v17; // rax
  signed __int64 v18; // rax
  __int64 v19; // rax
  signed __int64 i; // rcx
  signed __int64 v21; // rax
  int SetSpecificExtension; // [rsp+34h] [rbp-54h]
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  PVOID v25; // [rsp+40h] [rbp-48h]
  __int64 v26; // [rsp+48h] [rbp-40h] BYREF
  struct _KTHREAD *v27; // [rsp+50h] [rbp-38h]
  _DWORD *v28; // [rsp+58h] [rbp-30h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-28h]

  SetSpecificExtension = 0;
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = KeGetCurrentThread()->Teb;
  if ( (Teb[9] | 1LL) == Teb[252]
    && !(unsigned __int8)RtlIsSandboxedToken(0LL, (unsigned __int8)KeGetCurrentThread()->gap0[10]) )
  {
    v5 = Teb[251] & 1LL;
    v6 = ObReferenceObjectByHandle(
           (HANDLE)(Teb[251] & 0xFFFFFFFFFFFFFFFEuLL),
           0x40u,
           (POBJECT_TYPE)PsProcessType,
           1,
           &Object,
           0LL);
    v7 = Object;
    v25 = Object;
    SetSpecificExtension = v6;
    if ( v6 >= 0 )
    {
      SetSpecificExtension = IopGetSetSpecificExtension(a1, 1u, 0x20u, 1, &v26, 0LL);
      if ( SetSpecificExtension < 0 )
      {
        v16 = (signed __int64)v7 - 48;
        if ( ObpTraceFlags )
          ObpPushStackInfo(v16);
        v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL);
        v10 = v17 <= 1;
        v18 = v17 - 1;
        if ( v10 )
        {
          if ( *(_QWORD *)(v16 + 8) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v16 + 24) ^ (unsigned __int64)BYTE1(v16)],
              (ULONG_PTR)Object,
              1uLL,
              *(_QWORD *)(v16 + 8));
          if ( v18 < 0 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v18);
          CurrentThread = KeGetCurrentThread();
          if ( CurrentThread->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql() )
          {
            _m_prefetchw(&ObpRemoveObjectList);
            for ( i = ObpRemoveObjectList; ; i = v21 )
            {
              *(_QWORD *)(v16 + 8) = i;
              v21 = _InterlockedCompareExchange64(&ObpRemoveObjectList, v16, i);
              if ( i == v21 )
                break;
            }
            if ( !i )
            {
              if ( (unsigned __int8)KeAreInterruptsEnabled() && KeGetCurrentIrql() <= 2u )
                ExQueueWorkItem(&ObpRemoveObjectWorkItem, CriticalWorkQueue);
              else
                KiInsertQueueDpc((__int64)&ObpRemoveObjectDpc, 0LL, 0LL, 0LL, 0);
            }
          }
          else
          {
            if ( (*(_BYTE *)(v16 + 26) & 0x40) != 0 )
            {
              v19 = ObpInfoMaskToOffset[*(_BYTE *)(v16 + 26) & 0x7F];
              if ( v16 != v19 )
                ObpHandleRevocationBlockRemoveObject(v16 - v19);
            }
            if ( ObpTraceFlags )
              ObpDeregisterObject(v16);
            ObpRemoveObjectRoutine(v16, 0LL);
          }
        }
      }
      else
      {
        if ( a2 && (PVOID)IoGetInitiatorProcess(a2) != v7 )
        {
          SetSpecificExtension = -1073741811;
          v8 = (signed __int64)v7 - 48;
          if ( ObpTraceFlags )
            ObpPushStackInfo(v8);
          v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL);
          v10 = v9 <= 1;
          v11 = v9 - 1;
          if ( v10 )
          {
            if ( *(_QWORD *)(v8 + 8) )
              KeBugCheckEx(
                0x18u,
                ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v8 + 24) ^ (unsigned __int64)BYTE1(v8)],
                (ULONG_PTR)Object,
                1uLL,
                *(_QWORD *)(v8 + 8));
            if ( v11 < 0 )
              KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v11);
            v27 = KeGetCurrentThread();
            if ( v27->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql() )
            {
              _m_prefetchw(&ObpRemoveObjectList);
              for ( j = ObpRemoveObjectList; ; j = v14 )
              {
                *(_QWORD *)(v8 + 8) = j;
                v14 = _InterlockedCompareExchange64(&ObpRemoveObjectList, v8, j);
                if ( j == v14 )
                  break;
              }
              if ( !j )
              {
                if ( (unsigned __int8)KeAreInterruptsEnabled() && KeGetCurrentIrql() <= 2u )
                  ExQueueWorkItem(&ObpRemoveObjectWorkItem, CriticalWorkQueue);
                else
                  KiInsertQueueDpc((__int64)&ObpRemoveObjectDpc, 0LL, 0LL, 0LL, 0);
              }
            }
            else
            {
              if ( (*(_BYTE *)(v8 + 26) & 0x40) != 0 )
              {
                v12 = ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0x7F];
                if ( v8 != v12 )
                  ObpHandleRevocationBlockRemoveObject(v8 - v12);
              }
              if ( ObpTraceFlags )
                ObpDeregisterObject(v8);
              ObpRemoveObjectRoutine(v8, 0LL);
            }
          }
        }
        if ( SetSpecificExtension >= 0 )
        {
          *(_QWORD *)(v26 + 8) = v25;
          if ( (_BYTE)v5 == 1 )
          {
            *(_DWORD *)(a1 + 80) |= 0x20000000u;
            v15 = *(_DWORD **)(a1 + 208);
            v28 = v15;
            if ( v15 )
              *v15 |= 8u;
          }
        }
      }
    }
  }
  return (unsigned int)SetSpecificExtension;
}
