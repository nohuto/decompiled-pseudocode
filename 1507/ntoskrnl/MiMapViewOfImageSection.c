/*
 * XREFs of MiMapViewOfImageSection @ 0x140421990
 * Callers:
 *     MiMapViewOfSection @ 0x1404BA540 (MiMapViewOfSection.c)
 *     MiMapImageInSystemProcess @ 0x1406A0960 (MiMapImageInSystemProcess.c)
 * Callees:
 *     MiCommitVadCfgBits @ 0x14000FE10 (MiCommitVadCfgBits.c)
 *     MiIsProcessCfgEnabled @ 0x140010004 (MiIsProcessCfgEnabled.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140010380 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ExGenRandom @ 0x140020AD0 (ExGenRandom.c)
 *     MiDereferenceControlArea @ 0x140025CDC (MiDereferenceControlArea.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     MiUnlockVad @ 0x1400894F0 (MiUnlockVad.c)
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     MiReferenceVad @ 0x1400896D4 (MiReferenceVad.c)
 *     MiInsertVadEvent @ 0x140089D40 (MiInsertVadEvent.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140089E40 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14008A330 (LOCK_ADDRESS_SPACE.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14008A920 (MiCheckPurgeAndUpMapCount.c)
 *     MiGetWsAndInsertVad @ 0x14008A9F0 (MiGetWsAndInsertVad.c)
 *     MiArbitraryCodeBlocked @ 0x1400DCCF8 (MiArbitraryCodeBlocked.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14020DEFC (MiUpdatePrivateDemandZeroView.c)
 *     MiRemoveVadEvent @ 0x14021A314 (MiRemoveVadEvent.c)
 *     MiDereferencePerSessionProtos @ 0x14021BF98 (MiDereferencePerSessionProtos.c)
 *     MiMapUserLargePages @ 0x14022F2A8 (MiMapUserLargePages.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiReferenceFileObjectForMap @ 0x140422368 (MiReferenceFileObjectForMap.c)
 *     MiIsVaRangeAvailable @ 0x140422388 (MiIsVaRangeAvailable.c)
 *     PsCallImageNotifyRoutines @ 0x140423B80 (PsCallImageNotifyRoutines.c)
 *     MiAllocateFixupVad @ 0x14044D734 (MiAllocateFixupVad.c)
 *     MmUnsecureVirtualMemory @ 0x1404B5984 (MmUnsecureVirtualMemory.c)
 *     MiSelectUserAddress @ 0x1404B59C4 (MiSelectUserAddress.c)
 *     MiAddSecureEntry @ 0x1404B5A90 (MiAddSecureEntry.c)
 *     MiAdvanceVadHint @ 0x1404B5C80 (MiAdvanceVadHint.c)
 *     MiUnmapVad @ 0x1404B7570 (MiUnmapVad.c)
 *     MiInsertSharedCommitNode @ 0x1404B7640 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1404B7A60 (MiRemoveSharedCommitNode.c)
 *     MiInsertVadCharges @ 0x1404B8410 (MiInsertVadCharges.c)
 *     MiLoadUserSymbols @ 0x1405C1F68 (MiLoadUserSymbols.c)
 *     MiLogMapFileEvent @ 0x1406A091C (MiLogMapFileEvent.c)
 *     MiCreatePerSessionProtos @ 0x1406A3478 (MiCreatePerSessionProtos.c)
 *     MiCreateLargePageVad @ 0x1406A9CA4 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1406AA134 (MiFreeLargePageView.c)
 */

