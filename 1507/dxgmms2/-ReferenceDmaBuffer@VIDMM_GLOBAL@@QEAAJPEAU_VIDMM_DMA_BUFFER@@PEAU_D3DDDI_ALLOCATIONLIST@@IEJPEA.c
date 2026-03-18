/*
 * XREFs of ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0052224
 * Callers:
 *     ?VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C000E3B0 (-VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARG.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0003ED4 (VidSchiMarkDeviceAsError.c)
 *     ?Release@DXGPROCESSVIDMMLOCK@@QEAAXXZ @ 0x1C000402C (-Release@DXGPROCESSVIDMMLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPROCESSVIDMMLOCK@@QEAAXXZ @ 0x1C0004054 (-AcquireExclusive@DXGPROCESSVIDMMLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0005E90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C00069BC (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C000F250 (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     Template_ppqPR2TR2 @ 0x1C000F6C8 (Template_ppqPR2TR2.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00400C4 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C004BCAC (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C004DD74 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 *     ?InsertAllocationInMigrationTable@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004E5BC (-InsertAllocationInMigrationTable@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00512F8 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00534AC (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceDmaBuffer(
        VIDMM_GLOBAL *this,
        struct _VIDMM_DMA_BUFFER *a2,
        struct _D3DDDI_ALLOCATIONLIST *a3,
        unsigned int a4,
        char a5,
        int a6,
        unsigned int *a7,
        union _LARGE_INTEGER *a8,
        unsigned __int64 *a9,
        struct DXGPROCESSVIDMMLOCK *a10,
        struct VIDMM_ALLOC **a11,
        struct _VIDMM_PRIMARIES_REFERENCES *a12,
        struct DXGALLOCATION **a13)
{
  unsigned int v13; // r14d
  __int64 v16; // r9
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _VIDMM_PRIMARIES_REFERENCES *v20; // r8
  struct VIDMM_ALLOC *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r12
  struct DXGALLOCATION *v24; // r15
  struct VIDMM_ALLOC *v25; // r15
  __int64 v26; // r14
  _DWORD *v27; // rax
  __int64 Value; // rcx
  _QWORD *v29; // rax
  unsigned int v30; // edi
  unsigned __int64 *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  struct VIDMM_ALLOC *v35; // r15
  _QWORD *v36; // rax
  struct VIDMM_ALLOC *v37; // r15
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rax
  struct VIDMM_ALLOC *v44; // r15
  struct _D3DDDI_ALLOCATIONLIST *v45; // r9
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 *v53; // rcx
  int v54; // eax
  int v55; // r10d
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 GpuVirtualAddress; // rax
  int v59; // r12d
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // r15d
  PRKPROCESS **v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  struct VIDMM_ALLOC *v68; // rsi
  int v69; // r14d
  __int64 v70; // rax
  __int64 v71; // rax
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // r12
  __int64 v75; // r14
  __int64 v76; // r15
  unsigned int j; // esi
  __int64 v78; // rdx
  __int64 v79; // r8
  int *v80; // r9
  signed __int32 v82[8]; // [rsp+0h] [rbp-388h] BYREF
  __int64 v83; // [rsp+28h] [rbp-360h]
  unsigned int i; // [rsp+40h] [rbp-348h]
  int v85; // [rsp+44h] [rbp-344h]
  struct VIDMM_ALLOC *v86; // [rsp+48h] [rbp-340h]
  unsigned __int64 *v87; // [rsp+50h] [rbp-338h]
  __int64 v88; // [rsp+58h] [rbp-330h]
  struct _VIDMM_PRIMARIES_REFERENCES *v89; // [rsp+60h] [rbp-328h]
  struct VIDMM_ALLOC **v90; // [rsp+68h] [rbp-320h]
  int v91; // [rsp+70h] [rbp-318h]
  struct VIDMM_ALLOC *v92; // [rsp+78h] [rbp-310h]
  int v93; // [rsp+80h] [rbp-308h]
  int v94; // [rsp+84h] [rbp-304h]
  VIDMM_SEGMENT *v95; // [rsp+88h] [rbp-300h]
  unsigned int *v96; // [rsp+90h] [rbp-2F8h]
  unsigned int v97; // [rsp+98h] [rbp-2F0h]
  union _LARGE_INTEGER *v98; // [rsp+A0h] [rbp-2E8h]
  struct _D3DDDI_ALLOCATIONLIST *v99; // [rsp+A8h] [rbp-2E0h]
  __int64 v100; // [rsp+B0h] [rbp-2D8h]
  __int64 v101; // [rsp+B8h] [rbp-2D0h]
  DXGPROCESSVIDMMLOCK *v102; // [rsp+C0h] [rbp-2C8h]
  struct DXGALLOCATION **v103; // [rsp+C8h] [rbp-2C0h]
  struct VIDMM_ALLOC **v104; // [rsp+D0h] [rbp-2B8h]
  int v105; // [rsp+D8h] [rbp-2B0h]
  unsigned __int64 *v106; // [rsp+E0h] [rbp-2A8h]
  struct DXGADAPTER *v107; // [rsp+E8h] [rbp-2A0h]
  __int64 v108; // [rsp+F0h] [rbp-298h]
  __int64 v109; // [rsp+F8h] [rbp-290h]
  __int64 v110; // [rsp+100h] [rbp-288h]
  __int64 v111; // [rsp+108h] [rbp-280h]
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp-278h] BYREF
  _BYTE v113[512]; // [rsp+140h] [rbp-248h] BYREF

  v13 = a4;
  v97 = a4;
  v96 = a7;
  v98 = a8;
  v87 = a9;
  v106 = a9;
  v102 = a10;
  v104 = a11;
  v89 = a12;
  v103 = a13;
  i = 0;
  v86 = 0LL;
  v90 = (struct VIDMM_ALLOC **)*((_QWORD *)a2 + 13);
  v88 = *((_QWORD *)a2 + 14);
  DXGPROCESS::GetCurrent();
  v16 = *(_QWORD *)(*((_QWORD *)a2 + 17) + 16LL);
  v101 = v16;
  v91 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 16LL)
                              + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 184LL))
                  + 400LL);
  v85 = 0;
  if ( a9 )
    *a9 = *((_QWORD *)a2 + 12);
  *a11 = 0LL;
  ++*((_DWORD *)this + 1784);
  *((_DWORD *)this + 1785) += v13;
  v17 = *((_DWORD *)this + 1786);
  if ( v13 > v17 )
    v17 = v13;
  *((_DWORD *)this + 1786) = v17;
  *((_DWORD *)a2 + 7) |= 4u;
  v18 = **((_QWORD **)a2 + 17);
  v19 = *(_QWORD *)(v18 + 40);
  _InterlockedOr(v82, 0);
  *((_QWORD *)a2 + 19) = v19;
  v20 = v89;
  *(_QWORD *)v89 = 0LL;
  v100 = 0LL;
  v21 = 0LL;
  v92 = 0LL;
  for ( i = 0; i < v13; ++i )
  {
    if ( !a3->hAllocation )
    {
      ++*((_DWORD *)this + 1787);
      *v90 = 0LL;
      v18 = 0LL;
      v22 = v88;
      *(_QWORD *)v88 = 0LL;
      *(_QWORD *)(v22 + 8) = 0LL;
      *(_QWORD *)(v22 + 16) = 0LL;
      goto LABEL_89;
    }
    v23 = i;
    v24 = v103[i];
    if ( !v24 )
    {
      v71 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v71 + 24) = a3->hAllocation;
      *(_QWORD *)(v71 + 32) = i;
      WdLogEvent5_WdError(v71);
      v30 = -1071775468;
      v85 = -1071775468;
      v31 = v87;
LABEL_119:
      if ( !v31 && i )
      {
        do
        {
          if ( *--v90 )
            VIDMM_GLOBAL::RemoveDMAReferences(*v90, a6);
          --i;
        }
        while ( i );
      }
      return v30;
    }
    v25 = (struct VIDMM_ALLOC *)*((_QWORD *)v24 + 3);
    v86 = v25;
    v26 = **(_QWORD **)v25;
    v27 = *(_DWORD **)(v26 + 472);
    Value = *v27 >> 14;
    if ( (*v27 & 0x4000) != 0 )
    {
      if ( v21 || (Value = a3->Value, (Value & 1) == 0) )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdAssertion(Value, v21, v20, v16);
        v29[3] = v86;
        v29[4] = v92;
        v29[5] = a3->Value & 1;
        WdLogEvent5_WdAssertion(v29);
        v30 = -1071775482;
        v85 = -1071775482;
        v31 = v87;
        goto LABEL_119;
      }
      v92 = v25;
    }
    if ( *(_BYTE *)(v26 + 93) )
    {
      v30 = -1071775482;
      v85 = -1071775482;
      v31 = v87;
      goto LABEL_119;
    }
    if ( !*(_DWORD *)(v26 + 336) || *(_DWORD *)(v26 + 156) )
    {
      v35 = v86;
      if ( *((_QWORD *)v86 + 1) != v16 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdError(Value);
        v36[3] = v101;
        v36[4] = v35;
        v36[5] = v23;
        v36[6] = *((_QWORD *)v35 + 1);
        WdLogEvent5_WdError(v36);
        v30 = -1071775467;
        v85 = -1071775467;
        v31 = v87;
        goto LABEL_119;
      }
    }
    else
    {
      ++*((_DWORD *)this + 1790);
      if ( (*(_DWORD *)(v26 + 76) & 0x40) == 0 )
      {
        v32 = WdLogNewEntry5_WdError(Value);
        *(_QWORD *)(v32 + 24) = 7165LL;
        WdLogEvent5_WdError(v32);
        v34 = (_QWORD *)WdLogNewEntry5_WdError(v33);
        v34[3] = a2;
        v34[4] = v86;
        v34[5] = *(unsigned int *)(v26 + 336);
        WdLogEvent5_WdError(v34);
        v30 = -1071775471;
        v85 = -1071775471;
        v31 = v87;
        goto LABEL_119;
      }
    }
    v37 = v86;
    if ( *(_DWORD *)(*((_QWORD *)v86 + 12) + 4LL) && a5 )
    {
      v107 = (struct DXGADAPTER *)*((_QWORD *)this + 3);
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors(v107) )
      {
        v42 = WdLogNewEntry5_WdAssertion(v39, v38, v40, v41);
        *(_QWORD *)(v42 + 24) = a2;
        *(_QWORD *)(v42 + 32) = v37;
        WdLogEvent5_WdAssertion(v42);
        v30 = -1071775466;
        v85 = -1071775466;
        v31 = v87;
        goto LABEL_119;
      }
      v43 = WdLogNewEntry5_WdError(v39);
      *(_QWORD *)(v43 + 24) = a2;
      *(_QWORD *)(v43 + 32) = v86;
      WdLogEvent5_WdError(v43);
      v20 = v89;
    }
    v44 = v86;
    *v90 = v86;
    *(_QWORD *)v88 = *(_QWORD *)(*((_QWORD *)v44 + 2) + 32LL);
    v45 = a3;
    v99 = a3;
    v46 = a3->Value & 1;
    if ( (a3->Value & 1) != 0 )
    {
      if ( *((_BYTE *)v44 + 24) )
      {
        v111 = *((_QWORD *)this + 3);
        if ( *(int *)(v111 + 1648) >= 4608 )
        {
          v47 = WdLogNewEntry5_WdWarning(v46, v21, v20);
          WdLogEvent5_WdWarning(v47);
          v51 = WdLogNewEntry5_WdWarning(v49, v48, v50);
          *(_QWORD *)(v51 + 24) = a2;
          *(_QWORD *)(v51 + 32) = v44;
          WdLogEvent5_WdWarning(v51);
          v30 = -1073741790;
          v85 = -1073741790;
          v31 = v87;
          goto LABEL_119;
        }
      }
    }
    v52 = v88;
    *(_DWORD *)(v88 + 8) = v46 | *(_DWORD *)(v88 + 8) & 0xFFFFFFFE;
    if ( (a3->Value & 1) != 0 )
      ++*((_DWORD *)this + 1788);
    if ( (*(_DWORD *)(v52 + 8) & 1) != 0 && (**(_DWORD **)(v26 + 472) & 0x200000) != 0 )
      *((_DWORD *)v20 + 34) |= 1u;
    if ( (*(_DWORD *)(v52 + 8) & 1) != 0
      && (**(_DWORD **)(v26 + 472) >> 23) & 0x100 | ((unsigned __int16)**(_DWORD **)(v26 + 472) | (unsigned __int16)((unsigned int)(**(_DWORD **)(v26 + 472) | (**(_DWORD **)(v26 + 472) >> 11)) >> 11)) & 0x100 )
    {
      if ( *(_DWORD *)v20 >= 0x10u )
      {
        ++*((_DWORD *)this + 1794);
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)v86 + 26);
        *((_QWORD *)v20 + *(unsigned int *)v20 + 1) = v86;
      }
      ++*(_DWORD *)v20;
      *((_DWORD *)v20 + 1) |= 1 << ((*(_DWORD *)(*(_QWORD *)(v26 + 40) + 4LL) >> 6) & 0xF);
    }
    v95 = *(VIDMM_SEGMENT **)(v26 + 128);
    v53 = v87;
    if ( v87 || !v95 || (VIDMM_GLOBAL::_Config & 0x200) != 0 )
    {
      ++*((_DWORD *)this + 1792);
      *(_DWORD *)(v52 + 8) &= 0xFFFFFFC1;
      if ( v53 )
      {
        v57 = *((_QWORD *)a2 + 17);
        v110 = v57;
        if ( (*(_DWORD *)(v57 + 32) & 0x20) != 0 )
        {
          *(_QWORD *)(v88 + 16) = *((_QWORD *)v86 + 18);
        }
        else
        {
          v108 = v57;
          v105 = *(_DWORD *)(v57 + 8);
          GpuVirtualAddress = VIDMM_ALLOC::GetGpuVirtualAddress(v86, v105);
          *(_QWORD *)(v88 + 16) = GpuVirtualAddress;
        }
      }
      else
      {
        *(_QWORD *)(v88 + 16) = 0LL;
      }
      *((_DWORD *)a2 + 7) &= ~4u;
      if ( (dword_1C00270E4 & 1) != 0 )
        goto LABEL_77;
      v109 = *((_QWORD *)this + 3);
      if ( (*(_DWORD *)(v109 + 284) & 2) != 0 || !*(_BYTE *)(v26 + 94) && (*(_DWORD *)(v26 + 76) & 0x400) == 0 )
        goto LABEL_77;
      v59 = 0;
      v93 = 0;
      DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v26 + 312));
      v100 = v26;
      if ( !VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v26, 0LL)
        && !*(_QWORD *)(v26 + 128)
        && (**(_DWORD **)(v26 + 472) & 0x40000000) == 0
        && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this, *(_QWORD *)(v26 + 8)) >= 0 )
      {
        DXGPROCESSVIDMMLOCK::Release(v102);
        v59 = 1;
        v93 = 1;
        v63 = 0;
        v94 = 0;
        v64 = *(PRKPROCESS ***)(v26 + 96);
        if ( v64 && v64 != *(PRKPROCESS ***)v86 )
        {
          KeStackAttachProcess(*v64[1], &ApcState);
          v63 = 1;
          v94 = 1;
        }
        if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
                    (VIDMM_GLOBAL *)v64,
                    *(struct _VIDMM_LOCAL_ALLOC **)(v26 + 96),
                    (struct _VIDMM_GLOBAL_ALLOC *)v26,
                    0LL,
                    *(_QWORD *)(v26 + 8),
                    (enum _LOCK_OPERATION)v83,
                    0LL,
                    0) < 0 )
        {
          v66 = WdLogNewEntry5_WdError(v65);
          *(_QWORD *)(v66 + 24) = v26;
          WdLogEvent5_WdError(v66);
          VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v26 + 8));
        }
        else
        {
          ++*(_DWORD *)(v26 + 340);
          *(_DWORD *)(v26 + 84) |= 2u;
        }
        if ( v63 )
          KeUnstackDetachProcess(&ApcState);
      }
      v100 = 0LL;
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v26 + 312), v60, v61, v62);
      if ( v59 )
        DXGPROCESSVIDMMLOCK::AcquireExclusive(v102);
    }
    else
    {
      ++*((_DWORD *)this + 1791);
      v54 = VIDMM_SEGMENT::DriverId(v95);
      *(_DWORD *)(v56 + 8) ^= (*(_DWORD *)(v56 + 8) ^ (2 * v54)) & 0x3E;
      v52 = *(_QWORD *)(v26 + 136) + *((_QWORD *)v95 + 3);
      *(_QWORD *)(v88 + 16) = v52;
      if ( *(_DWORD *)(v26 + 156) )
        goto LABEL_77;
      if ( *(_DWORD *)(v26 + 376) < 0x78000000u )
        goto LABEL_77;
      if ( (*(_DWORD *)(v26 + 76) & 0x400000) != 0 )
        goto LABEL_77;
      if ( !v55 )
        goto LABEL_77;
      ++*((_DWORD *)this + 1795);
      if ( *(_BYTE *)(v26 + 92) || (unsigned __int64)*(unsigned int *)(v26 + 376) <= *((_QWORD *)this + 888) )
        goto LABEL_77;
      ++*((_DWORD *)this + 1796);
      VIDMM_GLOBAL::InsertAllocationInMigrationTable((DXGFASTMUTEX **)this, (struct _VIDMM_GLOBAL_ALLOC *)v26);
    }
    v45 = v99;
LABEL_77:
    if ( !v87 )
      _InterlockedExchangeAdd((volatile signed __int32 *)v86 + 39, a6);
    v18 = *((unsigned int *)v86 + 38);
    if ( !(_DWORD)v18 && (*((_BYTE *)v86 + 25) & 1) == 0 )
    {
      if ( (*((_BYTE *)this + 40552) & 2) == 0
        || (v18 = *(unsigned int *)(*((_QWORD *)this + 3) + 284LL), (v18 & 8) == 0) )
      {
        v67 = WdLogNewEntry5_WdAssertion(v18, v52, v20, v45);
        v68 = v86;
        *(_QWORD *)(v67 + 24) = v86;
        WdLogEvent5_WdAssertion(v67);
        v30 = -1073741823;
        v85 = -1073741823;
        VidSchiMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)v68 + 1) + 32LL), 16);
        if ( !v87 )
          VIDMM_GLOBAL::RemoveDMAReferences(v68, a6);
        v31 = v87;
        goto LABEL_119;
      }
    }
    v69 = (v45->Value >> 2) & 7;
    if ( v69 )
    {
      v70 = WdLogNewEntry5_WdAssertion(v18, v52, v20, v45);
      *(_QWORD *)(v70 + 24) = v86;
      *(_QWORD *)(v70 + 32) = v69;
      WdLogEvent5_WdAssertion(v70);
    }
    v20 = v89;
    v21 = v92;
    v13 = v97;
    v16 = v101;
LABEL_89:
    ++v90;
    ++a3;
    v88 += 24LL;
  }
  *v104 = v21;
  if ( *((_QWORD *)a2 + 8) )
  {
    v89 = *(struct _VIDMM_PRIMARIES_REFERENCES **)(*((_QWORD *)a2 + 7) + 128LL);
    if ( !v89 || (VIDMM_GLOBAL::_Config & 0x200) != 0 )
    {
      ++*((_DWORD *)this + 1792);
      *((_DWORD *)a2 + 7) &= ~4u;
      *v96 = 0;
      v98->QuadPart = 0LL;
    }
    else
    {
      ++*((_DWORD *)this + 1791);
      if ( (*((_DWORD *)v89 + 14) & 0x1000) != 0 )
        v72 = 0;
      else
        v72 = *((_DWORD *)v89 + 4) + 1;
      *v96 = v72;
      v98->QuadPart = *((_QWORD *)v89 + 3) + *(_QWORD *)(*((_QWORD *)a2 + 7) + 136LL);
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)a2 + 8) + 156LL), a6);
  }
  else
  {
    *v96 = 0;
    *v98 = *(union _LARGE_INTEGER *)((char *)a2 + 88);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 8, a6);
  if ( a6 > 1 )
    *((_DWORD *)a2 + 7) |= 2u;
  if ( !v87 )
    *((_DWORD *)a2 + 36) = i;
  *((_DWORD *)a2 + 4) = a6;
  if ( (*((_DWORD *)a2 + 7) & 4) != 0 )
  {
    v73 = *(_QWORD *)(**((_QWORD **)a2 + 17) + 40LL);
    _InterlockedOr(v82, 0);
    if ( *((_QWORD *)a2 + 19) == v73 )
      ++*((_DWORD *)this + 1793);
  }
  if ( (qword_1C0027060 & 4) != 0 )
  {
    v74 = *((_QWORD *)a2 + 14);
    v75 = *((_QWORD *)a2 + 13);
    v76 = *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
    for ( j = 0; j < i; j += 128 )
    {
      v78 = 128LL;
      if ( i - j < 0x80 )
        v78 = i - j;
      v79 = 0LL;
      if ( (_DWORD)v78 )
      {
        v80 = (int *)v113;
        do
        {
          *v80 = *(_DWORD *)(v74 + 24LL * ((unsigned int)v79 + j) + 8) & 1;
          v79 = (unsigned int)(v79 + 1);
          ++v80;
        }
        while ( (unsigned int)v79 < (unsigned int)v78 );
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      {
        LODWORD(v83) = v78;
        Template_ppqPR2TR2(v75 + 8LL * j, v78, v79, v76, a2, v83, v75 + 8LL * j, v113);
      }
    }
  }
  return 0LL;
}
