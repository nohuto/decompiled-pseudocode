/*
 * XREFs of MiCreateSection @ 0x14042BC10
 * Callers:
 *     MmCreateSystemSection @ 0x140082E5C (MmCreateSystemSection.c)
 *     MmCreateSection @ 0x14042BAE0 (MmCreateSection.c)
 *     MmCreateSpecialImageSection @ 0x14045CE40 (MmCreateSpecialImageSection.c)
 *     MmCreateSectionEx @ 0x140470334 (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x140470450 (MmCreateCacheManagerSection.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReferenceControlAreaForCacheManager @ 0x140021098 (MiReferenceControlAreaForCacheManager.c)
 *     CcWaitForUninitializeCacheMap @ 0x140021E00 (CcWaitForUninitializeCacheMap.c)
 *     IoSetTopLevelIrp @ 0x140024B10 (IoSetTopLevelIrp.c)
 *     MiReferenceControlArea @ 0x140025BE4 (MiReferenceControlArea.c)
 *     MiReleaseControlAreaWaiters @ 0x140026868 (MiReleaseControlAreaWaiters.c)
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     MiDereferenceControlAreaBySection @ 0x14002712C (MiDereferenceControlAreaBySection.c)
 *     MiMakeProtectionMask @ 0x14002B880 (MiMakeProtectionMask.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ObDereferenceObjectEx @ 0x140074EFC (ObDereferenceObjectEx.c)
 *     ObReferenceObjectExWithTag @ 0x140095D40 (ObReferenceObjectExWithTag.c)
 *     MiZeroSectionObjectPointer @ 0x1400B2FC0 (MiZeroSectionObjectPointer.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ObFastReplaceObject @ 0x1400CADF4 (ObFastReplaceObject.c)
 *     IoAllowExecution @ 0x1400F9408 (IoAllowExecution.c)
 *     MmChangeSectionBackingFile @ 0x1400FAD40 (MmChangeSectionBackingFile.c)
 *     PsIsCurrentThreadPrefetching @ 0x1400FB220 (PsIsCurrentThreadPrefetching.c)
 *     KeEnterCriticalRegionThread @ 0x14013424C (KeEnterCriticalRegionThread.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ObCreateObjectEx @ 0x14041C830 (ObCreateObjectEx.c)
 *     MiRelocateImageAgain @ 0x14042B18C (MiRelocateImageAgain.c)
 *     FsRtlGetFileSize @ 0x14042B324 (FsRtlGetFileSize.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x14042CC68 (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlReleaseFile @ 0x14042CD30 (FsRtlReleaseFile.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     SeCompareSigningLevels @ 0x14045C0B0 (SeCompareSigningLevels.c)
 *     MiCreatePagingFileMap @ 0x1404A2750 (MiCreatePagingFileMap.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x1404A698C (MiFindEmptyAddressRangeDownTree.c)
 *     ObCheckActiveHandles @ 0x1404BEA38 (ObCheckActiveHandles.c)
 *     SeGetImageRequiredSigningLevel @ 0x140503AB4 (SeGetImageRequiredSigningLevel.c)
 *     SeCompareSigningLevelsForAuditableProcess @ 0x14050491C (SeCompareSigningLevelsForAuditableProcess.c)
 *     MmExtendSection @ 0x14050494C (MmExtendSection.c)
 *     MiCreateNewSection @ 0x1405050A8 (MiCreateNewSection.c)
 *     MiValidateSectionCreate @ 0x140509DEC (MiValidateSectionCreate.c)
 *     MiLogSectionCreate @ 0x1406592F4 (MiLogSectionCreate.c)
 *     MiLogSectionObjectEvent @ 0x1406593F0 (MiLogSectionObjectEvent.c)
 *     MiCreatePerSessionProtos @ 0x140661C44 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x140661DDC (MiDereferencePerSessionProtos.c)
 *     SeRevalidateImage @ 0x14068CA74 (SeRevalidateImage.c)
 */

