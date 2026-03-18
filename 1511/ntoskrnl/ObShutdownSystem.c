/*
 * XREFs of ObShutdownSystem @ 0x14062D4D0
 * Callers:
 *     PoBroadcastSystemState @ 0x1403A49B4 (PoBroadcastSystemState.c)
 *     PopGracefulShutdown @ 0x1403B2154 (PopGracefulShutdown.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByName @ 0x14046F95C (ObReferenceObjectByName.c)
 *     ExEnumHandleTable @ 0x140480DE0 (ExEnumHandleTable.c)
 *     ObMakeTemporaryObject @ 0x140494274 (ObMakeTemporaryObject.c)
 *     ObpDeleteSymbolicLinkName @ 0x1404C4630 (ObpDeleteSymbolicLinkName.c)
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
  __int64 v18; // rax
  __int64 v19; // r15
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  signed __int64 v22; // rtt
  char *v23; // rcx
  PVOID *v24; // rcx
  char *j; // [rsp+50h] [rbp-19h]
  char *v26; // [rsp+58h] [rbp-11h]
  struct _OBJECT_TYPE *v27; // [rsp+60h] [rbp-9h]
  char *v28; // [rsp+68h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp+7h] BYREF
  int v30; // [rsp+D0h] [rbp+67h]
  int v31; // [rsp+D8h] [rbp+6Fh]
  int v32; // [rsp+E0h] [rbp+77h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( !a1 )
  {
    v4 = (char *)ObpRootDirectoryObject;
    v5 = 1;
    v26 = 0LL;
    v6 = 0LL;
    v30 = 1;
    v7 = 1;
    if ( !ObpRootDirectoryObject )
      return;
    while ( 1 )
    {
LABEL_15:
      for ( i = 0LL; ; i = (unsigned int)(v31 + 1) )
      {
        v31 = i;
        if ( (unsigned int)i >= 0x25 )
          break;
        v9 = &v4[8 * i];
        v10 = v9;
        for ( j = v9; *(_QWORD *)v10; v6 = v26 )
        {
          v11 = *(char **)(*(_QWORD *)v10 + 8LL);
          v28 = v11;
          v12 = v11 - 48;
          v13 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v11 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v11 - 48) >> 8)];
          v14 = *(v11 - 22);
          v27 = v13;
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
            if ( v11 != v6 || (v26 = 0LL, v7 <= v5) )
            {
LABEL_26:
              v10 = *(char **)v10;
              continue;
            }
            v10 = v9;
            v30 = v5;
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
            v18 = KeAbPreAcquire((ULONG_PTR)(v12 + 16), 0LL, 0LL);
            v19 = v18;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v12 + 4, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v12 + 2, v18, (ULONG_PTR)(v12 + 16));
            if ( v19 )
              *(_BYTE *)(v19 + 26) |= 1u;
            v12[27] &= ~0x10u;
            _m_prefetchw(v17);
            v20 = *v17;
            v21 = *v17 - 16;
            if ( (*v17 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v21 = 0LL;
            if ( (v20 & 2) != 0 || (v22 = *v17, v22 != _InterlockedCompareExchange64(v17, v21, v20)) )
              ExfReleasePushLock((_QWORD *)v12 + 2);
            KeAbPostRelease((ULONG_PTR)(v12 + 16));
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            if ( *((_QWORD *)v12 + 1) )
            {
              v10 = *(char **)v10;
              v7 = v30;
            }
            else
            {
              v23 = *(char **)v10;
              *(_QWORD *)v10 = **(_QWORD **)v10;
              ExFreePoolWithTag(v23, 0);
              if ( (v27->TypeInfo.ObjectTypeFlags & 8) == 0 )
                ((void (__fastcall *)(char *, __int64, _QWORD))v27->TypeInfo.SecurityProcedure)(v28, 2LL, 0LL);
              if ( v27 == ObpSymbolicLinkObjectType )
              {
                v30 = v5;
                v7 = v5;
                ObpDeleteSymbolicLinkName((__int64)v28);
                v10 = j;
              }
              else
              {
                v7 = v30;
              }
              ExFreePoolWithTag(*((PVOID *)v15 + 2), 0);
              *((_QWORD *)v15 + 2) = 0LL;
              *((_DWORD *)v15 + 2) = 0;
              *(_QWORD *)v15 = 0LL;
              ObfDereferenceObject(v28);
              ObfDereferenceObject(v4);
            }
            v9 = j;
          }
        }
      }
      --v5;
      if ( (*(v4 - 22) & 2) != 0 )
        v24 = (PVOID *)&v4[-ObpInfoMaskToOffset[*(v4 - 22) & 3] - 48];
      else
        v24 = 0LL;
      v6 = v4;
      v26 = v4;
      v4 = (char *)*v24;
      if ( !*v24 )
        return;
    }
  }
  if ( a1 == 1 )
  {
    v32 = 0;
    ExEnumHandleTable(
      (unsigned int *)PsInitialSystemProcess[1].ActiveProcessors.Bitmap[5],
      (__int64 (__fastcall *)(unsigned int *, signed __int64 *, _QWORD, __int64))ObpShutdownCloseHandleProcedure,
      (__int64)&v32,
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
