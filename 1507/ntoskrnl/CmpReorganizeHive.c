/*
 * XREFs of CmpReorganizeHive @ 0x1404AD5C4
 * Callers:
 *     CmpInitializeHive @ 0x1404ACE6C (CmpInitializeHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x14001B168 (RtlClearAllBits.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     HvpMapEntryGetFreeBin @ 0x14006215C (HvpMapEntryGetFreeBin.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     RtlSetAllBits @ 0x1400D8FF8 (RtlSetAllBits.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x14049FB30 (HvpGetCellMap.c)
 *     CmpDoFileSetSizeEx @ 0x1404AF608 (CmpDoFileSetSizeEx.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpDestroySecurityCache @ 0x1404EE838 (CmpDestroySecurityCache.c)
 *     CmpCopyKeyPartial @ 0x1404F2C38 (CmpCopyKeyPartial.c)
 *     CmpCopySyncTree @ 0x140585040 (CmpCopySyncTree.c)
 *     CmpClearKeyAccessBits @ 0x14058ECA8 (CmpClearKeyAccessBits.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1405BF98C (CmpUpdateReorganizeRegistryValues.c)
 *     HvMarkBaseBlockDirty @ 0x1405C267C (HvMarkBaseBlockDirty.c)
 *     CmpLogReorganizeEvent @ 0x140653BC4 (CmpLogReorganizeEvent.c)
 *     CmpCreateTemporaryHive @ 0x140661CA8 (CmpCreateTemporaryHive.c)
 *     CmpDestroyTemporaryHive @ 0x140661D60 (CmpDestroyTemporaryHive.c)
 *     HvViewMapAddressForFileOffset @ 0x1406629CC (HvViewMapAddressForFileOffset.c)
 *     HvViewMapPinForFileOffset @ 0x140663004 (HvViewMapPinForFileOffset.c)
 */

