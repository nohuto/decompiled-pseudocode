/*
 * XREFs of CmpReorganizeHive @ 0x14047E780
 * Callers:
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 * Callees:
 *     RtlSetAllBits @ 0x140005744 (RtlSetAllBits.c)
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlClearAllBits @ 0x1400829DC (RtlClearAllBits.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     HvpMapEntryGetFreeBin @ 0x1400EDF80 (HvpMapEntryGetFreeBin.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpDoFileSetSizeEx @ 0x14047D650 (CmpDoFileSetSizeEx.c)
 *     CmCheckRegistry @ 0x14047F0C8 (CmCheckRegistry.c)
 *     CmpCopyKeyPartial @ 0x1404CDE74 (CmpCopyKeyPartial.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
 *     CmpDestroySecurityCache @ 0x1405181E0 (CmpDestroySecurityCache.c)
 *     HvMarkBaseBlockDirty @ 0x140564B90 (HvMarkBaseBlockDirty.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14057CD74 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpLogReorganizeEvent @ 0x1405FC5F4 (CmpLogReorganizeEvent.c)
 *     CmpClearKeyAccessBits @ 0x140603828 (CmpClearKeyAccessBits.c)
 *     CmpCopySyncTree @ 0x140608258 (CmpCopySyncTree.c)
 *     CmpCreateTemporaryHive @ 0x14060D2A0 (CmpCreateTemporaryHive.c)
 *     CmpDestroyTemporaryHive @ 0x14060D354 (CmpDestroyTemporaryHive.c)
 *     HvViewMapAddressForFileOffset @ 0x14060FB1C (HvViewMapAddressForFileOffset.c)
 *     HvViewMapPinForFileOffset @ 0x14060FD20 (HvViewMapPinForFileOffset.c)
 */

