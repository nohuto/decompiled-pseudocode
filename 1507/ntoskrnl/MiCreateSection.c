/*
 * XREFs of MiCreateSection @ 0x1404B3940
 * Callers:
 *     MmCreateSystemSection @ 0x140153B60 (MmCreateSystemSection.c)
 *     MmCreateSection @ 0x1404710D4 (MmCreateSection.c)
 *     MmCreateCacheManagerSection @ 0x1404B2EDC (MmCreateCacheManagerSection.c)
 *     NtCreateSection @ 0x1404B3660 (NtCreateSection.c)
 *     MmCreateSpecialImageSection @ 0x140508F84 (MmCreateSpecialImageSection.c)
 * Callees:
 *     ObDereferenceObjectEx @ 0x14000C4C0 (ObDereferenceObjectEx.c)
 *     PsIsCurrentThreadPrefetching @ 0x14002EB10 (PsIsCurrentThreadPrefetching.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObFastReplaceObject @ 0x1400864A0 (ObFastReplaceObject.c)
 *     MiReferenceControlAreaForCacheManager @ 0x14008707C (MiReferenceControlAreaForCacheManager.c)
 *     MiReleaseControlAreaWaiters @ 0x1400887AC (MiReleaseControlAreaWaiters.c)
 *     IoSetTopLevelIrp @ 0x140089060 (IoSetTopLevelIrp.c)
 *     MiReferenceControlArea @ 0x140089080 (MiReferenceControlArea.c)
 *     MiDereferenceControlAreaBySection @ 0x140089ED0 (MiDereferenceControlAreaBySection.c)
 *     RtlAvlInsertNodeEx @ 0x14008AD50 (RtlAvlInsertNodeEx.c)
 *     MiMakeProtectionMask @ 0x14008E520 (MiMakeProtectionMask.c)
 *     MiVadCompareVpn @ 0x1400C2460 (MiVadCompareVpn.c)
 *     IoAllowExecution @ 0x1400D0E60 (IoAllowExecution.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectExWithTag @ 0x14010B640 (ObReferenceObjectExWithTag.c)
 *     CcWaitForUninitializeCacheMap @ 0x140122008 (CcWaitForUninitializeCacheMap.c)
 *     MmChangeSectionBackingFile @ 0x14012753C (MmChangeSectionBackingFile.c)
 *     MiZeroSectionObjectPointer @ 0x14012FDF4 (MiZeroSectionObjectPointer.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiDereferencePerSessionProtos @ 0x14021BF98 (MiDereferencePerSessionProtos.c)
 *     MiRelocateImageAgain @ 0x14046B548 (MiRelocateImageAgain.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     MiCreateNewSection @ 0x1404702B8 (MiCreateNewSection.c)
 *     FsRtlGetFileSize @ 0x1404711C4 (FsRtlGetFileSize.c)
 *     ObCreateObjectEx @ 0x14048A8A0 (ObCreateObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     MmExtendSection @ 0x1404B096C (MmExtendSection.c)
 *     MiCreatePagingFileMap @ 0x1404B258C (MiCreatePagingFileMap.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x1404B31B8 (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlReleaseFile @ 0x1404B32F0 (FsRtlReleaseFile.c)
 *     SeGetImageRequiredSigningLevel @ 0x1405090C8 (SeGetImageRequiredSigningLevel.c)
 *     SeCompareSigningLevels @ 0x140509298 (SeCompareSigningLevels.c)
 *     MiValidateSectionCreate @ 0x14051B38C (MiValidateSectionCreate.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x140527A40 (MiFindEmptyAddressRangeDownTree.c)
 *     ObCheckActiveHandles @ 0x1405469D4 (ObCheckActiveHandles.c)
 *     SeCompareSigningLevelsForAuditableProcess @ 0x140555D0C (SeCompareSigningLevelsForAuditableProcess.c)
 *     MiLogSectionCreate @ 0x1406A2DF4 (MiLogSectionCreate.c)
 *     MiLogSectionObjectEvent @ 0x1406A2EF0 (MiLogSectionObjectEvent.c)
 *     MiCreatePerSessionProtos @ 0x1406A3478 (MiCreatePerSessionProtos.c)
 */