NTSTATUS __fastcall MiCreateSection(
        _QWORD *a1,
        __int64 a2,
        char a3,
        __int64 *a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        unsigned __int8 a8,
        __int64 a9,
        struct _FILE_OBJECT *a10,
        unsigned __int8 a11,
        unsigned int a12)
{
  int v13; // eax
  int v14; // ecx
  __int64 *i; // r12
  unsigned int v16; // ebx
  unsigned int v17; // r13d
  unsigned int v18; // r14d
  unsigned int v19; // r8d
  int ProtectionMask; // eax
  unsigned __int16 v21; // r8
  struct _OBJECT_HANDLE_INFORMATION *HandleInformation; // r9
  void *v23; // r10
  int v24; // r11d
  int v25; // esi
  ACCESS_MASK v26; // edx
  struct _FILE_OBJECT *v27; // rsi
  __int64 *SectionObjectPointer; // rcx
  __int64 v29; // rax
  struct _FILE_OBJECT *v30; // r12
  NTSTATUS result; // eax
  int v32; // r14d
  int v33; // ebx
  struct _KTHREAD *v34; // r15
  int v35; // ebx
  int v36; // esi
  unsigned int v37; // ebx
  __int64 v38; // rsi
  int PerSessionProtos; // r14d
  _QWORD *v40; // rbx
  void *v41; // rax
  signed __int64 v42; // rax
  __int64 v43; // r15
  PVOID v44; // rbx
  char v45; // cl
  __int64 *v46; // rax
  signed __int64 v47; // rax
  __int64 v48; // rax
  PVOID v49; // rcx
  LARGE_INTEGER v50; // rcx
  unsigned __int64 v51; // rax
  int v52; // edx
  int v53; // eax
  unsigned int v54; // r13d
  unsigned __int8 v55; // r14
  __int64 v56; // rcx
  unsigned __int8 v57; // al
  int v58; // eax
  unsigned int v59; // edx
  LARGE_INTEGER v60; // rax
  bool v61; // cf
  int v62; // eax
  _DWORD *v63; // r14
  unsigned int v64; // r12d
  unsigned int v65; // r13d
  char v66; // r13
  int v67; // ecx
  int v68; // r8d
  __int64 v69; // rax
  PVOID v70; // rsi
  __int128 v71; // xmm1
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  unsigned __int64 v74; // rcx
  __int64 v75; // rcx
  int v76; // ebx
  unsigned __int64 v77; // r13
  struct _KTHREAD *CurrentThread; // r12
  _BYTE *v79; // rax
  _BYTE *v80; // r15
  int EmptyAddressRangeDownTree; // r15d
  _QWORD *v82; // r9
  unsigned __int64 v83; // rcx
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // rdx
  unsigned __int64 v86; // r8
  unsigned __int64 v87; // rax
  PVOID v88; // rdi
  PVOID v89; // rcx
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  __int64 v91; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v92; // [rsp+68h] [rbp-98h] BYREF
  __int64 v93; // [rsp+70h] [rbp-90h] BYREF
  PVOID v94; // [rsp+78h] [rbp-88h]
  __int64 v95; // [rsp+80h] [rbp-80h] BYREF
  int v96; // [rsp+88h] [rbp-78h]
  PVOID v97; // [rsp+90h] [rbp-70h] BYREF
  int v98; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v99[2]; // [rsp+9Ch] [rbp-64h] BYREF
  int v100; // [rsp+A4h] [rbp-5Ch]
  int v101; // [rsp+A8h] [rbp-58h]
  __int128 v102; // [rsp+B0h] [rbp-50h]
  __int128 v103; // [rsp+C0h] [rbp-40h]
  __int128 v104; // [rsp+D0h] [rbp-30h]
  __int64 v105[2]; // [rsp+E0h] [rbp-20h] BYREF
  LARGE_INTEGER FileSize; // [rsp+F0h] [rbp-10h] BYREF
  PVOID v107; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v108; // [rsp+100h] [rbp+0h] BYREF
  __int64 v109; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v110[24]; // [rsp+110h] [rbp+10h] BYREF
  char v113; // [rsp+1F0h] [rbp+F0h]
  unsigned int v114; // [rsp+1F0h] [rbp+F0h]
  _DWORD *v116; // [rsp+1F8h] [rbp+F8h]
  int v117; // [rsp+208h] [rbp+108h]

  v113 = a3;
  v13 = a3 & 1;
  v100 = v13;
  v14 = a3 & 2;
  v96 = a11;
  v101 = v14;
  for ( i = a4; ; i = a4 )
  {
    v94 = 0LL;
    v16 = 0;
    if ( v13 )
      v16 = 2048;
    LODWORD(v91) = v16;
    if ( v14 )
    {
      v16 |= 1u;
      LODWORD(v91) = v16;
      if ( (a3 & 8) != 0 )
      {
        v16 |= 0x10000u;
        LODWORD(v91) = v16;
      }
      if ( (a3 & 4) != 0 )
      {
        v16 |= 0x10000u;
        LODWORD(v91) = v16;
      }
    }
    if ( (a6 & 0x1100000) == 0x1100000 )
    {
      v16 |= 0x200u;
      LODWORD(v91) = v16;
      a6 &= ~0x100000u;
    }
    if ( (a6 & 0x100000) != 0 )
    {
      if ( (a6 & 0x200000) != 0 )
      {
        a6 &= ~0x200000u;
        v16 |= 0x40u;
      }
      v16 |= 0x20u;
      v17 = a6 & 0xFFEFFFFF;
      LODWORD(v91) = v16;
      if ( (v17 & 0x400000) != 0 )
      {
        v17 &= ~0x400000u;
        a8 = 12;
        v16 |= 0x100u;
        LODWORD(v91) = v16;
      }
      else
      {
        a8 = 1;
      }
    }
    else
    {
      if ( (a6 & 0x2000000) == 0 )
        goto LABEL_23;
      v16 |= 0x10u;
      LODWORD(v91) = v16;
      if ( (a6 & 0x400000) != 0 )
      {
        a6 &= ~0x400000u;
        a8 = 12;
      }
      else
      {
        a8 = 4;
      }
      v17 = a6 & 0xFDFFFFFF;
    }
    a6 = v17 | 0x1000000;
LABEL_23:
    v18 = a6 & 0x7F;
    v99[1] = v18;
    if ( v18 > (unsigned __int16)KeNumberNodes )
      return -1073741580;
    a6 &= 0xFFFFFF80;
    v117 = a6;
    if ( (a6 & 0x1000000) != 0 )
    {
      if ( (a3 & 0x10) != 0 )
        LODWORD(v91) = v16 | 0x20000;
      v16 = v91;
      if ( KeGetCurrentThread()->ApcState.Process->SecurePid )
      {
        v16 = v91 | 0x120000;
        LODWORD(v91) = v91 | 0x120000;
      }
      if ( (a6 & 0x11000000) == 0x11000000 )
      {
        v19 = a5;
        if ( a5 != 2 )
          return -1073741755;
        a6 &= ~0x10000000u;
        v117 = a6;
        goto LABEL_36;
      }
      v16 |= 0x400u;
      LODWORD(v91) = v16;
      if ( (v16 & 0x20) != 0 && (MiFlags & 0x4000) != 0 )
      {
        v16 |= 0x20000u;
        LODWORD(v91) = v16;
LABEL_35:
        v19 = a5;
        goto LABEL_36;
      }
      v19 = a5;
      if ( (MiFlags & 0x40000) != 0 )
      {
        v16 |= 0x20000u;
        LODWORD(v91) = v16;
      }
    }
    else if ( (a6 & 0x10000000) != 0 )
    {
      v19 = a5 | 0x200;
      a5 |= 0x200u;
    }
    else
    {
      if ( (a6 & 0x40000000) == 0 )
        goto LABEL_35;
      v19 = a5 | 0x400;
      a5 |= 0x400u;
    }
LABEL_36:
    ProtectionMask = MiMakeProtectionMask(v19);
    v25 = ProtectionMask;
    if ( ProtectionMask == -1 )
      return -1073741755;
    *((_QWORD *)&v104 + 1) = HandleInformation;
    v26 = MmMakeFileAccess[ProtectionMask & 7];
    HIDWORD(v105[1]) ^= (v21 ^ WORD2(v105[1])) & 0xFFF;
    if ( !v23 && !a10 )
    {
      if ( (a6 & 0x1000000) != 0 )
        return -1073741792;
      if ( a6 < 0 )
      {
        if ( (a6 & 0x8000000) == 0 )
          return -1073741580;
        if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v24) )
          return -1073741727;
      }
      result = MiCreatePagingFileMap((unsigned int)&v95, (_DWORD)i, v25, a6, v18);
      if ( result < 0 )
        return result;
      _InterlockedIncrement64(&qword_140323C08);
      v42 = _InterlockedCompareExchange64((volatile signed __int64 *)(v95 + 24), -1LL, -1LL);
      v43 = v95;
      LODWORD(v44) = v91 | 4;
      v105[0] = v42;
      LODWORD(v91) = v91 | 4;
      v38 = *(_QWORD *)v95;
      v92 = *(_QWORD *)v95;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) == 0 )
        goto LABEL_117;
      MiLogSectionCreate(v38, 1LL);
      v45 = a5;
