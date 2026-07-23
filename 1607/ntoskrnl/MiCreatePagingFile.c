/*
 * XREFs of MiCreatePagingFile @ 0x140568764
 * Callers:
 *     NtCreatePagingFile @ 0x140568730 (NtCreatePagingFile.c)
 *     MiManagePartition @ 0x140660A88 (MiManagePartition.c)
 * Callees:
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiIncreaseCommitLimits @ 0x140142F68 (MiIncreaseCommitLimits.c)
 *     MiReservePageHash @ 0x140143360 (MiReservePageHash.c)
 *     MiCheckPageFileMapping @ 0x1401433C0 (MiCheckPageFileMapping.c)
 *     ZwSetInformationFile @ 0x14015A6D0 (ZwSetInformationFile.c)
 *     ZwSetSecurityObject @ 0x14015D470 (ZwSetSecurityObject.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     MiReduceCommitLimits @ 0x1401ECF74 (MiReduceCommitLimits.c)
 *     MiCheckAndUpdatePagingFileMinimum @ 0x1401EE108 (MiCheckAndUpdatePagingFileMinimum.c)
 *     MiExtendPagingFileMaximum @ 0x1401EE15C (MiExtendPagingFileMaximum.c)
 *     MiIssuePageExtendRequest @ 0x1401EE7B4 (MiIssuePageExtendRequest.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     RtlAddAccessAllowedAce @ 0x14048DBDC (RtlAddAccessAllowedAce.c)
 *     IoCreateFile @ 0x1404BC4D0 (IoCreateFile.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     IoQueryVolumeInformation @ 0x14052BB24 (IoQueryVolumeInformation.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140547288 (FsRtlIssueFileNotificationFsctl.c)
 *     MiInsertPageFileInList @ 0x1405690A4 (MiInsertPageFileInList.c)
 *     MiCreatePagefile @ 0x140569278 (MiCreatePagefile.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x140569560 (MiCreatePageFileSpaceBitmaps.c)
 *     MiZeroPageFileFirstPage @ 0x1405695D0 (MiZeroPageFileFirstPage.c)
 *     IoInitializeCrashDump @ 0x1405696AC (IoInitializeCrashDump.c)
 *     SmpSystemStoreCreate @ 0x14057BA6C (SmpSystemStoreCreate.c)
 *     PiPagePathSetState @ 0x14057D7D0 (PiPagePathSetState.c)
 *     MiDeletePagefile @ 0x14065AEEC (MiDeletePagefile.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCreatePagingFile(
        _OWORD *a1,
        LARGE_INTEGER *a2,
        unsigned __int64 *a3,
        KPROCESSOR_MODE a4,
        int a5,
        __int64 a6)
{
  __int64 QuadPart; // rdi
  unsigned __int64 v11; // rbx
  PVOID PoolWithTag; // rax
  void *v13; // r15
  unsigned __int16 v14; // cx
  char *v15; // r8
  __int64 v16; // r14
  int Status; // r15d
  ULONG v18; // esi
  ULONG v19; // esi
  ACL *v20; // rax
  char v21; // si
  struct _FILE_OBJECT *v22; // rdi
  unsigned __int64 DeviceType; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 Pagefile; // rax
  __int64 v27; // rbx
  int inserted; // edi
  __int64 v30; // r13
  unsigned __int64 *v31; // r12
  _BYTE *v32; // rax
  _BYTE *v33; // rbx
  __int64 v34; // r8
  unsigned int v35; // edx
  __int64 v36; // r9
  __int64 v37; // r8
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // r14
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rbx
  int v42; // eax
  unsigned __int64 PageFileSpaceBitmaps; // rax
  int v44; // eax
  unsigned int v45; // [rsp+70h] [rbp-128h]
  HANDLE FileHandle; // [rsp+78h] [rbp-120h] BYREF
  __int64 v47; // [rsp+80h] [rbp-118h]
  void *Src[2]; // [rsp+88h] [rbp-110h] BYREF
  LARGE_INTEGER AllocationSize; // [rsp+98h] [rbp-100h] BYREF
  PACL Acl; // [rsp+A0h] [rbp-F8h]
  PVOID v51; // [rsp+A8h] [rbp-F0h] BYREF
  unsigned __int64 v52; // [rsp+B0h] [rbp-E8h]
  ULONG_PTR v53; // [rsp+B8h] [rbp-E0h]
  PVOID v54; // [rsp+C0h] [rbp-D8h]
  PVOID P; // [rsp+C8h] [rbp-D0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-C8h] BYREF
  ULONG ReturnedLength; // [rsp+E0h] [rbp-B8h] BYREF
  unsigned __int64 FileInformation; // [rsp+E8h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+F0h] [rbp-A8h] BYREF
  _BYTE FsInformation[8]; // [rsp+F8h] [rbp-A0h] BYREF
  unsigned __int64 v61; // [rsp+100h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp-90h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+110h] [rbp-88h] BYREF
  __int128 v64; // [rsp+140h] [rbp-58h]
  _BYTE SecurityDescriptor[48]; // [rsp+150h] [rbp-48h] BYREF

  Acl = 0LL;
  if ( (int *)a6 != MiSystemPartition && a5 || (a5 & 0x1FFFFFF) != 0 || a5 < 0 && (a5 & 0x60000000) != 0 )
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
    QuadPart = a2->QuadPart;
    AllocationSize.QuadPart = QuadPart;
  }
  else
  {
    QuadPart = a2->QuadPart;
    AllocationSize = *a2;
  }
  if ( (unsigned __int64)QuadPart > 0xFFFFFFFE000LL || QuadPart < 0x100000 )
    return 3221225712LL;
  v11 = *a3;
  v52 = v11;
  if ( v11 > 0xFFFFFFFE000LL || QuadPart > (__int64)v11 )
    return 3221225713LL;
  *(_OWORD *)Src = *a1;
  WORD1(Src[0]) = Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0xFFu )
    return 3221225523LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, LOWORD(Src[0]), 0x20206D4Du);
  v13 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( a4 )
  {
    v14 = (unsigned __int16)Src[0];
    if ( LOWORD(Src[0]) )
    {
      v15 = (char *)Src[1] + LOWORD(Src[0]);
      if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < Src[1] )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v14 = (unsigned __int16)Src[0];
      }
    }
    memmove(PoolWithTag, Src[1], v14);
  }
  else
  {
    memmove(PoolWithTag, Src[1], LOWORD(Src[0]));
  }
  Src[1] = v13;
  v16 = 0LL;
  v47 = 0LL;
  FileHandle = 0LL;
  Status = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Status < 0 )
    goto LABEL_89;
  v18 = RtlLengthSid(SeAliasAdminsSid);
  v19 = RtlLengthSid(SeLocalSystemSid) + 32 + v18;
  v20 = (ACL *)ExAllocatePoolWithTag(PagedPool, v19, 0x6C636144u);
  Acl = v20;
  if ( !v20 )
  {
    Status = -1073741670;
    goto LABEL_89;
  }
  Status = RtlCreateAcl(v20, v19, 2u);
  if ( Status < 0
    || (Status = RtlAddAccessAllowedAce(Acl, 2u, 0x1F01FFu, SeAliasAdminsSid), Status < 0)
    || (Status = RtlAddAccessAllowedAce(Acl, 2u, 0x1F01FFu, SeLocalSystemSid), Status < 0)
    || (Status = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0), Status < 0) )
  {
LABEL_89:
    if ( FileHandle )
      ObCloseHandle(FileHandle, 0);
    goto LABEL_91;
  }
  if ( a5 < 0 )
  {
    v21 = 3;
  }
  else
  {
    v21 = 0;
    if ( (a5 & 0x20000000) != 0 )
      v21 = 2;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)Src;
  ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  FileInformation = (QuadPart + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( IoCreateFile(
         &FileHandle,
         0x140003u,
         &ObjectAttributes,
         &IoStatusBlock,
         &AllocationSize,
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
    if ( IoStatusBlock.Status < 0 || (Status = ZwSetSecurityObject(FileHandle, 4u, SecurityDescriptor), Status >= 0) )
    {
      ExFreePoolWithTag(Acl, 0);
      Acl = 0LL;
      Status = IoStatusBlock.Status;
      if ( IoStatusBlock.Status >= 0 )
      {
        Status = ZwSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
        if ( Status >= 0 )
        {
          Status = IoStatusBlock.Status;
          if ( IoStatusBlock.Status >= 0 )
          {
            Status = ObReferenceObjectByHandle(FileHandle, 3u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
            v22 = (struct _FILE_OBJECT *)Object;
            v54 = Object;
            if ( Status >= 0 )
            {
              DeviceType = IoGetRelatedDeviceObject((PFILE_OBJECT)Object)->DeviceType;
              if ( (unsigned int)DeviceType <= 0x36 && (v24 = 0x60000000100100LL, _bittest64(&v24, DeviceType)) )
              {
                Status = MiCheckPageFileMapping((__int64)v22);
                if ( Status >= 0 )
                {
                  Status = IoQueryVolumeInformation(v22, FileFsDeviceInformation, 8u, FsInformation, &ReturnedLength);
                  if ( Status >= 0 )
                  {
                    if ( (FsInformation[4] & 4) != 0 )
                    {
                      Status = -1073741468;
                    }
                    else
                    {
                      Status = PiPagePathSetState(v22);
                      if ( Status >= 0 )
                      {
                        FsRtlIssueFileNotificationFsctl(v22, v25, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_PAGE_FILE);
                        if ( (int *)a6 != MiSystemPartition || (Status = MiZeroPageFileFirstPage(v22), Status >= 0) )
                        {
                          Pagefile = MiCreatePagefile(
                                       a6,
                                       (_DWORD)v22,
                                       (_DWORD)FileHandle,
                                       (unsigned __int64)AllocationSize.QuadPart >> 12,
                                       v11 >> 12,
                                       (__int64)Src,
                                       a5,
                                       1);
                          v27 = Pagefile;
                          if ( Pagefile )
                          {
                            inserted = MiInsertPageFileInList(Pagefile);
                            if ( inserted < 0 )
                            {
                              MiDeletePagefile((PVOID)v27);
                              return (unsigned int)inserted;
                            }
                            else
                            {
                              if ( (int *)a6 == MiSystemPartition )
                              {
                                if ( (*(_BYTE *)(v27 + 204) & 0xF) == 0 && (dword_1403BF148 & 3) != 0 )
                                  SmpSystemStoreCreate();
                                if ( !byte_140327050 && (*(_BYTE *)(v27 + 204) & 0x10) == 0 )
                                {
                                  v64 = *(_OWORD *)(v27 + 96);
                                  byte_140327050 = IoInitializeCrashDump(FileHandle);
                                }
                              }
                              return 0LL;
                            }
                          }
                          return 3221225626LL;
                        }
                        PiPagePathSetState(v22);
                      }
                    }
                  }
                }
              }
              else
              {
                Status = -1073741489;
              }
              goto LABEL_87;
            }
          }
        }
      }
    }
    goto LABEL_89;
  }
  Status = IoCreateFile(
             &FileHandle,
             0x100002u,
             &ObjectAttributes,
             &IoStatusBlock,
             &AllocationSize,
             6u,
             3u,
             1u,
             0x8008u,
             0LL,
             0,
             CreateFileTypeNone,
             0LL,
             0x112u);
  if ( Status >= 0 )
  {
    Status = ObReferenceObjectByHandle(FileHandle, 3u, (POBJECT_TYPE)IoFileObjectType, 0, &v51, 0LL);
    v54 = v51;
    if ( Status < 0 )
      goto LABEL_89;
    v30 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v31 = (unsigned __int64 *)(a6 + 952);
    v32 = (_BYTE *)KeAbPreAcquire(a6 + 952, 0LL, 0);
    v33 = v32;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a6 + 952), 0LL) )
      ExfAcquirePushLockExclusiveEx(v31, v32, (ULONG_PTR)v31);
    v34 = 0LL;
    if ( v33 )
      v33[26] |= 1u;
    v35 = *(_DWORD *)(a6 + 6296);
    v36 = 0LL;
    v45 = 0;
    if ( v35 )
    {
      while ( 1 )
      {
        v37 = *(_QWORD *)(a6 + 8LL * (unsigned int)v36 + 6304);
        if ( (*(_BYTE *)(v37 + 204) & 0x40) == 0 && *(_QWORD *)(*(_QWORD *)(v37 + 56) + 40LL) == *((_QWORD *)v51 + 5) )
          break;
        v36 = (unsigned int)(v36 + 1);
        v45 = v36;
        if ( (unsigned int)v36 >= v35 )
          goto LABEL_74;
      }
      if ( (((unsigned __int8)~*(_BYTE *)(v37 + 204) >> 4) & 1) == ((v21 & 1) == 0) )
      {
        v30 = *(_QWORD *)(a6 + 8LL * (unsigned int)v36 + 6304);
LABEL_74:
        v34 = 0LL;
        goto LABEL_75;
      }
      Status = -1073741811;
      goto LABEL_83;
    }
LABEL_75:
    if ( !v30 )
    {
      Status = -1073741275;
      goto LABEL_83;
    }
    v38 = v52 >> 12;
    v39 = (unsigned __int64)AllocationSize.QuadPart >> 12;
    v61 = (unsigned int)((unsigned __int64)AllocationSize.QuadPart >> 12);
    if ( *(_QWORD *)(v30 + 16) > v61 )
    {
      Status = -1073741584;
    }
    else
    {
      v40 = *(_QWORD *)(v30 + 8);
      if ( (unsigned int)v38 < v40 )
      {
        Status = -1073741583;
      }
      else
      {
        if ( (unsigned int)v38 <= v40 )
        {
LABEL_79:
          v41 = v61;
          if ( v61 > *(_QWORD *)(v30 + 16) )
          {
            while ( v41 <= *(_QWORD *)v30 )
            {
              if ( (unsigned int)MiCheckAndUpdatePagingFileMinimum((unsigned __int64 *)v30, v39) == 1 )
                goto LABEL_80;
            }
            MiIssuePageExtendRequest(a6, v41 - *(_QWORD *)v30, 1LL, v45);
            v44 = Status;
            if ( *(_QWORD *)(v30 + 16) < v41 )
              v44 = -1073741670;
            Status = v44;
          }
LABEL_80:
          if ( (v21 & 2) != 0 )
            *(_WORD *)(v30 + 204) |= 0x80u;
          goto LABEL_82;
        }
        if ( (*(_BYTE *)(v30 + 204) & 0x10) == 0 )
        {
          v47 = (unsigned int)v38 - v40;
          v42 = MiIncreaseCommitLimits(a6, 0LL, v47, 0, 0LL);
          v34 = 0LL;
          if ( !v42 )
          {
            v16 = 0LL;
            Status = -1073741583;
            goto LABEL_83;
          }
        }
        v53 = 0LL;
        if ( !*(_QWORD *)(v30 + 216) || (v53 = MiReservePageHash(v38, v40, 0LL)) != 0 )
        {
          PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps((unsigned int)v38, v40, v34, v36);
          if ( PageFileSpaceBitmaps )
          {
            MiExtendPagingFileMaximum((_QWORD *)v30, PageFileSpaceBitmaps, v53);
            if ( (unsigned __int64)(*(_QWORD *)(a6 + 7208) + 100LL) > *(_QWORD *)(a6 + 7336)
              && (unsigned int)MiChargeCommit(a6, 0xC8uLL, 0) == 1 )
            {
              MiReturnCommit(a6, 0xC8uLL);
            }
            goto LABEL_79;
          }
        }
        Status = -1073741670;
      }
    }
LABEL_82:
    v16 = v47;
LABEL_83:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v31, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v31);
    KeAbPostRelease((ULONG_PTR)v31);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( v16 )
      MiReduceCommitLimits((_QWORD *)a6, 0LL, v16);
LABEL_87:
    if ( v54 )
      ObfDereferenceObject(v54);
    goto LABEL_89;
  }
LABEL_91:
  if ( Acl )
    ExFreePoolWithTag(Acl, 0);
  ExFreePoolWithTag(P, 0);
  return (unsigned int)Status;
}