int __fastcall MiCreateSection(
        _QWORD *a1,
        __int64 a2,
        char a3,
        unsigned __int64 *a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        struct _FILE_OBJECT *a9,
        unsigned __int8 a10,
        unsigned int a11)
{
  int v12; // eax
  int v13; // ecx
  unsigned __int64 *v14; // r12
  unsigned int v15; // ebx
  unsigned int v16; // r13d
  unsigned int v17; // r15d
  unsigned int v18; // r8d
  unsigned int ProtectionMask; // eax
  unsigned __int16 v20; // r8
  int v21; // r9d
  struct _OBJECT_HANDLE_INFORMATION *HandleInformation; // r10
  void *v23; // r11
  unsigned int v24; // edi
  ACCESS_MASK v25; // edx
  struct _FILE_OBJECT *v26; // rsi
  int result; // eax
  __int64 *SectionObjectPointer; // rcx
  int v29; // r8d
  __int64 v30; // rax
  struct _FILE_OBJECT *v31; // r12
  int v32; // ebx
  struct _KTHREAD *CurrentThread; // r14
  int v34; // ebx
  int NewSection; // edi
  unsigned int v36; // ebx
  volatile __int64 *DataSectionObject; // rsi
  _QWORD *v38; // rbx
  void *v39; // rax
  __int16 v40; // ax
  signed __int64 v41; // rax
  volatile __int64 v42; // r15
  PVOID v43; // rbx
  char v44; // cl
  PSECTION_OBJECT_POINTERS v45; // rax
  signed __int64 v46; // rax
  unsigned __int64 v47; // rax
  __int16 v48; // ax
  __int16 v49; // ax
  unsigned __int64 v50; // rax
  _DWORD *v51; // r14
  int v52; // eax
  int v53; // r8d
  unsigned int v54; // r12d
  unsigned int v55; // r13d
  int ImageRequiredSigningLevel; // r14d
  __int16 v57; // ax
  PVOID v58; // rcx
  LARGE_INTEGER v59; // rcx
  int v60; // edx
  __int64 v61; // rcx
  int v62; // eax
  unsigned int v63; // r13d
  unsigned __int8 v64; // r14
  char v65; // al
  int v66; // eax
  __int64 v67; // r9
  LARGE_INTEGER v68; // rax
  bool v69; // cf
  char v70; // r13
  int v71; // ecx
  int v72; // r8d
  volatile __int64 *v73; // rax
  __int64 v74; // r8
  __int64 v75; // r9
  PVOID v76; // rsi
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  unsigned __int64 v80; // rcx
  __int64 v81; // rcx
  int v82; // ebx
  unsigned __int64 v83; // r12
  struct _KTHREAD *v84; // r15
  __int64 v85; // rax
  __int64 v86; // r9
  __int64 v87; // r13
  int EmptyAddressRangeDownTree; // r13d
  __int16 v89; // ax
  _QWORD *v90; // r13
  bool v91; // r8
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // r12
  _QWORD *v94; // rsi
  _QWORD *v95; // rax
  __int16 v96; // ax
  unsigned __int64 v97; // rax
  PVOID v98; // rdi
  PVOID v99; // rcx
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  __int64 v101; // [rsp+50h] [rbp-B0h] BYREF
  __int64 ImageSectionObject; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v103; // [rsp+60h] [rbp-A0h]
  _DWORD v104[3]; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID v105; // [rsp+70h] [rbp-90h]
  int v106; // [rsp+78h] [rbp-88h]
  PVOID v107; // [rsp+80h] [rbp-80h] BYREF
  int v108; // [rsp+88h] [rbp-78h] BYREF
  int v109; // [rsp+8Ch] [rbp-74h]
  int v110; // [rsp+90h] [rbp-70h]
  unsigned int v111; // [rsp+94h] [rbp-6Ch] BYREF
  LARGE_INTEGER FileSize; // [rsp+98h] [rbp-68h] BYREF
  __int128 v113; // [rsp+A0h] [rbp-60h]
  __int128 v114; // [rsp+B0h] [rbp-50h]
  __int128 v115; // [rsp+C0h] [rbp-40h]
  __int128 v116; // [rsp+D0h] [rbp-30h]
  LARGE_INTEGER v117; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v118; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v119; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v120[24]; // [rsp+100h] [rbp+0h] BYREF
  char v123; // [rsp+1E0h] [rbp+E0h]
  unsigned int v124; // [rsp+1E0h] [rbp+E0h]
  _DWORD *v126; // [rsp+1E8h] [rbp+E8h]
  int v127; // [rsp+1F8h] [rbp+F8h]

  v123 = a3;
  v12 = a3 & 1;
  v110 = v12;
  v13 = a3 & 2;
  v106 = a10;
  v14 = a4;
  v109 = v13;
  while ( 2 )
  {
    v105 = 0LL;
    v15 = 0;
    if ( v12 )
      v15 = 2048;
    LODWORD(v101) = v15;
    if ( v13 )
    {
      v15 |= 1u;
      LODWORD(v101) = v15;
      if ( (a3 & 4) != 0 )
      {
        v15 |= 0x10000u;
        LODWORD(v101) = v15;
      }
    }
    if ( (a6 & 0x1100000) == 0x1100000 )
    {
      v15 |= 0x200u;
      LODWORD(v101) = v15;
      a6 &= ~0x100000u;
    }
    if ( (a6 & 0x100000) != 0 )
    {
      if ( (a6 & 0x200000) != 0 )
      {
        a6 &= ~0x200000u;
        v15 |= 0x40u;
      }
      v15 |= 0x20u;
      v16 = a6 & 0xFFEFFFFF;
      LODWORD(v101) = v15;
      if ( (v16 & 0x400000) != 0 )
      {
        v16 &= ~0x400000u;
        LOBYTE(a7) = 12;
        v15 |= 0x100u;
        LODWORD(v101) = v15;
      }
      else
      {
        LOBYTE(a7) = 1;
      }
    }
    else
    {
      if ( (a6 & 0x2000000) == 0 )
        goto LABEL_21;
      v15 |= 0x10u;
      LODWORD(v101) = v15;
      if ( (a6 & 0x400000) != 0 )
      {
        a6 &= ~0x400000u;
        LOBYTE(a7) = 12;
      }
      else
      {
        LOBYTE(a7) = 4;
      }
      v16 = a6 & 0xFDFFFFFF;
    }
    a6 = v16 | 0x1000000;
LABEL_21:
    v17 = a6 & 0x7F;
    if ( v17 > (unsigned __int16)KeNumberNodes )
      return -1073741580;
    a6 &= 0xFFFFFF80;
    v127 = a6;
    if ( (a6 & 0x1000000) != 0 )
    {
      if ( (BYTE2(MiFlags) & 3u) > 1 )
      {
        v15 |= 0x20000u;
        LODWORD(v101) = v15;
      }
      if ( (a3 & 8) != 0 || (v15 = v101, KeGetCurrentThread()->ApcState.Process->SecurePid) )
      {
        v15 |= 0x20000u;
        LODWORD(v101) = v15;
      }
      v18 = a5;
      if ( (a6 & 0x11000000) == 0x11000000 )
      {
        if ( a5 != 2 )
          return -1073741755;
        a6 &= ~0x10000000u;
        v127 = a6;
      }
      else
      {
        v15 |= 0x400u;
        LODWORD(v101) = v15;
        if ( (v15 & 0x20) != 0 && (MiFlags & 0x30000) != 0 )
        {
          v15 |= 0x20000u;
          LODWORD(v101) = v15;
        }
      }
    }
    else
    {
      v18 = a5;
      if ( (a6 & 0x10000000) != 0 )
      {
        v18 = a5 | 0x200;
      }
      else
      {
        if ( (a6 & 0x40000000) == 0 )
          goto LABEL_39;
        v18 = a5 | 0x400;
      }
      a5 = v18;
    }
LABEL_39:
    ProtectionMask = MiMakeProtectionMask(v18);
    v24 = ProtectionMask;
    if ( ProtectionMask == -1 )
      return -1073741755;
    *((_QWORD *)&v115 + 1) = HandleInformation;
    v25 = MmMakeFileAccess[ProtectionMask & 7];
    v26 = a9;
    v103 = (v20 ^ (unsigned __int16)v21) & 0xFFF ^ v21;
    if ( !v23 )
    {
      if ( !a9 )
      {
        if ( (a6 & 0x1000000) == 0 )
        {
          if ( a6 >= 0 )
            goto LABEL_103;
          if ( (a6 & 0x8000000) != 0 )
          {
            if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v106) )
              return -1073741727;
LABEL_103:
            result = MiCreatePagingFileMap((PVOID ***)&v104[1], v14, v24, a6, v17);
            if ( result < 0 )
              return result;
            v41 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)&v104[1] + 24LL), -1LL, -1LL);
            v42 = *(_QWORD *)&v104[1];
            LODWORD(v43) = v101 | 4;
            *(_QWORD *)&v116 = v41;
            LODWORD(v101) = v101 | 4;
            DataSectionObject = **(volatile __int64 ***)&v104[1];
            ImageSectionObject = **(_QWORD **)&v104[1];
            if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 )
            {
              MiLogSectionCreate(DataSectionObject, 1LL);
              v44 = a5;
              goto LABEL_130;
            }
            goto LABEL_114;
          }
          return -1073741580;
        }
        return -1073741792;
      }
