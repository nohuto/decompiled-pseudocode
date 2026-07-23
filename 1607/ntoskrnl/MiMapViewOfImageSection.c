/*
 * XREFs of MiMapViewOfImageSection @ 0x140428990
 * Callers:
 *     MiMapViewOfSection @ 0x140431EE0 (MiMapViewOfSection.c)
 *     MiMapImageInSystemProcess @ 0x140657258 (MiMapImageInSystemProcess.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x140013E84 (MiIsProcessCfgEnabled.c)
 *     MiUnlockVad @ 0x140014020 (MiUnlockVad.c)
 *     MiInsertVadEvent @ 0x140014090 (MiInsertVadEvent.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1400141A4 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     MiLockVad @ 0x14002BB30 (MiLockVad.c)
 *     MiReferenceVad @ 0x14002BEFC (MiReferenceVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14002BF10 (LOCK_ADDRESS_SPACE.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14002C4A0 (MiCheckPurgeAndUpMapCount.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CB50 (UNLOCK_ADDRESS_SPACE.c)
 *     MiGetWsAndInsertVad @ 0x140030660 (MiGetWsAndInsertVad.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     MiDereferenceControlArea @ 0x1400B32FC (MiDereferenceControlArea.c)
 *     MiArbitraryCodeBlocked @ 0x1400B548C (MiArbitraryCodeBlocked.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1401E1414 (MiUpdatePrivateDemandZeroView.c)
 *     MiRemoveVadEvent @ 0x1401E90D4 (MiRemoveVadEvent.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsCallImageNotifyRoutines @ 0x140428110 (PsCallImageNotifyRoutines.c)
 *     MiCommitVadCfgBits @ 0x140428720 (MiCommitVadCfgBits.c)
 *     MiReferenceFileObjectForMap @ 0x1404293F4 (MiReferenceFileObjectForMap.c)
 *     MiAllowImageMap @ 0x140429414 (MiAllowImageMap.c)
 *     MiIsVaRangeAvailable @ 0x140429460 (MiIsVaRangeAvailable.c)
 *     MmUnsecureVirtualMemory @ 0x1404294AC (MmUnsecureVirtualMemory.c)
 *     MiAddSecureEntry @ 0x140429A00 (MiAddSecureEntry.c)
 *     MiInsertSharedCommitNode @ 0x14042D550 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x14042D940 (MiRemoveSharedCommitNode.c)
 *     MiUnmapVad @ 0x14042DDC0 (MiUnmapVad.c)
 *     MiInsertVadCharges @ 0x14042ED10 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140435A80 (MiAdvanceVadHint.c)
 *     MiAllocateFixupVad @ 0x14047F5F8 (MiAllocateFixupVad.c)
 *     MiSelectUserAddress @ 0x1404A67C0 (MiSelectUserAddress.c)
 *     MiLoadUserSymbols @ 0x14058059C (MiLoadUserSymbols.c)
 *     MiLogMapFileEvent @ 0x140657214 (MiLogMapFileEvent.c)
 *     MiCreatePerSessionProtos @ 0x140661C44 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x140661DDC (MiDereferencePerSessionProtos.c)
 *     MiCreateLargePageVad @ 0x1406625E0 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x14066295C (MiFreeLargePageView.c)
 *     MiMapUserLargePages @ 0x140662C0C (MiMapUserLargePages.c)
 */

