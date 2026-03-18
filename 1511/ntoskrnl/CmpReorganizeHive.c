/*
 * XREFs of CmpReorganizeHive @ 0x1403D0DDC
 * Callers:
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x14001ABDC (RtlClearAllBits.c)
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     HvpMapEntryGetFreeBin @ 0x14003B3B4 (HvpMapEntryGetFreeBin.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlSetAllBits @ 0x1400F9D20 (RtlSetAllBits.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     CmpClearKeyAccessBits @ 0x1403B5728 (CmpClearKeyAccessBits.c)
 *     HvpGetCellMap @ 0x1403F7A80 (HvpGetCellMap.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpDestroySecurityCache @ 0x140499358 (CmpDestroySecurityCache.c)
 *     CmpCopyKeyPartial @ 0x1404B3BE4 (CmpCopyKeyPartial.c)
 *     CmpDoFileSetSizeEx @ 0x1404BC2A4 (CmpDoFileSetSizeEx.c)
 *     HvMarkBaseBlockDirty @ 0x1404C1D94 (HvMarkBaseBlockDirty.c)
 *     CmpCopySyncTree @ 0x14050EEBC (CmpCopySyncTree.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140548134 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpLogReorganizeEvent @ 0x1405DE698 (CmpLogReorganizeEvent.c)
 *     CmpCreateTemporaryHive @ 0x1405EA420 (CmpCreateTemporaryHive.c)
 *     CmpDestroyTemporaryHive @ 0x1405EA4D8 (CmpDestroyTemporaryHive.c)
 *     HvViewMapAddressForFileOffset @ 0x1405EAFC4 (HvViewMapAddressForFileOffset.c)
 *     HvViewMapPinForFileOffset @ 0x1405EB1C8 (HvViewMapPinForFileOffset.c)
 */