LABEL_48:
      if ( (a6 & 0x1000000) != 0 )
      {
        if ( (v15 & 1) != 0 )
          return -1073741580;
        if ( *v14 )
          return -1073741582;
      }
      SectionObjectPointer = (__int64 *)a9->SectionObjectPointer;
      if ( !SectionObjectPointer )
        return -1073741792;
      if ( a2 )
      {
        v29 = (unsigned __int8)v106;
        if ( (*(_DWORD *)(a2 + 24) & 0x200) != 0 )
          v29 = (int)HandleInformation;
        v106 = v29;
      }
      if ( (a6 & 0x1000000) != 0 )
        v30 = SectionObjectPointer[2];
      else
        v30 = *SectionObjectPointer;
      ImageSectionObject = v30;
      if ( !v30 || (int)MiReferenceControlAreaForCacheManager((__int64)a9, a6, v15) < 0 )
      {
        v105 = v26;
        v31 = v26;
        ObReferenceObjectExWithTag((__int64)v26, 2);
        goto LABEL_66;
      }
      v45 = v26->SectionObjectPointer;
      LODWORD(v43) = v15 | 4;
      LODWORD(v101) = (_DWORD)v43;
      if ( (a6 & 0x1000000) != 0 )
      {
        ImageSectionObject = (__int64)v45->ImageSectionObject;
        v46 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(*(_QWORD *)ImageSectionObject + 24LL),
                -1LL,
                -1LL);
      }
      else
      {
        DataSectionObject = (volatile __int64 *)v45->DataSectionObject;
        v47 = *v14;
        *(_QWORD *)&v116 = *v14;
        ImageSectionObject = (__int64)DataSectionObject;
        if ( ((unsigned __int8)v43 & 1) != 0 || v47 )
          goto LABEL_113;
        v46 = _InterlockedCompareExchange64((volatile signed __int64 *)(*DataSectionObject + 24), -1LL, -1LL);
      }
      DataSectionObject = (volatile __int64 *)ImageSectionObject;
      LODWORD(v43) = v101;
      *(_QWORD *)&v116 = v46;
