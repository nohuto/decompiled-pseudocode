/*
 * XREFs of CmLoadAppKey @ 0x1404471C4
 * Callers:
 *     CmLoadKeyHelper @ 0x1401DE79C (CmLoadKeyHelper.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     ExBlockOnAddressPushLock @ 0x1400D2B14 (ExBlockOnAddressPushLock.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401DFAC8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     UNLOCK_HIVE_LOAD @ 0x140446020 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x14044620C (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x14044626C (LOCK_HIVE_LOAD.c)
 *     CmpGetNextHive @ 0x140447A6C (CmpGetNextHive.c)
 *     CmpDereferenceHive @ 0x140447BD4 (CmpDereferenceHive.c)
 *     CmpIsThisSameFile @ 0x140447BEC (CmpIsThisSameFile.c)
 *     CmpUnlockAppHiveLoadList @ 0x140447C64 (CmpUnlockAppHiveLoadList.c)
 *     CmpLockAppHiveLoadList @ 0x140447CD8 (CmpLockAppHiveLoadList.c)
 *     CmpCmdHiveOpen @ 0x14044A564 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x14044B07C (CmpOpenHiveFile.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14044C1E0 (CmpReferenceKeyControlBlockUnsafe.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     CmpConstructName @ 0x1404C5EC0 (CmpConstructName.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpGetLastHive @ 0x140548294 (CmpGetLastHive.c)
 */