LABEL_187:
      v62 = *(_DWORD *)(v38 + 56);
      v63 = (_DWORD *)(v38 + 56);
      HIDWORD(v105[1]) &= ~0x80000000;
      v64 = v62 & 0xFFF7FFFF;
      *((_QWORD *)&v104 + 1) = v38;
      v116 = (_DWORD *)(v38 + 56);
      LODWORD(v105[1]) = v62 & 0xFFF7FFFF;
      if ( (a6 & 0x1000000) != 0 )
      {
        if ( ((unsigned __int16)v44 & 0x400) == 0 )
        {
          v64 |= 0x80000u;
          LODWORD(v105[1]) = v64;
        }
        if ( a8 <= 1u && ((unsigned int)v44 & 0x20000) == 0 )
          HIDWORD(v105[1]) |= 0x80000000;
      }
      if ( (v62 & 0x4000000) != 0 )
      {
        v65 = a12;
        PerSessionProtos = MiCreatePerSessionProtos(v38, a12);
        if ( PerSessionProtos < 0 )
          goto LABEL_220;
        v63 = (_DWORD *)(v38 + 56);
        HIDWORD(v105[1]) ^= (HIDWORD(v105[1]) ^ (v65 << 12)) & 0x7FFFF000;
      }
      else if ( !a10 && (v45 & 0x44) != 0 && (v62 & 0x20) == 0 && *(_QWORD *)(v38 + 64) )
      {
        LODWORD(v105[1]) = v64 | 0x8000000;
        _InterlockedIncrement((volatile signed __int32 *)(v38 + 92));
        v44 = v94;
        if ( !(unsigned __int8)ObCheckActiveHandles(v94) )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v38 + 92));
          ObfDereferenceObject(v44);
          LOBYTE(v44) = v91;
          PerSessionProtos = -1073741788;
          v38 = v92;
          goto LABEL_222;
        }
        LOBYTE(v44) = v91;
        v64 = v105[1];
        v38 = v92;
        v43 = v95;
      }
      v66 = 0;
      if ( v94 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v94 + 1) + 52LL) & 0x10) != 0 )
          v66 = 1;
        else
          ObfDereferenceObject(v94);
      }
      if ( (*v63 & 0x20) != 0 || !*(_QWORD *)(v38 + 64) )
      {
        v68 = 128;
        v67 = 8 * *(_DWORD *)(v43 + 8) + 64;
        v69 = v38 + 128;
        do
        {
          v69 = *(_QWORD *)(v69 + 16);
          v68 += 56;
        }
        while ( v69 );
      }
      else
      {
        v67 = 0;
        v68 = 112 * *(_DWORD *)(v38 + 248) + 152;
      }
      PerSessionProtos = ObCreateObjectEx(v96, MmSectionObjectType, a2, v96, (__int64)Object, 64, v67, v68, &v97, 0LL);
      if ( PerSessionProtos >= 0 )
      {
        v70 = v97;
        v71 = v103;
        *(_OWORD *)v97 = v102;
        v72 = v104;
        *((_OWORD *)v70 + 1) = v71;
        v73 = *(_OWORD *)v105;
        *((_OWORD *)v70 + 2) = v72;
        *((_OWORD *)v70 + 3) = v73;
        *((_QWORD *)v70 + 3) = 0LL;
        if ( v66 == 1 )
        {
          v74 = (unsigned __int64)v94;
          *((_QWORD *)v70 + 5) = v94;
          if ( (*v116 & 0x20) != 0 )
            v75 = v74 | 1;
          else
            v75 = v74 | 2;
          *((_QWORD *)v70 + 5) = v75;
        }
        v76 = (unsigned __int8)v44 & 1;
        if ( v76 )
          goto LABEL_254;
        *((_DWORD *)v70 + 14) |= 0x10000u;
        if ( (v117 & 0x400000) != 0 )
          *((_DWORD *)v70 + 14) |= 0x4000u;
        if ( (v117 & 0x200000) == 0 )
          goto LABEL_254;
        *((_DWORD *)v70 + 14) |= 0x40u;
        v77 = *((_QWORD *)v70 + 6);
        if ( v77 > qword_1403265B8 )
        {
          ObfDereferenceObject(v70);
          return -1073741801;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v79 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1403265A0, 0LL, 0);
        v80 = v79;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1403265A0, 0LL) )
          ExfAcquirePushLockExclusiveEx(&qword_1403265A0, v79, (ULONG_PTR)&qword_1403265A0);
        if ( v80 )
          v80[26] |= 1u;
        EmptyAddressRangeDownTree = MiFindEmptyAddressRangeDownTree(
                                      (unsigned int)&qword_140326598,
                                      v77,
                                      0x10000,
                                      0x10000,
                                      qword_1403265B8,
                                      (__int64)&v108);
        if ( EmptyAddressRangeDownTree >= 0 )
        {
          v82 = v97;
          v83 = v108 >> 12;
          *((_QWORD *)v70 + 3) = v108 >> 12;
          LOBYTE(v84) = 0;
          v82[4] = ((v77 + 4095) >> 12) + v83 - 1;
          v85 = qword_140326598;
          v86 = *((_QWORD *)v70 + 3);
          if ( !qword_140326598 )
            goto LABEL_251;
          while ( 1 )
          {
            if ( v86 > (*(unsigned int *)(v85 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v85 + 33) << 32))
              || v86 >= (*(unsigned int *)(v85 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v85 + 32) << 32)) )
            {
              v84 = *(_QWORD *)(v85 + 8);
              if ( !v84 )
              {
                LOBYTE(v84) = 1;
LABEL_251:
                RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140326598, v85, v84, (unsigned __int64)v82);
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403265A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403265A0);
                KeAbPostRelease((ULONG_PTR)&qword_1403265A0);
                KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
                v43 = v95;
