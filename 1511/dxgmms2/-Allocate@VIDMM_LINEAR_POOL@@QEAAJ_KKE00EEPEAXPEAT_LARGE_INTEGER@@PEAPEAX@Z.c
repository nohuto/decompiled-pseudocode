/*
 * XREFs of ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0059180
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C0055DC0 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 *     ?MapPagesIntoAperture@VIDMM_APERTURE_SEGMENT@@UEAAJKPEAU_MDL@@HPEAPEAXPEA_K@Z @ 0x1C0083510 (-MapPagesIntoAperture@VIDMM_APERTURE_SEGMENT@@UEAAJKPEAU_MDL@@HPEAPEAXPEA_K@Z.c)
 *     ?ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0083960 (-ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C0083F40 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 *     ?AllocateScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAJKPEAPEAXPEA_K@Z @ 0x1C0084490 (-AllocateScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAJKPEAPEAXPEA_K@Z.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00886B8 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 *     ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z @ 0x1C0089F38 (-AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C0058840 (-FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BL.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C0058C28 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@@Z @ 0x1C0058D7C (-SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::Allocate(
        VIDMM_LINEAR_POOL *this,
        __int64 a2,
        int a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        char a8,
        void *a9,
        union _LARGE_INTEGER *a10,
        void **a11)
{
  __int64 v11; // rbx
  int BlockRun; // r10d
  int v17; // eax
  VIDMM_LINEAR_POOL **v18; // r12
  _QWORD *v19; // r14
  _QWORD *v20; // r15
  bool i; // zf
  _QWORD *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  VIDMM_LINEAR_POOL *v34; // rdx
  char *v35; // rdx
  __int64 v36; // r8
  _QWORD *v37; // rax
  __int64 v38; // r8
  _QWORD *v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // r8
  _QWORD *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  VIDMM_LINEAR_POOL *v45; // rax
  VIDMM_LINEAR_POOL *v46; // r8
  VIDMM_LINEAR_POOL **v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // r8
  _QWORD *v50; // rcx
  union _LARGE_INTEGER *v51; // rdx
  __int64 v53; // [rsp+60h] [rbp-20h] BYREF
  struct _VIDMM_POOL_BLOCK *v54; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v55; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v56; // [rsp+78h] [rbp-8h] BYREF

  v11 = 0LL;
  v54 = 0LL;
  v56 = 0LL;
  v55 = 0LL;
  BlockRun = -1073741811;
  v53 = 0LL;
  if ( a8 )
    goto LABEL_6;
  BlockRun = VIDMM_LINEAR_POOL::FindBlockRun(this, a2, a3, a4, a5, a6, 0, &v53, (__int64 *)&v54, &v56, &v55);
  if ( BlockRun < 0 )
  {
    if ( !*((_DWORD *)this + 4) || a7 )
    {
LABEL_10:
      if ( BlockRun < 0 )
        return (unsigned int)BlockRun;
      goto LABEL_11;
    }
    v11 = v53;
LABEL_6:
    if ( *((_QWORD *)this + 4) )
    {
      v17 = VIDMM_LINEAR_POOL::FindBlockRun(this, a2, a3, a4, a5, a6, 1, &v53, (__int64 *)&v54, &v56, &v55);
      v11 = v53;
      BlockRun = v17;
    }
    if ( BlockRun >= 0 )
      goto LABEL_12;
    BlockRun = VIDMM_LINEAR_POOL::FindBlockRun(this, a2, a3, a4, a5, a6, 2, &v53, (__int64 *)&v54, &v56, &v55);
    goto LABEL_10;
  }
LABEL_11:
  v11 = v53;
LABEL_12:
  v18 = (VIDMM_LINEAR_POOL **)(v11 + 32);
  v19 = (_QWORD *)(v11 + 32);
  v20 = (_QWORD *)*((_QWORD *)v54 + 4);
  for ( i = v11 + 32 == (_QWORD)v20; !i; i = v19 == v20 )
  {
    v22 = v19 - 4;
    v19 = (_QWORD *)*v19;
    if ( *(_DWORD *)v22 == 4 )
    {
      (*((void (__fastcall **)(_QWORD))this + 3))(v22[3]);
      *(_DWORD *)v22 = 2;
      if ( !*((_DWORD *)this + 4) )
      {
        v27 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
        *(_QWORD *)(v27 + 24) = 447LL;
        WdLogEvent5_WdAssertion(v27);
      }
      --*((_DWORD *)this + 4);
    }
    if ( (_QWORD *)v11 != v22 )
    {
      *(_QWORD *)(v11 + 16) += v22[2];
      v28 = v22 + 4;
      v29 = v22[4];
      v30 = (_QWORD *)v22[5];
      if ( *(_QWORD **)(v29 + 8) != v22 + 4 || (_QWORD *)*v30 != v28 )
        __fastfail(3u);
      *v30 = v29;
      *(_QWORD *)(v29 + 8) = v30;
      *v28 = 0LL;
      v31 = v22 + 6;
      v22[5] = 0LL;
      v32 = v22[6];
      v33 = (_QWORD *)v22[7];
      if ( *(_QWORD **)(v32 + 8) != v22 + 6 || (_QWORD *)*v33 != v31 )
        __fastfail(3u);
      *v33 = v32;
      *(_QWORD *)(v32 + 8) = v33;
      *v31 = 0LL;
      v22[7] = 0LL;
      VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v22);
    }
  }
  v34 = *(VIDMM_LINEAR_POOL **)(v11 + 40);
  if ( v34 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    v35 = (char *)v34 - 32;
    if ( *(_DWORD *)v35 == 2 )
    {
      v36 = *((_QWORD *)v35 + 1);
      if ( v36 + *((_QWORD *)v35 + 2) == *(_QWORD *)(v11 + 8) )
      {
        *(_QWORD *)(v11 + 8) = v36;
        *(_QWORD *)(v11 + 16) += *((_QWORD *)v35 + 2);
        v37 = v35 + 32;
        v38 = *((_QWORD *)v35 + 4);
        v39 = (_QWORD *)*((_QWORD *)v35 + 5);
        if ( *(char **)(v38 + 8) != v35 + 32 || (_QWORD *)*v39 != v37 )
          __fastfail(3u);
        *v39 = v38;
        *(_QWORD *)(v38 + 8) = v39;
        *v37 = 0LL;
        v40 = v35 + 48;
        *((_QWORD *)v35 + 5) = 0LL;
        v41 = *((_QWORD *)v35 + 6);
        v42 = (_QWORD *)*((_QWORD *)v35 + 7);
        if ( *(char **)(v41 + 8) != v35 + 48 || (_QWORD *)*v42 != v40 )
          __fastfail(3u);
        *v42 = v41;
        *(_QWORD *)(v41 + 8) = v42;
        *v40 = 0LL;
        *((_QWORD *)v35 + 7) = 0LL;
        VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v35);
      }
    }
  }
  if ( *v18 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    v43 = (__int64)*v18 - 32;
    if ( *(_DWORD *)v43 == 2 )
    {
      v44 = *(_QWORD *)(v11 + 16);
      if ( *(_QWORD *)(v43 + 8) == v44 + *(_QWORD *)(v11 + 8) )
      {
        v45 = *v18;
        *(_QWORD *)(v11 + 16) = v44 + *(_QWORD *)(v43 + 16);
        v46 = *(VIDMM_LINEAR_POOL **)(v43 + 32);
        v47 = *(VIDMM_LINEAR_POOL ***)(v43 + 40);
        if ( *((_QWORD *)v46 + 1) != v43 + 32 || *v47 != v45 )
          __fastfail(3u);
        *v47 = v46;
        *((_QWORD *)v46 + 1) = v47;
        *(_QWORD *)v45 = 0LL;
        v48 = (_QWORD *)(v43 + 48);
        *(_QWORD *)(v43 + 40) = 0LL;
        v49 = *(_QWORD *)(v43 + 48);
        v50 = *(_QWORD **)(v43 + 56);
        if ( *(_QWORD *)(v49 + 8) != v43 + 48 || (_QWORD *)*v50 != v48 )
          __fastfail(3u);
        *v50 = v49;
        *(_QWORD *)(v49 + 8) = v50;
        *v48 = 0LL;
        *(_QWORD *)(v43 + 56) = 0LL;
        VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v43);
      }
    }
  }
  BlockRun = VIDMM_LINEAR_POOL::SplitBlock(this, (struct _VIDMM_POOL_BLOCK *)v11, v56, v55, &v54);
  if ( BlockRun >= 0 )
  {
    v51 = (union _LARGE_INTEGER *)v54;
    *((_QWORD *)v54 + 3) = a9;
    *a10 = v51[1];
    *a11 = v51;
  }
  return (unsigned int)BlockRun;
}
