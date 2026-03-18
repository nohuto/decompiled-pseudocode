/*
 * XREFs of ObShutdownSystem @ 0x1406AAF80
 * Callers:
 *     PoBroadcastSystemState @ 0x1403EE2D4 (PoBroadcastSystemState.c)
 *     PopGracefulShutdown @ 0x140403318 (PopGracefulShutdown.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByName @ 0x1404CF06C (ObReferenceObjectByName.c)
 *     ExEnumHandleTable @ 0x140521D30 (ExEnumHandleTable.c)
 *     ObMakeTemporaryObject @ 0x140539B08 (ObMakeTemporaryObject.c)
 *     ObpDeleteSymbolicLinkName @ 0x14055B27C (ObpDeleteSymbolicLinkName.c)
 */

void __fastcall ObShutdownSystem(int a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx
  void *v3; // rcx
  char *v4; // rdi
  unsigned int v5; // esi
  char *v6; // r9
  unsigned int v7; // r14d
  __int64 i; // rax
  char *v9; // r10
  char *v10; // rbx
  char *v11; // r8
  char *v12; // r13
  struct _OBJECT_TYPE *v13; // rax
  char v14; // cl
  char *v15; // r12
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // r15
  signed __int64 v22; // rax
  signed __int64 v23; // rcx
  signed __int64 v24; // rtt
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  char *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  PVOID *v31; // rcx
  char *j; // [rsp+50h] [rbp-19h]
  char *v33; // [rsp+58h] [rbp-11h]
  struct _OBJECT_TYPE *v34; // [rsp+60h] [rbp-9h]
  char *v35; // [rsp+68h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp+7h] BYREF
  int v37; // [rsp+D0h] [rbp+67h]
  int v38; // [rsp+D8h] [rbp+6Fh]
  int v39; // [rsp+E0h] [rbp+77h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( !a1 )
  {
    v4 = (char *)ObpRootDirectoryObject;
    v5 = 1;
    v33 = 0LL;
    v6 = 0LL;
    v37 = 1;
    v7 = 1;
    if ( !ObpRootDirectoryObject )
      return;
    while ( 1 )
    {
LABEL_15:
      for ( i = 0LL; ; i = (unsigned int)(v38 + 1) )
      {
        v38 = i;
        if ( (unsigned int)i >= 0x25 )
          break;
        v9 = &v4[8 * i];
        v10 = v9;
        for ( j = v9; *(_QWORD *)v10; v6 = v33 )
        {
          v11 = *(char **)(*(_QWORD *)v10 + 8LL);
          v35 = v11;
          v12 = v11 - 48;
          v13 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v11 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v11 - 48) >> 8)];
          v14 = *(v11 - 22);
          v34 = v13;
          if ( (v14 & 2) != 0 )
          {
            v15 = &v12[-ObpInfoMaskToOffset[v14 & 3]];
            v13 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v11 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v11 - 48) >> 8)];
          }
          else
          {
            v15 = 0LL;
          }
          if ( v6 )
          {
            if ( v11 != v6 || (v33 = 0LL, v5 <= v7) )
            {
LABEL_26:
              v10 = *(char **)v10;
              continue;
            }
            v10 = v9;
            v37 = v7;
            v5 = v7;
          }
          else
          {
            if ( v13 == ObpTypeObjectType )
              goto LABEL_26;
            if ( v13 == ObpDirectoryObjectType )
            {
              v4 = *(char **)(*(_QWORD *)v10 + 8LL);
              ++v7;
              goto LABEL_15;
            }
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            v17 = (signed __int64 *)(v12 + 16);
            v18 = KeAbPreAcquire((ULONG_PTR)(v12 + 16), 0LL, 0LL, 0LL);
            v21 = v18;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v12 + 4, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v12 + 2, v18, (ULONG_PTR)(v12 + 16), v20);
            if ( v21 )
              *(_BYTE *)(v21 + 26) |= 1u;
            v12[27] &= ~0x10u;
            _m_prefetchw(v17);
            v22 = *v17;
            v23 = *v17 - 16;
            if ( (*v17 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v23 = 0LL;
            if ( (v22 & 2) != 0 || (v24 = *v17, v24 != _InterlockedCompareExchange64(v17, v23, v22)) )
              ExfReleasePushLock((_QWORD *)v12 + 2, v19);
            KeAbPostRelease((ULONG_PTR)(v12 + 16));
            v25 = KeGetCurrentThread();
            v26 = v25->KernelApcDisable + 1;
            v25->KernelApcDisable = v26;
            if ( !v26
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
              && !v25->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            if ( *((_QWORD *)v12 + 1) )
            {
              v10 = *(char **)v10;
              v5 = v37;
            }
            else
            {
              v27 = *(char **)v10;
              *(_QWORD *)v10 = **(_QWORD **)v10;
              ExFreePoolWithTag(v27, 0);
              if ( (v34->TypeInfo.ObjectTypeFlags & 8) == 0 )
                ((void (__fastcall *)(char *, __int64, _QWORD))v34->TypeInfo.SecurityProcedure)(v35, 2LL, 0LL);
              if ( v34 == ObpSymbolicLinkObjectType )
              {
                v37 = v7;
                v5 = v7;
                ObpDeleteSymbolicLinkName((__int64)v35, v28, v29, v30);
                v10 = j;
              }
              else
              {
                v5 = v37;
              }
              ExFreePoolWithTag(*((PVOID *)v15 + 2), 0);
              *((_QWORD *)v15 + 2) = 0LL;
              *((_DWORD *)v15 + 2) = 0;
              *(_QWORD *)v15 = 0LL;
              ObfDereferenceObject(v35);
              ObfDereferenceObject(v4);
            }
            v9 = j;
          }
        }
      }
      --v7;
      if ( (*(v4 - 22) & 2) != 0 )
        v31 = (PVOID *)&v4[-ObpInfoMaskToOffset[*(v4 - 22) & 3] - 48];
      else
        v31 = 0LL;
      v6 = v4;
      v33 = v4;
      v4 = (char *)*v31;
      if ( !*v31 )
        return;
    }
  }
  if ( a1 == 1 )
  {
    v39 = 0;
    ExEnumHandleTable(
      (unsigned int *)PsInitialSystemProcess[1].ActiveProcessors.Bitmap[5],
      (__int64 (__fastcall *)(unsigned int *, __int64 *, __int64, __int64))ObpShutdownCloseHandleProcedure,
      (__int64)&v39,
      0LL);
  }
  else
  {
    v1 = ObpTypeObjectType;
    v2 = *(_QWORD **)ObpTypeObjectType;
    while ( v2 != v1 )
    {
      v3 = v2 + 10;
      v2 = (_QWORD *)*v2;
      Object = v3;
      ObMakeTemporaryObject(v3);
    }
    RtlInitUnicodeString(&DestinationString, L"DosDevices");
    if ( (int)ObReferenceObjectByName(
                (ULONG64)&DestinationString,
                64,
                0LL,
                0,
                ObpSymbolicLinkObjectType,
                0,
                0LL,
                (__int64 *)&Object) >= 0 )
    {
      ObMakeTemporaryObject(Object);
      ObfDereferenceObject(Object);
    }
    RtlInitUnicodeString(&DestinationString, L"Global");
    if ( (int)ObReferenceObjectByName(
                (ULONG64)&DestinationString,
                64,
                0LL,
                0,
                ObpSymbolicLinkObjectType,
                0,
                0LL,
                (__int64 *)&Object) >= 0 )
    {
      ObMakeTemporaryObject(Object);
      ObfDereferenceObject(Object);
    }
    RtlInitUnicodeString(&DestinationString, L"GLOBALROOT");
    if ( (int)ObReferenceObjectByName(
                (ULONG64)&DestinationString,
                64,
                0LL,
                0,
                ObpSymbolicLinkObjectType,
                0,
                0LL,
                (__int64 *)&Object) >= 0 )
    {
      ObMakeTemporaryObject(Object);
      ObfDereferenceObject(Object);
    }
    ObfDereferenceObject(ObpRootDirectoryObject);
    ObfDereferenceObject(ObpDirectoryObjectType);
    ObfDereferenceObject(ObpSymbolicLinkObjectType);
    ObfDereferenceObject(ObpTypeDirectoryObject);
    ObfDereferenceObject(ObpTypeObjectType);
  }
}