__int64 __fastcall CmpReorganizeHive(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v5; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r9
  unsigned int v12; // edx
  unsigned __int64 v13; // r8
  __int64 TemporaryHive; // rax
  ULONG_PTR v16; // r15
  __int64 v17; // rdx
  int v18; // ebx
  int v19; // r9d
  int v20; // r9d
  unsigned int v21; // r9d
  unsigned int v22; // r10d
  unsigned int v23; // r13d
  __int64 v24; // rdx
  unsigned int v25; // r12d
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // r8d
  unsigned int i; // edi
  __int64 CellMap; // rax
  __int64 v35; // rbx
  __int64 FreeBin; // rax
  unsigned int v37; // r8d
  __int64 v38; // rdx
  int v39; // ecx
  __int64 v40; // rdx
  ULONG_PTR v41; // rbx
  _QWORD *v42; // rcx
  ULONG_PTR v43; // r10
  _QWORD *v44; // r9
  __int64 *v45; // rdi
  __int64 v46; // rax
  _QWORD *v47; // rdx
  _QWORD *v48; // rdx
  _QWORD *v49; // r11
  _QWORD *v50; // r8
  __int64 v51; // rbx
  _QWORD *v52; // r13
  _BYTE *v53; // rdx
  _QWORD *v54; // r8
  _QWORD *v55; // rax
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int64 v64; // rbx
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  __int64 v71; // rax
  char *v72; // rdx
  char *v73; // rax
  __int128 v74; // xmm0
  _OWORD *v75; // rax
  __int64 v76; // r8
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm1
  __int128 v85; // xmm0
  __int128 v86; // xmm1
  __int128 v87; // xmm0
  __int128 v88; // xmm1
  __int128 v89; // xmm0
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  int v93; // r11d
  __int64 v94; // rdx
  ULONG_PTR v95; // r8
  int v96; // eax
  unsigned int v97; // r8d
  __int64 v98; // rax
  __int64 *v99; // rcx
  __int64 **v100; // rdx
  __int64 *v101; // rax
  __int64 v102; // r9
  __int64 **v103; // r9
  int v104; // eax
  unsigned int v105; // r13d
  unsigned int v106; // edi
  __int64 v107; // rcx
  LARGE_INTEGER v108; // rbx
  __int64 v109; // rcx
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r9
  unsigned int v113; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v114; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v115; // [rsp+48h] [rbp-B8h] BYREF
  int v116; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v117; // [rsp+58h] [rbp-A8h]
  __int64 v118; // [rsp+60h] [rbp-A0h]
  unsigned int v119; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v120; // [rsp+6Ch] [rbp-94h] BYREF
  ULONG_PTR v121; // [rsp+70h] [rbp-90h]
  __int64 v122; // [rsp+78h] [rbp-88h] BYREF
  __int64 v123; // [rsp+80h] [rbp-80h]
  _BYTE v124[640]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v125[352]; // [rsp+310h] [rbp+210h] BYREF
  EVENT_DATA_DESCRIPTOR v126; // [rsp+470h] [rbp+370h] BYREF
  __int64 *v127; // [rsp+490h] [rbp+390h]
  __int64 v128; // [rsp+498h] [rbp+398h]
  int *v129; // [rsp+4A0h] [rbp+3A0h]
  __int64 v130; // [rsp+4A8h] [rbp+3A8h]
  int *v131; // [rsp+4B0h] [rbp+3B0h]
  __int64 v132; // [rsp+4B8h] [rbp+3B8h]
  EVENT_DATA_DESCRIPTOR v133; // [rsp+4C0h] [rbp+3C0h] BYREF
  unsigned int *v134; // [rsp+4E0h] [rbp+3E0h]
  __int64 v135; // [rsp+4E8h] [rbp+3E8h]
  unsigned int *v136; // [rsp+4F0h] [rbp+3F0h]
  __int64 v137; // [rsp+4F8h] [rbp+3F8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+500h] [rbp+400h] BYREF
  int *v139; // [rsp+520h] [rbp+420h]
  __int64 v140; // [rsp+528h] [rbp+428h]
  EVENT_DATA_DESCRIPTOR v141; // [rsp+530h] [rbp+430h] BYREF
  unsigned __int64 *v142; // [rsp+550h] [rbp+450h]
  __int64 v143; // [rsp+558h] [rbp+458h]

  v2 = 0;
  v123 = a2;
  v117 = 0LL;
  v118 = 0LL;
  v5 = 0LL;
  memset(v125, 0, sizeof(v125));
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
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v2 = -1073741431;
    goto LABEL_10;
  }
  v11 = *(_QWORD *)(BugCheckParameter2 + 64);
  v12 = MEMORY[0xFFFFF78000000014] & 0xFFFFFFFC;
  v115 = MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL;
  v13 = *(_QWORD *)(v11 + 168);
  if ( v13 <= (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL) )
  {
    v8 = 864000000000LL * (unsigned int)CmpReorganizeDelayDays;
    if ( (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL) - v13 < v8 )
    {
LABEL_9:
      ExReleaseRundownProtection(&CmpShutdownRundown);
LABEL_10:
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v9, v10);
      return v2;
    }
  }
  if ( v13 == 2 || v13 != 1 && (*(_DWORD *)(BugCheckParameter2 + 5360) & 0x400) == 0 )
  {
    LODWORD(v115) = v12 | 2;
    CmpClearKeyAccessBits(BugCheckParameter2);
    *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) = v115;
    goto LABEL_9;
  }
  LODWORD(v115) = v12 | 1;
  TemporaryHive = CmpCreateTemporaryHive(v8, v11 + 112, v11 + 148);
  v16 = TemporaryHive;
  if ( !TemporaryHive )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    v2 = -1073741670;
    goto LABEL_10;
  }
  *(_DWORD *)(*(_QWORD *)(TemporaryHive + 64) + 24LL) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 24LL);
  *(_DWORD *)(TemporaryHive + 196) = *(_DWORD *)(BugCheckParameter2 + 196);
  v17 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
  if ( (_DWORD)v17 == -1 )
  {
    v18 = 0;
    goto LABEL_119;
  }
  v19 = CmpCopyKeyPartial(BugCheckParameter2, v17, TemporaryHive, 0xFFFFFFFFLL, 6);
  if ( v19 == -1
    || (*(_DWORD *)(*(_QWORD *)(v16 + 64) + 36LL) = v19, !(unsigned __int8)CmpCopySyncTree(BugCheckParameter2, 66, 0)) )
  {
    v18 = -1073741670;
    goto LABEL_119;
  }
  *(_QWORD *)(v16 + 56) = v125;
  if ( (unsigned int)CmCheckRegistry(v16) )
  {
    if ( stru_1402F34E0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402F34E0, 0x400000000000uLL) )
    {
      v116 = v20;
      v139 = &v116;
      v140 = 4LL;
      TlgWrite(&stru_1402F34E0, &unk_14027B097, 0LL, 0LL, 3u, &pData);
    }
