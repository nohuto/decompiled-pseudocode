/*
 * XREFs of CmLoadAppKey @ 0x1403DC3A0
 * Callers:
 *     NtLoadKeyEx @ 0x1403DB3CC (NtLoadKeyEx.c)
 * Callees:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExBlockOnAddressPushLock @ 0x1400D26F0 (ExBlockOnAddressPushLock.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401A9E44 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1403DB2CC (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpGetLastHive @ 0x1403DB2F4 (CmpGetLastHive.c)
 *     CmpGetNextHive @ 0x1403DC94C (CmpGetNextHive.c)
 *     CmpDereferenceHive @ 0x1403DCA48 (CmpDereferenceHive.c)
 *     CmpIsThisSameFile @ 0x1403DCA60 (CmpIsThisSameFile.c)
 *     CmpUnlockAppHiveLoadList @ 0x1403DCAD8 (CmpUnlockAppHiveLoadList.c)
 *     CmpLockAppHiveLoadList @ 0x1403DCB34 (CmpLockAppHiveLoadList.c)
 *     CmpOpenHiveFile @ 0x1403DD4E4 (CmpOpenHiveFile.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403DE3F0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1403DE460 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1403DE4C0 (LOCK_HIVE_LOAD.c)
 *     CmpConstructName @ 0x1403FC9B0 (CmpConstructName.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpCmdHiveOpen @ 0x14044C29C (CmpCmdHiveOpen.c)
 */