__int64 __fastcall CmLoadAppKey(
        _QWORD *a1,
        const UNICODE_STRING *a2,
        __int16 a3,
        __int64 a4,
        __int64 a5,
        POBJECT_HANDLE_INFORMATION a6,
        __int64 *a7,
        _QWORD *a8)
{
  unsigned __int16 *v8; // rax
  char v11; // si
  unsigned __int16 v12; // r8
  __int64 LastHive; // r12
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v18; // rtt
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  int v21; // r14d
  int v22; // r13d
  int v23; // eax
  int KeyCommon; // edi
  NTSTATUS v25; // eax
  _QWORD *v26; // rbx
  __int64 v27; // rbx
  const UNICODE_STRING *v28; // rdi
  __int64 **v29; // rax
  __int64 v30; // rbx
  struct _EX_RUNDOWN_REF *v31; // rdi
  struct _EX_RUNDOWN_REF *v32; // rbx
  unsigned __int64 v33; // rtt
  unsigned __int64 v34; // rtt
  const UNICODE_STRING *v35; // rbx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // r13
  int v42; // eax
  NTSTATUS v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 i; // rcx
  __int64 NextHive; // rax
  __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // ecx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 *v74; // rcx
  __int64 **v75; // rax
  __int64 v76; // rax
  struct _EX_RUNDOWN_REF *v77; // rdx
  __int64 *v78; // rcx
  __int64 **v79; // rax
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rtt
  struct _KTHREAD *v82; // rcx
  __int16 v83; // ax
  __int16 v84; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v85; // [rsp+5Ah] [rbp-AEh]
  _QWORD *v86; // [rsp+60h] [rbp-A8h]
  __int64 v87; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v88; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+80h] [rbp-88h] BYREF
  ULONG_PTR v91; // [rsp+88h] [rbp-80h]
  __int64 *v92; // [rsp+98h] [rbp-70h] BYREF
  __int64 **v93; // [rsp+A0h] [rbp-68h]
  __int64 v94; // [rsp+A8h] [rbp-60h] BYREF
  struct _EX_RUNDOWN_REF *v95; // [rsp+B0h] [rbp-58h]
  const UNICODE_STRING *v96; // [rsp+B8h] [rbp-50h]
  char v97; // [rsp+C0h] [rbp-48h]
  struct _KEVENT Event; // [rsp+C8h] [rbp-40h] BYREF
  signed __int64 v99; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v100; // [rsp+E8h] [rbp-20h]
  int v101; // [rsp+F0h] [rbp-18h]
  PVOID Object; // [rsp+F8h] [rbp-10h] BYREF
  PVOID v103; // [rsp+108h] [rbp+0h] BYREF

  v8 = (unsigned __int16 *)a1[2];
  v85 = 0;
  SecurityDescriptor = 0LL;
  v11 = 0;
  v100 = 0LL;
  v12 = *v8;
  v86 = 0LL;
  LastHive = 0LL;
  if ( v12 >= 2u )
  {
    for ( LODWORD(v14) = v12 >> 1; (_DWORD)v14; *(_WORD *)v15 -= 2 )
    {
      v15 = a1[2];
      v14 = (unsigned int)(v14 - 1);
      if ( *(_WORD *)(*(_QWORD *)(v15 + 8) + 2 * v14) != 92 )
        break;
    }
  }
  if ( *(_WORD *)a1[2] < 2u )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v18 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v18 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
    && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v19 = KeGetCurrentThread();
    v20 = v19->KernelApcDisable + 1;
    v19->KernelApcDisable = v20;
    if ( !v20
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
      && !v19->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221225865LL;
  }
  v21 = 50921473;
  v101 = a3 & 0x20;
  if ( (a3 & 0x20) != 0 )
    v21 = 118030337;
  if ( (a3 & 0x80u) != 0 )
    v21 |= 0x8000000u;
  if ( (a3 & 0x200) != 0 )
    v21 |= 0x10000000u;
  HIDWORD(v87) = 0;
  v22 = 0;
  if ( (a3 & 0x2000) != 0 )
  {
    v22 = 1;
    HIDWORD(v87) = 1;
    HIBYTE(v85) = 1;
  }
  if ( a3 < 0 )
  {
    v22 |= 0x20u;
    HIDWORD(v87) = v22;
  }
  v23 = CmpOpenHiveFile(a2, 8, (__int64)a6, 0LL, 0LL, (__int64)&SecurityDescriptor);
  KeyCommon = v23;
  if ( v23 == -1073741772 )
  {
    v96 = a2;
    LOBYTE(v85) = 1;
    v97 = 1;
  }
  else
  {
    if ( v23 < 0 )
      goto LABEL_104;
    v25 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
    v26 = Object;
    KeyCommon = v25;
    v86 = Object;
    ZwClose(Handle);
    if ( KeyCommon < 0 )
      goto LABEL_102;
    v96 = (const UNICODE_STRING *)v26[5];
    v97 = 0;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v99 = 0LL;
  v95 = (struct _EX_RUNDOWN_REF *)&v94;
  v94 = (__int64)&v94;
  CmpLockAppHiveLoadList();
  v27 = CmpAppHiveLoadList;
  if ( (__int64 *)CmpAppHiveLoadList != &CmpAppHiveLoadList )
  {
    v28 = v96;
    do
    {
      if ( *(_BYTE *)(v27 + 40) )
      {
        if ( RtlEqualUnicodeString(*(PCUNICODE_STRING *)(v27 + 32), a2, 1u) )
        {
LABEL_33:
          v29 = *(__int64 ***)(v27 + 24);
          v30 = v27 + 16;
          v94 = v30;
          v95 = (struct _EX_RUNDOWN_REF *)v29;
          if ( *v29 != (__int64 *)v30 )
            __fastfail(3u);
          *v29 = &v94;
          *(_QWORD *)(v30 + 8) = &v94;
          v31 = v95;
          v32 = v95 + 7;
          _m_prefetchw(&v95[7]);
          v33 = v32->Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v33 != _InterlockedCompareExchange64((volatile signed __int64 *)v32, v33 + 2, v33) )
            ExfAcquireRundownProtection(v32);
          CmpUnlockAppHiveLoadList();
          KeWaitForSingleObject(&v31[4], Executive, 0, 0, 0LL);
          _m_prefetchw(v32);
          v34 = v32->Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v34 != _InterlockedCompareExchange64((volatile signed __int64 *)v32, v34 - 2, v34) )
            ExfReleaseRundownProtection(v32);
          goto LABEL_44;
        }
      }
      else if ( *(const UNICODE_STRING **)(v27 + 32) == v28 )
      {
        goto LABEL_33;
      }
      v27 = *(_QWORD *)v27;
    }
    while ( (__int64 *)v27 != &CmpAppHiveLoadList );
  }
  v92 = &CmpAppHiveLoadList;
  v93 = (__int64 **)qword_14034DBB8;
  if ( *(__int64 **)qword_14034DBB8 != &CmpAppHiveLoadList )
    __fastfail(3u);
  *(_QWORD *)qword_14034DBB8 = &v92;
  qword_14034DBB8 = (__int64)&v92;
  CmpUnlockAppHiveLoadList();
