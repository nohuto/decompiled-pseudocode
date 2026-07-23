/*
 * XREFs of MiCreateSection @ 0x1403F80B0
 * Callers:
 *     MmCreateSystemSection @ 0x140019F4C (MmCreateSystemSection.c)
 *     NtCreateSection @ 0x1403F7DD0 (NtCreateSection.c)
 *     MmCreateSection @ 0x14044E98C (MmCreateSection.c)
 *     MmCreateCacheManagerSection @ 0x14044EA7C (MmCreateCacheManagerSection.c)
 *     MmCreateSpecialImageSection @ 0x14044FAE0 (MmCreateSpecialImageSection.c)
 * Callees:
 *     MiReferenceControlAreaForCacheManager @ 0x14000C5B0 (MiReferenceControlAreaForCacheManager.c)
 *     MiReleaseControlAreaWaiters @ 0x14000C640 (MiReleaseControlAreaWaiters.c)
 *     RtlAvlInsertNodeEx @ 0x14000C920 (RtlAvlInsertNodeEx.c)
 *     ObFastReplaceObject @ 0x14000D374 (ObFastReplaceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     CcWaitForUninitializeCacheMap @ 0x14003897C (CcWaitForUninitializeCacheMap.c)
 *     IoSetTopLevelIrp @ 0x14003AD60 (IoSetTopLevelIrp.c)
 *     MiReferenceControlArea @ 0x14003AD80 (MiReferenceControlArea.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeEnterCriticalRegionThread @ 0x140042B60 (KeEnterCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiMakeProtectionMask @ 0x140062870 (MiMakeProtectionMask.c)
 *     IoAllowExecution @ 0x1400988B0 (IoAllowExecution.c)
 *     MiDereferenceControlAreaBySection @ 0x1400A6E80 (MiDereferenceControlAreaBySection.c)
 *     ObReferenceObjectExWithTag @ 0x1400D5D80 (ObReferenceObjectExWithTag.c)
 *     MmChangeSectionBackingFile @ 0x1400DD00C (MmChangeSectionBackingFile.c)
 *     PsIsCurrentThreadPrefetching @ 0x1400DD130 (PsIsCurrentThreadPrefetching.c)
 *     ObDereferenceObjectEx @ 0x1400E2764 (ObDereferenceObjectEx.c)
 *     MiZeroSectionObjectPointer @ 0x1400F3B10 (MiZeroSectionObjectPointer.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MmExtendSection @ 0x1403C7408 (MmExtendSection.c)
 *     MiCreateNewSection @ 0x1403C8128 (MiCreateNewSection.c)
 *     MiCreatePagingFileMap @ 0x1403C89F8 (MiCreatePagingFileMap.c)
 *     MiRelocateImageAgain @ 0x1403F753C (MiRelocateImageAgain.c)
 *     FsRtlGetFileSize @ 0x1403F7C1C (FsRtlGetFileSize.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x1403F9080 (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlReleaseFile @ 0x1403F9150 (FsRtlReleaseFile.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObCreateObjectEx @ 0x140412D10 (ObCreateObjectEx.c)
 *     SeCompareSigningLevels @ 0x140448D98 (SeCompareSigningLevels.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x1404A5CD8 (MiFindEmptyAddressRangeDownTree.c)
 *     SeGetImageRequiredSigningLevel @ 0x1404A967C (SeGetImageRequiredSigningLevel.c)
 *     MiValidateSectionCreate @ 0x1404AEAF4 (MiValidateSectionCreate.c)
 *     ObCheckActiveHandles @ 0x1404B5A18 (ObCheckActiveHandles.c)
 *     SeCompareSigningLevelsForAuditableProcess @ 0x1404C06B8 (SeCompareSigningLevelsForAuditableProcess.c)
 *     MiLogSectionCreate @ 0x140623BE0 (MiLogSectionCreate.c)
 *     MiLogSectionObjectEvent @ 0x140623CDC (MiLogSectionObjectEvent.c)
 *     MiCreatePerSessionProtos @ 0x14062BE88 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x14062C01C (MiDereferencePerSessionProtos.c)
 */