__int64 __fastcall MiMapViewOfImageSection(
        __int64 a1,
        __int64 a2,
        struct _KPROCESS *a3,
        unsigned __int64 *a4,
        _QWORD *a5,
        unsigned __int64 *a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned __int64 a10,
        int a11,
        char a12)
{
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v15; // r15
  __int64 v16; // r10
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r14
  int v19; // ecx
  int v20; // edx
  char v21; // bl
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r13
  PVOID PoolWithTag; // rax
  __int64 v26; // rdx
  __int64 v27; // rsi
  int v28; // ecx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v33; // r14
  __int64 v34; // r13
  int v35; // edx
  unsigned __int64 v36; // r12
  int LargePageVad; // r15d
  unsigned __int64 v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned int i; // ecx
  __int64 v42; // r8
  bool v43; // zf
  __int64 v44; // rcx
  int inserted; // edi
  __int64 v46; // rdi
  __int64 v47; // r9
  __int64 v48; // r8
  unsigned __int64 v49; // r14
  unsigned __int16 v50; // ax
  char v51; // bl
  __int64 v52; // rdx
  char *v53; // r15
  int v54; // ecx
  __int64 v55; // r14
  int v56; // edi
  __int64 result; // rax
  int v58; // edx
  int v59; // ecx
  unsigned __int64 v60; // r14
  int v61; // r15d
  unsigned __int64 v62; // r15
  unsigned int v63; // ecx
  unsigned int v64; // r15d
  __int64 v65; // rcx
  __int16 v66; // cx
  int v67; // eax
  unsigned int v68; // ecx
  char v69; // al
  __int64 v70; // r9
  __int64 v71; // rdx
  void *v72; // rcx
  int v73; // r9d
  unsigned __int64 v74; // r14
  unsigned __int64 v75; // rdi
  unsigned __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdx
  void *v79; // rcx
  unsigned int v80; // eax
  __int64 v81; // rdi
  unsigned __int64 v82; // rdi
  unsigned __int64 v83; // rdi
  unsigned int SessionId; // eax
  __int64 v85; // r8
  __int64 v86; // r9
  char *v87; // [rsp+48h] [rbp-C0h]
  int v88; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v89; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v90; // [rsp+58h] [rbp-B0h]
  int v91; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v92; // [rsp+64h] [rbp-A4h]
  __int64 v93; // [rsp+68h] [rbp-A0h]
  __int64 v94; // [rsp+70h] [rbp-98h]
  __int64 v95; // [rsp+78h] [rbp-90h]
  unsigned __int64 v96; // [rsp+80h] [rbp-88h]
  struct _KTHREAD *v97; // [rsp+88h] [rbp-80h]
  unsigned __int64 v98; // [rsp+90h] [rbp-78h]
  unsigned __int64 v99; // [rsp+98h] [rbp-70h]
  __int64 FixupVad; // [rsp+A0h] [rbp-68h]
  __int64 v101; // [rsp+A8h] [rbp-60h]
  char v102[8]; // [rsp+B0h] [rbp-58h] BYREF
  int v103; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v104; // [rsp+C0h] [rbp-48h]
  int v105; // [rsp+C8h] [rbp-40h]
  __int64 v106; // [rsp+D0h] [rbp-38h]
  int v107; // [rsp+D8h] [rbp-30h]
  __int64 v108; // [rsp+E8h] [rbp-20h] BYREF
  int v109; // [rsp+F0h] [rbp-18h]

  v12 = a1;
  v13 = (__int64)a3;
  v92 = a11 & 0x7F;
  if ( v92 > (unsigned __int16)KeNumberNodes )
    return 3221225719LL;
  v15 = *(_QWORD *)a1;
  v94 = v15;
  v95 = 0x10000LL;
  LODWORD(v93) = 0;
  v16 = *(_QWORD *)(v15 + 56);
  v17 = *(_QWORD *)(v15 + 32);
  v18 = *(_QWORD *)(v15 + 48);
  v101 = v16;
  v96 = v17;
  if ( (a11 & 0x20000000) != 0 )
  {
    if ( v17 < 0x100000000LL || (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 )
      return 3221225496LL;
    if ( (*(_BYTE *)(v16 + 44) & 1) != 0 )
      return 3221226089LL;
    v95 = 0x200000LL;
    *a4 = 0LL;
  }
  v19 = (*(_DWORD *)(a7 + 56) >> 19) & 1;
  if ( v19 && a9 != 1 )
    return 3221225541LL;
  v20 = *(_DWORD *)(v13 + 768);
  v21 = 2;
  if ( (v20 & 0x8000000) != 0 && (*(_BYTE *)(v16 + 51) & 4) == 0 )
  {
    if ( (*(_BYTE *)(v16 + 44) & 1) != 0 )
    {
      if ( (v20 & 0x1000000) != 0 )
        return 3221226089LL;
    }
    else
    {
      v21 = 3;
    }
  }
  if ( (*(_BYTE *)(v15 + 15) & ((v20 & 0x20000) == 0)) != 0 )
  {
    v21 |= 1u;
    if ( (*(_DWORD *)(v12 + 56) & 0x10000000) == 0 )
      v21 &= ~2u;
  }
  v99 = 0LL;
  if ( v19 )
    goto LABEL_10;
  v22 = v12 + 120;
  if ( v12 == -120 )
    goto LABEL_10;
  while ( (*(_BYTE *)(v22 + 32) & 0xEu) < 0xC )
  {
    v22 = *(_QWORD *)(v22 + 16);
    if ( !v22 )
      goto LABEL_10;
  }
  result = MiArbitraryCodeBlocked(a2);
  if ( (int)result >= 0 )
  {
LABEL_10:
    FixupVad = v12 + 120;
    MiCheckPurgeAndUpMapCount(v12);
    v23 = *a6;
    if ( !*a6 )
      v23 = *(_QWORD *)(a7 + 48) - *a5;
    v24 = (v23 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v98 = v24;
    v90 = v24;
    v87 = (char *)MmHighestUserAddress - 0x10000;
    if ( a10 )
    {
      v87 = (char *)(0xFFFFFFFFFFFFFFFFuLL >> a10);
      if ( (char *)(0xFFFFFFFFFFFFFFFFuLL >> a10) > (char *)MmHighestUserAddress - 0x10000 )
        v87 = (char *)MmHighestUserAddress - 0x10000;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x20646156u);
    v27 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      MiDereferenceControlArea(v12, v26);
      return 3221225626LL;
    }
    memset(PoolWithTag, 0, 0x88uLL);
    *(_QWORD *)(v27 + 16) = -2LL;
    v28 = (v92 & 0x3F) << 8;
    *(_DWORD *)(v27 + 64) ^= (*(_DWORD *)(v27 + 64) ^ ((a8 == 1) << 26)) & 0x4000000;
    *(_DWORD *)(v27 + 48) = *(_DWORD *)(v27 + 48) & 0xFFFFC0FA | v28 | 2;
    *(_QWORD *)(v27 + 128) = MiReferenceFileObjectForMap(a7);
    v31 = (*(_DWORD *)(v27 + 64) ^ (*(_DWORD *)(a7 + 60) >> 3)) & 0x10000000;
    *(_QWORD *)(v27 + 40) = 0LL;
    *(_DWORD *)(v27 + 64) ^= v31;
    if ( (*(_DWORD *)(a7 + 56) & 0x80000) != 0 )
    {
      v21 |= 1u;
      v63 = *(_DWORD *)(v27 + 48) & 0xFFFFFF07 | 8;
      *(_DWORD *)(v27 + 48) = v63;
      if ( (*(_DWORD *)(v12 + 56) & 0x10000000) == 0 )
        v21 &= ~2u;
      *(_DWORD *)(v27 + 48) = v63 | 0x4000;
    }
    else
    {
      *(_DWORD *)(v27 + 48) = *(_DWORD *)(v27 + 48) & 0xFFFFFF07 | 0x38;
      if ( *(_QWORD *)(v13 + 720) )
        *(_DWORD *)(v27 + 64) |= 0x20000000u;
      *(_DWORD *)(v27 + 52) ^= (v18 ^ *(_DWORD *)(v27 + 52)) & 0x7FFFFFFF;
      *(_BYTE *)(v27 + 34) = v18 >> 31;
    }
    CurrentThread = KeGetCurrentThread();
    v91 = 0;
    v97 = CurrentThread;
    if ( *a4 )
      v33 = *a4 & 0xFFFFFFFFFFFF0000uLL;
    else
      v33 = v96 + (*(_DWORD *)a5 & 0xFFFF0000);
    v89 = v33;
    if ( v95 == 0x200000 )
    {
      v21 = v21 & 0xFC | 1;
      v90 = (v24 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
      v67 = ((v90 >> 12) ^ *(_DWORD *)(v27 + 52)) & 0x7FFFFFFF;
      *(_BYTE *)(v27 + 34) = v90 >> 43;
      *(_DWORD *)(v27 + 52) ^= v67;
      *(_DWORD *)(v27 + 64) |= 0x1000000u;
      if ( v92 )
        v68 = v92;
      else
        v68 = (*(_DWORD *)(v12 + 56) >> 20) & 0x3F;
      v69 = *(_BYTE *)(v27 + 48) & 0xF8;
      LODWORD(v93) = v68;
      v70 = 1LL;
      if ( v69 == 56 )
        v70 = 6LL;
      LargePageVad = MiCreateLargePageVad(v13, v27, v68, v70);
      if ( LargePageVad < 0 )
      {
        v72 = *(void **)(v27 + 128);
        if ( v72 )
          ObfDereferenceObject(v72);
        MiDereferenceControlArea(v12, v71);
        ExFreePoolWithTag((PVOID)v27, 0);
        return (unsigned int)LargePageVad;
      }
      CurrentThread = v97;
      v15 = v94;
    }
    if ( (*(_BYTE *)(v27 + 48) & 0xF8) == 0x38 && *(_QWORD *)(v13 + 744) && (PEPROCESS)v13 != PsInitialSystemProcess )
    {
      if ( (PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask & 4) != 0 )
      {
        v33 = v89;
        v34 = 1LL;
        goto LABEL_26;
      }
      v33 = v89;
    }
    v34 = 0LL;
LABEL_26:
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, v13, v29, v30);
    if ( (*(_DWORD *)(v13 + 772) & 0x20) != 0 )
    {
      inserted = -1073741558;
      goto LABEL_165;
    }
    if ( *a4 )
    {
      if ( !(unsigned int)MiIsVaRangeAvailable(v13, v33, v90, v87) )
      {
        inserted = -1073741800;
        goto LABEL_165;
      }
    }
    else
    {
      v35 = v90;
      if ( (char *)v90 > (char *)MmHighestUserAddress - 0x10000 )
      {
        inserted = -1073741801;
        goto LABEL_165;
      }
      if ( (v21 & 1) == 0 )
      {
        if ( (unsigned int)MiIsVaRangeAvailable(v13, v33, v90, v87) )
          goto LABEL_31;
        v35 = v90;
      }
      v59 = a10;
      v60 = a10;
      if ( v96 < 0x100000000LL
        && (unsigned __int64)v87 >= 0x100000000LL
        && (*(_BYTE *)(v15 + 15) & 1) == 0
        && a10 < 0x20 )
      {
        v59 = 32;
        a10 = 32LL;
      }
      v61 = v95;
      inserted = MiSelectUserAddress(
                   a11,
                   v59,
                   v35,
                   v95,
                   (unsigned __int8)*(_DWORD *)(v27 + 48) >> 3,
                   (__int64)&v91,
                   (__int64)&v89);
      if ( inserted < 0 )
      {
        if ( a10 == v60 )
        {
          v62 = v90;
        }
        else
        {
          v73 = v61;
          v62 = v90;
          inserted = MiSelectUserAddress(
                       a11,
                       v60,
                       v90,
                       v73,
                       (unsigned __int8)*(_DWORD *)(v27 + 48) >> 3,
                       (__int64)&v91,
                       (__int64)&v89);
        }
        if ( inserted < 0 )
          goto LABEL_165;
      }
      else
      {
        v62 = v90;
      }
      if ( v95 == 0x200000 )
      {
        v74 = v98;
        v75 = (v62 - v98) >> 16;
        if ( v75 )
        {
          v76 = (unsigned int)ExGenRandom(1) % v75;
          v99 = v76;
        }
        else
        {
          LOBYTE(v76) = v99;
        }
        v77 = *(_QWORD *)(*(_QWORD *)(v27 + 56) + 16LL);
        *(_QWORD *)(v77 + 32) = v74 >> 12;
        *(_BYTE *)(v77 + 28) = v76;
      }
      v13 = (__int64)a3;
      v33 = v89;
    }
LABEL_31:
    v36 = v90;
    LargePageVad = 0;
    if ( v33 - (*(_DWORD *)a5 & 0xFFFF0000) != v96 )
      LargePageVad = 1073741827;
    *(_DWORD *)(v27 + 24) = v33 >> 12;
    v96 = v33 >> 12;
    *(_BYTE *)(v27 + 32) = v33 >> 12 >> 32;
    v38 = (v33 + v36 - 1) >> 12;
    *(_DWORD *)(v27 + 28) = v38;
    *(_BYTE *)(v27 + 33) = BYTE4(v38);
    *(_WORD *)a5 = 0;
    v39 = FixupVad;
    v40 = (__int64)*a5 >> 12;
    for ( i = *(_DWORD *)(FixupVad + 44); (unsigned int)v40 >= i; i = *(_DWORD *)(v39 + 44) )
    {
      v39 = *(_QWORD *)(v39 + 16);
      LODWORD(v40) = v40 - i;
    }
    v42 = v94;
    *(_QWORD *)(v27 + 72) = v39;
    *(_QWORD *)(v27 + 80) = *(_QWORD *)(v39 + 8) + 8LL * (unsigned int)v40;
    v43 = (a12 & 4) == 0;
    *(_QWORD *)(v27 + 88) = *(_QWORD *)(v42 + 64) + 8 * (*(unsigned int *)(v42 + 8) - 1LL);
    v44 = a1;
    if ( v43 && LargePageVad == 1073741827 )
    {
      v58 = *(_DWORD *)(a1 + 56);
      if ( (((v58 & 0x10000000) == 0) & !_bittest(&a11, 0x17u)) == 0
        && (((v21 & 2) != 0) & (unsigned __int8)~*(_BYTE *)(v42 + 14)) != 0 )
      {
        FixupVad = MiAllocateFixupVad(v27);
        if ( FixupVad )
        {
          ExFreePoolWithTag((PVOID)v27, 0);
          v44 = a1;
          LargePageVad = 1073741878;
          v27 = FixupVad;
        }
        else
        {
          v44 = a1;
          if ( (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 )
          {
            inserted = -1073741670;
            goto LABEL_164;
          }
        }
      }
      else
      {
        if ( (v58 & 0x10000000) != 0 )
        {
          inserted = -1073741800;
          goto LABEL_164;
        }
        v44 = a1;
      }
    }
    if ( v92 )
      MEMORY[0xFFFFF58010804250] = 1;
    if ( (*(_DWORD *)(v44 + 56) & 0x4000000) == 0 )
    {
LABEL_39:
      if ( (*(_DWORD *)(v27 + 64) & 0x20000000) != 0 )
      {
        v81 = *(unsigned int *)(v27 + 52);
        LODWORD(v81) = v81 & 0x7FFFFFFF;
        v82 = ((unsigned __int64)*(unsigned __int8 *)(v27 + 34) << 31) | v81;
        v83 = MiUpdatePrivateDemandZeroView((__int64)a3, v27, 0) + v82;
        *(_DWORD *)(v27 + 52) ^= (v83 ^ *(_DWORD *)(v27 + 52)) & 0x7FFFFFFF;
        *(_BYTE *)(v27 + 34) = v83 >> 31;
        v109 = 32;
        MiInsertVadEvent(v27, &v108, 0);
        v44 = a1;
        v21 |= 0x20u;
        v13 = (__int64)a3;
      }
      inserted = MiInsertSharedCommitNode(v44, v13, 0LL);
      if ( inserted < 0 )
      {
        v12 = a1;
        if ( (*(_DWORD *)(a1 + 56) & 0x4000000) != 0 )
        {
LABEL_178:
          SessionId = MmGetSessionIdEx(a3);
          MiDereferencePerSessionProtos((_QWORD *)a1, SessionId, v85, v86);
        }
      }
      else
      {
        inserted = MiInsertVadCharges(v27, a3);
        if ( inserted >= 0 )
        {
          if ( LargePageVad == 1073741878 )
            ++MEMORY[0xFFFFF58010804260];
          MiGetWsAndInsertVad(v27);
          v46 = (__int64)a3;
          if ( v95 == 0x200000 )
            MiMapUserLargePages(v27, v93, (__int64)a3);
          if ( v91 == 1 )
            MiAdvanceVadHint(v96, v38);
          v47 = 1073741838LL;
          v48 = v98;
          *a6 = v98;
          v49 = (v99 << 16) + v33;
          *a4 = v49;
          if ( *(_BYTE *)(v101 + 50) )
          {
            v50 = *(_WORD *)(v101 + 48);
            if ( (v50 < MEMORY[0xFFFFF7800000002C] || v50 > MEMORY[0xFFFFF7800000002E])
              && !a3[1].ActiveProcessors.Bitmap[7] )
            {
              LargePageVad = 1073741838;
            }
          }
          v89 = v49;
          v88 = LargePageVad;
          if ( (PerfGlobalGroupMask & 0x8000) != 0 )
          {
            MiLogMapFileEvent(v27, 1061LL, v48, 1073741838LL);
            v48 = v98;
            v47 = 1073741838LL;
          }
          v51 = v21 | 4;
          if ( (*(_BYTE *)(v27 + 48) & 0xF8) != 0x38 )
          {
            v55 = (__int64)v97;
LABEL_77:
            if ( (v51 & 4) != 0 )
              UNLOCK_ADDRESS_SPACE(v55, v46);
            return (unsigned int)LargePageVad;
          }
          if ( (NtGlobalFlag & 0x40000) != 0 )
          {
            v64 = LargePageVad - 1073741827;
            if ( v64 > 0x33 || (v65 = 0x8000000000801LL, !_bittest64(&v65, (int)v64)) )
            {
              v52 = v94;
              if ( (BYTE4(v97[1].Queue) & 0x20) != 0
                || (v66 = *(_WORD *)(v94 + 12), (v66 & 0x2000) != 0)
                || *(char *)(v94 + 14) >= 0 )
              {
LABEL_57:
                v53 = 0LL;
                if ( v34 )
                {
                  v103 = 3;
                  if ( (*(_DWORD *)(v27 + 64) & 0x10000000) != 0 )
                  {
                    v54 = v103;
                  }
                  else
                  {
                    v103 = v103 & 0xFFFF0FFF | ((*(_BYTE *)(v52 + 15) & 0xF0) << 8);
                    v54 = (v103 ^ (*(unsigned __int8 *)(v52 + 15) << 15)) & 0x70000 ^ v103;
                  }
                  v104 = v49;
                  v106 = v48;
                  v103 = ((unsigned __int16)v54 ^ ((v88 == 1073741838) << 11)) & 0x800 ^ v54;
                  if ( v48 != _InterlockedCompareExchange64((volatile signed __int64 *)(v52 + 24), -1LL, -1LL) )
                    v103 |= 0x80000u;
                  v105 = 0;
                  v107 = 0;
                  v53 = (char *)MI_REFERENCE_CONTROL_AREA_FILE(a1);
                  v51 |= 8u;
                }
                if ( (*(_DWORD *)(a7 + 56) & 0x80000) != 0 || !MiIsProcessCfgEnabled() )
                {
                  if ( (*(_DWORD *)(v27 + 64) & 0x20000000) != 0 )
                    v51 |= 8u;
                }
                else
                {
                  v51 |= 0x18u;
                }
                v55 = (__int64)v97;
                if ( (v51 & 8) == 0 )
                  goto LABEL_76;
                MiLockVad((__int64)v97, v27, v48, v47);
                UNLOCK_ADDRESS_SPACE_UNORDERED(v55, (__int64)a3);
                v51 &= ~4u;
                if ( (*(_DWORD *)(v27 + 64) & 0x20000000) != 0 )
                {
                  MiUpdatePrivateDemandZeroView((__int64)a3, v27, 1);
                  MiRemoveVadEvent(v27, &v108);
                  v51 &= ~0x20u;
                }
                if ( (v51 & 0x10) != 0 )
                {
                  v56 = MiCommitVadCfgBits(v27, 0LL, 0LL);
                  if ( v56 < 0 )
                    goto LABEL_182;
                  v46 = (__int64)a3;
                }
                if ( !v34
                  || (v34 = MiAddSecureEntry(v27, (_DWORD)v96 << 12, ((_DWORD)v38 << 12) | 0xFFFu, -2147483647, 0)) != 0 )
                {
                  MiUnlockVad(v55, v27);
                  if ( v34 )
                  {
                    PsCallImageNotifyRoutines(v53 + 88, *(_QWORD *)(v46 + 744), v102, v53);
                    ObfDereferenceObject(v53);
                    MmUnsecureVirtualMemory((HANDLE)v34);
                  }
LABEL_76:
                  LargePageVad = v88;
                  goto LABEL_77;
                }
                v56 = -1073741670;
LABEL_182:
                MiReferenceVad(v27);
                if ( v53 )
                  ObfDereferenceObject(v53);
                MiUnmapVad(v27, 0LL);
                return (unsigned int)v56;
              }
              *(_WORD *)(v94 + 12) = v66 | 0x2000;
              MiLoadUserSymbols(a1, v49, a3, 1073741838LL);
              v48 = v98;
              v47 = 1073741838LL;
            }
          }
          v52 = v94;
          goto LABEL_57;
        }
        v12 = a1;
        MiRemoveSharedCommitNode(a1, a3, 0LL);
        if ( (*(_DWORD *)(a1 + 56) & 0x4000000) != 0 )
          goto LABEL_178;
      }
LABEL_165:
      UNLOCK_ADDRESS_SPACE((__int64)v97, (__int64)a3);
      if ( (v21 & 0x20) != 0 )
        MiRemoveVadEvent(v27, &v108);
      if ( v27 )
      {
        if ( v95 == 0x200000 )
          MiFreeLargePageView(a3, v27, 0LL);
        v79 = *(void **)(v27 + 128);
        if ( v79 )
          ObfDereferenceObject(v79);
        ExFreePoolWithTag((PVOID)v27, 0);
      }
      MiDereferenceControlArea(v12, v78);
      return (unsigned int)inserted;
    }
    v80 = MmGetSessionIdEx((struct _KPROCESS *)v13);
    inserted = MiCreatePerSessionProtos(a1, v80);
    if ( inserted >= 0 )
    {
      v13 = (__int64)a3;
      v44 = a1;
      goto LABEL_39;
    }
LABEL_164:
    v12 = a1;
    goto LABEL_165;
  }
  return result;
}