LABEL_44:
  v35 = a2;
  v91 = 0LL;
  v84 = 256;
  v36 = CmpCmdHiveOpen(a2, v21, v22, (__int64)a6, (__int64)&v84);
  v41 = a8;
  while ( 1 )
  {
    KeyCommon = v36;
    if ( !v36 )
    {
      KeyCommon = CmpLoadKeyCommon(v91, a1, a3, a4, a5, v41, SHIBYTE(v84), v84);
      goto LABEL_87;
    }
    if ( v36 != -1073741757 || v101 || v11 )
    {
LABEL_87:
      v26 = v86;
      goto LABEL_88;
    }
    if ( (_BYTE)v85 )
      break;
LABEL_53:
    LOCK_HIVE_LOAD(v38, v37, v39, v40);
    CmpLockRegistryFreezeAware(1);
    LastHive = CmpGetLastHive();
    if ( LastHive )
    {
      while ( 2 )
      {
        LODWORD(v87) = CmpActiveAppHiveUnloadCount;
        if ( CmpActiveAppHiveUnloadCount )
        {
          do
          {
            CmpUnlockRegistry();
            UNLOCK_HIVE_LOAD(v47, v46);
            ExBlockOnAddressPushLock(
              (__int64)&CmpActiveAppHiveUnloadEvent,
              &CmpActiveAppHiveUnloadCount,
              &v87,
              4uLL,
              0LL);
            LOCK_HIVE_LOAD(v49, v48, v50, v51);
            CmpLockRegistryFreezeAware(1);
            LODWORD(v87) = CmpActiveAppHiveUnloadCount;
          }
          while ( CmpActiveAppHiveUnloadCount );
          v41 = a8;
        }
        for ( i = 0LL; ; i = v54 )
        {
          NextHive = CmpGetNextHive(i);
          v54 = NextHive;
          if ( !NextHive )
            goto LABEL_80;
          LODWORD(v88) = *(_DWORD *)(NextHive + 6032);
          if ( (_DWORD)v88 )
            break;
          if ( *(_BYTE *)(NextHive + 6049) || !*(_QWORD *)(NextHive + 2664) )
          {
            if ( NextHive == LastHive )
            {
              CmpDereferenceHive(NextHive);
LABEL_80:
              CmpUnlockRegistry();
              UNLOCK_HIVE_LOAD(v69, v68);
              v35 = a2;
              goto LABEL_81;
            }
          }
          else
          {
            if ( (unsigned __int8)CmpIsThisSameFile(v86) )
            {
              v61 = *(_DWORD *)(v54 + 5360);
              if ( (v61 & 0x20) == 0 || (v61 & 0x40) != 0 )
                goto LABEL_74;
              if ( HIBYTE(v85) )
              {
                if ( (*(_DWORD *)(v54 + 144) & 0x8000) != 0
                  || CmpCheckHivePrimaryFileReadWriteAccess(SecurityDescriptor) )
                {
                  goto LABEL_77;
                }
                CmpUnlockRegistry();
                UNLOCK_HIVE_LOAD(v71, v70);
                CmpDereferenceHive(v54);
                KeyCommon = -1073741790;
              }
              else
              {
                if ( (*(_DWORD *)(v54 + 144) & 0x8000) != 0 )
                {
LABEL_74:
                  CmpUnlockRegistry();
                  UNLOCK_HIVE_LOAD(v63, v62);
                  CmpDereferenceHive(v54);
                  KeyCommon = -1073741757;
                  goto LABEL_87;
                }
LABEL_77:
                v64 = *(_QWORD *)(v54 + 4104);
                v100 = v54;
                v65 = CmpConstructName(v64);
                *a7 = v65;
                if ( v65 )
                {
                  CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(v54 + 4104));
                  *v41 = *(_QWORD *)(v54 + 4104);
                  CmpUnlockRegistry();
                  UNLOCK_HIVE_LOAD(v67, v66);
                  KeyCommon = 0;
LABEL_79:
                  CmpDereferenceHive(v54);
                  if ( !v100 )
                    goto LABEL_80;
                }
                else
                {
                  CmpUnlockRegistry();
                  UNLOCK_HIVE_LOAD(v73, v72);
                  KeyCommon = -1073741670;
                  CmpDereferenceHive(v54);
                }
              }
              goto LABEL_87;
            }
            if ( v54 == LastHive )
              goto LABEL_79;
          }
        }
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD(v56, v55);
        ExBlockOnAddressPushLock(v54 + 6040, (_QWORD *)(v54 + 6032), &v88, 4uLL, 0LL);
        LOCK_HIVE_LOAD(v58, v57, v59, v60);
        CmpLockRegistryFreezeAware(1);
        CmpDereferenceHive(v54);
        if ( v54 != LastHive )
          continue;
        goto LABEL_80;
      }
    }
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD(v45, v44);
LABEL_81:
    v91 = 0LL;
    v11 = 1;
    v84 = 256;
    v36 = CmpCmdHiveOpen(v35, v21, SBYTE4(v87), (__int64)a6, (__int64)&v84);
  }
  v42 = CmpOpenHiveFile(v35, 8, (__int64)a6, 0LL, 0LL, (__int64)&SecurityDescriptor);
  KeyCommon = v42;
  if ( v42 >= 0 )
  {
    v43 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v103, 0LL);
    v26 = v103;
    KeyCommon = v43;
    v86 = v103;
    ZwClose(Handle);
    if ( KeyCommon < 0 )
      goto LABEL_88;
    v35 = a2;
    goto LABEL_53;
  }
  v26 = v86;
  if ( v42 == -1073741772 )
    KeyCommon = -1073741757;