__int64 __fastcall CmLoadAppKey(
        _QWORD *a1,
        const UNICODE_STRING *a2,
        __int16 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        _QWORD *a7)
{
  unsigned __int16 *v7; // rax
  char v10; // si
  unsigned __int16 v11; // r8
  __int64 LastHive; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _KTHREAD *CurrentThread; // rax
  int v16; // r14d
  int v17; // eax
  int KeyCommon; // edi
  NTSTATUS v19; // eax
  _QWORD *v20; // r12
  __int64 v21; // rbx
  int v22; // edx
  int v23; // eax
  __int64 v24; // rcx
  PVOID v25; // rsi
  __int64 v26; // rcx
  __int64 i; // rcx
  __int64 NextHive; // rax
  __int64 v29; // rbx
  int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 *v33; // rcx
  __int64 **v34; // rax
  unsigned __int64 v35; // rax
  const UNICODE_STRING *v37; // rdi
  struct _EX_RUNDOWN_REF *v38; // rax
  __int64 v39; // rbx
  struct _EX_RUNDOWN_REF *v40; // rbx
  struct _EX_RUNDOWN_REF *v41; // rdx
  __int64 *v42; // rcx
  __int64 **v43; // rax
  int v44; // eax
  NTSTATUS v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  char v50; // [rsp+48h] [rbp-91h]
  char v51; // [rsp+49h] [rbp-90h] BYREF
  char v52; // [rsp+4Ah] [rbp-8Fh]
  char v53; // [rsp+4Bh] [rbp-8Eh] BYREF
  __int64 v54; // [rsp+4Ch] [rbp-8Dh] BYREF
  int v55; // [rsp+54h] [rbp-85h]
  PVOID v56; // [rsp+58h] [rbp-81h]
  HANDLE Handle; // [rsp+60h] [rbp-79h] BYREF
  PVOID P; // [rsp+68h] [rbp-71h] BYREF
  _BYTE v59[4]; // [rsp+70h] [rbp-69h] BYREF
  int v60; // [rsp+74h] [rbp-65h]
  __int64 *v61; // [rsp+78h] [rbp-61h] BYREF
  __int64 **v62; // [rsp+80h] [rbp-59h]
  unsigned __int64 v63; // [rsp+88h] [rbp-51h] BYREF
  struct _EX_RUNDOWN_REF *v64; // [rsp+90h] [rbp-49h]
  const UNICODE_STRING *v65; // [rsp+98h] [rbp-41h]
  char v66; // [rsp+A0h] [rbp-39h]
  struct _KEVENT Event; // [rsp+A8h] [rbp-31h] BYREF
  struct _EX_RUNDOWN_REF RunRef; // [rsp+C0h] [rbp-19h] BYREF
  ULONG_PTR v69; // [rsp+C8h] [rbp-11h] BYREF
  __int64 v70; // [rsp+D0h] [rbp-9h]
  PVOID v71; // [rsp+D8h] [rbp-1h] BYREF
  PVOID Object; // [rsp+E0h] [rbp+7h] BYREF

  v7 = (unsigned __int16 *)a1[2];
  v52 = 0;
  P = 0LL;
  v10 = 0;
  v70 = 0LL;
  v11 = *v7;
  LastHive = 0LL;
  v56 = 0LL;
  v50 = 0;
  if ( v11 >= 2u )
  {
    for ( LODWORD(v13) = v11 >> 1; (_DWORD)v13; *(_WORD *)v14 -= 2 )
    {
      v14 = a1[2];
      v13 = (unsigned int)(v13 - 1);
      if ( *(_WORD *)(*(_QWORD *)(v14 + 8) + 2 * v13) != 92 )
        break;
    }
  }
  if ( *(_WORD *)a1[2] < 2u )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return 3221225865LL;
  }
  v16 = 50397185;
  v60 = a3 & 0x20;
  if ( (a3 & 0x20) != 0 )
    v16 = 117506049;
  if ( (a3 & 0x80u) != 0 )
    v16 |= 0x8000000u;
  if ( (a3 & 0x200) != 0 )
    v16 |= 0x10000000u;
  v55 = 0;
  if ( (a3 & 0x2000) != 0 )
  {
    v55 = 1;
    v50 = 1;
  }
  v17 = CmpOpenHiveFile((_DWORD)a2, 0, (unsigned int)&Handle, (unsigned int)v59, 8, 0LL, 0LL, (__int64)&P);
  KeyCommon = v17;
  if ( v17 == -1073741772 )
  {
    v52 = 1;
    v65 = a2;
    v66 = 1;
  }
  else
  {
    if ( v17 < 0 )
      goto LABEL_54;
    v19 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
    v20 = Object;
    KeyCommon = v19;
    v56 = Object;
    ZwClose(Handle);
    if ( KeyCommon < 0 )
      goto LABEL_52;
    v65 = (const UNICODE_STRING *)v20[5];
    v66 = 0;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  RunRef.Count = 0LL;
  v64 = (struct _EX_RUNDOWN_REF *)&v63;
  v63 = (unsigned __int64)&v63;
  ((void (*)(void))CmpLockAppHiveLoadList)();
  v21 = CmpAppHiveLoadList;
  if ( (__int64 *)CmpAppHiveLoadList == &CmpAppHiveLoadList )
  {
LABEL_19:
    v61 = &CmpAppHiveLoadList;
    v62 = (__int64 **)qword_1402FD748;
    if ( *(__int64 **)qword_1402FD748 != &CmpAppHiveLoadList )
      __fastfail(3u);
    *(_QWORD *)qword_1402FD748 = &v61;
    qword_1402FD748 = (__int64)&v61;
    CmpUnlockAppHiveLoadList();
    goto LABEL_21;
  }
  v37 = v65;
  while ( !*(_BYTE *)(v21 + 40) )
  {
    if ( *(const UNICODE_STRING **)(v21 + 32) == v37 )
      goto LABEL_65;
LABEL_63:
    v21 = *(_QWORD *)v21;
    if ( (__int64 *)v21 == &CmpAppHiveLoadList )
      goto LABEL_19;
  }
  if ( !RtlEqualUnicodeString(*(PCUNICODE_STRING *)(v21 + 32), a2, 1u) )
    goto LABEL_63;
LABEL_65:
  v38 = *(struct _EX_RUNDOWN_REF **)(v21 + 24);
  v39 = v21 + 16;
  v63 = v39;
  v64 = v38;
  if ( v38->Count != v39 )
    __fastfail(3u);
  v38->Count = (unsigned __int64)&v63;
  *(_QWORD *)(v39 + 8) = &v63;
  v40 = v64;
  ExAcquireRundownProtection(v64 + 7);
  CmpUnlockAppHiveLoadList();
  KeWaitForSingleObject(&v40[4], Executive, 0, 0, 0LL);
  ExReleaseRundownProtection_0(v40 + 7);
  while ( 1 )
  {
LABEL_21:
    v69 = 0LL;
    LOBYTE(v22) = 1;
    v53 = 1;
    v51 = 0;
    v23 = CmpCmdHiveOpen((_DWORD)a2, v22, (unsigned int)&v53, (unsigned int)&v69, v16, v55, (__int64)&v51);
    v24 = 0LL;
    KeyCommon = v23;
    if ( !v23 )
    {
      KeyCommon = CmpLoadKeyCommon(v69, a1, a3, a4, a5, a7, v53, v51);
      break;
    }
    if ( v23 != -1073741757 || v60 || v10 )
      break;
    if ( v52 )
    {
      v44 = CmpOpenHiveFile((_DWORD)a2, 0, (unsigned int)&Handle, (unsigned int)v59, 8, 0LL, 0LL, (__int64)&P);
      KeyCommon = v44;
      if ( v44 < 0 )
      {
        if ( v44 == -1073741772 )
LABEL_93:
          KeyCommon = -1073741757;
        break;
      }
      v45 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v71, 0LL);
      v25 = v71;
      KeyCommon = v45;
      v56 = v71;
      ZwClose(Handle);
      if ( KeyCommon < 0 )
        break;
    }
    else
    {
      v25 = v56;
    }
    LOCK_HIVE_LOAD(v24);
    LOBYTE(v26) = 1;
    CmpLockRegistryFreezeAware(v26);
    LastHive = CmpGetLastHive();
    if ( LastHive )
    {
LABEL_28:
      while ( 1 )
      {
        LODWORD(v54) = CmpActiveAppHiveUnloadCount;
        if ( !CmpActiveAppHiveUnloadCount )
          break;
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
        ExBlockOnAddressPushLock((__int64)&CmpActiveAppHiveUnloadEvent, &CmpActiveAppHiveUnloadCount, &v54, 4uLL, 0LL);
        LOCK_HIVE_LOAD(v46);
        LOBYTE(v47) = 1;
        CmpLockRegistryFreezeAware(v47);
      }
      for ( i = 0LL; ; i = v29 )
      {
        NextHive = CmpGetNextHive(i);
        v29 = NextHive;
        if ( !NextHive )
          break;
        HIDWORD(v54) = *(_DWORD *)(NextHive + 6032);
        if ( HIDWORD(v54) )
        {
          CmpUnlockRegistry();
          UNLOCK_HIVE_LOAD();
          ExBlockOnAddressPushLock(v29 + 6040, (_QWORD *)(v29 + 6032), (__int64 *)((char *)&v54 + 4), 4uLL, 0LL);
          LOCK_HIVE_LOAD(v48);
          LOBYTE(v49) = 1;
          CmpLockRegistryFreezeAware(v49);
          CmpDereferenceHive(v29);
          if ( v29 != LastHive )
            goto LABEL_28;
          break;
        }
        if ( *(_BYTE *)(NextHive + 6049) || !*(_QWORD *)(NextHive + 2664) )
        {
          if ( NextHive == LastHive )
          {
            CmpDereferenceHive(NextHive);
            break;
          }
        }
        else
        {
          if ( (unsigned __int8)CmpIsThisSameFile(v25) )
          {
            v30 = *(_DWORD *)(v29 + 5360);
            if ( (v30 & 0x20) == 0 || (v30 & 0x40) != 0 )
              goto LABEL_92;
            if ( v50 )
            {
              if ( (*(_DWORD *)(v29 + 144) & 0x8000) == 0 && !CmpCheckHivePrimaryFileReadWriteAccess(P) )
              {
                CmpUnlockRegistry();
                UNLOCK_HIVE_LOAD();
                CmpDereferenceHive(v29);
                KeyCommon = -1073741790;
                goto LABEL_46;
              }
              goto LABEL_43;
            }
            if ( (*(_DWORD *)(v29 + 144) & 0x8000) != 0 )
            {
LABEL_92:
              CmpUnlockRegistry();
              UNLOCK_HIVE_LOAD();
              CmpDereferenceHive(v29);
              goto LABEL_93;
            }
LABEL_43:
            v31 = *(_QWORD *)(v29 + 4104);
            v70 = v29;
            v32 = CmpConstructName(v31);
            *a6 = v32;
            if ( v32 )
            {
              CmpReferenceKeyControlBlockUnsafe(*(volatile signed __int32 **)(v29 + 4104));
              *a7 = *(_QWORD *)(v29 + 4104);
              CmpUnlockRegistry();
              UNLOCK_HIVE_LOAD();
              KeyCommon = 0;
LABEL_45:
              CmpDereferenceHive(v29);
              if ( !v70 )
                break;
            }
            else
            {
              CmpUnlockRegistry();
              UNLOCK_HIVE_LOAD();
              KeyCommon = -1073741670;
              CmpDereferenceHive(v29);
            }
            goto LABEL_46;
          }
          if ( v29 == LastHive )
            goto LABEL_45;
        }
      }
    }
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v10 = 1;
  }
