/*
 * XREFs of MiCreatePagingFile @ 0x140537A84
 * Callers:
 *     NtCreatePagingFile @ 0x140537A50 (NtCreatePagingFile.c)
 *     MiManagePartition @ 0x14062480C (MiManagePartition.c)
 * Callees:
 *     RtlLengthSid @ 0x140003E60 (RtlLengthSid.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     MiReservePageHash @ 0x14013A154 (MiReservePageHash.c)
 *     MiCheckPageFileMapping @ 0x14013A194 (MiCheckPageFileMapping.c)
 *     MiIncreaseCommitLimits @ 0x14013A344 (MiIncreaseCommitLimits.c)
 *     ZwSetInformationFile @ 0x140150B00 (ZwSetInformationFile.c)
 *     ZwSetSecurityObject @ 0x1401537E0 (ZwSetSecurityObject.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     MiReduceCommitLimits @ 0x1401DBF84 (MiReduceCommitLimits.c)
 *     MiCheckAndUpdatePagingFileMinimum @ 0x1401DC4F0 (MiCheckAndUpdatePagingFileMinimum.c)
 *     MiExtendPagingFileMaximum @ 0x1401DC544 (MiExtendPagingFileMaximum.c)
 *     MiIssuePageExtendRequest @ 0x1401DCCB8 (MiIssuePageExtendRequest.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlAddAccessAllowedAce @ 0x1403C01BC (RtlAddAccessAllowedAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     RtlCreateAcl @ 0x14043549C (RtlCreateAcl.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 *     IoCreateFile @ 0x1404B282C (IoCreateFile.c)
 *     IoQueryVolumeInformation @ 0x1404E81E0 (IoQueryVolumeInformation.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14050C180 (FsRtlIssueFileNotificationFsctl.c)
 *     MiInsertPageFileInList @ 0x140538300 (MiInsertPageFileInList.c)
 *     MiCreatePagefile @ 0x1405384C0 (MiCreatePagefile.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x1405387B0 (MiCreatePageFileSpaceBitmaps.c)
 *     MiZeroPageFileFirstPage @ 0x140538820 (MiZeroPageFileFirstPage.c)
 *     IoInitializeCrashDump @ 0x1405388F4 (IoInitializeCrashDump.c)
 *     PiPagePathSetState @ 0x1405493FC (PiPagePathSetState.c)
 *     SmpSystemStoreCreate @ 0x14054DEE0 (SmpSystemStoreCreate.c)
 *     MiDeletePagefile @ 0x14062556C (MiDeletePagefile.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCreatePagingFile(
        _OWORD *a1,
        __int64 *a2,
        __int64 *a3,
        KPROCESSOR_MODE a4,
        int a5,
        unsigned __int64 a6)
{
  unsigned __int64 v6; // rbp
  __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned __int16 v13; // cx
  PVOID PoolWithTag; // rax
  PVOID v15; // r14
  unsigned __int16 v16; // cx
  ULONG64 v17; // rdx
  ULONG64 v18; // r8
  __int64 v19; // r14
  int SecurityDescriptor; // r15d
  ULONG v21; // esi
  ULONG v22; // esi
  ACL *v23; // rax
  ACL *v24; // rsi
  char v25; // si
  struct _FILE_OBJECT *v26; // rdi
  unsigned __int64 DeviceType; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 Pagefile; // rax
  __int64 v31; // rbx
  int inserted; // edi
  __int64 v34; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v36; // r12
  __int64 v37; // rax
  unsigned __int64 v38; // r8
  __int64 v39; // rbx
  unsigned int v40; // edx
  __int64 v41; // r9
  __int64 v42; // r10
  __int64 v43; // rbx
  __int64 v44; // r14
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rbx
  void *v47; // rcx
  void *v48; // rcx
  ULONG_PTR v49; // rax
  unsigned __int64 PageFileSpaceBitmaps; // rax
  int v51; // eax
  _BYTE v52[272]; // [rsp+1C0h] [rbp+1C0h] BYREF

  v6 = (unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
  if ( (int *)a6 != MiSystemPartition && a5 )
    return 3221225714LL;
  if ( (a5 & 0x1FFFFFF) != 0 )
    return 3221225714LL;
  *(_DWORD *)v6 = a5 & 0x80000000;
  if ( a5 < 0 && (a5 & 0x60000000) != 0 )
    return 3221225714LL;
  if ( a4 )
  {
    if ( !SeSinglePrivilegeCheck(SeCreatePagefilePrivilege, a4) || PsIsCurrentThreadInServerSilo() )
      return 3221225569LL;
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = *a2;
    *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v11;
  }
  else
  {
    v11 = *a2;
    *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *a2;
  }
  if ( (unsigned __int64)v11 > 0xFFFFFFFE000LL || v11 < 0x100000 )
    return 3221225712LL;
  v12 = *a3;
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v12;
  if ( (unsigned __int64)v12 > 0xFFFFFFFE000LL || v11 > v12 )
    return 3221225713LL;
  *(_OWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *a1;
  v13 = *(_WORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  *(_WORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A) = v13;
  if ( (unsigned __int16)(v13 - 1) > 0xFFu )
    return 3221225523LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x20206D4Du);
  v15 = PoolWithTag;
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( a4 )
  {
    v16 = *(_WORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    if ( v16 )
    {
      v17 = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      v18 = v17 + v16;
      if ( v18 > MmUserProbeAddress || v18 < v17 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v16 = *(_WORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      }
    }
    memmove(PoolWithTag, *(const void **)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20), v16);
  }
  else
  {
    memmove(
      PoolWithTag,
      *(const void **)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
      *(unsigned __int16 *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
  }
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v15;
  v19 = 0LL;
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  SecurityDescriptor = RtlCreateSecurityDescriptor((PSECURITY_DESCRIPTOR)(v6 + 224), 1u);
  if ( SecurityDescriptor < 0 )
    goto LABEL_89;
  v21 = RtlLengthSid(SeAliasAdminsSid);
  v22 = RtlLengthSid(SeLocalSystemSid) + 32 + v21;
  v23 = (ACL *)ExAllocatePoolWithTag(PagedPool, v22, 0x6C636144u);
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v23;
  if ( !v23 )
  {
    SecurityDescriptor = -1073741670;
    goto LABEL_89;
  }
  SecurityDescriptor = RtlCreateAcl(v23, v22, 2u);
  if ( SecurityDescriptor < 0
    || (v24 = *(ACL **)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
        SecurityDescriptor = RtlAddAccessAllowedAce(v24, 2u, 0x1F01FFu, SeAliasAdminsSid),
        SecurityDescriptor < 0)
    || (SecurityDescriptor = RtlAddAccessAllowedAce(v24, 2u, 0x1F01FFu, SeLocalSystemSid), SecurityDescriptor < 0)
    || (SecurityDescriptor = RtlSetDaclSecurityDescriptor((PSECURITY_DESCRIPTOR)(v6 + 224), 1u, v24, 0),
        SecurityDescriptor < 0) )
  {
LABEL_89:
    v48 = *(void **)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( v48 )
      ObCloseHandle(v48, 0);
    goto LABEL_91;
  }
  if ( *(_DWORD *)v6 )
  {
    v25 = 3;
  }
  else
  {
    v25 = 0;
    if ( (a5 & 0x20000000) != 0 )
      v25 = 2;
  }
  *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = 48;
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = 0LL;
  *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = 576;
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = ((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                      + 24;
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = ((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                      + 224;
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = 0LL;
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = (v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( IoCreateFile(
         (PHANDLE)(v6 + 8),
         0x140003u,
         (POBJECT_ATTRIBUTES)(v6 + 160),
         (PIO_STATUS_BLOCK)(v6 + 72),
         (PLARGE_INTEGER)(v6 + 48),
         6u,
         2u,
         0,
         0x9008u,
         0LL,
         0,
         CreateFileTypeNone,
         0LL,
         0x112u) >= 0 )
  {
    if ( *(int *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) < 0
      || (SecurityDescriptor = ZwSetSecurityObject(
                                 *(HANDLE *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                                 4u,
                                 (PSECURITY_DESCRIPTOR)(v6 + 224)),
          SecurityDescriptor >= 0) )
    {
      ExFreePoolWithTag(*(PVOID *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28), 0);
      *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
      SecurityDescriptor = *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
      if ( SecurityDescriptor >= 0 )
      {
        SecurityDescriptor = ZwSetInformationFile(
                               *(HANDLE *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                               (PIO_STATUS_BLOCK)(v6 + 72),
                               (PVOID)(v6 + 120),
                               8u,
                               FileEndOfFileInformation);
        if ( SecurityDescriptor >= 0 )
        {
          SecurityDescriptor = *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
          if ( SecurityDescriptor >= 0 )
          {
            SecurityDescriptor = ObReferenceObjectByHandle(
                                   *(HANDLE *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                                   3u,
                                   (POBJECT_TYPE)IoFileObjectType,
                                   0,
                                   (PVOID *)(v6 + 128),
                                   0LL);
            v26 = *(struct _FILE_OBJECT **)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
            *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v26;
            if ( SecurityDescriptor >= 0 )
            {
              DeviceType = IoGetRelatedDeviceObject(v26)->DeviceType;
              if ( (unsigned int)DeviceType <= 0x36 && (v28 = 0x60000000100100LL, _bittest64(&v28, DeviceType)) )
              {
                SecurityDescriptor = MiCheckPageFileMapping((__int64)v26);
                if ( SecurityDescriptor >= 0 )
                {
                  SecurityDescriptor = IoQueryVolumeInformation(
                                         v26,
                                         FileFsDeviceInformation,
                                         8u,
                                         (PVOID)(v6 + 112),
                                         (PULONG)(v6 + 152));
                  if ( SecurityDescriptor >= 0 )
                  {
                    if ( (*(_BYTE *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x74) & 4) != 0 )
                    {
                      SecurityDescriptor = -1073741468;
                    }
                    else
                    {
                      SecurityDescriptor = PiPagePathSetState(v26);
                      if ( SecurityDescriptor >= 0 )
                      {
                        FsRtlIssueFileNotificationFsctl(v26, v29, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_PAGE_FILE);
                        if ( (int *)a6 != MiSystemPartition
                          || (SecurityDescriptor = MiZeroPageFileFirstPage(v26), SecurityDescriptor >= 0) )
                        {
                          Pagefile = MiCreatePagefile(
                                       a6,
                                       (_DWORD)v26,
                                       *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                                       *(__int64 *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) >> 12,
                                       v12 >> 12,
                                       v6 + 24,
                                       a5,
                                       1);
                          v31 = Pagefile;
                          if ( Pagefile )
                          {
                            inserted = MiInsertPageFileInList(Pagefile);
                            if ( inserted < 0 )
                            {
                              MiDeletePagefile((PVOID)v31);
                              return (unsigned int)inserted;
                            }
                            else
                            {
                              if ( (int *)a6 == MiSystemPartition )
                              {
                                if ( (*(_BYTE *)(v31 + 204) & 0xF) == 0 && (dword_140304FB8 & 3) != 0 )
                                  SmpSystemStoreCreate();
                                if ( !byte_1402FEC40 && (*(_BYTE *)(v31 + 204) & 0x10) == 0 )
                                {
                                  *(_OWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = *(_OWORD *)(v31 + 96);
                                  byte_1402FEC40 = IoInitializeCrashDump(*(HANDLE *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                   + 8));
                                }
                              }
                              return 0LL;
                            }
                          }
                          return 3221225626LL;
                        }
                        PiPagePathSetState(v26);
                      }
                    }
                  }
                }
              }
              else
              {
                SecurityDescriptor = -1073741489;
              }
              goto LABEL_87;
            }
          }
        }
      }
    }
    goto LABEL_89;
  }
  SecurityDescriptor = IoCreateFile(
                         (PHANDLE)(v6 + 8),
                         0x100002u,
                         (POBJECT_ATTRIBUTES)(v6 + 160),
                         (PIO_STATUS_BLOCK)(v6 + 72),
                         (PLARGE_INTEGER)(v6 + 48),
                         6u,
                         3u,
                         1u,
                         0x8008u,
                         0LL,
                         0,
                         CreateFileTypeNone,
                         0LL,
                         0x112u);
  if ( SecurityDescriptor >= 0 )
  {
    SecurityDescriptor = ObReferenceObjectByHandle(
                           *(HANDLE *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                           3u,
                           (POBJECT_TYPE)IoFileObjectType,
                           0,
                           (PVOID *)(v6 + 104),
                           0LL);
    *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                    + 0x68);
    if ( SecurityDescriptor < 0 )
      goto LABEL_89;
    v34 = 0LL;
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = CurrentThread;
    --CurrentThread->SpecialApcDisable;
    v36 = (unsigned __int64 *)(a6 + 960);
    v37 = KeAbPreAcquire(a6 + 960, 0LL, 0LL);
    v39 = v37;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a6 + 960), 0LL) )
      ExfAcquirePushLockExclusiveEx(v36, v37, (ULONG_PTR)v36);
    if ( v39 )
      *(_BYTE *)(v39 + 26) |= 1u;
    v40 = *(_DWORD *)(a6 + 5720);
    v41 = 0LL;
    *(_DWORD *)v6 = 0;
    if ( v40 )
    {
      v42 = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
      while ( 1 )
      {
        v38 = *(_QWORD *)(a6 + 8 * v41 + 5728);
        if ( (*(_BYTE *)(v38 + 204) & 0x40) == 0 && *(_QWORD *)(*(_QWORD *)(v38 + 56) + 40LL) == *(_QWORD *)(v42 + 40) )
          break;
        v41 = (unsigned int)(v41 + 1);
        *(_DWORD *)v6 = v41;
        if ( (unsigned int)v41 >= v40 )
          goto LABEL_75;
      }
      if ( (((unsigned __int8)~*(_BYTE *)(v38 + 204) >> 4) & 1) != ((v25 & 1) == 0) )
      {
        SecurityDescriptor = -1073741811;
        goto LABEL_83;
      }
      v34 = *(_QWORD *)(a6 + 8 * v41 + 5728);
    }
LABEL_75:
    if ( !v34 )
    {
      SecurityDescriptor = -1073741275;
      goto LABEL_83;
    }
    v43 = *(__int64 *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) >> 12;
    v44 = *(__int64 *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) >> 12;
    *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = (unsigned int)v44;
    if ( *(_QWORD *)(v34 + 16) > (unsigned __int64)(unsigned int)v44 )
    {
      SecurityDescriptor = -1073741584;
    }
    else
    {
      v45 = *(_QWORD *)(v34 + 8);
      if ( (unsigned int)v43 < v45 )
      {
        SecurityDescriptor = -1073741583;
      }
      else
      {
        if ( (unsigned int)v43 <= v45 )
        {
LABEL_79:
          v46 = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88);
          if ( v46 > *(_QWORD *)(v34 + 16) )
          {
            while ( v46 <= *(_QWORD *)v34 )
            {
              if ( (unsigned int)MiCheckAndUpdatePagingFileMinimum((unsigned __int64 *)v34, v44) == 1 )
                goto LABEL_80;
            }
            MiIssuePageExtendRequest(a6, v46 - *(_QWORD *)v34, *(_DWORD *)v6, 1);
            v51 = SecurityDescriptor;
            if ( *(_QWORD *)(v34 + 16) < v46 )
              v51 = -1073741670;
            SecurityDescriptor = v51;
          }
LABEL_80:
          if ( (v25 & 2) != 0 )
            *(_WORD *)(v34 + 204) |= 0x80u;
          goto LABEL_82;
        }
        if ( (*(_BYTE *)(v34 + 204) & 0x10) == 0 )
        {
          *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = (unsigned int)v43 - v45;
          if ( !(unsigned int)MiIncreaseCommitLimits(a6, 0LL, (unsigned int)v43 - v45, 0, 0LL) )
          {
            v19 = 0LL;
            SecurityDescriptor = -1073741583;
            goto LABEL_83;
          }
        }
        *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
        if ( !*(_QWORD *)(v34 + 216)
          || (v49 = MiReservePageHash(v43, v45, v38),
              (*(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v49) != 0LL) )
        {
          PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps((unsigned int)v43);
          if ( PageFileSpaceBitmaps )
          {
            MiExtendPagingFileMaximum(
              (_QWORD *)v34,
              PageFileSpaceBitmaps,
              *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60));
            if ( (unsigned __int64)(*(_QWORD *)(a6 + 5960) + 100LL) > *(_QWORD *)(a6 + 6120)
              && (unsigned int)MiChargeCommit(a6, 0xC8uLL, 0LL) == 1 )
            {
              MiReturnCommit(a6, 0xC8uLL);
            }
            goto LABEL_79;
          }
        }
        SecurityDescriptor = -1073741670;
      }
    }
LABEL_82:
    v19 = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
LABEL_83:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v36, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v36);
    KeAbPostRelease((ULONG_PTR)v36);
    KiLeaveGuardedRegionUnsafe(*(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90));
    if ( v19 )
      MiReduceCommitLimits((_QWORD *)a6, 0LL, v19);
LABEL_87:
    v47 = *(void **)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    if ( v47 )
      ObfDereferenceObject(v47);
    goto LABEL_89;
  }
LABEL_91:
  if ( *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) )
    ExFreePoolWithTag(*(PVOID *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28), 0);
  ExFreePoolWithTag(*(PVOID *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38), 0);
  return (unsigned int)SecurityDescriptor;
}