LABEL_88:
  CmpLockAppHiveLoadList();
  v74 = v92;
  v75 = v93;
  if ( (__int64 **)v92[1] != &v92 || *v93 != (__int64 *)&v92 )
    __fastfail(3u);
  *v93 = v92;
  v74[1] = (__int64)v75;
  v76 = v94;
  if ( (__int64 *)v94 != &v94 )
  {
    v77 = v95;
    v78 = (__int64 *)(v94 - 16);
    if ( *(__int64 **)(v94 + 8) != &v94 || (__int64 *)v95->Count != &v94 )
      __fastfail(3u);
    v95->Count = v94;
    *(_QWORD *)(v76 + 8) = v77;
    v79 = (__int64 **)qword_14034DBB8;
    *v78 = (__int64)&CmpAppHiveLoadList;
    v78[1] = (__int64)v79;
    if ( *v79 != &CmpAppHiveLoadList )
      __fastfail(3u);
    *v79 = v78;
    qword_14034DBB8 = (__int64)v78;
  }
  CmpUnlockAppHiveLoadList();
  KeSetEvent(&Event, 0, 0);
  v80 = _InterlockedCompareExchange64(&v99, 1LL, 0LL);
  if ( v80 >= 2 )
    ExfWaitForRundownProtectionRelease(&v99, v80);
  if ( LastHive )
    CmpDereferenceHive(LastHive);
LABEL_102:
  if ( v26 )
    ObfDereferenceObject(v26);
LABEL_104:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  _m_prefetchw(&CmpShutdownRundown);
  v81 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v81 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    ExfReleaseRundownProtection(&CmpShutdownRundown);
  v82 = KeGetCurrentThread();
  v83 = v82->KernelApcDisable + 1;
  v82->KernelApcDisable = v83;
  if ( !v83
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v82->ApcState.ApcListHead[0].Flink != &v82->152
    && !v82->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)KeyCommon;
}