LABEL_46:
  CmpLockAppHiveLoadList(v24);
  v33 = v61;
  v34 = v62;
  if ( (__int64 **)v61[1] != &v61 || *v62 != (__int64 *)&v61 )
    __fastfail(3u);
  *v62 = v61;
  v33[1] = (__int64)v34;
  v35 = v63;
  if ( (unsigned __int64 *)v63 != &v63 )
  {
    v41 = v64;
    v42 = (__int64 *)(v63 - 16);
    if ( *(unsigned __int64 **)(v63 + 8) != &v63 || (unsigned __int64 *)v64->Count != &v63 )
      __fastfail(3u);
    v64->Count = v63;
    *(_QWORD *)(v35 + 8) = v41;
    v43 = (__int64 **)qword_1402FD748;
    *v42 = (__int64)&CmpAppHiveLoadList;
    v42[1] = (__int64)v43;
    if ( *v43 != &CmpAppHiveLoadList )
      __fastfail(3u);
    *v43 = v42;
    qword_1402FD748 = (__int64)v42;
  }
  CmpUnlockAppHiveLoadList();
  KeSetEvent(&Event, 0, 0);
  ExWaitForRundownProtectionRelease(&RunRef);
  if ( LastHive )
    CmpDereferenceHive(LastHive);
  v20 = v56;
LABEL_52:
  if ( v20 )
    ObfDereferenceObject(v20);
LABEL_54:
  if ( P )
    ExFreePoolWithTag(P, 0);
  ExReleaseRundownProtection_0(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)KeyCommon;
}