int __fastcall MiCreateSection(
        _QWORD *a1,
        int a2,
        char a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        HANDLE Handle,
        struct _OBJECT_HANDLE_INFORMATION *a9,
        unsigned __int8 a10,
        unsigned int a11)
{
  unsigned int v11; // ebx
  ULONG_PTR v12; // r13
  unsigned int v13; // r14d
  unsigned int v14; // r14d
  unsigned int v15; // r12d
  int result; // eax
  signed int v17; // r14d
  unsigned int v18; // ecx
  unsigned int ProtectionMask; // eax
  unsigned __int16 v20; // cx
  struct _OBJECT_HANDLE_INFORMATION **v21; // r9
  struct _OBJECT_HANDLE_INFORMATION *HandleInformation; // r10
  __int64 v23; // r11
  unsigned int v24; // esi
  ACCESS_MASK v25; // edx
  unsigned int v26; // ebx
  __int64 v27; // rsi
  signed __int64 v28; // r12
  int v29; // esi
  __int64 *v30; // rcx
  int v31; // edx
  __int64 v32; // rax
  __int64 *v33; // rax
  signed __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // ebx
  struct _KTHREAD *CurrentThread; // r12
  int v39; // ebx
  int v40; // esi
  unsigned int v41; // ebx
  int v42; // eax
  int v43; // eax
  __int64 v44; // r12
  int ImageRequiredSigningLevel; // r15d
  unsigned __int64 QuadPart; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // r8
  unsigned int v49; // edx
  unsigned int v50; // edx
  int v51; // ecx
  unsigned __int8 v52; // r15
  char v53; // al
  int v54; // eax
  __int64 v55; // r9
  char v56; // cl
  _QWORD *v57; // rbx
  __int64 v58; // r8
  void *v59; // rax
  int v60; // eax
  unsigned int v61; // r12d
  int v62; // r8d
  __int64 v63; // rax
  bool v64; // zf
  PVOID v65; // rsi
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  _DWORD *v69; // rax
  __int64 v70; // r13
  int v71; // ebx
  unsigned __int64 v72; // r13
  struct _KTHREAD *v73; // r12
  __int64 v74; // rax
  __int64 v75; // r14
  int EmptyAddressRangeDownTree; // r14d
  _QWORD *v77; // r9
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rdx
  unsigned __int64 v81; // r8
  __int64 v82; // rcx
  unsigned __int64 v83; // rax
  PVOID v84; // rdi
  PVOID v85; // rcx
  int Object; // [rsp+20h] [rbp-E0h]
  unsigned int v87; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v88; // [rsp+54h] [rbp-ACh]
  __int64 v89; // [rsp+58h] [rbp-A8h] BYREF
  int v90; // [rsp+60h] [rbp-A0h]
  __int64 v91; // [rsp+68h] [rbp-98h]
  __int64 v92; // [rsp+70h] [rbp-90h] BYREF
  int v93; // [rsp+78h] [rbp-88h]
  PVOID v94; // [rsp+80h] [rbp-80h]
  unsigned int v95; // [rsp+88h] [rbp-78h] BYREF
  int v96; // [rsp+8Ch] [rbp-74h]
  _DWORD v97[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v98; // [rsp+A0h] [rbp-60h]
  __int128 v99; // [rsp+B0h] [rbp-50h]
  __int128 v100; // [rsp+C0h] [rbp-40h]
  __int64 v101[2]; // [rsp+D0h] [rbp-30h] BYREF
  LARGE_INTEGER FileSize; // [rsp+E0h] [rbp-20h] BYREF
  LARGE_INTEGER v103; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v104; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v105; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v106[17]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v109; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v110; // [rsp+1E8h] [rbp+E8h]

  v110 = a4;
  v11 = 0;
  if ( (a3 & 1) != 0 )
    v11 = 2048;
  v12 = 0LL;
  v87 = v11;
  if ( (a3 & 2) != 0 )
  {
    v11 |= 1u;
    v87 = v11;
    if ( (a3 & 8) != 0 )
    {
      v11 |= 0x10000u;
      v87 = v11;
    }
    if ( (a3 & 4) != 0 )
    {
      v11 |= 0x10000u;
      v87 = v11;
    }
  }
  v13 = a6;
  if ( (a6 & 0x1100000) == 0x1100000 )
  {
    v11 |= 0x200u;
    v87 = v11;
    v13 = a6 & 0xFFEFFFFF;
  }
  if ( (v13 & 0x100000) != 0 )
  {
    if ( (v13 & 0x200000) != 0 )
    {
      v13 &= ~0x200000u;
      v11 |= 0x40u;
    }
    v11 |= 0x20u;
    v14 = v13 & 0xFFEFFFFF;
    v87 = v11;
    if ( (v14 & 0x400000) != 0 )
    {
      v14 &= ~0x400000u;
      LOBYTE(a7) = 12;
      v11 |= 0x100u;
      v87 = v11;
    }
    else
    {
      LOBYTE(a7) = 1;
    }
  }
  else
  {
    if ( (v13 & 0x2000000) == 0 )
      goto LABEL_22;
    v11 |= 0x10u;
    v87 = v11;
    if ( (v13 & 0x400000) != 0 )
    {
      v13 &= ~0x400000u;
      LOBYTE(a7) = 12;
    }
    else
    {
      LOBYTE(a7) = 4;
    }
    v14 = v13 & 0xFDFFFFFF;
  }
  v13 = v14 | 0x1000000;
LABEL_22:
  v15 = v13 & 0x7F;
  a6 = v15;
  if ( v15 > (unsigned __int16)KeNumberNodes )
    return -1073741580;
  v17 = v13 & 0xFFFFFF80;
  if ( (v17 & 0x1000000) == 0 )
  {
    if ( (v17 & 0x10000000) != 0 )
    {
      v18 = a5 | 0x200;
      goto LABEL_36;
    }
    if ( (v17 & 0x40000000) != 0 )
    {
      v18 = a5 | 0x400;
      goto LABEL_36;
    }
LABEL_35:
    v18 = a5;
LABEL_36:
    v88 = v18;
    goto LABEL_37;
  }
  if ( (a3 & 0x10) != 0 || (v11 = v87, KeGetCurrentThread()->ApcState.Process->SecurePid) )
  {
    v11 |= 0x20000u;
    v87 = v11;
  }
  if ( (v17 & 0x11000000) != 0x11000000 )
  {
    v11 |= 0x400u;
    v87 = v11;
    if ( (v11 & 0x20) != 0 && (MiFlags & 0x10000) != 0 )
    {
      v11 |= 0x20000u;
      v87 = v11;
    }
    goto LABEL_35;
  }
  v18 = a5;
  v88 = a5;
  if ( a5 != 2 )
    return -1073741755;
  v17 &= ~0x10000000u;
LABEL_37:
  ProtectionMask = MiMakeProtectionMask(v18);
  v24 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return -1073741755;
  *((_QWORD *)&v100 + 1) = HandleInformation;
  v25 = MmMakeFileAccess[ProtectionMask & 7];
  HIDWORD(v101[1]) ^= (v20 ^ WORD2(v101[1])) & 0xFFF;
  if ( Handle )
  {
    v28 = (signed __int64)a9;
    if ( !a9 )
    {
      if ( v17 < 0 )
        return -1073741580;
      v93 = a10;
      result = ObReferenceObjectByHandle(Handle, v25, (POBJECT_TYPE)IoFileObjectType, a10, &v104, HandleInformation);
      v12 = (ULONG_PTR)v104;
      if ( result < 0 )
        return result;
      if ( !*((_QWORD *)v104 + 5) )
      {
        ObfDereferenceObject(v104);
        return -1073741792;
      }
      ObfReferenceObject(v104);
      goto LABEL_85;
    }
  }
  else
  {
    if ( a9 == HandleInformation )
    {
      v90 = v17 & 0x1000000;
      if ( (v17 & 0x1000000) == 0 )
      {
        v93 = a10;
        if ( v17 >= 0 )
        {
LABEL_50:
          result = MiCreatePagingFileMap((PVOID ***)&v92, (unsigned __int64 *)v110, v24, v17, v15);
          if ( result < 0 )
            return result;
          v26 = v87 | 4;
          v101[0] = _InterlockedCompareExchange64((volatile signed __int64 *)(v92 + 24), -1LL, -1LL);
          v27 = *(_QWORD *)v92;
          v89 = *(_QWORD *)v92;
          v91 = v92;
          v87 |= 4u;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 )
            MiLogSectionCreate(v27, 1LL);
          goto LABEL_185;
        }
        if ( (v17 & 0x8000000) != 0 )
        {
          if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a10) )
            return -1073741727;
          goto LABEL_50;
        }
        return -1073741580;
      }
      return -1073741792;
    }
    v28 = (signed __int64)a9;
  }
  v29 = v17 & 0x1000000;
  v90 = v17 & 0x1000000;
  if ( (v17 & 0x1000000) != 0 )
  {
    if ( (v11 & 1) != 0 )
      return -1073741580;
    if ( *v21 != HandleInformation )
      return -1073741582;
  }
  v30 = *(__int64 **)(v28 + 40);
  if ( !v30 )
    return -1073741792;
  if ( v23 )
  {
    v31 = a10;
    if ( (*(_DWORD *)(v23 + 24) & 0x200) != 0 )
      v31 = (int)HandleInformation;
    v93 = v31;
  }
  else
  {
    v93 = a10;
  }
  if ( v29 )
    v32 = v30[2];
  else
    v32 = *v30;
  v89 = v32;
  if ( v32 && (int)MiReferenceControlAreaForCacheManager(v28, v17, v11) >= 0 )
  {
    v33 = *(__int64 **)(v28 + 40);
    v26 = v11 | 4;
    v87 = v26;
    if ( v29 )
    {
      v89 = v33[2];
      v34 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v89 + 24LL), -1LL, -1LL);
    }
    else
    {
      v27 = *v33;
      v89 = *v33;
      v35 = *(_QWORD *)v110;
      v101[0] = *(_QWORD *)v110;
      if ( (v26 & 1) != 0 || v35 )
        goto LABEL_78;
      v34 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v27 + 24LL), -1LL, -1LL);
    }
    v27 = v89;
    v26 = v87;
    v101[0] = v34;
