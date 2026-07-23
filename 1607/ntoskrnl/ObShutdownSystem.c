/*
 * XREFs of ObShutdownSystem @ 0x1406656C0
 * Callers:
 *     PoBroadcastSystemState @ 0x1403CEBF8 (PoBroadcastSystemState.c)
 *     PopGracefulShutdown @ 0x1403DEE20 (PopGracefulShutdown.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByName @ 0x140404AA0 (ObReferenceObjectByName.c)
 *     ExEnumHandleTable @ 0x14045D3A0 (ExEnumHandleTable.c)
 *     ObMakeTemporaryObject @ 0x1404CD494 (ObMakeTemporaryObject.c)
 *     ObpDeleteSymbolicLinkName @ 0x1404D1CA4 (ObpDeleteSymbolicLinkName.c)
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
  char *v11; // rdx
  char *v12; // r13
  struct _OBJECT_TYPE *v13; // rax
  char v14; // cl
  char *v15; // r12
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v17; // r14
  _BYTE *v18; // rax
  _BYTE *v19; // r15
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  signed __int64 v22; // rtt
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  char *v26; // rcx
  PVOID *v27; // rcx
  char *j; // [rsp+50h] [rbp-19h]
  char *v29; // [rsp+58h] [rbp-11h]
  struct _OBJECT_TYPE *v30; // [rsp+60h] [rbp-9h]
  char *v31; // [rsp+68h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp+7h] BYREF
  int v33; // [rsp+D0h] [rbp+67h]
  int v34; // [rsp+D8h] [rbp+6Fh]
  int v35; // [rsp+E0h] [rbp+77h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( !a1 )
  {
    v4 = (char *)ObpRootDirectoryObject;
    v5 = 1;
    v29 = 0LL;
    v6 = 0LL;
    v33 = 1;
    v7 = 1;
    if ( !ObpRootDirectoryObject )
      return;
    while ( 1 )
    {
LABEL_15:
      for ( i = 0LL; ; i = (unsigned int)(v34 + 1) )
      {
        v34 = i;
        if ( (unsigned int)i >= 0x25 )
          break;
        v9 = &v4[8 * i];
        v10 = v9;
        for ( j = v9; *(_QWORD *)v10; v6 = v29 )
        {
          v11 = *(char **)(*(_QWORD *)v10 + 8LL);
          v31 = v11;
          v12 = v11 - 48;
          v13 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v11 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v11 - 48) >> 8)];
          v14 = *(v11 - 22);
          v30 = v13;
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
            if ( v11 != v6 || (v29 = 0LL, v7 <= v5) )
            {
LABEL_26:
              v10 = *(char **)v10;
              continue;
            }
            v10 = v9;
            v33 = v5;
            v7 = v5;
          }
          else
          {
            if ( v13 == ObpTypeObjectType )
              goto LABEL_26;
            if ( v13 == ObpDirectoryObjectType )
            {
              v4 = *(char **)(*(_QWORD *)v10 + 8LL);
              ++v5;
              goto LABEL_15;
            }
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            v17 = (signed __int64 *)(v12 + 16);
            v18 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(v12 + 16), 0LL, 0);
            v19 = v18;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v12 + 4, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v12 + 2, v18, (ULONG_PTR)(v12 + 16));
            if ( v19 )
              v19[26] |= 1u;
            v12[27] &= ~0x10u;
            _m_prefetchw(v17);
            v20 = *v17;
            v21 = *v17 - 16;
            if ( (*v17 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v21 = 0LL;
            if ( (v20 & 2) != 0 || (v22 = *v17, v22 != _InterlockedCompareExchange64(v17, v21, v20)) )
              ExfReleasePushLock((_QWORD *)v12 + 2);
            KeAbPostRelease((ULONG_PTR)(v12 + 16));
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v23, v24, v25);
            if ( *((_QWORD *)v12 + 1) )
            {
              v10 = *(char **)v10;
              v7 = v33;
            }
            else
            {
              v26 = *(char **)v10;
              *(_QWORD *)v10 = **(_QWORD **)v10;
              ExFreePoolWithTag(v26, 0);
              if ( (v30->TypeInfo.ObjectTypeFlags & 8) == 0 )
                ((void (__fastcall *)(char *, __int64, _QWORD))v30->TypeInfo.SecurityProcedure)(v31, 2LL, 0LL);
              if ( v30 == ObpSymbolicLinkObjectType )
              {
                v33 = v5;
                v7 = v5;
                ObpDeleteSymbolicLinkName((__int64)v31);
                v10 = j;
              }
              else
              {
                v7 = v33;
              }
              ExFreePoolWithTag(*((PVOID *)v15 + 2), 0);
              *((_QWORD *)v15 + 2) = 0LL;
              *((_DWORD *)v15 + 2) = 0;
              *(_QWORD *)v15 = 0LL;
              ObfDereferenceObject(v31);
              ObfDereferenceObject(v4);
            }
            v9 = j;
          }
        }
      }
      --v5;
      if ( (*(v4 - 22) & 2) != 0 )
        v27 = (PVOID *)&v4[-ObpInfoMaskToOffset[*(v4 - 22) & 3] - 48];
      else
        v27 = 0LL;
      v6 = v4;
      v29 = v4;
      v4 = (char *)*v27;
      if ( !*v27 )
        return;
    }
  }
  if ( a1 == 1 )
  {
    v35 = 0;
    ExEnumHandleTable(
      (unsigned int *)PsInitialSystemProcess[1].ActiveProcessors.Bitmap[5],
      (__int64 (__fastcall *)(unsigned int *, signed __int64 *, __int64, __int64))ObpShutdownCloseHandleProcedure,
      (__int64)&v35,
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
                (__int64)&DestinationString,
                64LL,
                0LL,
                0,
                (__int64)ObpSymbolicLinkObjectType,
                0,
                0LL,
                &Object) >= 0 )
    {
      ObMakeTemporaryObject(Object);
      ObfDereferenceObject(Object);
    }
    RtlInitUnicodeString(&DestinationString, L"Global");
    if ( (int)ObReferenceObjectByName(
                (__int64)&DestinationString,
                64LL,
                0LL,
                0,
                (__int64)ObpSymbolicLinkObjectType,
                0,
                0LL,
                &Object) >= 0 )
    {
      ObMakeTemporaryObject(Object);
      ObfDereferenceObject(Object);
    }
    RtlInitUnicodeString(&DestinationString, L"GLOBALROOT");
    if ( (int)ObReferenceObjectByName(
                (__int64)&DestinationString,
                64LL,
                0LL,
                0,
                (__int64)ObpSymbolicLinkObjectType,
                0,
                0LL,
                &Object) >= 0 )
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
