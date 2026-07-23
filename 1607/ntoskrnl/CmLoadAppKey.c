/*
 * XREFs of CmLoadAppKey @ 0x1403FAFD0
 * Callers:
 *     CmLoadDifferencingKey @ 0x1404A37E0 (CmLoadDifferencingKey.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     ExBlockOnAddressPushLock @ 0x14009DC4C (ExBlockOnAddressPushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     CmpLoadKeyCommon @ 0x14010BB8C (CmpLoadKeyCommon.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401B4574 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpOpenHiveFile @ 0x1403F82C0 (CmpOpenHiveFile.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403FA6A4 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FA714 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1403FA774 (LOCK_HIVE_LOAD.c)
 *     CmpGetNextHive @ 0x1403FB738 (CmpGetNextHive.c)
 *     CmpDereferenceHive @ 0x1403FB910 (CmpDereferenceHive.c)
 *     CmpIsThisSameFile @ 0x1403FB928 (CmpIsThisSameFile.c)
 *     CmpUnlockAppHiveLoadList @ 0x1403FB9A0 (CmpUnlockAppHiveLoadList.c)
 *     CmpLockAppHiveLoadList @ 0x1403FB9FC (CmpLockAppHiveLoadList.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140403838 (CmpReferenceKeyControlBlockUnsafe.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     CmpCmdHiveOpen @ 0x1404A4CD8 (CmpCmdHiveOpen.c)
 *     CmpGetLastHive @ 0x1404BFFDC (CmpGetLastHive.c)
 *     CmpConstructName @ 0x14051A1D8 (CmpConstructName.c)
 */