LABEL_78:
    v36 = *(_QWORD *)v27;
    v92 = *(_QWORD *)v27;
LABEL_184:
    v91 = v36;
    goto LABEL_185;
  }
  v12 = v28;
  ObReferenceObjectExWithTag(v28, 2);
LABEL_85:
  memset(v106, 0, 0x78uLL);
  LODWORD(v106[7]) |= 2u;
  v106[8] = v12;
  v90 = v17 & 0x1000000;
  v92 = 0LL;
  if ( (v17 & 0x1000000) != 0 )
  {
    if ( ((v11 >> 10) & 1) != 0 && !IoAllowExecution(v12) )
    {
      ObDereferenceObjectEx(v12, 2);
      return -1073741790;
    }
    CcWaitForUninitializeCacheMap(v12);
    if ( ((v11 >> 10) & 1) != 0 && (a7 & 0x10) != 0 )
    {
      v37 = v11 | 0x10;
      v87 = v37;
      if ( (a7 & 0x30) == 0x30 )
        v87 = v37 | 0x1000;
      LOBYTE(a7) = a7 & 0xF;
    }
  }
  CurrentThread = KeGetCurrentThread();
  KeEnterCriticalRegionThread((__int64)CurrentThread);
  v39 = v87;
  do
  {
    if ( (v39 & 1) == 0 )
    {
      v40 = FsRtlAcquireToCreateMappedSection(v12, v88, v97, &v95);
      if ( v40 < 0 )
      {
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        ObDereferenceObjectEx(v12, 2);
        return v40;
      }
      if ( (v97[0] & 4) != 0 && v90 )
        v39 |= 0x10000u;
      if ( (v97[0] & 2) != 0 && !v90 )
        v39 |= 0x10000u;
      if ( v95 )
      {
        if ( ((v95 - 1) & v95) == 0 )
        {
          v39 |= 0x2000u;
          if ( v95 < dword_1402FF21C )
            dword_1402FF21C = v95;
        }
      }
      if ( v40 == 298 )
      {
        v41 = v39 & 0xFFFFFF7F;
      }
      else
      {
        v42 = v39;
        v41 = v39 & 0xFFFFFF7F;
        v43 = v42 | 0x80;
        if ( v40 == 299 )
          v41 = v43;
      }
      IoSetTopLevelIrp((PIRP)1);
      v39 = v41 | 2;
      v87 = v39;
    }
  }
  while ( (unsigned int)MiReferenceControlArea(v17, (struct _FILE_OBJECT *)v12, (__int64)v106, v39 & 1, &v89) != 1 );
  v27 = v89;
  if ( (*(_DWORD *)(v89 + 56) & 2) != 0 )
  {
    ImageRequiredSigningLevel = MiCreateNewSection(
                                  (PFILE_OBJECT)v12,
                                  v17,
                                  v88,
                                  a6,
                                  a11,
                                  (char *)&a7,
                                  (signed __int64 *)v110,
                                  (int *)&v87,
                                  &v92,
                                  v101);
    if ( ImageRequiredSigningLevel < 0 )
    {
      if ( v92 )
        v27 = *(_QWORD *)v92;
      v57 = (_QWORD *)MiZeroSectionObjectPointer(v12, v27, v17);
      ObfDereferenceObject((PVOID)v12);
      if ( (_QWORD *)v27 == v106 )
      {
        v59 = (void *)ObFastReplaceObject((volatile __int64 *)(v27 + 64), 0LL);
        ObfDereferenceObject(v59);
      }
      else
      {
        MiDereferenceControlAreaBySection(v27, 1u, v58);
      }
      MiReleaseControlAreaWaiters(v57);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return ImageRequiredSigningLevel;
    }
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v36 = v92;
    v26 = v87;
    v27 = *(_QWORD *)v92;
    v89 = *(_QWORD *)v92;
    goto LABEL_184;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( (*(_DWORD *)(v27 + 56) & 0x200) != 0 && !PsIsCurrentThreadPrefetching() )
    MmChangeSectionBackingFile(0LL, (_QWORD *)v12, (v90 != 0) + 1);
  ObfDereferenceObject((PVOID)v12);
  v44 = *(_QWORD *)v27;
  v26 = v39 | 4;
  v87 = v26;
  v91 = v44;
  v92 = v44;
  if ( (v26 & 1) != 0 || (*(_DWORD *)(v27 + 56) & 0x20) != 0 )
  {
    if ( (v26 & 2) != 0 )
    {
      IoSetTopLevelIrp(0LL);
      FsRtlReleaseFile((PFILE_OBJECT)v12);
      v26 &= ~2u;
      v87 = v26;
    }
    if ( !v90 )
      goto LABEL_163;
    if ( (*(_BYTE *)(v44 + 14) & 1) != 0 && (v26 & 0x20000) != 0 )
    {
      dword_1402FE4B8 = 81;
      ImageRequiredSigningLevel = -1073740749;
      goto LABEL_216;
    }
    if ( (v26 & 0x40) != 0 )
      v49 = 2;
    else
      v49 = (v26 & 0x20) != 0;
    ImageRequiredSigningLevel = MiRelocateImageAgain(v27, v49);
    if ( ImageRequiredSigningLevel < 0 )
      goto LABEL_216;
    if ( (v26 & 0x100) != 0 )
    {
      v50 = 4;
    }
    else if ( (v26 & 0x20) != 0 )
    {
      v50 = 1;
    }
    else if ( (v26 & 0x10) != 0 )
    {
      v50 = 2;
      if ( (v26 & 0x1000) != 0 )
        v50 = 8;
    }
    else
    {
      v50 = 0;
    }
    a6 = v50;
    LODWORD(v91) = (v26 >> 11) & 1;
    if ( (_DWORD)v91 )
      a6 = v50 | 0x10;
    v51 = (v26 >> 10) & 1;
    v96 = v51;
    if ( !v51 || (v26 & 0x10) != 0 || ((v26 >> 11) & 1) != 0 )
    {
      v52 = a7;
    }
    else
    {
      v52 = a7;
      if ( (_BYTE)a7 )
      {
        ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel((PVOID)v12, (__int64)&v109);
        if ( ImageRequiredSigningLevel < 0 )
          goto LABEL_216;
        v52 = v109;
        v51 = v96;
        LOBYTE(a7) = v109;
      }
    }
    if ( (v26 & 0x20000) != 0 )
    {
      a6 |= 0x40000000u;
      v53 = v52;
      if ( !v52 )
        v53 = 4;
      v52 = v53;
      LOBYTE(a7) = v53;
    }
    if ( !v51 )
      goto LABEL_163;
    if ( (v26 & 0x10) != 0 )
    {
      v55 = a6;
    }
    else
    {
      v54 = SeCompareSigningLevels(*(_BYTE *)(v44 + 15) >> 4, v52, 4LL);
      v55 = a6;
      if ( v54
        && ((a6 & 0x40000000) == 0 || (*(_DWORD *)(v27 + 92) & 0xC000000) == 0x8000000)
        && ((*(_BYTE *)(v44 + 15) & 0xF0) != 0 || *(char *)(*(_QWORD *)(v44 + 56) + 46LL) >= 0) )
      {
LABEL_163:
        QuadPart = _InterlockedCompareExchange64((volatile signed __int64 *)(v44 + 24), -1LL, -1LL);
        v26 = v87;
        v27 = v89;
        v91 = v92;
        FileSize.QuadPart = QuadPart;
        goto LABEL_164;
      }
    }
    LOBYTE(Object) = v52;
    ImageRequiredSigningLevel = MiValidateSectionCreate(v12, v27, a11, v55, Object);
    if ( ImageRequiredSigningLevel < 0 )
    {
      dword_1402FE4B8 = 60;
      goto LABEL_216;
    }
    v44 = v92;
    if ( !(unsigned int)SeCompareSigningLevelsForAuditableProcess(
                          KeGetCurrentThread()->ApcState.Process,
                          (unsigned int)v91,
                          *(_BYTE *)(v92 + 15) >> 4,
                          (unsigned __int8)a7) )
    {
      ImageRequiredSigningLevel = -1073740760;
      ObfDereferenceObject((PVOID)v12);
      LOBYTE(v26) = v87;
      v27 = v89;
      goto LABEL_217;
    }
    goto LABEL_163;
  }
  ImageRequiredSigningLevel = FsRtlGetFileSize((PFILE_OBJECT)v12, &FileSize);
  IoSetTopLevelIrp(0LL);
  FsRtlReleaseFile((PFILE_OBJECT)v12);
  v26 &= ~2u;
  v87 = v26;
  if ( ImageRequiredSigningLevel < 0 )
    goto LABEL_216;
  QuadPart = FileSize.QuadPart;
  if ( !FileSize.QuadPart )
  {
    v47 = *(_QWORD *)v110;
    if ( !*(_QWORD *)v110 )
    {
      ObfDereferenceObject((PVOID)v12);
      ImageRequiredSigningLevel = -1073741538;
      goto LABEL_217;
    }
    goto LABEL_171;
  }
LABEL_164:
  v47 = *(_QWORD *)v110;
  if ( !*(_QWORD *)v110 )
  {
    v26 |= 8u;
    v101[0] = QuadPart;
    v87 = v26;
LABEL_185:
    v56 = v88;
    goto LABEL_186;
  }
LABEL_171:
  v56 = v88;
  if ( QuadPart < v47 )
  {
    if ( (v88 & 0x44) == 0 )
    {
      ObfDereferenceObject((PVOID)v12);
      ImageRequiredSigningLevel = -1073741760;
      goto LABEL_217;
    }
    v101[0] = v47;
  }
  else
  {
    v26 |= 8u;
    v101[0] = v47;
    v87 = v26;
  }
LABEL_186:
  HIDWORD(v101[1]) &= ~0x80000000;
  v110 = v27 + 56;
  v60 = *(_DWORD *)(v27 + 56);
  v61 = v60 & 0xFFF7FFFF;
  *((_QWORD *)&v100 + 1) = v27;
  LODWORD(v101[1]) = v60 & 0xFFF7FFFF;
  if ( v90 )
  {
    if ( (v26 & 0x400) == 0 )
    {
      v61 |= 0x80000u;
      LODWORD(v101[1]) = v61;
    }
    if ( (unsigned __int8)a7 <= 1u && (v26 & 0x20000) == 0 )
      HIDWORD(v101[1]) |= 0x80000000;
  }
  if ( (v60 & 0x4000000) == 0 )
  {
    if ( !a9 && (v56 & 0x44) != 0 && (v60 & 0x20) == 0 && *(_QWORD *)(v27 + 64) )
    {
      LODWORD(v101[1]) = v61 | 0x8000000;
      _InterlockedIncrement((volatile signed __int32 *)(v27 + 92));
      if ( !(unsigned __int8)ObCheckActiveHandles(v12) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v27 + 92));
        ObfDereferenceObject((PVOID)v12);
        LOBYTE(v26) = v87;
        ImageRequiredSigningLevel = -1073741788;
        v27 = v89;
        goto LABEL_217;
      }
      LOBYTE(v26) = v87;
      v61 = v101[1];
      v27 = v89;
      v91 = v92;
    }
    goto LABEL_195;
  }
  ImageRequiredSigningLevel = MiCreatePerSessionProtos(v27, a11);
  if ( ImageRequiredSigningLevel < 0 )
  {
LABEL_216:
    ObfDereferenceObject((PVOID)v12);
LABEL_217:
    if ( (v26 & 4) != 0 )
      MiDereferenceControlAreaBySection(v27, (v26 & 1) == 0, v48);
    return ImageRequiredSigningLevel;
  }
  HIDWORD(v101[1]) ^= (HIDWORD(v101[1]) ^ (a11 << 12)) & 0x7FFFF000;