LABEL_113:
      v42 = *DataSectionObject;
      *(_QWORD *)&v104[1] = *DataSectionObject;
LABEL_114:
      v44 = a5;
      goto LABEL_130;
    }
    if ( a9 )
      goto LABEL_48;
    if ( a6 < 0 )
      return -1073741580;
    result = ObReferenceObjectByHandle(v23, v25, (POBJECT_TYPE)IoFileObjectType, v106, &v119, HandleInformation);
    v31 = (struct _FILE_OBJECT *)v119;
    v105 = v119;
    if ( result < 0 )
      return result;
    if ( !*((_QWORD *)v119 + 5) )
    {
      ObfDereferenceObject(v119);
      return -1073741792;
    }
    ObfReferenceObject(v119);
LABEL_66:
    memset(v120, 0, 0x78uLL);
    LODWORD(v120[7]) |= 2u;
    v120[8] = v31;
    *(_QWORD *)&v104[1] = 0LL;
    if ( (a6 & 0x1000000) != 0 )
    {
      if ( ((v15 >> 10) & 1) != 0 && !IoAllowExecution((__int64)v31) )
      {
        ObDereferenceObjectEx((ULONG_PTR)v31, 2);
        return -1073741790;
      }
      CcWaitForUninitializeCacheMap((__int64)v31);
      if ( ((v15 >> 10) & 1) != 0 && (a7 & 0x10) != 0 )
      {
        v32 = v15 | 0x10;
        LODWORD(v101) = v32;
        if ( (a7 & 0x30) == 0x30 )
          LODWORD(v101) = v32 | 0x1000;
        LOBYTE(a7) = a7 & 0xF;
      }
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v34 = v101;
    do
    {
      if ( (v34 & 1) == 0 )
      {
        NewSection = FsRtlAcquireToCreateMappedSection(v31, a5, &v108, &v111);
        if ( NewSection < 0 )
        {
          v48 = CurrentThread->KernelApcDisable + 1;
          CurrentThread->KernelApcDisable = v48;
          if ( !v48
            && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
            && !CurrentThread->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          ObDereferenceObjectEx((ULONG_PTR)v31, 2);
          return NewSection;
        }
        if ( (v108 & 2) != 0 && (a6 & 0x1000000) == 0 )
          v34 |= 0x10000u;
        if ( v111 )
        {
          if ( ((v111 - 1) & v111) == 0 )
          {
            v34 |= 0x2000u;
            if ( v111 < dword_14034F6DC )
              dword_14034F6DC = v111;
          }
        }
        if ( NewSection == 299 )
          v36 = v34 | 0x80;
        else
          v36 = v34 & 0xFFFFFF7F;
        IoSetTopLevelIrp((PIRP)1);
        v34 = v36 | 2;
        LODWORD(v101) = v34;
      }
    }
    while ( (unsigned int)MiReferenceControlArea(a6, v31, (__int64)v120, v34 & 1, &ImageSectionObject) != 1 );
    DataSectionObject = (volatile __int64 *)ImageSectionObject;
    if ( (*(_DWORD *)(ImageSectionObject + 56) & 2) != 0 )
    {
      NewSection = MiCreateNewSection(v31, a6, a5, v17, a11, (char *)&a7, (__int64)a4, (int *)&v101, &v104[1]);
      if ( NewSection < 0 )
      {
        if ( *(_QWORD *)&v104[1] )
        {
          DataSectionObject = **(volatile __int64 ***)&v104[1];
          ImageSectionObject = **(_QWORD **)&v104[1];
        }
        v38 = (_QWORD *)MiZeroSectionObjectPointer((__int64)v31, (__int64)DataSectionObject, a6);
        ObfDereferenceObject(v31);
        if ( DataSectionObject == v120 )
        {
          v39 = (void *)ObFastReplaceObject(DataSectionObject + 8, 0LL);
          ObfDereferenceObject(v39);
        }
        else
        {
          MiDereferenceControlAreaBySection((__int64)DataSectionObject, 1u);
        }
        MiReleaseControlAreaWaiters(v38);
        v40 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v40;
        if ( !v40
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        if ( NewSection == -1073741740 )
        {
          a3 = v123;
          v12 = v110;
          v13 = v109;
          v14 = a4;
          continue;
        }
        return NewSection;
      }
      v49 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v49;
      if ( !v49
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v50 = *a4;
      if ( !*a4 )
        v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)&v104[1] + 24LL), -1LL, -1LL);
      v42 = *(_QWORD *)&v104[1];
      LODWORD(v43) = v101;
      v44 = a5;
      DataSectionObject = **(volatile __int64 ***)&v104[1];
      ImageSectionObject = **(_QWORD **)&v104[1];
LABEL_129:
      *(_QWORD *)&v116 = v50;
      goto LABEL_130;
    }
    break;
  }
  v57 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v57;
  if ( !v57
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( (DataSectionObject[7] & 0x200) != 0 && !PsIsCurrentThreadPrefetching() )
    MmChangeSectionBackingFile(0LL, v31, ((a6 & 0x1000000) != 0) + 1);
  ObfDereferenceObject(v31);
  v42 = *DataSectionObject;
  LODWORD(v43) = v34 | 4;
  LODWORD(v101) = (_DWORD)v43;
  *(_QWORD *)&v104[1] = v42;
  if ( ((unsigned __int8)v43 & 1) != 0 || (DataSectionObject[7] & 0x20) != 0 )
  {
    if ( ((unsigned __int8)v43 & 2) != 0 )
    {
      IoSetTopLevelIrp(0LL);
      FsRtlReleaseFile(v31);
      LODWORD(v43) = (unsigned int)v43 & 0xFFFFFFFD;
      LODWORD(v101) = (_DWORD)v43;
    }
    if ( (a6 & 0x1000000) == 0 )
      goto LABEL_200;
    if ( (*(_BYTE *)(v42 + 14) & 1) != 0 && ((unsigned int)v43 & 0x20000) != 0 )
    {
      dword_14034E980 = 81;
      ImageRequiredSigningLevel = -1073740749;
      v58 = v31;
      goto LABEL_235;
    }
    if ( ((unsigned __int8)v43 & 0x40) != 0 )
      v60 = 2;
    else
      v60 = ((unsigned __int8)v43 & 0x20) != 0;
    ImageRequiredSigningLevel = MiRelocateImageAgain((__int64)DataSectionObject, v60);
    if ( ImageRequiredSigningLevel < 0 )
    {
      v58 = v31;
      goto LABEL_235;
    }
    v61 = *(_QWORD *)(v42 + 56);
    if ( *(char *)(v61 + 46) < 0 && *(_DWORD *)(v61 + 32) == 17 )
    {
      LODWORD(v43) = (unsigned int)v43 | 0x8000;
      LODWORD(v101) = (_DWORD)v43;
    }
    if ( ((unsigned __int16)v43 & 0x100) != 0 )
    {
      v62 = 4;
    }
    else if ( ((unsigned __int8)v43 & 0x20) != 0 )
    {
      v62 = 1;
    }
    else if ( ((unsigned __int8)v43 & 0x10) != 0 )
    {
      v62 = 2;
      if ( ((unsigned __int16)v43 & 0x1000) != 0 )
        v62 = 8;
    }
    else
    {
      v62 = 0;
    }
    v124 = v62;
    v63 = ((unsigned int)v43 >> 11) & 1;
    if ( v63 )
      v124 = v62 | 0x10;
    if ( (((unsigned int)v43 >> 10) & 1) == 0 && ((unsigned __int16)v43 & 0x8000) == 0
      || ((unsigned __int8)v43 & 0x10) != 0
      || v63 )
    {
      v64 = a7;
    }
    else
    {
      v64 = a7;
      if ( (_BYTE)a7 )
      {
        ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel(v105, (__int64)v104);
        if ( ImageRequiredSigningLevel < 0 )
          goto LABEL_234;
        v64 = v104[0];
        LOBYTE(a7) = v104[0];
      }
    }
    if ( ((unsigned int)v43 & 0x20000) != 0 )
    {
      v124 |= 0x40000000u;
      v65 = v64;
      if ( !v64 )
        v65 = 4;
      v64 = v65;
      LOBYTE(a7) = v65;
    }
    if ( (((unsigned int)v43 >> 10) & 1) == 0 && ((unsigned __int16)v43 & 0x8000) == 0 )
      goto LABEL_198;
    if ( ((unsigned __int8)v43 & 0x10) != 0 )
    {
      v67 = v124;
    }
    else
    {
      v66 = SeCompareSigningLevels(*(_BYTE *)(v42 + 15) >> 4, v64);
      v67 = v124;
      if ( v66
        && ((v124 & 0x40000000) == 0 || (*((_DWORD *)DataSectionObject + 23) & 0xC000000) == 0x8000000)
        && ((*(_BYTE *)(v42 + 15) & 0xF0) != 0 || *(char *)(*(_QWORD *)(v42 + 56) + 46LL) >= 0) )
      {
LABEL_198:
        v31 = (struct _FILE_OBJECT *)v105;
LABEL_199:
        a6 = v127;
LABEL_200:
        v68.QuadPart = _InterlockedCompareExchange64((volatile signed __int64 *)(v42 + 24), -1LL, -1LL);
        LODWORD(v43) = v101;
        v59 = v68;
        DataSectionObject = (volatile __int64 *)ImageSectionObject;
        v42 = *(_QWORD *)&v104[1];
        FileSize = v68;
        goto LABEL_201;
      }
    }
    v31 = (struct _FILE_OBJECT *)v105;
    LOBYTE(Object) = v64;
    ImageRequiredSigningLevel = MiValidateSectionCreate(v105, DataSectionObject, a11, v67, (_DWORD)Object);
    if ( ImageRequiredSigningLevel < 0 )
    {
      dword_14034E980 = 60;
      v58 = v31;
      goto LABEL_235;
    }
    v42 = *(_QWORD *)&v104[1];
    if ( !(unsigned int)SeCompareSigningLevelsForAuditableProcess(
                          KeGetCurrentThread()->ApcState.Process,
                          v63,
                          *(_BYTE *)(*(_QWORD *)&v104[1] + 15LL) >> 4,
                          (unsigned __int8)a7) )
    {
      ImageRequiredSigningLevel = -1073740760;
      ObfDereferenceObject(v31);
      LOBYTE(v43) = v101;
      DataSectionObject = (volatile __int64 *)ImageSectionObject;
      goto LABEL_236;
    }
    goto LABEL_199;
  }
  ImageRequiredSigningLevel = FsRtlGetFileSize(v31, &FileSize);
  IoSetTopLevelIrp(0LL);
  FsRtlReleaseFile(v31);
  LODWORD(v43) = (unsigned int)v43 & 0xFFFFFFFD;
  LODWORD(v101) = (_DWORD)v43;
  if ( ImageRequiredSigningLevel < 0 )
  {
    v58 = v31;
LABEL_235:
    ObfDereferenceObject(v58);
LABEL_236:
    if ( ((unsigned __int8)v43 & 4) != 0 )
      MiDereferenceControlAreaBySection((__int64)DataSectionObject, ((unsigned __int8)v43 & 1) == 0);
    return ImageRequiredSigningLevel;
  }
  v59 = FileSize;
  if ( !FileSize.QuadPart )
  {
    v50 = *a4;
    if ( !*a4 )
    {
      ObfDereferenceObject(v31);
      ImageRequiredSigningLevel = -1073741538;
      goto LABEL_236;
    }
LABEL_208:
    v69 = v59.QuadPart < v50;
    v44 = a5;
    if ( v69 )
    {
      if ( (a5 & 0x44) == 0 )
      {
        ObfDereferenceObject(v31);
        ImageRequiredSigningLevel = -1073741760;
        goto LABEL_236;
      }
    }
    else
    {
      LODWORD(v43) = (unsigned int)v43 | 8;
      LODWORD(v101) = (_DWORD)v43;
    }
    goto LABEL_129;
  }
LABEL_201:
  v50 = *a4;
  if ( *a4 )
    goto LABEL_208;
  LODWORD(v43) = (unsigned int)v43 | 8;
  *(LARGE_INTEGER *)&v116 = v59;
  v44 = a5;
  LODWORD(v101) = (_DWORD)v43;
LABEL_130:
  v51 = DataSectionObject + 7;
  v52 = *((_DWORD *)DataSectionObject + 14);
  v53 = v103 & 0x7FFFFFFF;
  *((_QWORD *)&v115 + 1) = DataSectionObject;
  v54 = v52 & 0xFFF7FFFF;
  v126 = DataSectionObject + 7;
  v103 = v53;
  HIDWORD(v116) = v53;
  DWORD2(v116) = v52 & 0xFFF7FFFF;
  if ( (a6 & 0x1000000) != 0 )
  {
    if ( ((unsigned __int16)v43 & 0x400) == 0 )
    {
      v54 |= 0x80000u;
      DWORD2(v116) = v54;
    }
    if ( (unsigned __int8)a7 <= 1u && ((unsigned int)v43 & 0x20000) == 0 )
    {
      v103 = v53 | 0x80000000;
      HIDWORD(v116) = v53 | 0x80000000;
    }
  }
  if ( (v52 & 0x4000000) == 0 )
  {
    if ( !a9 && (v44 & 0x44) != 0 && (v52 & 0x20) == 0 && *((_QWORD *)DataSectionObject + 8) )
    {
      v54 |= 0x8000000u;
      DWORD2(v116) = v54;
      _InterlockedIncrement((volatile signed __int32 *)DataSectionObject + 23);
      v43 = v105;
      if ( !(unsigned __int8)ObCheckActiveHandles(v105) )
      {
        _InterlockedDecrement((volatile signed __int32 *)DataSectionObject + 23);
        ObfDereferenceObject(v43);
        LOBYTE(v43) = v101;
        ImageRequiredSigningLevel = -1073741788;
        DataSectionObject = (volatile __int64 *)ImageSectionObject;
        goto LABEL_236;
      }
      LOBYTE(v43) = v101;
      DataSectionObject = (volatile __int64 *)ImageSectionObject;
      v42 = *(_QWORD *)&v104[1];
    }
    goto LABEL_219;
  }
  v55 = a11;
  ImageRequiredSigningLevel = MiCreatePerSessionProtos(DataSectionObject, a11);
  if ( ImageRequiredSigningLevel < 0 )
  {
LABEL_234:
    v58 = v105;
    goto LABEL_235;
  }
  v51 = DataSectionObject + 7;
  v103 ^= (v103 ^ (v55 << 12)) & 0x7FFFF000;
  HIDWORD(v116) = v103;
LABEL_219:
  v70 = 0;
  if ( v105 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v105 + 1) + 52LL) & 0x10) != 0 )
      v70 = 1;
    else
      ObfDereferenceObject(v105);
  }
  if ( (*v51 & 0x20) != 0 || !*((_QWORD *)DataSectionObject + 8) )
  {
    v72 = 120;
    v71 = 8 * *(_DWORD *)(v42 + 8) + 64;
    v73 = DataSectionObject + 15;
    do
    {
      v73 = (volatile __int64 *)*((_QWORD *)v73 + 2);
      v72 += 56;
    }
    while ( v73 );
  }
  else
  {
    v71 = 0;
    v72 = 112 * *((_DWORD *)DataSectionObject + 60) + 144;
  }
  ImageRequiredSigningLevel = ObCreateObjectEx(
                                v106,
                                MmSectionObjectType,
                                a2,
                                v106,
                                (__int64)Object,
                                64,
                                v71,
                                v72,
                                &v107,
                                0LL);
  if ( ImageRequiredSigningLevel < 0 )
  {
    if ( (v54 & 0x8000000) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)DataSectionObject + 23);
      LOBYTE(v43) = v101;
      DataSectionObject = (volatile __int64 *)ImageSectionObject;
    }
    else if ( (*v126 & 0x4000000) != 0 )
    {
      MiDereferencePerSessionProtos(DataSectionObject, (v103 >> 12) & 0x7FFFF, v74, v75);
    }
    if ( v70 != 1 )
      goto LABEL_236;
    goto LABEL_234;
  }
  v76 = v107;
  v77 = v114;
  *(_OWORD *)v107 = v113;
  v78 = v115;
  *((_OWORD *)v76 + 1) = v77;
  v79 = v116;
  *((_OWORD *)v76 + 2) = v78;
  *((_OWORD *)v76 + 3) = v79;
  *((_QWORD *)v76 + 3) = 0LL;
  if ( v70 == 1 )
  {
    v80 = (unsigned __int64)v105;
    *((_QWORD *)v76 + 5) = v105;
    if ( (*v126 & 0x20) != 0 )
      v81 = v80 | 1;
    else
      v81 = v80 | 2;
    *((_QWORD *)v76 + 5) = v81;
  }
  v82 = (unsigned __int8)v43 & 1;
  if ( v82 )
    goto LABEL_276;
  *((_DWORD *)v76 + 14) |= 0x10000u;
  if ( (v127 & 0x400000) != 0 )
    *((_DWORD *)v76 + 14) |= 0x4000u;
  if ( (a5 & 0x44) == 0 )
    *((_DWORD *)v76 + 14) |= 0x800u;
  if ( (v127 & 0x200000) == 0 )
    goto LABEL_276;
  *((_DWORD *)v76 + 14) |= 0x40u;
  v83 = *((_QWORD *)v76 + 6);
  if ( v83 > qword_14034E7B8 )
  {
    ObfDereferenceObject(v76);
    return -1073741801;
  }
  v84 = KeGetCurrentThread();
  --v84->SpecialApcDisable;
  v85 = KeAbPreAcquire((ULONG_PTR)&qword_14034E7A0, 0LL, 0LL, v75);
  v87 = v85;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14034E7A0, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_14034E7A0, v85, (ULONG_PTR)&qword_14034E7A0, v86);
  if ( v87 )
    *(_BYTE *)(v87 + 26) |= 1u;
  EmptyAddressRangeDownTree = MiFindEmptyAddressRangeDownTree(
                                (unsigned int)&qword_14034E798,
                                v83,
                                0x10000,
                                0x10000,
                                qword_14034E7B8,
                                (__int64)&v118);
  if ( EmptyAddressRangeDownTree >= 0 )
  {
    v90 = v107;
    v91 = 0;
    v92 = v118 >> 12;
    *((_QWORD *)v76 + 3) = v118 >> 12;
    v90[4] = ((v83 + 4095) >> 12) + v92 - 1;
    v93 = *((_QWORD *)v76 + 3);
    v94 = (_QWORD *)qword_14034E798;
    if ( !qword_14034E798 )
      goto LABEL_270;
    while ( 1 )
    {
      if ( (int)MiVadCompareVpn(v93, (__int64)v94) < 0 )
      {
        v95 = (_QWORD *)*v94;
        if ( !*v94 )
        {
          v91 = 0;
LABEL_270:
          RtlAvlInsertNodeEx((unsigned __int64 *)&qword_14034E798, (unsigned __int64)v94, v91, (unsigned __int64)v90);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034E7A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034E7A0);
          KeAbPostRelease((ULONG_PTR)&qword_14034E7A0);
          v96 = v84->SpecialApcDisable + 1;
          v84->SpecialApcDisable = v96;
          if ( !v96 && ($CD287064E7C9F7953DE243E927CFCB99 *)v84->ApcState.ApcListHead[0].Flink != &v84->152 )
            KiCheckForKernelApcDelivery();
          v42 = *(_QWORD *)&v104[1];
LABEL_276:
          v97 = _InterlockedCompareExchange64((volatile signed __int64 *)(v42 + 24), -1LL, -1LL);
          v98 = v107;
          if ( (*v126 & 0x8000) != 0 && !v82 && (v101 & 8) == 0 || *((_QWORD *)v107 + 6) > v97 )
          {
            v117 = *(LARGE_INTEGER *)((char *)v107 + 48);
            v99 = v107;
            *((_QWORD *)v107 + 6) = v97;
            ImageRequiredSigningLevel = MmExtendSection((__int64)v99, &v117, v82 != 0);
            if ( ImageRequiredSigningLevel < 0 )
            {
              ObfDereferenceObject(v98);
              return ImageRequiredSigningLevel;
            }
          }
          *a1 = v98;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 && !*(_QWORD *)(ImageSectionObject + 64) )
          {
            MiLogSectionObjectEvent(v98, 1LL);
            return ImageRequiredSigningLevel;
          }
          return ImageRequiredSigningLevel;
        }
      }
      else
      {
        v95 = (_QWORD *)v94[1];
        if ( !v95 )
        {
          v91 = 1;
          goto LABEL_270;
        }
      }
      v94 = v95;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034E7A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034E7A0);
  KeAbPostRelease((ULONG_PTR)&qword_14034E7A0);
  v89 = v84->SpecialApcDisable + 1;
  v84->SpecialApcDisable = v89;
  if ( !v89 && ($CD287064E7C9F7953DE243E927CFCB99 *)v84->ApcState.ApcListHead[0].Flink != &v84->152 )
    KiCheckForKernelApcDelivery();
  ObfDereferenceObject(v107);
  return EmptyAddressRangeDownTree;
}