LABEL_29:
    *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) = v115;
    CmpLockRegistry();
    ExAcquireResourceSharedLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
    HvMarkBaseBlockDirty(BugCheckParameter2);
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
    ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
    CmpUnlockRegistry();
    v18 = -1073741492;
    goto LABEL_119;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) & 4) == 0
    && *(_DWORD *)(BugCheckParameter2 + 6028) != *(_DWORD *)(v16 + 6028) )
  {
    if ( stru_1402F34E0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402F34E0, 0x400000000000uLL) )
    {
      v114 = v21;
      v134 = &v114;
      v136 = &v113;
      v113 = v22;
      v135 = 4LL;
      v137 = 4LL;
      TlgWrite(&stru_1402F34E0, &unk_14027B03F, 0LL, 0LL, 4u, &v133);
    }
    goto LABEL_29;
  }
  *(_QWORD *)(v16 + 56) = 0LL;
  v114 = *(_DWORD *)(v16 + 1400);
  v23 = v114;
  CmpLockRegistry();
  ExAcquireResourceSharedLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  v18 = CmpDoFileSetSizeEx(BugCheckParameter2, 0, v114 + 4096, 1);
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
  CmpUnlockRegistry();
  if ( v18 >= 0 )
  {
    v113 = *(_DWORD *)(BugCheckParameter2 + 1400);
    v25 = ((v114 >> 12) + 3) & 0xFFFFFFFC;
    if ( v25 < *(_DWORD *)(BugCheckParameter2 + 92) )
    {
      v25 = *(_DWORD *)(BugCheckParameter2 + 92);
    }
    else
    {
      LOBYTE(v24) = 1;
      v117 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(v25, v24, 842157379LL);
      if ( !v117 )
      {
        v18 = -1073741801;
        goto LABEL_119;
      }
      LOBYTE(v26) = 1;
      v118 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(v25, v26, 842157379LL);
      v5 = v118;
      if ( !v118 )
      {
        v18 = -1073741801;
LABEL_115:
        if ( v117 )
          (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(v117, v25);
        if ( v118 )
          (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(v118, v25);
        goto LABEL_119;
      }
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0
      || (v18 = HvViewMapPinForFileOffset(BugCheckParameter2 + 200, 4096LL, v114), v18 >= 0) )
    {
      v27 = v117;
      if ( v117 || v5 )
      {
        v29 = *(_QWORD *)(BugCheckParameter2 + 80);
        if ( v29 )
          (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(
            v29,
            *(unsigned int *)(BugCheckParameter2 + 92));
        v30 = *(_QWORD *)(BugCheckParameter2 + 104);
        if ( v30 )
          (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(
            v30,
            *(unsigned int *)(BugCheckParameter2 + 92));
        v28 = v118;
      }
      else
      {
        v28 = *(_QWORD *)(BugCheckParameter2 + 104);
        v27 = *(_QWORD *)(BugCheckParameter2 + 80);
      }
      v117 = 0LL;
      *(_QWORD *)(BugCheckParameter2 + 80) = v27;
      *(_DWORD *)(BugCheckParameter2 + 72) = v23 >> 9;
      *(_QWORD *)(BugCheckParameter2 + 104) = v28;
      *(_DWORD *)(BugCheckParameter2 + 96) = v23 >> 9;
      *(_DWORD *)(BugCheckParameter2 + 92) = v25;
      v118 = 0LL;
      RtlSetAllBits((PRTL_BITMAP)(BugCheckParameter2 + 72));
      *(_DWORD *)(BugCheckParameter2 + 88) = *(_DWORD *)(BugCheckParameter2 + 72);
      RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 96));
      v31 = *(_QWORD *)(BugCheckParameter2 + 64);
      *(_DWORD *)(BugCheckParameter2 + 112) = 0;
      v32 = *(_DWORD *)(v31 + 36);
      *(_DWORD *)(v31 + 36) = *(_DWORD *)(*(_QWORD *)(v16 + 64) + 36LL);
      *(_DWORD *)(*(_QWORD *)(v16 + 64) + 36LL) = v32;
      if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
      {
        for ( i = 0; i < *(_DWORD *)(v16 + 1400); *(_QWORD *)(v35 + 24) = 0LL )
        {
          CellMap = HvpGetCellMap(v16, i);
          v35 = CellMap;
          if ( !CellMap )
            KeBugCheckEx(0x51u, 1uLL, v16, i, 0x614uLL);
          FreeBin = HvpMapEntryGetFreeBin(CellMap);
          if ( FreeBin )
            v37 = *(_DWORD *)(FreeBin + 20);
          else
            v37 = i - *(_DWORD *)v35;
          v38 = *(_QWORD *)(v35 + 8) & 0xFLL;
          v39 = *(_DWORD *)((*(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          *(_QWORD *)(v35 + 16) = *(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF0uLL;
          *(_QWORD *)(v35 + 8) = v38;
          v40 = v37 + 4096;
          if ( (((unsigned int)v40 ^ (v37 + v39 + 4095)) & 0xFFFC0000) == 0 )
            *(_QWORD *)(v35 + 8) |= HvViewMapAddressForFileOffset(BugCheckParameter2 + 200, v40);
          i += 4096;
        }
        *(_BYTE *)(v16 + 124) |= 4u;
      }
      v116 = 0;
      v41 = v16 - BugCheckParameter2;
      v42 = (_QWORD *)(v16 + 2008);
      v121 = v16 - BugCheckParameter2;
      v43 = BugCheckParameter2 - v16;
      do
      {
        v44 = (_QWORD *)((char *)v42 + v43);
        v45 = 0LL;
        v46 = *(_QWORD *)((char *)v42 + v43);
        if ( (_QWORD *)v46 != (_QWORD *)((char *)v42 + v43) )
        {
          v45 = *(__int64 **)((char *)v42 + v43);
          v47 = *(_QWORD **)((char *)v42 + v43 + 8);
          if ( *(_QWORD **)(v46 + 8) != v44 || (_QWORD *)*v47 != v44 )
            __fastfail(3u);
          *v47 = v46;
          *(_QWORD *)(v46 + 8) = v47;
        }
        v48 = (_QWORD *)*v42;
        v49 = 0LL;
        if ( (_QWORD *)*v42 != v42 )
        {
          v49 = (_QWORD *)*v42;
          v50 = *(_QWORD **)((char *)v42 + v43 + v41 + 8);
          if ( (_QWORD *)v48[1] != v42 || (_QWORD *)*v50 != v42 )
            __fastfail(3u);
          *v50 = v48;
          v48[1] = v50;
        }
        v51 = 4LL;
        v52 = (_QWORD *)((char *)v42 + v43 + 8);
        v53 = v124;
        v54 = v52 - 77;
        v55 = v52 - 77;
        do
        {
          v56 = *(_OWORD *)v55;
          v57 = *((_OWORD *)v55 + 1);
          v55 += 16;
          *(_OWORD *)v53 = v56;
          v58 = *((_OWORD *)v55 - 6);
          *((_OWORD *)v53 + 1) = v57;
          v59 = *((_OWORD *)v55 - 5);
          *((_OWORD *)v53 + 2) = v58;
          v60 = *((_OWORD *)v55 - 4);
          *((_OWORD *)v53 + 3) = v59;
          v61 = *((_OWORD *)v55 - 3);
          *((_OWORD *)v53 + 4) = v60;
          v62 = *((_OWORD *)v55 - 2);
          *((_OWORD *)v53 + 5) = v61;
          v63 = *((_OWORD *)v55 - 1);
          *((_OWORD *)v53 + 6) = v62;
          v53 += 128;
          *((_OWORD *)v53 - 1) = v63;
          --v51;
        }
        while ( v51 );
        v64 = 4LL;
        v65 = *((_OWORD *)v55 + 1);
        *(_OWORD *)v53 = *(_OWORD *)v55;
        v66 = *((_OWORD *)v55 + 2);
        *((_OWORD *)v53 + 1) = v65;
        v67 = *((_OWORD *)v55 + 3);
        *((_OWORD *)v53 + 2) = v66;
        v68 = *((_OWORD *)v55 + 4);
        *((_OWORD *)v53 + 3) = v67;
        v69 = *((_OWORD *)v55 + 5);
        *((_OWORD *)v53 + 4) = v68;
        v70 = *((_OWORD *)v55 + 6);
        v71 = v55[14];
        *((_OWORD *)v53 + 5) = v69;
        *((_OWORD *)v53 + 6) = v70;
        *((_QWORD *)v53 + 14) = v71;
        v72 = (char *)v52 + v121 - 616;
        v73 = v72;
        do
        {
          v74 = *(_OWORD *)v73;
          v73 += 128;
          *(_OWORD *)v54 = v74;
          v54 += 16;
          *((_OWORD *)v54 - 7) = *((_OWORD *)v73 - 7);
          *((_OWORD *)v54 - 6) = *((_OWORD *)v73 - 6);
          *((_OWORD *)v54 - 5) = *((_OWORD *)v73 - 5);
          *((_OWORD *)v54 - 4) = *((_OWORD *)v73 - 4);
          *((_OWORD *)v54 - 3) = *((_OWORD *)v73 - 3);
          *((_OWORD *)v54 - 2) = *((_OWORD *)v73 - 2);
          *((_OWORD *)v54 - 1) = *((_OWORD *)v73 - 1);
          --v64;
        }
        while ( v64 );
        *(_OWORD *)v54 = *(_OWORD *)v73;
        *((_OWORD *)v54 + 1) = *((_OWORD *)v73 + 1);
        *((_OWORD *)v54 + 2) = *((_OWORD *)v73 + 2);
        *((_OWORD *)v54 + 3) = *((_OWORD *)v73 + 3);
        *((_OWORD *)v54 + 4) = *((_OWORD *)v73 + 4);
        *((_OWORD *)v54 + 5) = *((_OWORD *)v73 + 5);
        *((_OWORD *)v54 + 6) = *((_OWORD *)v73 + 6);
        v54[14] = *((_QWORD *)v73 + 14);
        v75 = v124;
        v76 = 4LL;
        do
        {
          v77 = v75[1];
          *(_OWORD *)v72 = *v75;
          v78 = v75[2];
          *((_OWORD *)v72 + 1) = v77;
          v79 = v75[3];
          *((_OWORD *)v72 + 2) = v78;
          v80 = v75[4];
          *((_OWORD *)v72 + 3) = v79;
          v81 = v75[5];
          *((_OWORD *)v72 + 4) = v80;
          v82 = v75[6];
          *((_OWORD *)v72 + 5) = v81;
          v83 = v75[7];
          v75 += 8;
          *((_OWORD *)v72 + 6) = v82;
          v72 += 128;
          *((_OWORD *)v72 - 1) = v83;
          --v76;
        }
        while ( v76 );
        v41 = v121;
        v84 = v75[1];
        *(_OWORD *)v72 = *v75;
        v85 = v75[2];
        *((_OWORD *)v72 + 1) = v84;
        v86 = v75[3];
        *((_OWORD *)v72 + 2) = v85;
        v87 = v75[4];
        *((_OWORD *)v72 + 3) = v86;
        v88 = v75[5];
        *((_OWORD *)v72 + 4) = v87;
        v89 = v75[6];
        v90 = *((_QWORD *)v75 + 14);
        *((_OWORD *)v72 + 5) = v88;
        *((_OWORD *)v72 + 6) = v89;
        *((_QWORD *)v72 + 14) = v90;
        *v52 = v44;
        *v44 = v44;
        *(_QWORD *)((char *)v52 + v41) = v42;
        *v42 = v42;
        if ( v45 )
        {
          v91 = *v45;
          if ( *(__int64 **)(*v45 + 8) != v45 )
            __fastfail(3u);
          *v42 = v91;
          *(_QWORD *)((char *)v52 + v41) = v45;
          *(_QWORD *)(v91 + 8) = v42;
          *v45 = (__int64)v42;
        }
        if ( v49 )
        {
          v92 = *v49;
          if ( *(_QWORD **)(*v49 + 8LL) != v49 )
            __fastfail(3u);
          *v44 = v92;
          *v52 = v49;
          *(_QWORD *)(v92 + 8) = v44;
          *v49 = v44;
        }
        v93 = v116;
        v94 = 632LL * v116;
        v95 = v94 + BugCheckParameter2 + 1416;
        if ( *(v42 - 75) == v95 )
          *(v42 - 75) = v16 + v94 + 1416;
        if ( *(_QWORD *)((char *)v42 + v43 - 600) == v16 + v94 + 1416 )
          *(_QWORD *)((char *)v42 + v43 - 600) = v95;
        v42 += 79;
        v116 = v93 + 1;
      }
      while ( v93 + 1 <= 1 );
      v96 = *(_DWORD *)(BugCheckParameter2 + 144);
      if ( (v96 & 0x10) != 0 )
      {
        *(_DWORD *)(BugCheckParameter2 + 144) = v96 & 0xFFFFFFEF;
        *(_DWORD *)(v16 + 144) |= 0x10u;
      }
      CmpDestroySecurityCache(BugCheckParameter2);
      v97 = 0;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = *(_DWORD *)(*(_QWORD *)(v16 + 64) + 40LL);
      *(_DWORD *)(BugCheckParameter2 + 3040) = *(_DWORD *)(v16 + 3040);
      *(_DWORD *)(BugCheckParameter2 + 3044) = *(_DWORD *)(v16 + 3044);
      *(_DWORD *)(BugCheckParameter2 + 3048) = *(_DWORD *)(v16 + 3048);
      *(_QWORD *)(BugCheckParameter2 + 3056) = *(_QWORD *)(v16 + 3056);
      do
      {
        v98 = 16LL * v97;
        v99 = (__int64 *)(v98 + BugCheckParameter2 + 3064);
        v100 = (__int64 **)(v98 + v16 + 3064);
        v99[1] = (__int64)v99;
        *v99 = (__int64)v99;
        while ( *v100 != (__int64 *)v100 )
        {
          v101 = *v100;
          v102 = **v100;
          if ( (__int64 **)(*v100)[1] != v100 || *(__int64 **)(v102 + 8) != v101 )
            __fastfail(3u);
          *v100 = (__int64 *)v102;
          *(_QWORD *)(v102 + 8) = v100;
          v103 = (__int64 **)v99[1];
          if ( *v103 != v99 )
            __fastfail(3u);
          *v101 = (__int64)v99;
          v101[1] = (__int64)v103;
          *v103 = v101;
          v99[1] = (__int64)v101;
        }
        ++v97;
      }
      while ( v97 < 0x40 );
      v104 = *(_DWORD *)(v16 + 6016);
      *(_QWORD *)(v16 + 3056) = 0LL;
      *(_QWORD *)(v16 + 3040) = 0LL;
      *(_DWORD *)(BugCheckParameter2 + 6016) = v104;
      *(_DWORD *)(BugCheckParameter2 + 6020) = *(_DWORD *)(v16 + 6020);
      *(_DWORD *)(BugCheckParameter2 + 6024) = *(_DWORD *)(v16 + 6024);
      if ( stru_1402F34E0.LevelPlus1 <= 5 )
      {
        v106 = v114;
        v105 = v113;
      }
      else
      {
        v105 = v113;
        v106 = v114;
        if ( TlgKeywordOn(&stru_1402F34E0, 0x400000000000uLL) )
        {
          v107 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL);
          v127 = &v122;
          v129 = (int *)&v119;
          v131 = (int *)&v120;
          v122 = v107;
          v119 = v113;
          v120 = v114;
          v128 = 8LL;
          v130 = 4LL;
          v132 = 4LL;
          TlgWrite(&stru_1402F34E0, &unk_14027AFF9, 0LL, 0LL, 5u, &v126);
        }
      }
      v108.QuadPart = v115;
      *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) = v115;
      CmpLockRegistry();
      ExAcquireResourceSharedLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
      ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
      HvMarkBaseBlockDirty(BugCheckParameter2);
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
      ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
      CmpUnlockRegistry();
      CmpLogReorganizeEvent(v123, v105, v106);
      if ( v106 < v113 )
      {
        if ( CmpFirstReorganize )
        {
          v109 = 0LL;
          CmpReorganizeLastRun = v108;
          CmpFirstReorganize = 0;
        }
        else
        {
          v109 = CmpReorganizeTotalBytesSaved;
        }
        CmpReorganizeTotalBytesSaved = v113 - v106 + v109;
        CmpUpdateReorganizeRegistryValues();
      }
      v18 = 0;
    }
    goto LABEL_115;
  }
LABEL_119:
  CmpDestroyTemporaryHive(v16);
  ExReleaseRundownProtection(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v110, v111, v112);
  if ( v18 < 0 && stru_1402F34E0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1402F34E0, 0x400000000000uLL) )
    {
      LODWORD(v115) = v18;
      v142 = &v115;
      v143 = 4LL;
      TlgWrite(&stru_1402F34E0, &unk_14027AFC7, 0LL, 0LL, 3u, &v141);
    }
  }
  return (unsigned int)v18;
}