__int64 __fastcall CmLoadAppKey(
        _QWORD *a1,
        UNICODE_STRING *a2,
        __int16 a3,
        __int64 a4,
        struct _KEVENT *a5,
        POBJECT_HANDLE_INFORMATION a6,
        char a7,
        __int64 *a8,
        __int64 *a9)
{
  unsigned __int16 *v9; // rax
  char v12; // r14
  unsigned __int16 v13; // r8
  __int64 LastHive; // r15
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // esi
  int v23; // r13d
  int v24; // eax
  int KeyCommon; // edi
  NTSTATUS v26; // eax
  _QWORD *v27; // rbx
  __int64 v28; // rbx
  UNICODE_STRING *v29; // rdi
  struct _EX_RUNDOWN_REF *v30; // rax
  __int64 v31; // rbx
  struct _EX_RUNDOWN_REF *v32; // rbx
  UNICODE_STRING *v33; // rbx
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  NTSTATUS v37; // eax
  PVOID v38; // r14
  __int64 j; // rcx
  __int64 NextHive; // rax
  __int64 v41; // rbx
  __int64 v42; // rdx
  int v43; // ecx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 *v46; // rcx
  __int64 **v47; // rax
  unsigned __int64 v48; // rax
  struct _EX_RUNDOWN_REF *v49; // rdx
  _QWORD *v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  char i; // [rsp+58h] [rbp-A9h] BYREF
  char v56; // [rsp+59h] [rbp-A8h]
  __int16 v57; // [rsp+5Ah] [rbp-A7h]
  HANDLE v58; // [rsp+5Ch] [rbp-A5h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-99h] BYREF
  PVOID v60; // [rsp+70h] [rbp-91h]
  ULONG_PTR v61; // [rsp+78h] [rbp-89h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+80h] [rbp-81h] BYREF
  int v63; // [rsp+88h] [rbp-79h]
  int v64[3]; // [rsp+8Ch] [rbp-75h] BYREF
  __int64 *v65; // [rsp+98h] [rbp-69h] BYREF
  __int64 **v66; // [rsp+A0h] [rbp-61h]
  unsigned __int64 v67; // [rsp+A8h] [rbp-59h] BYREF
  struct _EX_RUNDOWN_REF *v68; // [rsp+B0h] [rbp-51h]
  UNICODE_STRING *v69; // [rsp+B8h] [rbp-49h]
  char v70; // [rsp+C0h] [rbp-41h]
  struct _KEVENT Event; // [rsp+C8h] [rbp-39h] BYREF
  struct _EX_RUNDOWN_REF RunRef; // [rsp+E0h] [rbp-21h] BYREF
  __int64 v73; // [rsp+E8h] [rbp-19h]
  PVOID Object; // [rsp+F0h] [rbp-11h] BYREF
  PVOID v75; // [rsp+F8h] [rbp-9h] BYREF

  v9 = (unsigned __int16 *)a1[2];
  v57 = 0;
  SecurityDescriptor = 0LL;
  v12 = 0;
  v73 = 0LL;
  v13 = *v9;
  LastHive = 0LL;
  v60 = 0LL;
  if ( v13 >= 2u )
  {
    for ( LODWORD(v15) = v13 >> 1; (_DWORD)v15; *(_WORD *)v16 -= 2 )
    {
      v16 = a1[2];
      v15 = (unsigned int)(v15 - 1);
      if ( *(_WORD *)(*(_QWORD *)(v16 + 8) + 2 * v15) != 92 )
        break;
    }
  }
  if ( *(_WORD *)a1[2] < 2u )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v19, v20, v21);
    return 3221225865LL;
  }
  v22 = 50921473;
  v63 = a3 & 0x20;
  if ( (a3 & 0x20) != 0 )
    v22 = 118030337;
  if ( (a3 & 0x80u) != 0 )
    v22 |= 0x8000000u;
  if ( (a3 & 0x200) != 0 )
    v22 |= 0x10000000u;
  v23 = 0;
  if ( (a3 & 0x2000) != 0 )
  {
    v23 = 1;
    HIBYTE(v57) = 1;
  }
  if ( a3 < 0 )
    v23 |= 0x20u;
  v24 = CmpOpenHiveFile(a2, 0, &Handle, v64, 8, a6, 0LL, 0LL, &SecurityDescriptor);
  KeyCommon = v24;
  if ( v24 == -1073741772 )
  {
    LOBYTE(v57) = 1;
    v69 = a2;
    v70 = 1;
  }
  else
  {
    if ( v24 < 0 )
      goto LABEL_92;
    v26 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
    v27 = Object;
    KeyCommon = v26;
    v60 = Object;
    ZwClose(Handle);
    if ( KeyCommon < 0 )
      goto LABEL_90;
    v69 = (UNICODE_STRING *)v27[5];
    v70 = 0;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  RunRef.Count = 0LL;
  v68 = (struct _EX_RUNDOWN_REF *)&v67;
  v67 = (unsigned __int64)&v67;
  ((void (*)(void))CmpLockAppHiveLoadList)();
  v28 = CmpAppHiveLoadList;
  if ( (__int64 *)CmpAppHiveLoadList == &CmpAppHiveLoadList )
  {
LABEL_32:
    if ( *(__int64 **)qword_140322D58 != &CmpAppHiveLoadList )
      __fastfail(3u);
    v65 = &CmpAppHiveLoadList;
    v66 = (__int64 **)qword_140322D58;
    *(_QWORD *)qword_140322D58 = &v65;
    qword_140322D58 = (__int64)&v65;
    CmpUnlockAppHiveLoadList();
    goto LABEL_36;
  }
  v29 = v69;
  while ( !*(_BYTE *)(v28 + 40) )
  {
    if ( *(UNICODE_STRING **)(v28 + 32) == v29 )
      goto LABEL_28;
LABEL_31:
    v28 = *(_QWORD *)v28;
    if ( (__int64 *)v28 == &CmpAppHiveLoadList )
      goto LABEL_32;
  }
  if ( !RtlEqualUnicodeString(*(PCUNICODE_STRING *)(v28 + 32), a2, 1u) )
    goto LABEL_31;
LABEL_28:
  v30 = *(struct _EX_RUNDOWN_REF **)(v28 + 24);
  v31 = v28 + 16;
  if ( v30->Count != v31 )
    __fastfail(3u);
  v68 = v30;
  v67 = v31;
  v30->Count = (unsigned __int64)&v67;
  *(_QWORD *)(v31 + 8) = &v67;
  v32 = v68;
  ExAcquireRundownProtection(v68 + 7);
  CmpUnlockAppHiveLoadList();
  KeWaitForSingleObject(&v32[4], Executive, 0, 0, 0LL);
  ExReleaseRundownProtection(v32 + 7);
LABEL_36:
  v61 = 0LL;
  v33 = a2;
  for ( i = 0; ; i = 0 )
  {
    v56 = 1;
    v34 = CmpCmdHiveOpen(v33, v22, v23, (__int64)a6, (__int64)&i);
    v35 = 0LL;
    KeyCommon = v34;
    if ( !v34 )
    {
      KeyCommon = CmpLoadKeyCommon(v61, a1, a3, a4, 0LL, a5, a7, a9, v56, i);
      break;
    }
    if ( v34 != -1073741757 || v63 || v12 )
      break;
    if ( (_BYTE)v57 )
    {
      v36 = CmpOpenHiveFile(v33, 0, &Handle, v64, 8, a6, 0LL, 0LL, &SecurityDescriptor);
      KeyCommon = v36;
      if ( v36 < 0 )
      {
        if ( v36 == -1073741772 )
LABEL_75:
          KeyCommon = -1073741757;
        break;
      }
      v37 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v75, 0LL);
      v38 = v75;
      KeyCommon = v37;
      v60 = v75;
      ZwClose(Handle);
      if ( KeyCommon < 0 )
        break;
    }
    else
    {
      v38 = v60;
    }
    LOCK_HIVE_LOAD();
    CmpLockRegistryFreezeAware(1);
    LastHive = CmpGetLastHive();
    if ( LastHive )
    {
      while ( 2 )
      {
        while ( 1 )
        {
          LODWORD(v58) = CmpActiveAppHiveUnloadCount;
          if ( !CmpActiveAppHiveUnloadCount )
            break;
          CmpUnlockRegistry();
          UNLOCK_HIVE_LOAD();
          ExBlockOnAddressPushLock((__int64)&CmpActiveAppHiveUnloadEvent, &CmpActiveAppHiveUnloadCount, &v58, 4uLL, 0LL);
          LOCK_HIVE_LOAD();
          CmpLockRegistryFreezeAware(1);
        }
        for ( j = 0LL; ; j = v41 )
        {
          NextHive = CmpGetNextHive(j);
          v41 = NextHive;
          if ( !NextHive )
            goto LABEL_72;
          HIDWORD(v58) = *(_DWORD *)(NextHive + 6032);
          if ( HIDWORD(v58) )
            break;
          if ( *(_BYTE *)(NextHive + 6049) || !*(_QWORD *)(NextHive + 2664) )
          {
            if ( NextHive == LastHive )
            {
              CmpDereferenceHive(NextHive);
LABEL_72:
              CmpUnlockRegistry();
              UNLOCK_HIVE_LOAD();
              v33 = a2;
              goto LABEL_73;
            }
          }
          else
          {
            if ( (unsigned __int8)CmpIsThisSameFile(v38) )
            {
              v43 = *(_DWORD *)(v41 + 5360);
              if ( (v43 & 0x20) == 0 || (v43 & 0x40) != 0 )
                goto LABEL_66;
              if ( HIBYTE(v57) )
              {
                if ( (*(_DWORD *)(v41 + 144) & 0x8000) != 0
                  || CmpCheckHivePrimaryFileReadWriteAccess(SecurityDescriptor) )
                {
                  goto LABEL_69;
                }
                CmpUnlockRegistry();
                UNLOCK_HIVE_LOAD();
                CmpDereferenceHive(v41);
                KeyCommon = -1073741790;
              }
              else
              {
                if ( (*(_DWORD *)(v41 + 144) & 0x8000) != 0 )
                {
LABEL_66:
                  CmpUnlockRegistry();
                  UNLOCK_HIVE_LOAD();
                  CmpDereferenceHive(v41);
                  goto LABEL_75;
                }
LABEL_69:
                v44 = *(_QWORD *)(v41 + 4104);
                v73 = v41;
                v45 = CmpConstructName(v44, v42);
                *a8 = v45;
                if ( v45 )
                {
                  CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(v41 + 4104));
                  *a9 = *(_QWORD *)(v41 + 4104);
                  CmpUnlockRegistry();
                  UNLOCK_HIVE_LOAD();
                  KeyCommon = 0;
LABEL_71:
                  CmpDereferenceHive(v41);
                  if ( !v73 )
                    goto LABEL_72;
                }
                else
                {
                  CmpUnlockRegistry();
                  UNLOCK_HIVE_LOAD();
                  KeyCommon = -1073741670;
                  CmpDereferenceHive(v41);
                }
              }
              goto LABEL_79;
            }
            if ( v41 == LastHive )
              goto LABEL_71;
          }
        }
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
        ExBlockOnAddressPushLock(v41 + 6040, (_QWORD *)(v41 + 6032), (HANDLE *)((char *)&v58 + 4), 4uLL, 0LL);
        LOCK_HIVE_LOAD();
        CmpLockRegistryFreezeAware(1);
        CmpDereferenceHive(v41);
        if ( v41 != LastHive )
          continue;
        goto LABEL_72;
      }
    }
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
LABEL_73:
    v61 = 0LL;
    v12 = 1;
  }