__int64 __fastcall CmpReorganizeHive(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v3; // r12
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v5; // rcx
  unsigned __int64 v6; // rtt
  __int64 v7; // r10
  unsigned int v8; // r8d
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rtt
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  unsigned __int64 v14; // rtt
  __int16 v15; // ax
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  __int64 TemporaryHive; // rax
  ULONG_PTR v19; // rbp
  unsigned __int64 v20; // rtt
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  __int64 v23; // rdx
  int v24; // ebx
  int v25; // r9d
  unsigned int v26; // r13d
  ULONG_PTR v27; // rdi
  struct _KTHREAD *v28; // r14
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rbx
  int v32; // eax
  ULONG_PTR v33; // rdi
  signed __int32 v34; // eax
  __int64 v35; // rdx
  unsigned int v36; // r15d
  __int64 v37; // rdx
  __int64 v38; // r14
  unsigned __int64 v39; // rtt
  struct _KTHREAD *v40; // rcx
  __int16 v41; // ax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rdx
  int v45; // r8d
  unsigned int i; // edi
  __int64 CellMap; // rbx
  __int64 FreeBin; // rax
  unsigned int v49; // edx
  __int64 v50; // rcx
  int v51; // r8d
  __int64 *v52; // rcx
  ULONG_PTR v53; // r12
  int v54; // r13d
  ULONG_PTR v55; // r10
  __int64 *v56; // r9
  __int64 *v57; // rdi
  __int64 v58; // rax
  __int64 **v59; // rdx
  __int64 *v60; // rdx
  __int64 *v61; // r11
  __int64 **v62; // r8
  __int64 v63; // r14
  __int64 **v64; // rbx
  _BYTE *v65; // rdx
  __int64 **v66; // r8
  __int64 **v67; // rax
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int64 v76; // r14
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  __int64 *v83; // rax
  char *v84; // rdx
  char *v85; // rax
  __int128 v86; // xmm0
  __int64 v87; // r8
  _OWORD *v88; // rax
  __int128 v89; // xmm1
  __int128 v90; // xmm0
  __int128 v91; // xmm1
  __int128 v92; // xmm0
  __int128 v93; // xmm1
  __int128 v94; // xmm0
  __int128 v95; // xmm1
  __int128 v96; // xmm1
  __int128 v97; // xmm0
  __int128 v98; // xmm1
  __int128 v99; // xmm0
  __int128 v100; // xmm1
  __int128 v101; // xmm0
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rdx
  ULONG_PTR v106; // r8
  int v107; // eax
  unsigned int v108; // r8d
  __int64 v109; // rax
  __int64 *v110; // rcx
  __int64 **v111; // rdx
  __int64 *v112; // rax
  __int64 v113; // r9
  __int64 **v114; // r9
  int v115; // eax
  ULONG_PTR v116; // r14
  struct _KTHREAD *v117; // r12
  __int64 v118; // r9
  __int64 v119; // rax
  __int64 v120; // rdi
  ULONG_PTR v121; // rdi
  signed __int32 v122; // eax
  __int64 v123; // rcx
  __int64 v124; // [rsp+40h] [rbp-2D8h]
  __int64 v125; // [rsp+48h] [rbp-2D0h]
  _BYTE v126[712]; // [rsp+50h] [rbp-2C8h] BYREF
  unsigned int v127; // [rsp+320h] [rbp+8h]
  unsigned int v129; // [rsp+330h] [rbp+18h]
  LARGE_INTEGER v130; // [rsp+338h] [rbp+20h]

  v124 = 0LL;
  v125 = 0LL;
  v3 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 1) != 0
    || !*(_QWORD *)(BugCheckParameter2 + 2664) && (*(_DWORD *)(BugCheckParameter2 + 144) & 0x10) == 0
    || (*(_DWORD *)(BugCheckParameter2 + 144) & 0x8001) != 0
    || !*(_DWORD *)(BugCheckParameter2 + 148)
    || !a2 )
  {
    return 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v5 = (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2;
  v6 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v6 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               v5,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
    && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v16 = KeGetCurrentThread();
    v17 = v16->KernelApcDisable + 1;
    v16->KernelApcDisable = v17;
    if ( !v17
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
      && !v16->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221225865LL;
  }
  v7 = *(_QWORD *)(BugCheckParameter2 + 64);
  v8 = MEMORY[0xFFFFF78000000014] & 0xFFFFFFFC;
  v130.HighPart = MEMORY[0xFFFFF78000000018];
  v9 = *(_QWORD *)(v7 + 168);
  if ( v9 <= (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL) )
  {
    v5 = 864000000000LL;
    if ( (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL) - v9 < 864000000000LL
                                                                   * (unsigned __int64)(unsigned int)CmpReorganizeDelayDays )
    {
      _m_prefetchw(&CmpShutdownRundown);
      v10 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v10 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v11 = KeGetCurrentThread();
      v12 = v11->KernelApcDisable + 1;
      v11->KernelApcDisable = v12;
      if ( v12 )
        return 0LL;
      goto LABEL_141;
    }
  }
  if ( v9 == 2 || v9 != 1 && (*(_DWORD *)(BugCheckParameter2 + 5360) & 0x400) == 0 )
  {
    v130.LowPart = v8 | 2;
    CmpClearKeyAccessBits(BugCheckParameter2);
    *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) = v130;
    _m_prefetchw(&CmpShutdownRundown);
    v14 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v14 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v11 = KeGetCurrentThread();
    v15 = v11->KernelApcDisable + 1;
    v11->KernelApcDisable = v15;
    if ( v15 )
      return 0LL;
LABEL_141:
    if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 && !v11->SpecialApcDisable )
      KiCheckForKernelApcDelivery();
    return 0LL;
  }
  v130.LowPart = v8 | 1;
  TemporaryHive = CmpCreateTemporaryHive(v5, v7 + 112, v7 + 148);
  v19 = TemporaryHive;
  if ( !TemporaryHive )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v20 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v20 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v21 = KeGetCurrentThread();
    v22 = v21->KernelApcDisable + 1;
    v21->KernelApcDisable = v22;
    if ( !v22
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
      && !v21->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221225626LL;
  }
  *(_DWORD *)(*(_QWORD *)(TemporaryHive + 64) + 24LL) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 24LL);
  *(_DWORD *)(TemporaryHive + 196) = *(_DWORD *)(BugCheckParameter2 + 196);
  v23 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
  if ( (_DWORD)v23 != -1 )
  {
    v25 = CmpCopyKeyPartial(BugCheckParameter2, v23, TemporaryHive, 0xFFFFFFFFLL, 6);
    if ( v25 == -1
      || (*(_DWORD *)(*(_QWORD *)(v19 + 64) + 36LL) = v25, !(unsigned __int8)CmpCopySyncTree(BugCheckParameter2, 66, 0)) )
    {
      v24 = -1073741670;
      goto LABEL_52;
    }
    v26 = *(_DWORD *)(v19 + 1400);
    v127 = v26;
    CmpLockRegistry();
    ExAcquireResourceSharedLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
    v27 = *(_QWORD *)(BugCheckParameter2 + 2840);
    v28 = KeGetCurrentThread();
    v30 = KeAbPreAcquire(v27, 0LL, 0LL, v29);
    v31 = v30;
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v27, 0) )
      ExpAcquireFastMutexContended(v27, v30);
    if ( v31 )
      *(_BYTE *)(v31 + 26) |= 1u;
    *(_QWORD *)(v27 + 8) = v28;
    v32 = CmpDoFileSetSizeEx(BugCheckParameter2, 0LL, v26 + 4096, 1LL);
    v33 = *(_QWORD *)(BugCheckParameter2 + 2840);
    v24 = v32;
    *(_QWORD *)(v33 + 8) = 0LL;
    v34 = _InterlockedCompareExchange((volatile signed __int32 *)v33, 1, 0);
    if ( v34 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v33, v34);
    KeAbPostRelease(v33);
    ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
    CmpUnlockRegistry();
    if ( v24 < 0 )
      goto LABEL_52;
    v129 = *(_DWORD *)(BugCheckParameter2 + 1400);
    v36 = ((v26 >> 12) + 3) & 0xFFFFFFFC;
    if ( v36 < *(_DWORD *)(BugCheckParameter2 + 92) )
    {
      v36 = *(_DWORD *)(BugCheckParameter2 + 92);
      v38 = 0LL;
    }
    else
    {
      LOBYTE(v35) = 1;
      v124 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(v36, v35, 842157379LL);
      v38 = v124;
      if ( !v124 )
      {
        v24 = -1073741801;
        goto LABEL_52;
      }
      LOBYTE(v37) = 1;
      v125 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(v36, v37, 842157379LL);
      v3 = v125;
      if ( !v125 )
      {
        v24 = -1073741801;
LABEL_62:
        if ( v124 )
          (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(v124, v36);
        if ( v125 )
          (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(v125, v36);
        goto LABEL_52;
      }
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0
      || (v24 = HvViewMapPinForFileOffset(BugCheckParameter2 + 200, 4096LL, v26), v24 >= 0) )
    {
      if ( v38 || v3 )
      {
        v42 = *(_QWORD *)(BugCheckParameter2 + 80);
        if ( v42 )
          (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(
            v42,
            *(unsigned int *)(BugCheckParameter2 + 92));
        v43 = *(_QWORD *)(BugCheckParameter2 + 104);
        if ( v43 )
          (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(
            v43,
            *(unsigned int *)(BugCheckParameter2 + 92));
      }
      else
      {
        v38 = *(_QWORD *)(BugCheckParameter2 + 80);
        v3 = *(_QWORD *)(BugCheckParameter2 + 104);
      }
      *(_DWORD *)(BugCheckParameter2 + 72) = v26 >> 9;
      *(_QWORD *)(BugCheckParameter2 + 80) = v38;
      *(_DWORD *)(BugCheckParameter2 + 96) = v26 >> 9;
      v125 = 0LL;
      *(_QWORD *)(BugCheckParameter2 + 104) = v3;
      v124 = 0LL;
      *(_DWORD *)(BugCheckParameter2 + 92) = v36;
      RtlSetAllBits((PRTL_BITMAP)(BugCheckParameter2 + 72));
      *(_DWORD *)(BugCheckParameter2 + 88) = *(_DWORD *)(BugCheckParameter2 + 72);
      RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 96));
      *(_DWORD *)(BugCheckParameter2 + 112) = 0;
      v44 = *(_QWORD *)(BugCheckParameter2 + 64);
      v45 = *(_DWORD *)(v44 + 36);
      *(_DWORD *)(v44 + 36) = *(_DWORD *)(*(_QWORD *)(v19 + 64) + 36LL);
      *(_DWORD *)(*(_QWORD *)(v19 + 64) + 36LL) = v45;
      if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
      {
        for ( i = 0; i < *(_DWORD *)(v19 + 1400); i += 4096 )
        {
          CellMap = HvpGetCellMap(v19, i);
          if ( !CellMap )
            KeBugCheckEx(0x51u, 1uLL, v19, i, 0x5C0uLL);
          FreeBin = HvpMapEntryGetFreeBin();
          if ( FreeBin )
            v49 = *(_DWORD *)(FreeBin + 20);
          else
            v49 = i - *(_DWORD *)CellMap;
          v50 = *(_QWORD *)(CellMap + 8) & 0xFLL;
          v51 = *(_DWORD *)((*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          *(_QWORD *)(CellMap + 16) = *(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL;
          *(_QWORD *)(CellMap + 8) = v50;
          if ( ((v49 + 4096) & 0xFFFC0000) == ((v49 + v51 + 4095) & 0xFFFC0000) )
            *(_QWORD *)(CellMap + 8) |= HvViewMapAddressForFileOffset(BugCheckParameter2 + 200, v49 + 4096);
          *(_QWORD *)(CellMap + 24) = 0LL;
        }
        *(_BYTE *)(v19 + 124) |= 4u;
      }
      v52 = (__int64 *)(v19 + 2008);
      v53 = v19 - BugCheckParameter2;
      v54 = 0;
      v55 = BugCheckParameter2 - v19;
      do
      {
        v56 = (__int64 *)((char *)v52 + v55);
        v57 = 0LL;
        v58 = *(__int64 *)((char *)v52 + v55);
        if ( (__int64 *)v58 != (__int64 *)((char *)v52 + v55) )
        {
          v57 = *(__int64 **)((char *)v52 + v55);
          v59 = *(__int64 ***)((char *)v52 + v55 + 8);
          if ( *(__int64 **)(v58 + 8) != v56 || *v59 != v56 )
            __fastfail(3u);
          *v59 = (__int64 *)v58;
          *(_QWORD *)(v58 + 8) = v59;
        }
        v60 = (__int64 *)*v52;
        v61 = 0LL;
        if ( (__int64 *)*v52 != v52 )
        {
          v61 = (__int64 *)*v52;
          v62 = *(__int64 ***)((char *)v52 + v55 + v53 + 8);
          if ( (__int64 *)v60[1] != v52 || *v62 != v52 )
            __fastfail(3u);
          *v62 = v60;
          v60[1] = (__int64)v62;
        }
        v63 = 4LL;
        v64 = (__int64 **)((char *)v52 + v55 + 8);
        v65 = v126;
        v66 = v64 - 77;
        v67 = v64 - 77;
        do
        {
          v68 = *(_OWORD *)v67;
          v69 = *((_OWORD *)v67 + 1);
          v67 += 16;
          *(_OWORD *)v65 = v68;
          v70 = *((_OWORD *)v67 - 6);
          *((_OWORD *)v65 + 1) = v69;
          v71 = *((_OWORD *)v67 - 5);
          *((_OWORD *)v65 + 2) = v70;
          v72 = *((_OWORD *)v67 - 4);
          *((_OWORD *)v65 + 3) = v71;
          v73 = *((_OWORD *)v67 - 3);
          *((_OWORD *)v65 + 4) = v72;
          v74 = *((_OWORD *)v67 - 2);
          *((_OWORD *)v65 + 5) = v73;
          v75 = *((_OWORD *)v67 - 1);
          *((_OWORD *)v65 + 6) = v74;
          v65 += 128;
          *((_OWORD *)v65 - 1) = v75;
          --v63;
        }
        while ( v63 );
        v76 = 4LL;
        v77 = *((_OWORD *)v67 + 1);
        *(_OWORD *)v65 = *(_OWORD *)v67;
        v78 = *((_OWORD *)v67 + 2);
        *((_OWORD *)v65 + 1) = v77;
        v79 = *((_OWORD *)v67 + 3);
        *((_OWORD *)v65 + 2) = v78;
        v80 = *((_OWORD *)v67 + 4);
        *((_OWORD *)v65 + 3) = v79;
        v81 = *((_OWORD *)v67 + 5);
        *((_OWORD *)v65 + 4) = v80;
        v82 = *((_OWORD *)v67 + 6);
        v83 = v67[14];
        *((_OWORD *)v65 + 5) = v81;
        *((_OWORD *)v65 + 6) = v82;
        *((_QWORD *)v65 + 14) = v83;
        v84 = (char *)v64 + v53 - 616;
        v85 = v84;
        do
        {
          v86 = *(_OWORD *)v85;
          v85 += 128;
          *(_OWORD *)v66 = v86;
          v66 += 16;
          *((_OWORD *)v66 - 7) = *((_OWORD *)v85 - 7);
          *((_OWORD *)v66 - 6) = *((_OWORD *)v85 - 6);
          *((_OWORD *)v66 - 5) = *((_OWORD *)v85 - 5);
          *((_OWORD *)v66 - 4) = *((_OWORD *)v85 - 4);
          *((_OWORD *)v66 - 3) = *((_OWORD *)v85 - 3);
          *((_OWORD *)v66 - 2) = *((_OWORD *)v85 - 2);
          *((_OWORD *)v66 - 1) = *((_OWORD *)v85 - 1);
          --v76;
        }
        while ( v76 );
        *(_OWORD *)v66 = *(_OWORD *)v85;
        *((_OWORD *)v66 + 1) = *((_OWORD *)v85 + 1);
        *((_OWORD *)v66 + 2) = *((_OWORD *)v85 + 2);
        *((_OWORD *)v66 + 3) = *((_OWORD *)v85 + 3);
        *((_OWORD *)v66 + 4) = *((_OWORD *)v85 + 4);
        *((_OWORD *)v66 + 5) = *((_OWORD *)v85 + 5);
        *((_OWORD *)v66 + 6) = *((_OWORD *)v85 + 6);
        v66[14] = (__int64 *)*((_QWORD *)v85 + 14);
        v87 = 4LL;
        v88 = v126;
        do
        {
          v89 = v88[1];
          *(_OWORD *)v84 = *v88;
          v90 = v88[2];
          *((_OWORD *)v84 + 1) = v89;
          v91 = v88[3];
          *((_OWORD *)v84 + 2) = v90;
          v92 = v88[4];
          *((_OWORD *)v84 + 3) = v91;
          v93 = v88[5];
          *((_OWORD *)v84 + 4) = v92;
          v94 = v88[6];
          *((_OWORD *)v84 + 5) = v93;
          v95 = v88[7];
          v88 += 8;
          *((_OWORD *)v84 + 6) = v94;
          v84 += 128;
          *((_OWORD *)v84 - 1) = v95;
          --v87;
        }
        while ( v87 );
        v96 = v88[1];
        *(_OWORD *)v84 = *v88;
        v97 = v88[2];
        *((_OWORD *)v84 + 1) = v96;
        v98 = v88[3];
        *((_OWORD *)v84 + 2) = v97;
        v99 = v88[4];
        *((_OWORD *)v84 + 3) = v98;
        v100 = v88[5];
        *((_OWORD *)v84 + 4) = v99;
        v101 = v88[6];
        v102 = *((_QWORD *)v88 + 14);
        *((_OWORD *)v84 + 5) = v100;
        *((_OWORD *)v84 + 6) = v101;
        *((_QWORD *)v84 + 14) = v102;
        *v64 = v56;
        *v56 = (__int64)v56;
        *(__int64 **)((char *)v64 + v53) = v52;
        *v52 = (__int64)v52;
        if ( v57 )
        {
          v103 = *v57;
          *v52 = *v57;
          *(__int64 **)((char *)v64 + v53) = v57;
          if ( *(__int64 **)(v103 + 8) != v57 )
            __fastfail(3u);
          *(_QWORD *)(v103 + 8) = v52;
          *v57 = (__int64)v52;
        }
        if ( v61 )
        {
          v104 = *v61;
          *v56 = *v61;
          *v64 = v61;
          if ( *(__int64 **)(v104 + 8) != v61 )
            __fastfail(3u);
          *(_QWORD *)(v104 + 8) = v56;
          *v61 = (__int64)v56;
        }
        v105 = 632LL * v54;
        v106 = v105 + BugCheckParameter2 + 1416;
        if ( *(v52 - 75) == v106 )
          *(v52 - 75) = v105 + v19 + 1416;
        if ( *(__int64 *)((char *)v52 + v55 - 600) == v105 + v19 + 1416 )
          *(__int64 *)((char *)v52 + v55 - 600) = v106;
        v52 += 79;
        ++v54;
      }
      while ( v54 <= 1 );
      v107 = *(_DWORD *)(BugCheckParameter2 + 144);
      if ( (v107 & 0x10) != 0 )
      {
        *(_DWORD *)(BugCheckParameter2 + 144) = v107 & 0xFFFFFFEF;
        *(_DWORD *)(v19 + 144) |= 0x10u;
      }
      CmpDestroySecurityCache(BugCheckParameter2);
      v108 = 0;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = *(_DWORD *)(*(_QWORD *)(v19 + 64) + 40LL);
      *(_DWORD *)(BugCheckParameter2 + 3040) = *(_DWORD *)(v19 + 3040);
      *(_DWORD *)(BugCheckParameter2 + 3044) = *(_DWORD *)(v19 + 3044);
      *(_DWORD *)(BugCheckParameter2 + 3048) = *(_DWORD *)(v19 + 3048);
      *(_QWORD *)(BugCheckParameter2 + 3056) = *(_QWORD *)(v19 + 3056);
      do
      {
        v109 = 16LL * v108;
        v110 = (__int64 *)(v109 + BugCheckParameter2 + 3064);
        v111 = (__int64 **)(v109 + v19 + 3064);
        v110[1] = (__int64)v110;
        *v110 = (__int64)v110;
        while ( *v111 != (__int64 *)v111 )
        {
          v112 = *v111;
          v113 = **v111;
          if ( (__int64 **)(*v111)[1] != v111 || *(__int64 **)(v113 + 8) != v112 )
            __fastfail(3u);
          *v111 = (__int64 *)v113;
          *(_QWORD *)(v113 + 8) = v111;
          v114 = (__int64 **)v110[1];
          *v112 = (__int64)v110;
          v112[1] = (__int64)v114;
          if ( *v114 != v110 )
            __fastfail(3u);
          *v114 = v112;
          v110[1] = (__int64)v112;
        }
        ++v108;
      }
      while ( v108 < 0x40 );
      v115 = *(_DWORD *)(v19 + 6016);
      *(_QWORD *)(v19 + 3056) = 0LL;
      *(_QWORD *)(v19 + 3040) = 0LL;
      *(_DWORD *)(BugCheckParameter2 + 6016) = v115;
      *(_DWORD *)(BugCheckParameter2 + 6020) = *(_DWORD *)(v19 + 6020);
      *(_DWORD *)(BugCheckParameter2 + 6024) = *(_DWORD *)(v19 + 6024);
      *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) = v130;
      CmpLockRegistry();
      ExAcquireResourceSharedLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
      v116 = *(_QWORD *)(BugCheckParameter2 + 2840);
      v117 = KeGetCurrentThread();
      v119 = KeAbPreAcquire(v116, 0LL, 0LL, v118);
      v120 = v119;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v116, 0) )
        ExpAcquireFastMutexContended(v116, v119);
      if ( v120 )
        *(_BYTE *)(v120 + 26) |= 1u;
      *(_QWORD *)(v116 + 8) = v117;
      HvMarkBaseBlockDirty(BugCheckParameter2);
      v121 = *(_QWORD *)(BugCheckParameter2 + 2840);
      *(_QWORD *)(v121 + 8) = 0LL;
      v122 = _InterlockedCompareExchange((volatile signed __int32 *)v121, 1, 0);
      if ( v122 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)v121, v122);
      KeAbPostRelease(v121);
      ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
      CmpUnlockRegistry();
      CmpLogReorganizeEvent(a2, v129, v127);
      if ( v127 < v129 )
      {
        if ( CmpFirstReorganize )
        {
          v123 = 0LL;
          CmpReorganizeLastRun = v130;
          CmpFirstReorganize = 0;
        }
        else
        {
          v123 = CmpReorganizeTotalBytesSaved;
        }
        CmpReorganizeTotalBytesSaved = v129 - v127 + v123;
        CmpUpdateReorganizeRegistryValues();
      }
      v24 = 0;
    }
    goto LABEL_62;
  }
  v24 = 0;
LABEL_52:
  CmpDestroyTemporaryHive(v19);
  _m_prefetchw(&CmpShutdownRundown);
  v39 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v39 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    ExfReleaseRundownProtection(&CmpShutdownRundown);
  v40 = KeGetCurrentThread();
  v41 = v40->KernelApcDisable + 1;
  v40->KernelApcDisable = v41;
  if ( !v41
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v40->ApcState.ApcListHead[0].Flink != &v40->152
    && !v40->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v24;
}