LABEL_254:
                v87 = _InterlockedCompareExchange64((volatile signed __int64 *)(v43 + 24), -1LL, -1LL);
                v88 = v97;
                if ( (*v116 & 0x8000) != 0 && !v76 && (v91 & 8) == 0 || *((_QWORD *)v97 + 6) > v87 )
                {
                  v109 = *((_QWORD *)v97 + 6);
                  v89 = v97;
                  *((_QWORD *)v97 + 6) = v87;
                  PerSessionProtos = MmExtendSection(v89, &v109, v76 != 0);
                  if ( PerSessionProtos < 0 )
                  {
                    ObfDereferenceObject(v88);
                    return PerSessionProtos;
                  }
                }
                *a1 = v88;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 && !*(_QWORD *)(v92 + 64) )
                {
                  MiLogSectionObjectEvent(v88, 1LL);
                  return PerSessionProtos;
                }
                return PerSessionProtos;
              }
            }
            else
            {
              v84 = *(_QWORD *)v85;
              if ( !*(_QWORD *)v85 )
                goto LABEL_251;
            }
            v85 = v84;
          }
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403265A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403265A0);
        KeAbPostRelease((ULONG_PTR)&qword_1403265A0);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        ObfDereferenceObject(v97);
        return EmptyAddressRangeDownTree;
      }
      if ( (v64 & 0x8000000) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v38 + 92));
        LOBYTE(v44) = v91;
        v38 = v92;
      }
      else if ( (*v116 & 0x4000000) != 0 )
      {
        MiDereferencePerSessionProtos(v38, (HIDWORD(v105[1]) >> 12) & 0x7FFFF);
      }
      if ( v66 != 1 )
        goto LABEL_222;
      goto LABEL_220;
    }
    if ( (a6 & 0x80000) != 0 )
      return -1073741580;
    v27 = a10;
    if ( a10 )
    {
      if ( (a6 & 0x1000000) != 0 )
      {
        if ( (v16 & 1) != 0 )
          return -1073741580;
        if ( *i )
          return -1073741582;
      }
      SectionObjectPointer = (__int64 *)a10->SectionObjectPointer;
      if ( !SectionObjectPointer )
        return -1073741792;
      if ( a2 )
      {
        v24 = (unsigned __int8)v24;
        if ( (*(_DWORD *)(a2 + 24) & 0x200) != 0 )
          v24 = (int)HandleInformation;
        v96 = v24;
      }
      if ( (a6 & 0x1000000) != 0 )
        v29 = SectionObjectPointer[2];
      else
        v29 = *SectionObjectPointer;
      v92 = v29;
      if ( v29 && (int)MiReferenceControlAreaForCacheManager((__int64)a10, a6, v16) >= 0 )
      {
        v46 = (__int64 *)v27->SectionObjectPointer;
        LODWORD(v44) = v16 | 4;
        LODWORD(v91) = (_DWORD)v44;
        if ( (a6 & 0x1000000) != 0 )
        {
          v92 = v46[2];
          v47 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v92 + 24LL), -1LL, -1LL);
          goto LABEL_115;
        }
        v38 = *v46;
        v48 = *i;
        v105[0] = *i;
        v92 = v38;
        if ( ((unsigned __int8)v44 & 1) == 0 && !v48 )
        {
          v47 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v38 + 24LL), -1LL, -1LL);