__int64 __fastcall CmpReorganizeHive(ULONG_PTR a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v5; // r13
  __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rcx
  __int64 v9; // r10
  unsigned int v10; // r8d
  unsigned __int64 v11; // r9
  __int64 TemporaryHive; // rax
  ULONG_PTR v14; // r14
  __int64 v15; // rdx
  int v16; // ebx
  int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // edi
  __int64 v23; // rdx
  unsigned int v24; // r15d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // r8d
  unsigned int i; // edi
  __int64 CellMap; // rbx
  __int64 FreeBin; // rax
  unsigned int v33; // r8d
  __int64 v34; // rdx
  int v35; // ecx
  __int64 v36; // rdx
  ULONG_PTR v37; // r13
  __int64 *v38; // rcx
  ULONG_PTR v39; // r10
  __int64 *v40; // r9
  __int64 *v41; // rbx
  __int64 v42; // rax
  __int64 **v43; // rdx
  __int64 *v44; // rdx
  __int64 *v45; // r11
  __int64 **v46; // r8
  __int64 v47; // r12
  __int64 **v48; // rdi
  _BYTE *v49; // rdx
  __int64 **v50; // r8
  __int64 **v51; // rax
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int64 v60; // r12
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int64 *v67; // rax
  char *v68; // rdx
  char *v69; // rax
  __int128 v70; // xmm0
  __int64 v71; // r8
  _OWORD *v72; // rax
  __int128 v73; // xmm1
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  __int128 v83; // xmm0
  __int128 v84; // xmm1
  __int128 v85; // xmm0
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  int v89; // r11d
  __int64 v90; // rdx
  ULONG_PTR v91; // r8
  int v92; // eax
  __int64 **v93; // r9
  __int64 v94; // r8
  __int64 v95; // rax
  __int64 *v96; // rcx
  __int64 **v97; // rdx
  __int64 *v98; // rax
  __int64 v99; // r9
  int v100; // eax
  __int64 v101; // rcx
  LARGE_INTEGER v102; // [rsp+40h] [rbp-2E8h]
  __int64 v103; // [rsp+48h] [rbp-2E0h]
  __int64 v104; // [rsp+50h] [rbp-2D8h]
  _BYTE v105[712]; // [rsp+60h] [rbp-2C8h] BYREF
  int v106; // [rsp+330h] [rbp+8h]
  unsigned int v108; // [rsp+340h] [rbp+18h]
  unsigned int v109; // [rsp+348h] [rbp+20h]

  v2 = 0;
  v103 = 0LL;
  v104 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) & 1) != 0
    || !*(_QWORD *)(a1 + 2664) && (*(_DWORD *)(a1 + 144) & 0x10) == 0
    || (*(_DWORD *)(a1 + 144) & 0x8001) != 0
    || !*(_DWORD *)(a1 + 148)
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
  v9 = *(_QWORD *)(a1 + 64);
  v10 = MEMORY[0xFFFFF78000000014] & 0xFFFFFFFC;
  v102.HighPart = MEMORY[0xFFFFF78000000018];
  v11 = *(_QWORD *)(v9 + 168);
  if ( v11 <= (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL)
    && (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL) - v11 < 864000000000LL
                                                                  * (unsigned __int64)(unsigned int)CmpReorganizeDelayDays )
  {
LABEL_9:
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
LABEL_10:
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v2;
  }
  if ( v11 == 2 || v11 != 1 && (*(_DWORD *)(a1 + 5360) & 0x400) == 0 )
  {
    v102.LowPart = v10 | 2;
    CmpClearKeyAccessBits(a1, a2);
    *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 64) + 168LL) = v102;
    goto LABEL_9;
  }
  v102.LowPart = v10 | 1;
  TemporaryHive = CmpCreateTemporaryHive(v8, v9 + 112, v9 + 148);
  v14 = TemporaryHive;
  if ( !TemporaryHive )
  {
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    v2 = -1073741670;
    goto LABEL_10;
  }
  *(_DWORD *)(*(_QWORD *)(TemporaryHive + 64) + 24LL) = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 24LL);
  *(_DWORD *)(TemporaryHive + 196) = *(_DWORD *)(a1 + 196);
  v15 = *(unsigned int *)(*(_QWORD *)(a1 + 64) + 36LL);
  if ( (_DWORD)v15 == -1 )
  {
    v16 = 0;
    goto LABEL_105;
  }
  v17 = CmpCopyKeyPartial(a1, v15, TemporaryHive, 0xFFFFFFFFLL, 6);
  if ( v17 == -1 || (*(_DWORD *)(*(_QWORD *)(v14 + 64) + 36LL) = v17, !(unsigned __int8)CmpCopySyncTree(a1, 66, 0)) )
  {
    v16 = -1073741670;
    goto LABEL_105;
  }
  v22 = *(_DWORD *)(v14 + 1400);
  v108 = v22;
  CmpLockRegistry(v19, v18, v20, v21);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 2848), 1u);
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
  v16 = CmpDoFileSetSizeEx(a1, 0LL, v22 + 4096, 1LL);
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
  CmpUnlockRegistry();
  if ( v16 >= 0 )
  {
    v109 = *(_DWORD *)(a1 + 1400);
    v24 = ((v22 >> 12) + 3) & 0xFFFFFFFC;
    if ( v24 < *(_DWORD *)(a1 + 92) )
    {
      v24 = *(_DWORD *)(a1 + 92);
    }
    else
    {
      LOBYTE(v23) = 1;
      v103 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v24, v23, 842157379LL);
      v5 = v103;
      if ( !v103 )
      {
        v16 = -1073741801;
        goto LABEL_105;
      }
      LOBYTE(v25) = 1;
      v104 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v24, v25, 842157379LL);
      v6 = v104;
      if ( !v104 )
      {
        v16 = -1073741801;
LABEL_101:
        if ( v103 )
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v103, v24);
        if ( v104 )
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v104, v24);
        goto LABEL_105;
      }
    }
    if ( (*(_BYTE *)(a1 + 124) & 4) == 0 || (v16 = HvViewMapPinForFileOffset(a1 + 200, 4096LL, v22), v16 >= 0) )
    {
      if ( v5 || v6 )
      {
        v26 = *(_QWORD *)(a1 + 80);
        if ( v26 )
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v26, *(unsigned int *)(a1 + 92));
        v27 = *(_QWORD *)(a1 + 104);
        if ( v27 )
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v27, *(unsigned int *)(a1 + 92));
      }
      else
      {
        v5 = *(_QWORD *)(a1 + 80);
        v6 = *(_QWORD *)(a1 + 104);
      }
      *(_QWORD *)(a1 + 80) = v5;
      *(_DWORD *)(a1 + 72) = v22 >> 9;
      *(_DWORD *)(a1 + 96) = v22 >> 9;
      *(_QWORD *)(a1 + 104) = v6;
      *(_DWORD *)(a1 + 92) = v24;
      v103 = 0LL;
      v104 = 0LL;
      RtlSetAllBits((PRTL_BITMAP)(a1 + 72));
      *(_DWORD *)(a1 + 88) = *(_DWORD *)(a1 + 72);
      RtlClearAllBits((PRTL_BITMAP)(a1 + 96));
      v28 = *(_QWORD *)(a1 + 64);
      *(_DWORD *)(a1 + 112) = 0;
      v29 = *(_DWORD *)(v28 + 36);
      *(_DWORD *)(v28 + 36) = *(_DWORD *)(*(_QWORD *)(v14 + 64) + 36LL);
      *(_DWORD *)(*(_QWORD *)(v14 + 64) + 36LL) = v29;
      if ( (*(_BYTE *)(a1 + 124) & 4) != 0 )
      {
        for ( i = 0; i < *(_DWORD *)(v14 + 1400); *(_QWORD *)(CellMap + 24) = 0LL )
        {
          CellMap = HvpGetCellMap(v14, i);
          if ( !CellMap )
            KeBugCheckEx(0x51u, 1uLL, v14, i, 0x568uLL);
          FreeBin = HvpMapEntryGetFreeBin();
          if ( FreeBin )
            v33 = *(_DWORD *)(FreeBin + 20);
          else
            v33 = i - *(_DWORD *)CellMap;
          v34 = *(_QWORD *)(CellMap + 8) & 0xFLL;
          v35 = *(_DWORD *)((*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          *(_QWORD *)(CellMap + 16) = *(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL;
          *(_QWORD *)(CellMap + 8) = v34;
          v36 = v33 + 4096;
          if ( (((unsigned int)v36 ^ (v33 + v35 + 4095)) & 0xFFFC0000) == 0 )
            *(_QWORD *)(CellMap + 8) |= HvViewMapAddressForFileOffset(a1 + 200, v36);
          i += 4096;
        }
        *(_BYTE *)(v14 + 124) |= 4u;
      }
      v106 = 0;
      v37 = v14 - a1;
      v38 = (__int64 *)(v14 + 2008);
      v39 = a1 - v14;
      do
      {
        v40 = (__int64 *)((char *)v38 + v39);
        v41 = 0LL;
        v42 = *(__int64 *)((char *)v38 + v39);
        if ( (__int64 *)v42 != (__int64 *)((char *)v38 + v39) )
        {
          v41 = *(__int64 **)((char *)v38 + v39);
          v43 = *(__int64 ***)((char *)v38 + v39 + 8);
          if ( *(__int64 **)(v42 + 8) != v40 || *v43 != v40 )
            __fastfail(3u);
          *v43 = (__int64 *)v42;
          *(_QWORD *)(v42 + 8) = v43;
        }
        v44 = (__int64 *)*v38;
        v45 = 0LL;
        if ( (__int64 *)*v38 != v38 )
        {
          v45 = (__int64 *)*v38;
          v46 = *(__int64 ***)((char *)v38 + v39 + v37 + 8);
          if ( (__int64 *)v44[1] != v38 || *v46 != v38 )
            __fastfail(3u);
          *v46 = v44;
          v44[1] = (__int64)v46;
        }
        v47 = 4LL;
        v48 = (__int64 **)((char *)v38 + v39 + 8);
        v49 = v105;
        v50 = v48 - 77;
        v51 = v48 - 77;
        do
        {
          v52 = *(_OWORD *)v51;
          v53 = *((_OWORD *)v51 + 1);
          v51 += 16;
          *(_OWORD *)v49 = v52;
          v54 = *((_OWORD *)v51 - 6);
          *((_OWORD *)v49 + 1) = v53;
          v55 = *((_OWORD *)v51 - 5);
          *((_OWORD *)v49 + 2) = v54;
          v56 = *((_OWORD *)v51 - 4);
          *((_OWORD *)v49 + 3) = v55;
          v57 = *((_OWORD *)v51 - 3);
          *((_OWORD *)v49 + 4) = v56;
          v58 = *((_OWORD *)v51 - 2);
          *((_OWORD *)v49 + 5) = v57;
          v59 = *((_OWORD *)v51 - 1);
          *((_OWORD *)v49 + 6) = v58;
          v49 += 128;
          *((_OWORD *)v49 - 1) = v59;
          --v47;
        }
        while ( v47 );
        v60 = 4LL;
        v61 = *((_OWORD *)v51 + 1);
        *(_OWORD *)v49 = *(_OWORD *)v51;
        v62 = *((_OWORD *)v51 + 2);
        *((_OWORD *)v49 + 1) = v61;
        v63 = *((_OWORD *)v51 + 3);
        *((_OWORD *)v49 + 2) = v62;
        v64 = *((_OWORD *)v51 + 4);
        *((_OWORD *)v49 + 3) = v63;
        v65 = *((_OWORD *)v51 + 5);
        *((_OWORD *)v49 + 4) = v64;
        v66 = *((_OWORD *)v51 + 6);
        v67 = v51[14];
        *((_OWORD *)v49 + 5) = v65;
        *((_OWORD *)v49 + 6) = v66;
        *((_QWORD *)v49 + 14) = v67;
        v68 = (char *)v48 + v37 - 616;
        v69 = v68;
        do
        {
          v70 = *(_OWORD *)v69;
          v69 += 128;
          *(_OWORD *)v50 = v70;
          v50 += 16;
          *((_OWORD *)v50 - 7) = *((_OWORD *)v69 - 7);
          *((_OWORD *)v50 - 6) = *((_OWORD *)v69 - 6);
          *((_OWORD *)v50 - 5) = *((_OWORD *)v69 - 5);
          *((_OWORD *)v50 - 4) = *((_OWORD *)v69 - 4);
          *((_OWORD *)v50 - 3) = *((_OWORD *)v69 - 3);
          *((_OWORD *)v50 - 2) = *((_OWORD *)v69 - 2);
          *((_OWORD *)v50 - 1) = *((_OWORD *)v69 - 1);
          --v60;
        }
        while ( v60 );
        *(_OWORD *)v50 = *(_OWORD *)v69;
        *((_OWORD *)v50 + 1) = *((_OWORD *)v69 + 1);
        *((_OWORD *)v50 + 2) = *((_OWORD *)v69 + 2);
        *((_OWORD *)v50 + 3) = *((_OWORD *)v69 + 3);
        *((_OWORD *)v50 + 4) = *((_OWORD *)v69 + 4);
        *((_OWORD *)v50 + 5) = *((_OWORD *)v69 + 5);
        *((_OWORD *)v50 + 6) = *((_OWORD *)v69 + 6);
        v50[14] = (__int64 *)*((_QWORD *)v69 + 14);
        v71 = 4LL;
        v72 = v105;
        do
        {
          v73 = v72[1];
          *(_OWORD *)v68 = *v72;
          v74 = v72[2];
          *((_OWORD *)v68 + 1) = v73;
          v75 = v72[3];
          *((_OWORD *)v68 + 2) = v74;
          v76 = v72[4];
          *((_OWORD *)v68 + 3) = v75;
          v77 = v72[5];
          *((_OWORD *)v68 + 4) = v76;
          v78 = v72[6];
          *((_OWORD *)v68 + 5) = v77;
          v79 = v72[7];
          v72 += 8;
          *((_OWORD *)v68 + 6) = v78;
          v68 += 128;
          *((_OWORD *)v68 - 1) = v79;
          --v71;
        }
        while ( v71 );
        v80 = v72[1];
        *(_OWORD *)v68 = *v72;
        v81 = v72[2];
        *((_OWORD *)v68 + 1) = v80;
        v82 = v72[3];
        *((_OWORD *)v68 + 2) = v81;
        v83 = v72[4];
        *((_OWORD *)v68 + 3) = v82;
        v84 = v72[5];
        *((_OWORD *)v68 + 4) = v83;
        v85 = v72[6];
        v86 = *((_QWORD *)v72 + 14);
        *((_OWORD *)v68 + 5) = v84;
        *((_OWORD *)v68 + 6) = v85;
        *((_QWORD *)v68 + 14) = v86;
        *v48 = v40;
        *v40 = (__int64)v40;
        *(__int64 **)((char *)v48 + v37) = v38;
        *v38 = (__int64)v38;
        if ( v41 )
        {
          v87 = *v41;
          *v38 = *v41;
          *(__int64 **)((char *)v48 + v37) = v41;
          if ( *(__int64 **)(v87 + 8) != v41 )
            __fastfail(3u);
          *(_QWORD *)(v87 + 8) = v38;
          *v41 = (__int64)v38;
        }
        if ( v45 )
        {
          v88 = *v45;
          *v40 = *v45;
          *v48 = v45;
          if ( *(__int64 **)(v88 + 8) != v45 )
            __fastfail(3u);
          *(_QWORD *)(v88 + 8) = v40;
          *v45 = (__int64)v40;
        }
        v89 = v106;
        v90 = 632LL * v106;
        v91 = v90 + a1 + 1416;
        if ( *(v38 - 75) == v91 )
          *(v38 - 75) = v14 + v90 + 1416;
        if ( *(__int64 *)((char *)v38 + v39 - 600) == v14 + v90 + 1416 )
          *(__int64 *)((char *)v38 + v39 - 600) = v91;
        v38 += 79;
        ++v106;
      }
      while ( v89 + 1 <= 1 );
      v92 = *(_DWORD *)(a1 + 144);
      if ( (v92 & 0x10) != 0 )
      {
        *(_DWORD *)(a1 + 144) = v92 & 0xFFFFFFEF;
        *(_DWORD *)(v14 + 144) |= 0x10u;
      }
      CmpDestroySecurityCache(a1);
      LODWORD(v94) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL) = *(_DWORD *)(*(_QWORD *)(v14 + 64) + 40LL);
      *(_DWORD *)(a1 + 3040) = *(_DWORD *)(v14 + 3040);
      *(_DWORD *)(a1 + 3044) = *(_DWORD *)(v14 + 3044);
      *(_DWORD *)(a1 + 3048) = *(_DWORD *)(v14 + 3048);
      *(_QWORD *)(a1 + 3056) = *(_QWORD *)(v14 + 3056);
      do
      {
        v95 = 16LL * (unsigned int)v94;
        v96 = (__int64 *)(v95 + a1 + 3064);
        v97 = (__int64 **)(v95 + v14 + 3064);
        v96[1] = (__int64)v96;
        *v96 = (__int64)v96;
        while ( *v97 != (__int64 *)v97 )
        {
          v98 = *v97;
          v99 = **v97;
          if ( (__int64 **)(*v97)[1] != v97 || *(__int64 **)(v99 + 8) != v98 )
            __fastfail(3u);
          *v97 = (__int64 *)v99;
          *(_QWORD *)(v99 + 8) = v97;
          v93 = (__int64 **)v96[1];
          *v98 = (__int64)v96;
          v98[1] = (__int64)v93;
          if ( *v93 != v96 )
            __fastfail(3u);
          *v93 = v98;
          v96[1] = (__int64)v98;
        }
        v94 = (unsigned int)(v94 + 1);
      }
      while ( (unsigned int)v94 < 0x40 );
      v100 = *(_DWORD *)(v14 + 6016);
      *(_QWORD *)(v14 + 3056) = 0LL;
      *(_QWORD *)(v14 + 3040) = 0LL;
      *(_DWORD *)(a1 + 6016) = v100;
      *(_DWORD *)(a1 + 6020) = *(_DWORD *)(v14 + 6020);
      *(_DWORD *)(a1 + 6024) = *(_DWORD *)(v14 + 6024);
      *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 64) + 168LL) = v102;
      CmpLockRegistry(v96, v97, v94, v93);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 2848), 1u);
      ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
      HvMarkBaseBlockDirty(a1);
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
      CmpUnlockRegistry();
      CmpLogReorganizeEvent(a2, v109, v108);
      if ( v108 < v109 )
      {
        if ( CmpFirstReorganize )
        {
          v101 = 0LL;
          CmpReorganizeLastRun = v102;
          CmpFirstReorganize = 0;
        }
        else
        {
          v101 = CmpReorganizeTotalBytesSaved;
        }
        CmpReorganizeTotalBytesSaved = v109 - v108 + v101;
        CmpUpdateReorganizeRegistryValues();
      }
      v16 = 0;
    }
    goto LABEL_101;
  }
LABEL_105:
  CmpDestroyTemporaryHive(v14);
  ExReleaseRundownProtection_0(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v16;
}