LABEL_79:
  CmpLockAppHiveLoadList(v35);
  v46 = v65;
  v47 = v66;
  if ( (__int64 **)v65[1] != &v65 || *v66 != (__int64 *)&v65 )
    __fastfail(3u);
  *v66 = v65;
  v46[1] = (__int64)v47;
  v48 = v67;
  if ( (unsigned __int64 *)v67 != &v67 )
  {
    v49 = v68;
    v50 = (_QWORD *)(v67 - 16);
    if ( *(unsigned __int64 **)(v67 + 8) != &v67 || (unsigned __int64 *)v68->Count != &v67 )
      __fastfail(3u);
    v68->Count = v67;
    *(_QWORD *)(v48 + 8) = v49;
    v51 = (_QWORD *)qword_140322D58;
    if ( *(__int64 **)qword_140322D58 != &CmpAppHiveLoadList )
      __fastfail(3u);
    *v50 = &CmpAppHiveLoadList;
    v50[1] = v51;
    *v51 = v50;
    qword_140322D58 = (__int64)v50;
  }
  CmpUnlockAppHiveLoadList();
  KeSetEvent(&Event, 0, 0);
  ExWaitForRundownProtectionRelease(&RunRef);
  if ( LastHive )
    CmpDereferenceHive(LastHive);
  v27 = v60;
LABEL_90:
  if ( v27 )
    ObfDereferenceObject(v27);
LABEL_92:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  ExReleaseRundownProtection(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v52, v53, v54);
  return (unsigned int)KeyCommon;
}