__int64 __fastcall MiMapViewOfImageSection(
        __int64 a1,
        __int64 a2,
        __int64 a3,
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
  __int64 v14; // r15
  __int64 v15; // rdi
  __int64 v16; // r8
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rax
  __int64 result; // rax
  int v20; // ecx
  int v21; // edx
  char v22; // bl
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r12
  PVOID PoolWithTag; // rax
  __int64 v27; // rsi
  int v28; // ecx
  int v29; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v31; // r14
  __int64 v32; // r13
  int v33; // ecx
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // r10
  int v36; // r15d
  unsigned __int64 v37; // r12
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  unsigned __int64 i; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  bool v43; // zf
  __int64 v44; // rdi
  int PerSessionProtos; // edi
  _BYTE *v46; // r15
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // r14
  unsigned __int16 v49; // ax
  __int64 v50; // rcx
  int v51; // edi
  char v52; // bl
  __int64 v53; // rdx
  int v54; // ecx
  __int64 v55; // rdi
  __int64 v56; // r14
  int v57; // edi
  int v58; // edx
  unsigned __int64 v59; // r14
  int v60; // edx
  __int64 FixupVad; // rdi
  unsigned int v62; // ecx
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  __int16 v65; // r8
  int v66; // eax
  int LargePageVad; // r12d
  void *v68; // rcx
  unsigned __int64 v69; // rdi
  unsigned __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r14
  void *v73; // rcx
  unsigned int SessionId; // eax
  __int64 v75; // rdi
  unsigned __int64 v76; // rdi
  unsigned __int64 v77; // rdi
  unsigned int v78; // eax
  unsigned __int64 v79; // [rsp+48h] [rbp-C0h]
  unsigned int v80; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v81; // [rsp+50h] [rbp-B8h] BYREF
  struct _KTHREAD *v82; // [rsp+58h] [rbp-B0h]
  unsigned int v83; // [rsp+60h] [rbp-A8h]
  int v84; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v85; // [rsp+68h] [rbp-A0h]
  __int64 v86; // [rsp+70h] [rbp-98h]
  unsigned __int64 v87; // [rsp+78h] [rbp-90h]
  unsigned __int64 v88; // [rsp+80h] [rbp-88h]
  unsigned __int64 v89; // [rsp+88h] [rbp-80h]
  unsigned __int64 v90; // [rsp+90h] [rbp-78h]
  __int64 v91; // [rsp+98h] [rbp-70h]
  __int64 v92; // [rsp+A0h] [rbp-68h]
  char v93[8]; // [rsp+A8h] [rbp-60h] BYREF
  int v94; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v95; // [rsp+B8h] [rbp-50h]
  int v96; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v97; // [rsp+C8h] [rbp-40h]
  int v98; // [rsp+D0h] [rbp-38h]
  __int64 v99; // [rsp+E8h] [rbp-20h] BYREF
  int v100; // [rsp+F0h] [rbp-18h]

  v14 = a3;
  v83 = a11 & 0x7F;
  if ( v83 > (unsigned __int16)KeNumberNodes )
    return 3221225719LL;
  v15 = *(_QWORD *)a1;
  v86 = v15;
  v85 = 0x10000LL;
  v16 = *(_QWORD *)(v15 + 56);
  v17 = *(_QWORD *)(v15 + 48);
  v18 = *(_QWORD *)(v15 + 32);
  v91 = v16;
  v81 = v17;
  v88 = v18;
  if ( (a11 & 0x20000000) != 0 )
  {
    if ( v18 < 0x100000000LL || (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 )
      return 3221225496LL;
    if ( (*(_BYTE *)(v16 + 44) & 1) != 0 )
      return 3221226089LL;
    v85 = 0x200000LL;
    *a4 = 0LL;
  }
  if ( (*(_DWORD *)(a7 + 56) & 0x80000) == 0 )
  {
    result = MiAllowImageMap(a2, a7);
    if ( (int)result < 0 )
      return result;
    v16 = v91;
  }
  v20 = (*(_DWORD *)(a7 + 56) >> 19) & 1;
  if ( v20 && a9 != 1 )
    return 3221225541LL;
  v21 = *(_DWORD *)(v14 + 768);
  v22 = 2;
  if ( (v21 & 0x8000000) != 0 && (*(_BYTE *)(v16 + 51) & 4) == 0 )
  {
    if ( (*(_BYTE *)(v16 + 44) & 1) != 0 )
    {
      if ( (v21 & 0x1000000) != 0 )
        return 3221226089LL;
    }
    else
    {
      v22 = 3;
    }
  }
  if ( (*(_BYTE *)(v15 + 15) & ((v21 & 0x20000) == 0)) != 0 )
  {
    v22 |= 1u;
    if ( (*(_DWORD *)(a1 + 56) & 0x10000000) == 0 )
      v22 &= ~2u;
  }
  v90 = 0LL;
  if ( v20 )
    goto LABEL_13;
  v23 = a1 + 128;
  if ( a1 == -128 )
    goto LABEL_13;
  while ( (*(_BYTE *)(v23 + 32) & 0xEu) < 0xC )
  {
    v23 = *(_QWORD *)(v23 + 16);
    if ( !v23 )
      goto LABEL_13;
  }
  result = MiArbitraryCodeBlocked(a2);
  if ( (int)result >= 0 )
  {
LABEL_13:
    v92 = a1 + 128;
    MiCheckPurgeAndUpMapCount(a1);
    v24 = *a6;
    if ( !*a6 )
      v24 = *(_QWORD *)(a7 + 48) - *a5;
    v25 = (v24 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v87 = v25;
    v79 = v25;
    v89 = 0x7FFFFFFDFFFFLL;
    if ( a10 )
    {
      v89 = 0xFFFFFFFFFFFFFFFFuLL >> a10;
      v17 = v81;
      if ( 0xFFFFFFFFFFFFFFFFuLL >> a10 > 0x7FFFFFFDFFFFLL )
        v89 = 0x7FFFFFFDFFFFLL;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x20646156u);
    v27 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      MiDereferenceControlArea(a1);
      return 3221225626LL;
    }
    memset(PoolWithTag, 0, 0x88uLL);
    *(_QWORD *)(v27 + 16) = -2LL;
    v28 = (v83 & 0x3F) << 8;
    *(_DWORD *)(v27 + 64) ^= (*(_DWORD *)(v27 + 64) ^ ((a8 == 1) << 26)) & 0x4000000;
    *(_DWORD *)(v27 + 48) = *(_DWORD *)(v27 + 48) & 0xFFFFC0FA | v28 | 2;
    *(_QWORD *)(v27 + 128) = MiReferenceFileObjectForMap(a7);
    v29 = (*(_DWORD *)(v27 + 64) ^ (*(_DWORD *)(a7 + 60) >> 4)) & 0x8000000;
    *(_QWORD *)(v27 + 40) = 0LL;
    *(_DWORD *)(v27 + 64) ^= v29;
    if ( (*(_DWORD *)(a7 + 56) & 0x80000) != 0 )
    {
      v22 |= 1u;
      v62 = *(_DWORD *)(v27 + 48) & 0xFFFFFF07 | 8;
      *(_DWORD *)(v27 + 48) = v62;
      if ( (*(_DWORD *)(a1 + 56) & 0x10000000) == 0 )
        v22 &= ~2u;
      *(_DWORD *)(v27 + 48) = v62 | 0x4000;
    }
    else
    {
      *(_DWORD *)(v27 + 48) = *(_DWORD *)(v27 + 48) & 0xFFFFFF07 | 0x38;
      if ( *(_QWORD *)(v14 + 720) )
        *(_DWORD *)(v27 + 64) |= 0x10000000u;
      *(_DWORD *)(v27 + 52) ^= (v17 ^ *(_DWORD *)(v27 + 52)) & 0x7FFFFFFF;
      *(_BYTE *)(v27 + 34) = v17 >> 31;
    }
    CurrentThread = KeGetCurrentThread();
    v84 = 0;
    v82 = CurrentThread;
    if ( *a4 )
      v31 = *a4 & 0xFFFFFFFFFFFF0000uLL;
    else
      v31 = v88 + (*(_DWORD *)a5 & 0xFFFF0000);
    v81 = v31;
    if ( v85 == 0x200000 )
    {
      v79 = (v25 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
      v22 = v22 & 0xFC | 1;
      v66 = (v79 >> 12) ^ *(_DWORD *)(v27 + 52);
      *(_BYTE *)(v27 + 34) = v79 >> 43;
      *(_DWORD *)(v27 + 52) ^= v66 & 0x7FFFFFFF;
      *(_DWORD *)(v27 + 64) |= 0x1000000u;
      LargePageVad = MiCreateLargePageVad(v14, v27);
      if ( LargePageVad < 0 )
      {
        v68 = *(void **)(v27 + 128);
        if ( v68 )
          ObfDereferenceObject(v68);
        MiDereferenceControlArea(a1);
        ExFreePoolWithTag((PVOID)v27, 0);
        return (unsigned int)LargePageVad;
      }
      CurrentThread = v82;
      v25 = v87;
    }
    if ( (*(_BYTE *)(v27 + 48) & 0xF8) == 0x38 && *(_QWORD *)(v14 + 744) && (PEPROCESS)v14 != PsInitialSystemProcess )
    {
      if ( (PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask & 4) != 0 )
      {
        v31 = v81;
        v32 = 1LL;
        goto LABEL_29;
      }
      v31 = v81;
    }
    v32 = 0LL;
LABEL_29:
    v100 = 32;
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, v14);
    if ( (*(_DWORD *)(v14 + 772) & 0x20) != 0 )
    {
      PerSessionProtos = -1073741558;
    }
    else if ( *a4 )
    {
      if ( (unsigned int)MiIsVaRangeAvailable(v14, v31, v79, v89) )
      {
LABEL_35:
        v36 = 0;
        if ( v31 - (*(_DWORD *)a5 & 0xFFFF0000) != v88 )
          v36 = 1073741827;
        *(_DWORD *)(v27 + 24) = v31 >> 12;
        v88 = v31 >> 12;
        *(_BYTE *)(v27 + 32) = v31 >> 12 >> 32;
        v37 = (v31 + v35 - 1) >> 12;
        *(_DWORD *)(v27 + 28) = v37;
        *(_BYTE *)(v27 + 33) = BYTE4(v37);
        *(_WORD *)a5 = 0;
        v38 = v92;
        v39 = *a5 >> 12;
        v80 = v36;
        for ( i = *(unsigned int *)(v92 + 44); v39 >= i; i = *(unsigned int *)(v38 + 44) )
        {
          v38 = *(_QWORD *)(v38 + 16);
          v39 -= i;
        }
        *(_QWORD *)(v27 + 72) = v38;
        *(_QWORD *)(v27 + 80) = *(_QWORD *)(v38 + 8) + 8 * v39;
        v41 = *(_QWORD *)(v15 + 64);
        v42 = *(unsigned int *)(v15 + 8) - 1LL;
        v43 = (a12 & 4) == 0;
        v44 = a1;
        *(_QWORD *)(v27 + 88) = v41 + 8 * v42;
        if ( !v43 || v36 != 1073741827 )
          goto LABEL_40;
        v60 = *(_DWORD *)(a1 + 56);
        if ( (((v60 & 0x10000000) == 0) & !_bittest(&a11, 0x17u)) == 0
          && (*(_DWORD *)(a1 + 56) & 0x800) == 0
          && (v22 & 2) != 0 )
        {
          FixupVad = MiAllocateFixupVad(v27);
          if ( FixupVad )
          {
            ExFreePoolWithTag((PVOID)v27, 0);
            v36 = 1073741878;
            v27 = FixupVad;
            v44 = a1;
            v80 = 1073741878;
          }
          else
          {
            v44 = a1;
            if ( (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 )
            {
              PerSessionProtos = -1073741670;
              goto LABEL_163;
            }
          }
        }
        else if ( (v60 & 0x10000000) != 0 )
        {
          PerSessionProtos = -1073741800;
LABEL_163:
          v14 = a3;
          goto LABEL_164;
        }
LABEL_40:
        if ( v83 )
          *(_BYTE *)(qword_140327FD0 + 276840624) = 1;
        if ( (*(_DWORD *)(v44 + 56) & 0x4000000) == 0 )
          goto LABEL_43;
        SessionId = MmGetSessionIdEx((struct _KPROCESS *)a3);
        PerSessionProtos = MiCreatePerSessionProtos(v44, SessionId);
        if ( PerSessionProtos >= 0 )
        {
          v44 = a1;
LABEL_43:
          if ( (*(_DWORD *)(v27 + 64) & 0x10000000) != 0 )
          {
            v75 = *(unsigned int *)(v27 + 52);
            LODWORD(v75) = v75 & 0x7FFFFFFF;
            v76 = ((unsigned __int64)*(unsigned __int8 *)(v27 + 34) << 31) | v75;
            v77 = MiUpdatePrivateDemandZeroView(a3, v27, 0) + v76;
            *(_DWORD *)(v27 + 52) ^= (v77 ^ *(_DWORD *)(v27 + 52)) & 0x7FFFFFFF;
            *(_BYTE *)(v27 + 34) = v77 >> 31;
            MiInsertVadEvent(v27, &v99, 0);
            v44 = a1;
            v22 |= 0x20u;
          }
          PerSessionProtos = MiInsertSharedCommitNode(v44, a3, 0LL);
          if ( PerSessionProtos < 0 )
          {
            v72 = a1;
            v14 = a3;
          }
          else
          {
            PerSessionProtos = MiInsertVadCharges(v27, a3);
            if ( PerSessionProtos >= 0 )
            {
              if ( v36 == 1073741878 )
                ++*(_QWORD *)(qword_140327FD0 + 276840640);
              MiGetWsAndInsertVad(v27);
              v46 = 0LL;
              if ( v85 == 0x200000 )
              {
                MiLockVad((__int64)v82, v27);
                v57 = MiMapUserLargePages(v27, v83);
                if ( v57 < 0 )
                {
                  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v82, a3);
                  goto LABEL_184;
                }
                MiUnlockVad((__int64)v82, v27);
              }
              if ( v84 == 1 )
                MiAdvanceVadHint(v88, v37, 0LL);
              v47 = v87;
              *a6 = v87;
              v48 = (v90 << 16) + v31;
              *a4 = v48;
              if ( *(_BYTE *)(v91 + 50)
                && ((v49 = *(_WORD *)(v91 + 48), v49 < MEMORY[0xFFFFF7800000002C]) || v49 > MEMORY[0xFFFFF7800000002E]) )
              {
                v50 = a3;
                if ( !*(_QWORD *)(a3 + 1064) )
                {
                  v51 = 1073741838;
                  v80 = 1073741838;
LABEL_57:
                  v81 = v48;
                  if ( (PerfGlobalGroupMask & 0x8000) != 0 )
                  {
                    MiLogMapFileEvent(v27, 1061LL);
                    v50 = a3;
                    v47 = v87;
                  }
                  v52 = v22 | 4;
                  if ( (*(_BYTE *)(v27 + 48) & 0xF8) == 0x38 )
                  {
                    if ( (NtGlobalFlag & 0x40000) == 0
                      || (v63 = (unsigned int)(v51 - 1073741827), (unsigned int)v63 <= 0x33)
                      && (v64 = 0x8000000000801LL, _bittest64(&v64, v63)) )
                    {
                      v53 = v86;
                    }
                    else
                    {
                      v53 = v86;
                      if ( ((__int64)v82[1].Queue & 0x20) == 0 )
                      {
                        v65 = *(_WORD *)(v86 + 12);
                        if ( (v65 & 0x2000) == 0 && *(char *)(v86 + 14) < 0 )
                        {
                          *(_WORD *)(v86 + 12) = v65 | 0x2000;
                          MiLoadUserSymbols(a1, v48, v50);
                          v53 = v86;
                        }
                        v47 = v87;
                      }
                    }
                    if ( v32 )
                    {
                      v94 = 3;
                      if ( (*(_DWORD *)(v27 + 64) & 0x8000000) != 0 )
                      {
                        v54 = v94;
                      }
                      else
                      {
                        v94 = v94 & 0xFFFF0FFF | ((*(_BYTE *)(v53 + 15) & 0xF0) << 8);
                        v54 = (v94 ^ (*(unsigned __int8 *)(v53 + 15) << 15)) & 0x70000 ^ v94;
                      }
                      v95 = v48;
                      v97 = v47;
                      v94 = ((unsigned __int16)v54 ^ ((v51 == 1073741838) << 11)) & 0x800 ^ v54;
                      if ( v47 != _InterlockedCompareExchange64((volatile signed __int64 *)(v53 + 24), -1LL, -1LL) )
                        v94 |= 0x80000u;
                      v96 = 0;
                      v98 = 0;
                      v46 = (_BYTE *)MiReferenceControlAreaFile(a1);
                      v52 |= 8u;
                    }
                    if ( (*(_DWORD *)(a7 + 56) & 0x80000) != 0 || !MiIsProcessCfgEnabled() )
                    {
                      if ( (*(_DWORD *)(v27 + 64) & 0x10000000) != 0 )
                        v52 |= 8u;
                    }
                    else
                    {
                      v52 |= 0x18u;
                    }
                    v55 = (__int64)v82;
                    if ( (v52 & 8) != 0 )
                    {
                      MiLockVad((__int64)v82, v27);
                      v56 = a3;
                      UNLOCK_ADDRESS_SPACE_UNORDERED(v55, a3);
                      v52 &= ~4u;
                      if ( (*(_DWORD *)(v27 + 64) & 0x10000000) != 0 )
                      {
                        MiUpdatePrivateDemandZeroView(a3, v27, 1);
                        MiRemoveVadEvent(v27, &v99);
                        v52 &= ~0x20u;
                      }
                      if ( (v52 & 0x10) != 0 )
                      {
                        v57 = MiCommitVadCfgBits(v27, 0LL, 0LL);
                        if ( v57 < 0 )
                          goto LABEL_184;
                        v55 = (__int64)v82;
                      }
                      if ( !v32
                        || (v32 = MiAddSecureEntry(v27, (_DWORD)v88 << 12, ((_DWORD)v37 << 12) | 0xFFFu, -2147483647, 0)) != 0 )
                      {
                        MiUnlockVad(v55, v27);
                        if ( v32 )
                        {
                          PsCallImageNotifyRoutines(v46 + 88, *(_QWORD *)(a3 + 744), (__int64)v93, (__int64)v46);
                          ObfDereferenceObject(v46);
                          MmUnsecureVirtualMemory((HANDLE)v32);
                        }
                        goto LABEL_81;
                      }
                      v57 = -1073741670;
LABEL_184:
                      MiReferenceVad(v27);
                      if ( v46 )
                        ObfDereferenceObject(v46);
                      MiUnmapVad(v27, 0LL);
                      return (unsigned int)v57;
                    }
                  }
                  else
                  {
                    v55 = (__int64)v82;
                  }
                  v56 = a3;
LABEL_81:
                  if ( (v52 & 4) != 0 )
                    UNLOCK_ADDRESS_SPACE(v55, v56);
                  return v80;
                }
              }
              else
              {
                v50 = a3;
              }
              v51 = v80;
              goto LABEL_57;
            }
            v14 = a3;
            v72 = a1;
            MiRemoveSharedCommitNode(a1, a3, 0LL);
          }
          if ( (*(_DWORD *)(v72 + 56) & 0x4000000) != 0 )
          {
            v78 = MmGetSessionIdEx((struct _KPROCESS *)v14);
            MiDereferencePerSessionProtos(v72, v78);
          }
LABEL_165:
          UNLOCK_ADDRESS_SPACE((__int64)v82, v14);
          if ( (v22 & 0x20) != 0 )
            MiRemoveVadEvent(v27, &v99);
          if ( v27 )
          {
            if ( v85 == 0x200000 )
              MiFreeLargePageView(v14, v27, 0LL);
            v73 = *(void **)(v27 + 128);
            if ( v73 )
              ObfDereferenceObject(v73);
            ExFreePoolWithTag((PVOID)v27, 0);
          }
          MiDereferenceControlArea(v72);
          return (unsigned int)PerSessionProtos;
        }
        goto LABEL_163;
      }
      PerSessionProtos = -1073741800;
    }
    else
    {
      v33 = v79;
      if ( v79 <= 0x7FFFFFFDFFFFLL )
      {
        v34 = v89;
        if ( (v22 & 1) == 0 )
        {
          if ( (unsigned int)MiIsVaRangeAvailable(v14, v31, v79, v89) )
          {
LABEL_34:
            v35 = v79;
            goto LABEL_35;
          }
          v33 = v79;
        }
        v58 = a10;
        v59 = a10;
        if ( v88 < 0x100000000LL && v34 >= 0x100000000LL && (*(_BYTE *)(v15 + 15) & 1) == 0 && a10 < 0x20 )
        {
          v58 = 32;
          a10 = 32LL;
        }
        PerSessionProtos = MiSelectUserAddress(
                             a11,
                             v58,
                             v33,
                             v85,
                             (unsigned __int8)*(_DWORD *)(v27 + 48) >> 3,
                             0,
                             (__int64)&v84,
                             (__int64)&v81);
        if ( PerSessionProtos < 0 )
        {
          if ( a10 != v59 )
            PerSessionProtos = MiSelectUserAddress(
                                 a11,
                                 v59,
                                 v79,
                                 v85,
                                 (unsigned __int8)*(_DWORD *)(v27 + 48) >> 3,
                                 0,
                                 (__int64)&v84,
                                 (__int64)&v81);
          if ( PerSessionProtos < 0 )
            goto LABEL_164;
        }
        if ( v85 == 0x200000 )
        {
          v69 = (v79 - v25) >> 16;
          if ( v69 )
          {
            v70 = (unsigned int)ExGenRandom(1) % v69;
            v90 = v70;
          }
          else
          {
            LOBYTE(v70) = v90;
          }
          v71 = *(_QWORD *)(v27 + 56);
          *(_QWORD *)(v71 + 24) = v25 >> 12;
          *(_BYTE *)(v71 + 16) = v70;
        }
        v15 = v86;
        v31 = v81;
        goto LABEL_34;
      }
      PerSessionProtos = -1073741801;
    }
LABEL_164:
    v72 = a1;
    goto LABEL_165;
  }
  return result;
}