LABEL_195:
  LOBYTE(a6) = 0;
  if ( v12 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v12 + 8) + 52LL) & 0x10) != 0 )
      LOBYTE(a6) = 1;
    else
      ObfDereferenceObject((PVOID)v12);
  }
  if ( (*(_DWORD *)v110 & 0x20) != 0 || !*(_QWORD *)(v27 + 64) )
  {
    v62 = 120;
    v63 = v27 + 120;
    do
    {
      v63 = *(_QWORD *)(v63 + 16);
      v62 += 56;
    }
    while ( v63 );
  }
  ImageRequiredSigningLevel = ObCreateObjectEx(
                                (unsigned __int8)v93,
                                (_DWORD)MmSectionObjectType,
                                a2,
                                (unsigned __int8)v93);
  if ( ImageRequiredSigningLevel < 0 )
  {
    if ( (v61 & 0x8000000) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v27 + 92));
      LOBYTE(v26) = v87;
      v27 = v89;
    }
    else if ( (*(_DWORD *)v110 & 0x4000000) != 0 )
    {
      MiDereferencePerSessionProtos(v27, (HIDWORD(v101[1]) >> 12) & 0x7FFFF);
    }
    if ( (_BYTE)a6 != 1 )
      goto LABEL_217;
    goto LABEL_216;
  }
  v64 = (_BYTE)a6 == 1;
  v65 = v94;
  v66 = v99;
  *(_OWORD *)v94 = v98;
  v67 = v100;
  *((_OWORD *)v65 + 1) = v66;
  v68 = *(_OWORD *)v101;
  *((_OWORD *)v65 + 2) = v67;
  *((_OWORD *)v65 + 3) = v68;
  *((_QWORD *)v65 + 3) = 0LL;
  if ( v64 )
  {
    v69 = (_DWORD *)v110;
    *((_QWORD *)v65 + 5) = v12;
    if ( (*v69 & 0x20) != 0 )
      v70 = v12 | 1;
    else
      v70 = v12 | 2;
    *((_QWORD *)v65 + 5) = v70;
  }
  v71 = v26 & 1;
  if ( v71 )
    goto LABEL_251;
  *((_DWORD *)v65 + 14) |= 0x10000u;
  if ( (v17 & 0x400000) != 0 )
    *((_DWORD *)v65 + 14) |= 0x4000u;
  if ( (v88 & 0x44) == 0 )
    *((_DWORD *)v65 + 14) |= 0x800u;
  if ( (v17 & 0x200000) == 0 )
  {
LABEL_251:
    v82 = v91;
    goto LABEL_252;
  }
  *((_DWORD *)v65 + 14) |= 0x40u;
  v72 = *((_QWORD *)v65 + 6);
  if ( v72 > qword_1402FE2B8 )
  {
    ObfDereferenceObject(v65);
    return -1073741801;
  }
  v73 = KeGetCurrentThread();
  --v73->SpecialApcDisable;
  v74 = KeAbPreAcquire((ULONG_PTR)&qword_1402FE2A0, 0LL, 0LL);
  v75 = v74;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FE2A0, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_1402FE2A0, v74, (ULONG_PTR)&qword_1402FE2A0);
  if ( v75 )
    *(_BYTE *)(v75 + 26) |= 1u;
  EmptyAddressRangeDownTree = MiFindEmptyAddressRangeDownTree(
                                (unsigned int)&qword_1402FE298,
                                v72,
                                0x10000,
                                0x10000,
                                qword_1402FE2B8,
                                (__int64)&v105);
  if ( EmptyAddressRangeDownTree < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE2A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE2A0);
    KeAbPostRelease((ULONG_PTR)&qword_1402FE2A0);
    KiLeaveGuardedRegionUnsafe((__int64)v73);
    ObfDereferenceObject(v94);
    return EmptyAddressRangeDownTree;
  }
  v77 = v94;
  v78 = v105 >> 12;
  *((_QWORD *)v65 + 3) = v105 >> 12;
  LOBYTE(v79) = 0;
  v77[4] = ((v72 + 4095) >> 12) + v78 - 1;
  v80 = qword_1402FE298;
  v81 = *((_QWORD *)v65 + 3);
  if ( !qword_1402FE298 )
    goto LABEL_248;
  while ( v81 <= (*(unsigned int *)(v80 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v80 + 33) << 32))
       && v81 < (*(unsigned int *)(v80 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v80 + 32) << 32)) )
  {
    v79 = *(_QWORD *)v80;
    if ( !*(_QWORD *)v80 )
      goto LABEL_248;
LABEL_246:
    v80 = v79;
  }
  v79 = *(_QWORD *)(v80 + 8);
  if ( v79 )
    goto LABEL_246;
  LOBYTE(v79) = 1;
LABEL_248:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_1402FE298, v80, v79, (unsigned __int64)v77);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE2A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE2A0);
  KeAbPostRelease((ULONG_PTR)&qword_1402FE2A0);
  KiLeaveGuardedRegionUnsafe((__int64)v73);
  v82 = v92;
LABEL_252:
  v83 = _InterlockedCompareExchange64((volatile signed __int64 *)(v82 + 24), -1LL, -1LL);
  v84 = v94;
  if ( ((*(_DWORD *)v110 & 0x8000) == 0 || v71 || (v87 & 8) != 0) && *((_QWORD *)v94 + 6) <= v83
    || (v103 = *(LARGE_INTEGER *)((char *)v94 + 48),
        v85 = v94,
        *((_QWORD *)v94 + 6) = v83,
        ImageRequiredSigningLevel = MmExtendSection((__int64)v85, &v103, v71 != 0),
        ImageRequiredSigningLevel >= 0) )
  {
    *a1 = v84;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 && !*(_QWORD *)(v89 + 64) )
      MiLogSectionObjectEvent(v84, 1LL);
  }
  else
  {
    ObfDereferenceObject(v84);
  }
  return ImageRequiredSigningLevel;
}
