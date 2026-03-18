/*
 * XREFs of ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0065924
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C0064640 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 *     ?MapPagesIntoAperture@VIDMM_APERTURE_SEGMENT@@UEAAJKPEAU_MDL@@HPEAPEAXPEA_K@Z @ 0x1C0096B30 (-MapPagesIntoAperture@VIDMM_APERTURE_SEGMENT@@UEAAJKPEAU_MDL@@HPEAPEAXPEA_K@Z.c)
 *     ?ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0096FD0 (-ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C0097690 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 *     ?AllocateScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAJKPEAPEAXPEA_K@Z @ 0x1C0097BF0 (-AllocateScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAJKPEAPEAXPEA_K@Z.c)
 *     ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00982BC (-AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C0099EEC (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C009D444 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 *     ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z @ 0x1C009EDA8 (-AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C0064E00 (-FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BL.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C00652DC (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@E@Z @ 0x1C006542C (-SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@E@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::Allocate(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        char a8,
        void *a9,
        union _LARGE_INTEGER *a10,
        void **a11)
{
  struct _VIDMM_POOL_BLOCK *v11; // rbx
  char v12; // r14
  unsigned int v13; // r15d
  int BlockRun; // edi
  VIDMM_LINEAR_POOL **v17; // r12
  _QWORD *v18; // r14
  _QWORD *v19; // r15
  struct _VIDMM_POOL_BLOCK *v20; // rdi
  VIDMM_LINEAR_POOL *v21; // rdi
  char *v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _VIDMM_POOL_BLOCK *v28; // rdx
  int v30; // eax
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rdx
  _QWORD *v45; // rcx
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rdx
  _QWORD *v52; // rcx
  struct _VIDMM_POOL_BLOCK *v53; // [rsp+60h] [rbp-20h] BYREF
  struct _VIDMM_POOL_BLOCK *v54; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v55; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v56; // [rsp+78h] [rbp-8h] BYREF

  v11 = 0LL;
  v54 = 0LL;
  v12 = a4;
  v56 = 0LL;
  v13 = a3;
  v55 = 0LL;
  v53 = 0LL;
  BlockRun = -1073741811;
  if ( a8 )
    goto LABEL_20;
  BlockRun = VIDMM_LINEAR_POOL::FindBlockRun((__int64)this, a2, a3, a4, a5, a6, 0, &v53, (__int64 *)&v54, &v56, &v55);
  if ( BlockRun < 0 )
  {
    if ( !*((_DWORD *)this + 4) || a7 )
    {
LABEL_41:
      if ( BlockRun < 0 )
        return (unsigned int)BlockRun;
      goto LABEL_3;
    }
    v11 = v53;
LABEL_20:
    if ( *((_QWORD *)this + 4) )
    {
      v30 = VIDMM_LINEAR_POOL::FindBlockRun((__int64)this, a2, v13, v12, a5, a6, 1u, &v53, (__int64 *)&v54, &v56, &v55);
      v11 = v53;
      BlockRun = v30;
    }
    if ( BlockRun >= 0 )
      goto LABEL_4;
    BlockRun = VIDMM_LINEAR_POOL::FindBlockRun(
                 (__int64)this,
                 a2,
                 v13,
                 v12,
                 a5,
                 a6,
                 2u,
                 &v53,
                 (__int64 *)&v54,
                 &v56,
                 &v55);
    goto LABEL_41;
  }
LABEL_3:
  v11 = v53;
LABEL_4:
  v17 = (VIDMM_LINEAR_POOL **)((char *)v11 + 24);
  v18 = (_QWORD *)((char *)v11 + 24);
  v19 = (_QWORD *)*((_QWORD *)v54 + 3);
  if ( (_QWORD *)((char *)v11 + 24) != v19 )
  {
    do
    {
      v20 = (struct _VIDMM_POOL_BLOCK *)(v18 - 3);
      v18 = (_QWORD *)*v18;
      if ( *((_BYTE *)v20 + 56) == 4 )
      {
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = v20;
        (*((void (__fastcall **)(_QWORD))this + 3))(*((_QWORD *)v20 + 2));
        *((_BYTE *)v20 + 56) = 2;
        *((_QWORD *)v20 + 2) = 0LL;
        if ( !*((_DWORD *)this + 4) )
        {
          v38 = WdLogNewEntry5_WdAssertion(this, a2);
          *(_QWORD *)(v38 + 24) = 448LL;
          WdLogEvent5_WdAssertion(v38);
        }
        --*((_DWORD *)this + 4);
      }
      if ( v11 != v20 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v31 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
          *(_QWORD *)(v31 + 24) = v20;
          *(_QWORD *)(v31 + 32) = v11;
        }
        *((_QWORD *)v11 + 1) += *((_QWORD *)v20 + 1);
        v32 = (_QWORD *)((char *)v20 + 24);
        v33 = *((_QWORD *)v20 + 3);
        v34 = (_QWORD *)*((_QWORD *)v20 + 4);
        if ( *(struct _VIDMM_POOL_BLOCK **)(v33 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)v20 + 24)
          || (_QWORD *)*v34 != v32 )
        {
          __fastfail(3u);
        }
        *v34 = v33;
        *(_QWORD *)(v33 + 8) = v34;
        *v32 = 0LL;
        v35 = (_QWORD *)((char *)v20 + 40);
        *((_QWORD *)v20 + 4) = 0LL;
        v36 = *((_QWORD *)v20 + 5);
        v37 = (_QWORD *)*((_QWORD *)v20 + 6);
        if ( *(struct _VIDMM_POOL_BLOCK **)(v36 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)v20 + 40)
          || (_QWORD *)*v37 != v35 )
        {
          __fastfail(3u);
        }
        *v37 = v36;
        *(_QWORD *)(v36 + 8) = v37;
        *v35 = 0LL;
        *((_QWORD *)v20 + 6) = 0LL;
        VIDMM_LINEAR_POOL::FreeBlock(this, v20);
      }
    }
    while ( v18 != v19 );
  }
  v21 = (VIDMM_LINEAR_POOL *)*((_QWORD *)v11 + 4);
  if ( v21 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    v22 = (char *)v21 - 24;
    if ( v22[56] == 2 && *(_QWORD *)v22 + *((_QWORD *)v22 + 1) == *(_QWORD *)v11 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v39 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
        *(_QWORD *)(v39 + 24) = v11;
        *(_QWORD *)(v39 + 32) = v22;
      }
      *(_QWORD *)v11 = *(_QWORD *)v22;
      *((_QWORD *)v11 + 1) += *((_QWORD *)v22 + 1);
      v40 = v22 + 24;
      v41 = *((_QWORD *)v22 + 3);
      v42 = (_QWORD *)*((_QWORD *)v22 + 4);
      if ( *(char **)(v41 + 8) != v22 + 24 || (_QWORD *)*v42 != v40 )
        __fastfail(3u);
      *v42 = v41;
      *(_QWORD *)(v41 + 8) = v42;
      *v40 = 0LL;
      v43 = v22 + 40;
      *((_QWORD *)v22 + 4) = 0LL;
      v44 = *((_QWORD *)v22 + 5);
      v45 = (_QWORD *)*((_QWORD *)v22 + 6);
      if ( *(char **)(v44 + 8) != v22 + 40 || (_QWORD *)*v45 != v43 )
        __fastfail(3u);
      *v45 = v44;
      *(_QWORD *)(v44 + 8) = v45;
      *v43 = 0LL;
      *((_QWORD *)v22 + 6) = 0LL;
      VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v22);
    }
  }
  if ( *v17 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    v23 = (__int64)*v17 - 24;
    if ( *(_BYTE *)(v23 + 56) == 2 && *(_QWORD *)v23 == *((_QWORD *)v11 + 1) + *(_QWORD *)v11 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v46 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
        *(_QWORD *)(v46 + 24) = v11;
        *(_QWORD *)(v46 + 32) = v23;
      }
      *((_QWORD *)v11 + 1) += *(_QWORD *)(v23 + 8);
      v47 = (_QWORD *)(v23 + 24);
      v48 = *(_QWORD *)(v23 + 24);
      v49 = *(_QWORD **)(v23 + 32);
      if ( *(_QWORD *)(v48 + 8) != v23 + 24 || (_QWORD *)*v49 != v47 )
        __fastfail(3u);
      *v49 = v48;
      *(_QWORD *)(v48 + 8) = v49;
      *v47 = 0LL;
      v50 = (_QWORD *)(v23 + 40);
      *(_QWORD *)(v23 + 32) = 0LL;
      v51 = *(_QWORD *)(v23 + 40);
      v52 = *(_QWORD **)(v23 + 48);
      if ( *(_QWORD *)(v51 + 8) != v23 + 40 || (_QWORD *)*v52 != v50 )
        __fastfail(3u);
      *v52 = v51;
      *(_QWORD *)(v51 + 8) = v52;
      *v50 = 0LL;
      *(_QWORD *)(v23 + 48) = 0LL;
      VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v23);
    }
  }
  BlockRun = VIDMM_LINEAR_POOL::SplitBlock(this, v11, v56, v55, &v54);
  if ( BlockRun < 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v25, v24, v26, v27);
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v25, v24, v26, v27);
    v28 = v54;
    *((_QWORD *)v54 + 2) = a9;
    *a10 = *(union _LARGE_INTEGER *)v28;
    *a11 = v28;
  }
  return (unsigned int)BlockRun;
}
