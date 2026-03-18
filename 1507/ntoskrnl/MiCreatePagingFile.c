/*
 * XREFs of MiCreatePagingFile @ 0x1405B4240
 * Callers:
 *     NtCreatePagingFile @ 0x1405B420C (NtCreatePagingFile.c)
 *     MiManagePartition @ 0x1406A4074 (MiManagePartition.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140016968 (PsIsCurrentThreadInServerSilo.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     RtlLengthSid @ 0x1400CE984 (RtlLengthSid.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiReservePageHash @ 0x14016BA8C (MiReservePageHash.c)
 *     MiCheckPageFileMapping @ 0x14016BACC (MiCheckPageFileMapping.c)
 *     MiIncreaseCommitLimits @ 0x14016BCC8 (MiIncreaseCommitLimits.c)
 *     ZwSetInformationFile @ 0x14017F4D0 (ZwSetInformationFile.c)
 *     ZwSetSecurityObject @ 0x140182150 (ZwSetSecurityObject.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     MiReduceCommitLimits @ 0x140220C38 (MiReduceCommitLimits.c)
 *     MiCheckAndUpdatePagingFileMinimum @ 0x14022123C (MiCheckAndUpdatePagingFileMinimum.c)
 *     MiExtendPagingFileMaximum @ 0x140221290 (MiExtendPagingFileMaximum.c)
 *     MiIssuePageExtendRequest @ 0x140221B0C (MiIssuePageExtendRequest.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlAddAccessAllowedAce @ 0x140415C28 (RtlAddAccessAllowedAce.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404D03E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1404D0440 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404D058C (RtlCreateAcl.c)
 *     IoCreateFile @ 0x140508400 (IoCreateFile.c)
 *     IoQueryVolumeInformation @ 0x140558044 (IoQueryVolumeInformation.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140583464 (FsRtlIssueFileNotificationFsctl.c)
 *     MiInsertPageFileInList @ 0x1405B4BD0 (MiInsertPageFileInList.c)
 *     MiCreatePagefile @ 0x1405B4DBC (MiCreatePagefile.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x1405B50B0 (MiCreatePageFileSpaceBitmaps.c)
 *     MiZeroPageFileFirstPage @ 0x1405B5120 (MiZeroPageFileFirstPage.c)
 *     IoInitializeCrashDump @ 0x1405B51F4 (IoInitializeCrashDump.c)
 *     PiPagePathSetState @ 0x1405C0A08 (PiPagePathSetState.c)
 *     SmpSystemStoreCreate @ 0x1405C5828 (SmpSystemStoreCreate.c)
 *     MiDeletePagefile @ 0x1406A4FBC (MiDeletePagefile.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCreatePagingFile(
        _OWORD *a1,
        LARGE_INTEGER *a2,
        __int64 *a3,
        KPROCESSOR_MODE a4,
        int a5,
        __int64 a6)
{
  __int64 QuadPart; // rdi
  __int64 v11; // rbx
  PVOID PoolWithTag; // rax
  PVOID v13; // r14
  unsigned __int16 v14; // cx
  char *v15; // r8
  int Status; // r15d
  ULONG v17; // esi
  ULONG v18; // esi
  ACL *v19; // rax
  char v20; // si
  struct _FILE_OBJECT *v21; // rdi
  unsigned __int64 DeviceType; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 Pagefile; // rax
  __int64 v26; // rbx
  int inserted; // edi
  __int64 v29; // r9
  __int64 v30; // r13
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 *v32; // r12
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // r8
  unsigned int v37; // edx
  unsigned int v38; // r10d
  __int64 v39; // r8
  __int64 v40; // rbx
  LONGLONG v41; // rdi
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rbx
  __int64 v44; // rbx
  __int16 v45; // ax
  int v46; // eax
  __int64 PageFileSpaceBitmaps; // rax
  int v48; // eax
  __int64 v49; // [rsp+70h] [rbp-128h]
  unsigned int v50; // [rsp+78h] [rbp-120h]
  HANDLE FileHandle; // [rsp+80h] [rbp-118h] BYREF
  struct _KTHREAD *v52; // [rsp+88h] [rbp-110h]
  void *Src[2]; // [rsp+90h] [rbp-108h] BYREF
  PACL Acl; // [rsp+A0h] [rbp-F8h]
  LARGE_INTEGER AllocationSize; // [rsp+A8h] [rbp-F0h] BYREF
  PVOID P; // [rsp+B0h] [rbp-E8h]
  unsigned __int64 v57; // [rsp+B8h] [rbp-E0h]
  PVOID v58; // [rsp+C0h] [rbp-D8h]
  __int64 v59; // [rsp+C8h] [rbp-D0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-C8h] BYREF
  PVOID v61; // [rsp+E0h] [rbp-B8h] BYREF
  _BYTE FsInformation[8]; // [rsp+E8h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+F0h] [rbp-A8h] BYREF
  ULONG ReturnedLength; // [rsp+F8h] [rbp-A0h] BYREF
  unsigned __int64 v65; // [rsp+100h] [rbp-98h]
  unsigned __int64 FileInformation; // [rsp+108h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+110h] [rbp-88h] BYREF
  __int128 v68; // [rsp+140h] [rbp-58h]
  _BYTE SecurityDescriptor[48]; // [rsp+150h] [rbp-48h] BYREF

  Acl = 0LL;
  if ( (__int16 *)a6 != MiSystemPartition && a5 || (a5 & 0x1FFFFFF) != 0 || a5 < 0 && (a5 & 0x60000000) != 0 )
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
  if ( (unsigned __int64)QuadPart > 0xFFFFFFFF000LL || QuadPart < 0x100000 )
    return 3221225712LL;
  v11 = *a3;
  v59 = v11;
  if ( (unsigned __int64)v11 > 0xFFFFFFFF000LL || QuadPart > v11 )
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
      if ( (unsigned __int64)v15 > MmUserProbeAddress || v15 < Src[1] )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
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
  v49 = 0LL;
  FileHandle = 0LL;
  Status = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Status < 0 )
    goto LABEL_94;
  v17 = RtlLengthSid(SeAliasAdminsSid);
  v18 = RtlLengthSid(SeLocalSystemSid) + 32 + v17;
  v19 = (ACL *)ExAllocatePoolWithTag(PagedPool, v18, 0x6C636144u);
  Acl = v19;
  if ( !v19 )
  {
    Status = -1073741670;
    goto LABEL_94;
  }
  Status = RtlCreateAcl(v19, v18, 2u);
  if ( Status < 0
    || (Status = RtlAddAccessAllowedAce(Acl, 2u, 0x1F01FFu, SeAliasAdminsSid), Status < 0)
    || (Status = RtlAddAccessAllowedAce(Acl, 2u, 0x1F01FFu, SeLocalSystemSid), Status < 0)
    || (Status = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0), Status < 0) )
  {
LABEL_94:
    if ( FileHandle )
      ObCloseHandle(FileHandle, 0);
    goto LABEL_96;
  }
  if ( a5 < 0 )
  {
    v20 = 3;
  }
  else
  {
    v20 = 0;
    if ( (a5 & 0x20000000) != 0 )
      v20 = 2;
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
            v21 = (struct _FILE_OBJECT *)Object;
            v58 = Object;
            if ( Status >= 0 )
            {
              DeviceType = IoGetRelatedDeviceObject((PFILE_OBJECT)Object)->DeviceType;
              if ( (unsigned int)DeviceType <= 0x36 && (v23 = 0x60000000100100LL, _bittest64(&v23, DeviceType)) )
              {
                Status = MiCheckPageFileMapping((__int64)v21);
                if ( Status >= 0 )
                {
                  Status = IoQueryVolumeInformation(v21, FileFsDeviceInformation, 8u, FsInformation, &ReturnedLength);
                  if ( Status >= 0 )
                  {
                    if ( (FsInformation[4] & 4) != 0 )
                    {
                      Status = -1073741468;
                    }
                    else
                    {
                      Status = PiPagePathSetState(v21);
                      if ( Status >= 0 )
                      {
                        FsRtlIssueFileNotificationFsctl(v21, v24, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_PAGE_FILE);
                        if ( (__int16 *)a6 != MiSystemPartition || (Status = MiZeroPageFileFirstPage(v21), Status >= 0) )
                        {
                          Pagefile = MiCreatePagefile(
                                       a6,
                                       (_DWORD)v21,
                                       (_DWORD)FileHandle,
                                       AllocationSize.QuadPart >> 12,
                                       v11 >> 12,
                                       (__int64)Src,
                                       a5,
                                       1);
                          v26 = Pagefile;
                          if ( Pagefile )
                          {
                            inserted = MiInsertPageFileInList(Pagefile);
                            if ( inserted < 0 )
                            {
                              MiDeletePagefile(v26);
                              return (unsigned int)inserted;
                            }
                            else
                            {
                              if ( (__int16 *)a6 == MiSystemPartition )
                              {
                                if ( (*(_BYTE *)(v26 + 164) & 0xF) == 0 && (dword_140352D28 & 3) != 0 )
                                  SmpSystemStoreCreate();
                                if ( !byte_14034F0FC && (*(_BYTE *)(v26 + 164) & 0x10) == 0 )
                                {
                                  v68 = *(_OWORD *)(v26 + 112);
                                  byte_14034F0FC = IoInitializeCrashDump(FileHandle);
                                }
                              }
                              return 0LL;
                            }
                          }
                          return 3221225626LL;
                        }
                        PiPagePathSetState(v21);
                      }
                    }
                  }
                }
              }
              else
              {
                Status = -1073741489;
              }
              goto LABEL_92;
            }
          }
        }
      }
    }
    goto LABEL_94;
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
    Status = ObReferenceObjectByHandle(FileHandle, 3u, (POBJECT_TYPE)IoFileObjectType, 0, &v61, 0LL);
    v58 = v61;
    if ( Status < 0 )
      goto LABEL_94;
    v30 = 0LL;
    CurrentThread = KeGetCurrentThread();
    v52 = CurrentThread;
    --CurrentThread->SpecialApcDisable;
    v32 = (unsigned __int64 *)(a6 + 928);
    v33 = KeAbPreAcquire(a6 + 928, 0LL, 0LL, v29);
    v35 = v33;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a6 + 928), 0LL) )
      ExfAcquirePushLockExclusiveEx(v32, v33, (ULONG_PTR)v32, v34);
    v36 = 0LL;
    if ( v35 )
      *(_BYTE *)(v35 + 26) |= 1u;
    v37 = *(_DWORD *)(a6 + 5336);
    v38 = 0;
    v50 = 0;
    if ( v37 )
    {
      while ( 1 )
      {
        v39 = *(_QWORD *)(a6 + 8LL * v38 + 5344);
        if ( (*(_BYTE *)(v39 + 164) & 0x40) == 0 && *(_QWORD *)(*(_QWORD *)(v39 + 64) + 40LL) == *((_QWORD *)v61 + 5) )
          break;
        v50 = ++v38;
        if ( v38 >= v37 )
          goto LABEL_74;
      }
      if ( (((unsigned __int8)~*(_BYTE *)(v39 + 164) >> 4) & 1) == ((v20 & 1) == 0) )
      {
        v30 = *(_QWORD *)(a6 + 8LL * v38 + 5344);
LABEL_74:
        v36 = 0LL;
        goto LABEL_75;
      }
      Status = -1073741811;
      v44 = 0LL;
      goto LABEL_84;
    }
LABEL_75:
    if ( !v30 )
    {
      Status = -1073741275;
      goto LABEL_83;
    }
    v40 = v59 >> 12;
    v41 = AllocationSize.QuadPart >> 12;
    v65 = (unsigned int)(AllocationSize.QuadPart >> 12);
    if ( *(_QWORD *)(v30 + 16) > v65 )
    {
      Status = -1073741584;
    }
    else
    {
      v42 = *(_QWORD *)(v30 + 8);
      if ( (unsigned int)v40 < v42 )
      {
        Status = -1073741583;
      }
      else
      {
        if ( (unsigned int)v40 <= v42 )
        {
LABEL_79:
          v43 = v65;
          if ( v65 > *(_QWORD *)(v30 + 16) )
          {
            while ( v43 <= *(_QWORD *)v30 )
            {
              if ( (unsigned int)MiCheckAndUpdatePagingFileMinimum((unsigned __int64 *)v30, v41) == 1 )
                goto LABEL_80;
            }
            MiIssuePageExtendRequest(a6, v43 - *(_QWORD *)v30, v50, 1);
            v48 = Status;
            if ( *(_QWORD *)(v30 + 16) < v43 )
              v48 = -1073741670;
            Status = v48;
          }
LABEL_80:
          if ( (v20 & 2) != 0 )
            *(_WORD *)(v30 + 164) |= 0x80u;
          goto LABEL_82;
        }
        if ( (*(_BYTE *)(v30 + 164) & 0x10) == 0 )
        {
          v49 = (unsigned int)v40 - v42;
          v46 = MiIncreaseCommitLimits(a6, 0LL, v49, 0, 0LL);
          v36 = 0LL;
          if ( !v46 )
          {
            v44 = 0LL;
            Status = -1073741583;
            CurrentThread = v52;
            goto LABEL_84;
          }
        }
        v57 = 0LL;
        if ( !*(_QWORD *)(v30 + 176) || (v57 = MiReservePageHash(v40, v42, 0LL)) != 0 )
        {
          PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps((unsigned int)v40, v42, v36);
          if ( PageFileSpaceBitmaps )
          {
            MiExtendPagingFileMaximum((_QWORD *)v30, PageFileSpaceBitmaps, v57);
            if ( (unsigned __int64)(*(_QWORD *)(a6 + 5576) + 100LL) > *(_QWORD *)(a6 + 5736)
              && (unsigned int)MiChargeCommit(a6, 0xC8uLL, 0) == 1 )
            {
              MiReturnCommit(a6, 200LL);
            }
            goto LABEL_79;
          }
        }
        Status = -1073741670;
      }
    }
LABEL_82:
    CurrentThread = v52;
LABEL_83:
    v44 = v49;
LABEL_84:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v32);
    KeAbPostRelease((ULONG_PTR)v32);
    v45 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v45;
    if ( !v45
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v44 )
      MiReduceCommitLimits((_QWORD *)a6, 0LL, v44);
    v13 = P;
LABEL_92:
    if ( v58 )
      ObfDereferenceObject(v58);
    goto LABEL_94;
  }
LABEL_96:
  if ( Acl )
    ExFreePoolWithTag(Acl, 0);
  ExFreePoolWithTag(v13, 0);
  return (unsigned int)Status;
}