LABEL_115:
          v38 = v92;
          LODWORD(v44) = v91;
          v105[0] = v47;
        }
        v43 = *(_QWORD *)v38;
        v95 = *(_QWORD *)v38;
LABEL_117:
        v45 = a5;
        goto LABEL_187;
      }
      v94 = v27;
      v30 = v27;
      ObReferenceObjectExWithTag((__int64)v27, 2);
    }
    else
    {
      if ( a6 < 0 )
        return -1073741580;
      result = ObReferenceObjectByHandle(v23, v26, (POBJECT_TYPE)IoFileObjectType, v24, &v107, HandleInformation);
      v30 = (struct _FILE_OBJECT *)v107;
      v94 = v107;
      if ( result < 0 )
        return result;
      if ( !*((_QWORD *)v107 + 5) )
      {
        ObfDereferenceObject(v107);
        return -1073741792;
      }
      ObfReferenceObject(v107);
    }
    memset(v110, 0, 0x80uLL);
    LODWORD(v110[7]) |= 2u;
    v110[8] = v30;
    v95 = 0LL;
    v32 = a6 & 0x1000000;
    if ( (a6 & 0x1000000) != 0 )
    {
      if ( ((v16 >> 10) & 1) != 0 && !IoAllowExecution((__int64)v30) )
      {
        ObDereferenceObjectEx((ULONG_PTR)v30, 2);
        return -1073741790;
      }
      CcWaitForUninitializeCacheMap((__int64)v30);
      if ( ((v16 >> 10) & 1) != 0 && (a8 & 0x10) != 0 )
      {
        v33 = v16 | 0x10;
        LODWORD(v91) = v33;
        if ( (a8 & 0x30) == 0x30 )
          LODWORD(v91) = v33 | 0x1000;
        a8 &= 0xFu;
      }
    }
    v34 = KeGetCurrentThread();
    KeEnterCriticalRegionThread((__int64)v34);
    v35 = v91;
    do
    {
      if ( (v35 & 1) == 0 )
      {
        v36 = FsRtlAcquireToCreateMappedSection(v30, a5, &v98, v99);
        if ( v36 < 0 )
        {
          KeLeaveCriticalRegionThread((__int64)v34);
          ObDereferenceObjectEx((ULONG_PTR)v30, 2);
          return v36;
        }
        if ( (v98 & 4) != 0 && v32 )
          v35 |= 0x10000u;
        if ( (v98 & 2) != 0 && !v32 )
          v35 |= 0x10000u;
        if ( v99[0] )
        {
          if ( ((v99[0] - 1) & v99[0]) == 0 )
          {
            v35 |= 0x2000u;
            if ( v99[0] < (unsigned int)dword_1403276AC )
              dword_1403276AC = v99[0];
          }
        }
        if ( v36 == 299 )
          v37 = v35 | 0x80;
        else
          v37 = v35 & 0xFFFFFF7F;
        IoSetTopLevelIrp((PIRP)1);
        v35 = v37 | 2;
        LODWORD(v91) = v35;
      }
    }
    while ( (unsigned int)MiReferenceControlArea(a6, v30, (__int64)v110, v35 & 1, &v92) != 1 );
    v38 = v92;
    if ( (*(_DWORD *)(v92 + 56) & 2) == 0 )
      break;
    PerSessionProtos = MiCreateNewSection(
                         v30,
                         a6,
                         a12,
                         a7,
                         (__int64)&a8,
                         (__int64)a4,
                         (__int64)&v91,
                         (__int64)&v95,
                         (__int64)v105);
    if ( PerSessionProtos >= 0 )
    {
      KeLeaveCriticalRegionThread((__int64)v34);
      v43 = v95;
      LODWORD(v44) = v91;
      v45 = a5;
      v38 = *(_QWORD *)v95;
      v92 = *(_QWORD *)v95;
      goto LABEL_187;
    }
    if ( v95 )
    {
      v38 = *(_QWORD *)v95;
      v92 = *(_QWORD *)v95;
    }
    v40 = (_QWORD *)MiZeroSectionObjectPointer((__int64)v30, v38, a6);
    ObfDereferenceObject(v30);
    if ( (_QWORD *)v38 == v110 )
    {
      v41 = (void *)ObFastReplaceObject((volatile __int64 *)(v38 + 64), 0LL);
      ObfDereferenceObject(v41);
    }
    else
    {
      MiDereferenceControlAreaBySection(v38, 1u);
    }
    MiReleaseControlAreaWaiters(v40);
    KeLeaveCriticalRegionThread((__int64)v34);
    if ( PerSessionProtos != -1073741740 )
      return PerSessionProtos;
    a3 = v113;
    v13 = v100;
    v14 = v101;
  }
  KeLeaveCriticalRegionThread((__int64)v34);
  if ( (*(_DWORD *)(v38 + 56) & 0x200) != 0 && !PsIsCurrentThreadPrefetching() )
    MmChangeSectionBackingFile(0LL, v30, ((a6 & 0x1000000) != 0) + 1);
  ObfDereferenceObject(v30);
  v43 = *(_QWORD *)v38;
  LODWORD(v44) = v35 | 4;
  LODWORD(v91) = (_DWORD)v44;
  v95 = v43;
  if ( ((unsigned __int8)v44 & 1) != 0 || (*(_DWORD *)(v38 + 56) & 0x20) != 0 )
  {
    if ( ((unsigned __int8)v44 & 2) != 0 )
    {
      IoSetTopLevelIrp(0LL);
      FsRtlReleaseFile(v30);
      LODWORD(v44) = (unsigned int)v44 & 0xFFFFFFFD;
      LODWORD(v91) = (_DWORD)v44;
    }
    if ( (a6 & 0x1000000) == 0 )
      goto LABEL_176;
    if ( (*(_DWORD *)(v38 + 56) & 0x800) != 0 && ((unsigned int)v44 & 0x20000) != 0 )
    {
      dword_1403267C0 = 81;
      PerSessionProtos = -1073740749;
      v49 = v30;
LABEL_221:
      ObfDereferenceObject(v49);
      goto LABEL_222;
    }
    if ( ((unsigned __int8)v44 & 0x40) != 0 )
      v52 = 2;
    else
      v52 = ((unsigned __int8)v44 & 0x20) != 0;
    PerSessionProtos = MiRelocateImageAgain(v38, v52);
    if ( PerSessionProtos < 0 )
    {
      v49 = v30;
      goto LABEL_221;
    }
    if ( ((unsigned __int16)v44 & 0x100) != 0 )
    {
      v53 = 4;
    }
    else if ( ((unsigned __int8)v44 & 0x20) != 0 )
    {
      v53 = 1;
    }
    else if ( ((unsigned __int8)v44 & 0x10) != 0 )
    {
      v53 = 2;
      if ( ((unsigned __int16)v44 & 0x1000) != 0 )
        v53 = 8;
    }
    else
    {
      v53 = 0;
    }
    v114 = v53;
    v54 = ((unsigned int)v44 >> 11) & 1;
    if ( v54 )
      v114 = v53 | 0x10;
    if ( (((unsigned int)v44 >> 10) & 1) == 0 || ((unsigned __int8)v44 & 0x10) != 0 || v54 )
    {
      v55 = a8;
LABEL_160:
      v56 = v114;
      if ( ((unsigned int)v44 & 0x20000) != 0 )
      {
        LODWORD(v56) = v114 | 0x40000000;
        v57 = v55;
        v114 |= 0x40000000u;
        if ( !v55 )
          v57 = 4;
        v55 = v57;
        a8 = v57;
      }
      if ( ((unsigned int)v44 & 0x100000) != 0 )
      {
        LODWORD(v56) = v56 | 0x20000000;
        v114 = v56;
      }
      if ( (((unsigned int)v44 >> 10) & 1) == 0 )
        goto LABEL_174;
      if ( ((unsigned __int8)v44 & 0x10) != 0 || (unsigned int)SeRevalidateImage(v56, *(_BYTE *)(v43 + 15) >> 4) )
      {
        v59 = v114;
      }
      else
      {
        v58 = SeCompareSigningLevels(*(_BYTE *)(v43 + 15) >> 4, v55);
        v59 = v114;
        if ( v58
          && ((v114 & 0x40000000) == 0 || (*(_DWORD *)(v38 + 92) & 0xC000000) == 0x8000000)
          && ((*(_BYTE *)(v43 + 15) & 0xF0) != 0 || *(char *)(*(_QWORD *)(v43 + 56) + 46LL) >= 0) )
        {
LABEL_174:
          v30 = (struct _FILE_OBJECT *)v94;
LABEL_175:
          a6 = v117;
LABEL_176:
          v60.QuadPart = _InterlockedCompareExchange64((volatile signed __int64 *)(v43 + 24), -1LL, -1LL);
          LODWORD(v44) = v91;
          v50 = v60;
          v38 = v92;
          v43 = v95;
          FileSize = v60;
LABEL_177:
          v51 = *a4;
          if ( !*a4 )
          {
            LODWORD(v44) = (unsigned int)v44 | 8;
            v105[0] = v50.QuadPart;
            v45 = a5;
            LODWORD(v91) = (_DWORD)v44;
            goto LABEL_187;
          }
          goto LABEL_184;
        }
      }
      v30 = (struct _FILE_OBJECT *)v94;
      LODWORD(Object) = v59;
      PerSessionProtos = MiValidateSectionCreate(v94, v38, a12, a7);
      if ( PerSessionProtos < 0 )
      {
        dword_1403267C0 = 60;
        v49 = v30;
        goto LABEL_221;
      }
      v43 = v95;
      if ( !(unsigned int)SeCompareSigningLevelsForAuditableProcess(
                            KeGetCurrentThread()->ApcState.Process,
                            v54,
                            *(_BYTE *)(v95 + 15) >> 4,
                            a8) )
      {
        PerSessionProtos = -1073740760;
        ObfDereferenceObject(v30);
        LOBYTE(v44) = v91;
        v38 = v92;
        goto LABEL_222;
      }
      goto LABEL_175;
    }
    v55 = a8;
    if ( !a8 )
      goto LABEL_160;
    PerSessionProtos = SeGetImageRequiredSigningLevel(v94, (__int64)&v93);
    if ( PerSessionProtos >= 0 )
    {
      v55 = v93;
      a8 = v93;
      goto LABEL_160;
    }
LABEL_220:
    v49 = v94;
    goto LABEL_221;
  }
  PerSessionProtos = FsRtlGetFileSize(v30, &FileSize);
  IoSetTopLevelIrp(0LL);
  FsRtlReleaseFile(v30);
  LODWORD(v44) = (unsigned int)v44 & 0xFFFFFFFD;
  LODWORD(v91) = (_DWORD)v44;
  if ( PerSessionProtos < 0 )
  {
    v49 = v30;
    goto LABEL_221;
  }
  v50 = FileSize;
  if ( FileSize.QuadPart )
    goto LABEL_177;
  v51 = *a4;
  if ( !*a4 )
  {
    ObfDereferenceObject(v30);
    PerSessionProtos = -1073741538;
    goto LABEL_222;
  }
LABEL_184:
  v61 = v50.QuadPart < v51;
  v45 = a5;
  if ( !v61 )
  {
    LODWORD(v44) = (unsigned int)v44 | 8;
    LODWORD(v91) = (_DWORD)v44;
LABEL_186:
    v105[0] = v51;
    goto LABEL_187;
  }
  if ( (a5 & 0x44) != 0 )
    goto LABEL_186;
  ObfDereferenceObject(v30);
  PerSessionProtos = -1073741760;
LABEL_222:
  if ( ((unsigned __int8)v44 & 4) == 0 )
    return PerSessionProtos;
  MiDereferenceControlAreaBySection(v38, ((unsigned __int8)v44 & 1) == 0);
  return PerSessionProtos;
}
