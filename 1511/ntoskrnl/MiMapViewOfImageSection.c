/*
 * XREFs of MiMapViewOfImageSection @ 0x1403F5860
 * Callers:
 *     MiMapViewOfSection @ 0x140419680 (MiMapViewOfSection.c)
 *     MiMapImageInSystemProcess @ 0x1406212CC (MiMapImageInSystemProcess.c)
 * Callees:
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002E2D0 (UNLOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140037DA0 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiCommitVadCfgBits @ 0x140037DF0 (MiCommitVadCfgBits.c)
 *     MiIsProcessCfgEnabled @ 0x140037FE4 (MiIsProcessCfgEnabled.c)
 *     MiUnlockVad @ 0x140038910 (MiUnlockVad.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     MiGetWsAndInsertVad @ 0x140062070 (MiGetWsAndInsertVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400622C0 (LOCK_ADDRESS_SPACE.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1400626D0 (MiCheckPurgeAndUpMapCount.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140063C70 (MiReferenceVad.c)
 *     MiInsertVadEvent @ 0x1400A6EF0 (MiInsertVadEvent.c)
 *     MiDereferenceControlArea @ 0x1400EF460 (MiDereferenceControlArea.c)
 *     MiArbitraryCodeBlocked @ 0x1400F5BF8 (MiArbitraryCodeBlocked.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1401CEB88 (MiUpdatePrivateDemandZeroView.c)
 *     MiRemoveVadEvent @ 0x1401D7610 (MiRemoveVadEvent.c)
 *     MiMapUserLargePages @ 0x1401E1F60 (MiMapUserLargePages.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiAllocateFixupVad @ 0x1403D034C (MiAllocateFixupVad.c)
 *     MiReferenceFileObjectForMap @ 0x1403F62BC (MiReferenceFileObjectForMap.c)
 *     MiIsVaRangeAvailable @ 0x1403F6328 (MiIsVaRangeAvailable.c)
 *     MmUnsecureVirtualMemory @ 0x1403F636C (MmUnsecureVirtualMemory.c)
 *     PsCallImageNotifyRoutines @ 0x1403F69B0 (PsCallImageNotifyRoutines.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 *     MiUnmapVad @ 0x14041B2F0 (MiUnmapVad.c)
 *     MiInsertSharedCommitNode @ 0x14041B4F0 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x14041B910 (MiRemoveSharedCommitNode.c)
 *     MiSelectUserAddress @ 0x14047A0C0 (MiSelectUserAddress.c)
 *     MiAddSecureEntry @ 0x14047B4A0 (MiAddSecureEntry.c)
 *     MiAdvanceVadHint @ 0x14049D2A0 (MiAdvanceVadHint.c)
 *     MiLoadUserSymbols @ 0x14054AA4C (MiLoadUserSymbols.c)
 *     MiLogMapFileEvent @ 0x140621288 (MiLogMapFileEvent.c)
 *     MiCreateLargePageVad @ 0x14062B3E0 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x14062B874 (MiFreeLargePageView.c)
 *     MiCreatePerSessionProtos @ 0x14062BE88 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x14062C01C (MiDereferencePerSessionProtos.c)
 *     SeQueryObjectMandatoryLabel @ 0x14064DC70 (SeQueryObjectMandatoryLabel.c)
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
  __int64 v14; // r13
  __int64 v15; // r15
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rdx
  char v22; // bl
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  PVOID PoolWithTag; // rax
  unsigned __int64 v27; // rsi
  int v28; // ecx
  int v29; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v31; // r14
  __int64 v32; // r12
  int v33; // ecx
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // r10
  int LargePageVad; // edi
  unsigned __int64 v37; // r13
  __int64 v38; // rdx
  __int64 v39; // rax
  unsigned int i; // ecx
  bool v41; // zf
  __int64 v42; // r15
  int PerSessionProtos; // r15d
  __int64 v44; // rdx
  __int64 v45; // r8
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // r14
  unsigned __int16 v48; // ax
  char v49; // bl
  __int64 v50; // r15
  char *v51; // rdi
  int v52; // ecx
  __int64 v53; // r14
  struct _KPROCESS *v54; // r15
  int v55; // r15d
  __int64 result; // rax
  int v57; // edx
  unsigned __int64 v58; // r14
  unsigned __int64 v59; // r14
  _OWORD *FixupVad; // r15
  unsigned int v61; // ecx
  unsigned int v62; // edi
  __int64 v63; // rcx
  __int16 v64; // cx
  __int64 v65; // rsi
  ULONG_PTR v66; // rdi
  int v67; // ebx
  int v68; // eax
  unsigned int v69; // ecx
  char v70; // al
  __int64 v71; // r9
  void *v72; // rcx
  unsigned __int64 v73; // rdi
  unsigned __int64 v74; // r14
  unsigned __int64 v75; // rdi
  unsigned __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdi
  void *v79; // rcx
  unsigned int SessionId; // eax
  __int64 v81; // rax
  unsigned __int64 v82; // rdi
  unsigned __int64 v83; // rdi
  unsigned int v84; // eax
  unsigned __int64 v85; // [rsp+48h] [rbp-C0h]
  int v86; // [rsp+48h] [rbp-C0h]
  int v87; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v88; // [rsp+50h] [rbp-B8h]
  __int64 v89; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v90; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v91; // [rsp+60h] [rbp-A8h]
  int v92; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v93; // [rsp+6Ch] [rbp-9Ch]
  __int64 v94; // [rsp+70h] [rbp-98h]
  __int64 v95; // [rsp+78h] [rbp-90h]
  unsigned __int64 v96; // [rsp+80h] [rbp-88h]
  char *v97; // [rsp+88h] [rbp-80h]
  unsigned __int64 v98; // [rsp+90h] [rbp-78h]
  unsigned int v99; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v100; // [rsp+A0h] [rbp-68h]
  __int64 v101; // [rsp+A8h] [rbp-60h]
  __int64 v102; // [rsp+B0h] [rbp-58h]
  char v103[8]; // [rsp+B8h] [rbp-50h] BYREF
  int v104; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v105; // [rsp+C8h] [rbp-40h]
  int v106; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v107; // [rsp+D8h] [rbp-30h]
  int v108; // [rsp+E0h] [rbp-28h]
  __int64 v109; // [rsp+F8h] [rbp-10h] BYREF
  int v110; // [rsp+100h] [rbp-8h]

  v14 = (__int64)a3;
  LODWORD(v94) = a11 & 0x7F;
  if ( (unsigned int)v94 > (unsigned __int16)KeNumberNodes )
    return 3221225719LL;
  v15 = *(_QWORD *)a1;
  v95 = v15;
  v91 = 0x10000LL;
  v93 = 0;
  v16 = *(_QWORD *)(v15 + 56);
  v88 = *(_QWORD *)(v15 + 48);
  v17 = *(_QWORD *)(v15 + 32);
  v96 = v17;
  v101 = v16;
  if ( (a11 & 0x20000000) != 0 )
  {
    if ( v17 < 0x100000000LL || (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 )
      return 3221225496LL;
    if ( (*(_BYTE *)(v16 + 44) & 1) != 0 )
      return 3221226089LL;
    v91 = 0x200000LL;
    *a4 = 0LL;
  }
  v18 = a7;
  if ( (*(_DWORD *)(a7 + 56) & 0x80000) == 0 )
  {
    v19 = *(_DWORD *)(a2 + 1724);
    if ( (v19 & 0x800) != 0 && (*(_BYTE *)(a7 + 40) & 3) != 0 )
      return 3221225506LL;
    if ( (v19 & 0x1000) != 0 )
    {
      v65 = MiSectionControlArea(a7);
      v66 = MI_REFERENCE_CONTROL_AREA_FILE(v65);
      v67 = SeQueryObjectMandatoryLabel(v66, &v99);
      MI_DEREFERENCE_CONTROL_AREA_FILE(v65, v66);
      if ( v67 < 0 || v99 <= 0x1000 )
        return 3221225506LL;
      v18 = a7;
      v16 = v101;
    }
  }
  v20 = (*(_DWORD *)(v18 + 56) >> 19) & 1;
  if ( v20 && a9 != 1 )
    return 3221225541LL;
  v21 = *(unsigned int *)(v14 + 768);
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
  v100 = 0LL;
  if ( v20 )
    goto LABEL_13;
  v23 = a1 + 120;
  if ( a1 == -120 )
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
    v102 = a1 + 120;
    MiCheckPurgeAndUpMapCount(a1, v21, v16);
    v24 = *a6;
    if ( !*a6 )
      v24 = *(_QWORD *)(v18 + 48) - *a5;
    v25 = (v24 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v98 = v25;
    v85 = v25;
    v97 = (char *)MmHighestUserAddress - 0x10000;
    if ( a10 )
    {
      v97 = (char *)(0xFFFFFFFFFFFFFFFFuLL >> a10);
      if ( (char *)(0xFFFFFFFFFFFFFFFFuLL >> a10) > (char *)MmHighestUserAddress - 0x10000 )
        v97 = (char *)MmHighestUserAddress - 0x10000;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x20646156u);
    v27 = (unsigned __int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      MiDereferenceControlArea(a1);
      return 3221225626LL;
    }
    memset(PoolWithTag, 0, 0x88uLL);
    *(_QWORD *)(v27 + 16) = -2LL;
    v28 = (v94 & 0x3F) << 8;
    *(_DWORD *)(v27 + 64) ^= (*(_DWORD *)(v27 + 64) ^ ((a8 == 1) << 26)) & 0x4000000;
    *(_DWORD *)(v27 + 48) = *(_DWORD *)(v27 + 48) & 0xFFFFC0FA | v28 | 2;
    *(_QWORD *)(v27 + 128) = MiReferenceFileObjectForMap(a7);
    v29 = (*(_DWORD *)(v27 + 64) ^ (*(_DWORD *)(a7 + 60) >> 3)) & 0x10000000;
    *(_QWORD *)(v27 + 40) = 0LL;
    *(_DWORD *)(v27 + 64) ^= v29;
    if ( (*(_DWORD *)(a7 + 56) & 0x80000) != 0 )
    {
      v22 |= 1u;
      v61 = *(_DWORD *)(v27 + 48) & 0xFFFFFF07 | 8;
      *(_DWORD *)(v27 + 48) = v61;
      if ( (*(_DWORD *)(a1 + 56) & 0x10000000) == 0 )
        v22 &= ~2u;
      *(_DWORD *)(v27 + 48) = v61 | 0x4000;
    }
    else
    {
      *(_DWORD *)(v27 + 48) = *(_DWORD *)(v27 + 48) & 0xFFFFFF07 | 0x38;
      if ( *(_QWORD *)(v14 + 720) )
        *(_DWORD *)(v27 + 64) |= 0x20000000u;
      *(_DWORD *)(v27 + 52) ^= (*(_DWORD *)(v27 + 52) ^ v88) & 0x7FFFFFFF;
      *(_BYTE *)(v27 + 34) = v88 >> 31;
    }
    CurrentThread = KeGetCurrentThread();
    v92 = 0;
    v89 = (__int64)CurrentThread;
    if ( *a4 )
      v31 = *a4 & 0xFFFFFFFFFFFF0000uLL;
    else
      v31 = v96 + (*(_DWORD *)a5 & 0xFFFF0000);
    v90 = v31;
    if ( v91 == 0x200000 )
    {
      v22 = v22 & 0xFC | 1;
      v85 = (v25 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
      v68 = (*(_DWORD *)(v27 + 52) ^ (v85 >> 12)) & 0x7FFFFFFF;
      *(_BYTE *)(v27 + 34) = v85 >> 43;
      *(_DWORD *)(v27 + 52) ^= v68;
      *(_DWORD *)(v27 + 64) |= 0x1000000u;
      if ( (_DWORD)v94 )
        v69 = v94;
      else
        v69 = (*(_DWORD *)(a1 + 56) >> 20) & 0x3F;
      v70 = *(_BYTE *)(v27 + 48) & 0xF8;
      v93 = v69;
      v71 = 1LL;
      if ( v70 == 56 )
        v71 = 6LL;
      LargePageVad = MiCreateLargePageVad(v14, v27, v69, v71);
      if ( LargePageVad < 0 )
      {
        v72 = *(void **)(v27 + 128);
        if ( v72 )
          ObfDereferenceObject(v72);
        MiDereferenceControlArea(a1);
        ExFreePoolWithTag((PVOID)v27, 0);
        return (unsigned int)LargePageVad;
      }
      CurrentThread = (struct _KTHREAD *)v89;
    }
    if ( (*(_BYTE *)(v27 + 48) & 0xF8) == 0x38 && *(_QWORD *)(v14 + 744) && (PEPROCESS)v14 != PsInitialSystemProcess )
    {
      if ( (PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask & 4) != 0 )
      {
        v31 = v90;
        v32 = 1LL;
        goto LABEL_29;
      }
      v31 = v90;
    }
    v32 = 0LL;
LABEL_29:
    v110 = 32;
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, v14);
    if ( (*(_DWORD *)(v14 + 772) & 0x20) != 0 )
    {
      PerSessionProtos = -1073741558;
    }
    else if ( *a4 )
    {
      if ( (unsigned int)MiIsVaRangeAvailable(v14, v31, v85, v97) )
      {
LABEL_35:
        LargePageVad = 0;
        if ( v31 - (*(_DWORD *)a5 & 0xFFFF0000) != v96 )
          LargePageVad = 1073741827;
        *(_DWORD *)(v27 + 24) = v31 >> 12;
        v96 = v31 >> 12;
        *(_BYTE *)(v27 + 32) = v31 >> 12 >> 32;
        v37 = (v31 + v35 - 1) >> 12;
        *(_DWORD *)(v27 + 28) = v37;
        *(_BYTE *)(v27 + 33) = BYTE4(v37);
        *(_WORD *)a5 = 0;
        v38 = v102;
        v39 = (__int64)*a5 >> 12;
        v86 = LargePageVad;
        for ( i = *(_DWORD *)(v102 + 44); (unsigned int)v39 >= i; i = *(_DWORD *)(v38 + 44) )
        {
          v38 = *(_QWORD *)(v38 + 16);
          LODWORD(v39) = v39 - i;
        }
        *(_QWORD *)(v27 + 72) = v38;
        *(_QWORD *)(v27 + 80) = *(_QWORD *)(v38 + 8) + 8LL * (unsigned int)v39;
        v41 = (a12 & 4) == 0;
        *(_QWORD *)(v27 + 88) = *(_QWORD *)(v15 + 64) + 8 * (*(unsigned int *)(v15 + 8) - 1LL);
        if ( !v41 || LargePageVad != 1073741827 )
          goto LABEL_40;
        v57 = *(_DWORD *)(a1 + 56);
        if ( (((v57 & 0x10000000) == 0) & !_bittest(&a11, 0x17u)) == 0
          && (((v22 & 2) != 0) & (unsigned __int8)~*(_BYTE *)(v15 + 14)) != 0 )
        {
          FixupVad = MiAllocateFixupVad(v27);
          if ( !FixupVad )
          {
            v42 = a1;
            if ( (*(_DWORD *)(a1 + 56) & 0x10000000) == 0 )
              goto LABEL_41;
            PerSessionProtos = -1073741670;
LABEL_174:
            v14 = (__int64)a3;
            goto LABEL_175;
          }
          ExFreePoolWithTag((PVOID)v27, 0);
          LargePageVad = 1073741878;
          v27 = (unsigned __int64)FixupVad;
          v86 = 1073741878;
        }
        else if ( (v57 & 0x10000000) != 0 )
        {
          PerSessionProtos = -1073741800;
          goto LABEL_174;
        }
LABEL_40:
        v42 = a1;
LABEL_41:
        if ( (_DWORD)v94 )
          MEMORY[0xFFFFF580108042A8] = 1;
        if ( (*(_DWORD *)(v42 + 56) & 0x4000000) == 0 )
          goto LABEL_44;
        SessionId = MmGetSessionIdEx(a3);
        PerSessionProtos = MiCreatePerSessionProtos(v42, SessionId);
        if ( PerSessionProtos >= 0 )
        {
          v42 = a1;
LABEL_44:
          if ( (*(_DWORD *)(v27 + 64) & 0x20000000) != 0 )
          {
            v81 = *(unsigned int *)(v27 + 52);
            LODWORD(v81) = v81 & 0x7FFFFFFF;
            v82 = v81 | ((unsigned __int64)*(unsigned __int8 *)(v27 + 34) << 31);
            v83 = MiUpdatePrivateDemandZeroView((__int64)a3, v27, 0) + v82;
            *(_DWORD *)(v27 + 52) ^= (*(_DWORD *)(v27 + 52) ^ v83) & 0x7FFFFFFF;
            *(_BYTE *)(v27 + 34) = v83 >> 31;
            MiInsertVadEvent(v27, &v109, 0LL);
            LargePageVad = v86;
            v22 |= 0x20u;
          }
          PerSessionProtos = MiInsertSharedCommitNode(v42, a3, 0LL);
          if ( PerSessionProtos < 0 )
          {
            v78 = a1;
            v14 = (__int64)a3;
          }
          else
          {
            PerSessionProtos = MiInsertVadCharges(v27, a3);
            if ( PerSessionProtos >= 0 )
            {
              if ( LargePageVad == 1073741878 )
                ++MEMORY[0xFFFFF580108042B8];
              MiGetWsAndInsertVad(v27, v44, v45);
              if ( v91 == 0x200000 )
                MiMapUserLargePages(v27, v93, (__int64)a3);
              if ( v92 == 1 )
                MiAdvanceVadHint(v96, v37, 0LL);
              v46 = v98;
              *a6 = v98;
              v47 = (v100 << 16) + v31;
              *a4 = v47;
              if ( *(_BYTE *)(v101 + 50) )
              {
                v48 = *(_WORD *)(v101 + 48);
                if ( (v48 < MEMORY[0xFFFFF7800000002C] || v48 > MEMORY[0xFFFFF7800000002E])
                  && !a3[1].ActiveProcessors.Bitmap[7] )
                {
                  LargePageVad = 1073741838;
                }
              }
              v90 = v47;
              v87 = LargePageVad;
              if ( (PerfGlobalGroupMask & 0x8000) != 0 )
              {
                MiLogMapFileEvent(v27, 1061LL, 1073741838LL);
                v46 = v98;
              }
              v49 = v22 | 4;
              if ( (*(_BYTE *)(v27 + 48) & 0xF8) != 0x38 )
              {
                v53 = v89;
LABEL_82:
                if ( (v49 & 4) != 0 )
                  UNLOCK_ADDRESS_SPACE(v53, (__int64)a3);
                return (unsigned int)LargePageVad;
              }
              if ( (NtGlobalFlag & 0x40000) == 0
                || (v62 = LargePageVad - 1073741827, v62 <= 0x33)
                && (v63 = 0x8000000000801LL, _bittest64(&v63, (int)v62)) )
              {
                v50 = v95;
              }
              else
              {
                v50 = v95;
                if ( (*(_BYTE *)(v89 + 1732) & 0x20) == 0 )
                {
                  v64 = *(_WORD *)(v95 + 12);
                  if ( (v64 & 0x2000) == 0 && *(char *)(v95 + 14) < 0 )
                  {
                    *(_WORD *)(v95 + 12) = v64 | 0x2000;
                    MiLoadUserSymbols(a1, v47, a3);
                    v46 = v98;
                  }
                }
              }
              v51 = 0LL;
              if ( v32 )
              {
                v104 = 3;
                if ( (*(_DWORD *)(v27 + 64) & 0x10000000) != 0 )
                {
                  v52 = v104;
                }
                else
                {
                  v104 = v104 & 0xFFFF0FFF | ((*(_BYTE *)(v50 + 15) & 0xF0) << 8);
                  v52 = (v104 ^ (*(unsigned __int8 *)(v50 + 15) << 15)) & 0x70000 ^ v104;
                }
                v105 = v47;
                v107 = v46;
                v104 = ((unsigned __int16)v52 ^ ((v87 == 1073741838) << 11)) & 0x800 ^ v52;
                if ( v46 != _InterlockedCompareExchange64((volatile signed __int64 *)(v50 + 24), -1LL, -1LL) )
                  v104 |= 0x80000u;
                v106 = 0;
                v108 = 0;
                v51 = (char *)MI_REFERENCE_CONTROL_AREA_FILE(a1);
                v49 |= 8u;
              }
              if ( (*(_DWORD *)(a7 + 56) & 0x80000) != 0 || !MiIsProcessCfgEnabled() )
              {
                if ( (*(_DWORD *)(v27 + 64) & 0x20000000) != 0 )
                  v49 |= 8u;
              }
              else
              {
                v49 |= 0x18u;
              }
              v53 = v89;
              if ( (v49 & 8) == 0 )
              {
LABEL_81:
                LargePageVad = v87;
                goto LABEL_82;
              }
              MiLockVad(v89, v27);
              v54 = a3;
              UNLOCK_ADDRESS_SPACE_UNORDERED(v89, (__int64)a3);
              v49 &= ~4u;
              if ( (*(_DWORD *)(v27 + 64) & 0x20000000) != 0 )
              {
                MiUpdatePrivateDemandZeroView((__int64)a3, v27, 1);
                MiRemoveVadEvent(v27, &v109);
                v49 &= ~0x20u;
              }
              if ( (v49 & 0x10) != 0 )
              {
                v55 = MiCommitVadCfgBits(v27, 0LL, 0LL);
                if ( v55 < 0 )
                  goto LABEL_192;
                v54 = a3;
              }
              if ( !v32
                || (v32 = MiAddSecureEntry(v27, (_DWORD)v96 << 12, ((_DWORD)v37 << 12) | 0xFFFu, -2147483647, 0)) != 0 )
              {
                MiUnlockVad(v89, v27);
                if ( v32 )
                {
                  PsCallImageNotifyRoutines(v51 + 88, v54[1].Header.WaitListHead.Blink, v103, v51);
                  ObfDereferenceObject(v51);
                  MmUnsecureVirtualMemory((HANDLE)v32);
                }
                goto LABEL_81;
              }
              v55 = -1073741670;
LABEL_192:
              MiReferenceVad(v27);
              if ( v51 )
                ObfDereferenceObject(v51);
              MiUnmapVad(v27, 0LL);
              return (unsigned int)v55;
            }
            v14 = (__int64)a3;
            v78 = a1;
            MiRemoveSharedCommitNode(a1, a3, 0LL);
          }
          if ( (*(_DWORD *)(v78 + 56) & 0x4000000) != 0 )
          {
            v84 = MmGetSessionIdEx((struct _KPROCESS *)v14);
            MiDereferencePerSessionProtos(v78, v84);
          }
LABEL_176:
          UNLOCK_ADDRESS_SPACE(v89, v14);
          if ( (v22 & 0x20) != 0 )
            MiRemoveVadEvent(v27, &v109);
          if ( v27 )
          {
            if ( v91 == 0x200000 )
              MiFreeLargePageView(v14, v27, 0LL);
            v79 = *(void **)(v27 + 128);
            if ( v79 )
              ObfDereferenceObject(v79);
            ExFreePoolWithTag((PVOID)v27, 0);
          }
          MiDereferenceControlArea(v78);
          return (unsigned int)PerSessionProtos;
        }
        goto LABEL_174;
      }
      PerSessionProtos = -1073741800;
    }
    else
    {
      v33 = v85;
      if ( (char *)v85 <= (char *)MmHighestUserAddress - 0x10000 )
      {
        v34 = (unsigned __int64)v97;
        if ( (v22 & 1) == 0 )
        {
          if ( (unsigned int)MiIsVaRangeAvailable(v14, v31, v85, v97) )
          {
LABEL_34:
            v35 = v85;
            goto LABEL_35;
          }
          v33 = v85;
        }
        v58 = a10;
        if ( v96 < 0x100000000LL && v34 >= 0x100000000LL && (*(_BYTE *)(v15 + 15) & 1) == 0 && a10 < 0x20 )
          v58 = 32LL;
        PerSessionProtos = MiSelectUserAddress(
                             a11,
                             v58,
                             v33,
                             v91,
                             (unsigned __int8)*(_DWORD *)(v27 + 48) >> 3,
                             0,
                             (__int64)&v92,
                             (__int64)&v90);
        if ( PerSessionProtos < 0 )
        {
          v41 = v58 == a10;
          v59 = v85;
          if ( !v41 )
            PerSessionProtos = MiSelectUserAddress(
                                 a11,
                                 a10,
                                 v85,
                                 v91,
                                 (unsigned __int8)*(_DWORD *)(v27 + 48) >> 3,
                                 0,
                                 (__int64)&v92,
                                 (__int64)&v90);
          if ( PerSessionProtos < 0 )
            goto LABEL_175;
        }
        else
        {
          v59 = v85;
        }
        if ( v91 == 0x200000 )
        {
          v73 = v59;
          v74 = v98;
          v75 = (v73 - v98) >> 16;
          if ( v75 )
          {
            v76 = (unsigned int)ExGenRandom(1) % v75;
            v100 = v76;
          }
          else
          {
            LOBYTE(v76) = v100;
          }
          v77 = *(_QWORD *)(*(_QWORD *)(v27 + 56) + 16LL);
          *(_QWORD *)(v77 + 32) = v74 >> 12;
          *(_BYTE *)(v77 + 28) = v76;
        }
        v15 = v95;
        v31 = v90;
        goto LABEL_34;
      }
      PerSessionProtos = -1073741801;
    }
LABEL_175:
    v78 = a1;
    goto LABEL_176;
  }
  return result;
}
