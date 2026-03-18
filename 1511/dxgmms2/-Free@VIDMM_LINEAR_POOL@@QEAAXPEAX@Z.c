/*
 * XREFs of ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0059558
 * Callers:
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C0055BC0 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0083830 (-ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapPagesFromAperture@VIDMM_APERTURE_SEGMENT@@UEAAXKPEAU_MDL@@PEAX_K@Z @ 0x1C0083CE0 (-UnmapPagesFromAperture@VIDMM_APERTURE_SEGMENT@@UEAAXKPEAU_MDL@@PEAX_K@Z.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C0083F40 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 *     ?FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z @ 0x1C0084610 (-FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00886B8 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0088DE8 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C0089E54 (--1VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 * Callees:
 *     ?FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z @ 0x1C0058B54 (-FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C0058C28 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::Free(VIDMM_LINEAR_POOL *this, struct _VIDMM_POOL_BLOCK *a2, __int64 a3, __int64 a4)
{
  struct _VIDMM_POOL_BLOCK *v4; // rbp
  struct _VIDMM_POOL_BLOCK *v5; // rdi
  bool v6; // zf
  char *v9; // rax
  char *v10; // rcx
  char *v11; // rbx
  char *v12; // rax
  __int64 v13; // rcx
  char **v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  char **v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  struct _VIDMM_POOL_BLOCK **v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  struct _VIDMM_POOL_BLOCK **v23; // rcx
  __int64 v24; // rdx
  struct _VIDMM_POOL_BLOCK **v25; // rcx
  struct _VIDMM_POOL_BLOCK *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  struct _VIDMM_POOL_BLOCK **v29; // rax
  char **v30; // rbp
  char *v31; // rax
  char **v32; // rax
  char *v33; // rdi
  char **v34; // r14
  char *v35; // rax
  struct _VIDMM_POOL_BLOCK *v36; // [rsp+48h] [rbp+10h] BYREF
  struct _VIDMM_POOL_BLOCK *v37; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v6 = *(_DWORD *)a2 == 4;
  v36 = 0LL;
  v37 = 0LL;
  if ( v6 )
  {
    v9 = (char *)*((_QWORD *)a2 + 5);
    v10 = (char *)this + 40;
    if ( v9 != v10 )
      v4 = (struct _VIDMM_POOL_BLOCK *)(v9 - 32);
    v11 = (char *)a2 + 32;
    v12 = (char *)*((_QWORD *)a2 + 4);
    if ( v12 != v10 )
      v5 = (struct _VIDMM_POOL_BLOCK *)(v12 - 32);
    v13 = *((_QWORD *)a2 + 4);
    v14 = (char **)*((_QWORD *)a2 + 5);
    if ( *(char **)(v13 + 8) != v11 || *v14 != v11 )
      __fastfail(3u);
    *v14 = (char *)v13;
    *(_QWORD *)(v13 + 8) = v14;
    *(_QWORD *)v11 = 0LL;
    *((_QWORD *)a2 + 5) = 0LL;
    if ( !*((_DWORD *)this + 4) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v13, a2, a3, a4);
      *(_QWORD *)(v15 + 24) = 1468LL;
      WdLogEvent5_WdAssertion(v15);
    }
    --*((_DWORD *)this + 4);
  }
  else
  {
    v11 = (char *)a2 + 32;
    v16 = *((_QWORD *)a2 + 4);
    v17 = (char **)*((_QWORD *)a2 + 5);
    if ( *(struct _VIDMM_POOL_BLOCK **)(v16 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 32) || *v17 != v11 )
      __fastfail(3u);
    *v17 = (char *)v16;
    *(_QWORD *)(v16 + 8) = v17;
    *(_QWORD *)v11 = 0LL;
    *((_QWORD *)a2 + 5) = 0LL;
    VIDMM_LINEAR_POOL::FindAdjacentBlocksOnFreeList(this, a2, &v36, &v37);
    v4 = v36;
    v5 = v37;
  }
  if ( v4 && (v18 = *((_QWORD *)v4 + 2), v18 + *((_QWORD *)v4 + 1) == *((_QWORD *)a2 + 1)) && *(_DWORD *)v4 == 2 )
  {
    *((_QWORD *)v4 + 2) = v18 + *((_QWORD *)a2 + 2);
    v19 = *((_QWORD *)a2 + 6);
    v20 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 7);
    if ( *(struct _VIDMM_POOL_BLOCK **)(v19 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 48)
      || *v20 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 48) )
    {
      __fastfail(3u);
    }
    *v20 = (struct _VIDMM_POOL_BLOCK *)v19;
    *(_QWORD *)(v19 + 8) = v20;
    VIDMM_LINEAR_POOL::FreeBlock(this, a2);
    if ( v5 )
    {
      v21 = *((_QWORD *)v4 + 2);
      if ( *((_QWORD *)v5 + 1) == v21 + *((_QWORD *)v4 + 1) && *(_DWORD *)v5 == 2 )
      {
        *((_QWORD *)v4 + 2) = v21 + *((_QWORD *)v5 + 2);
        v22 = *((_QWORD *)v5 + 4);
        v23 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v5 + 5);
        if ( *(struct _VIDMM_POOL_BLOCK **)(v22 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)v5 + 32)
          || *v23 != (struct _VIDMM_POOL_BLOCK *)((char *)v5 + 32) )
        {
          __fastfail(3u);
        }
        *v23 = (struct _VIDMM_POOL_BLOCK *)v22;
        *(_QWORD *)(v22 + 8) = v23;
        v24 = *((_QWORD *)v5 + 6);
        v25 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v5 + 7);
        if ( *(struct _VIDMM_POOL_BLOCK **)(v24 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)v5 + 48)
          || *v25 != (struct _VIDMM_POOL_BLOCK *)((char *)v5 + 48) )
        {
          __fastfail(3u);
        }
        *v25 = (struct _VIDMM_POOL_BLOCK *)v24;
        *(_QWORD *)(v24 + 8) = v25;
        v26 = v5;
LABEL_37:
        VIDMM_LINEAR_POOL::FreeBlock(this, v26);
      }
    }
  }
  else
  {
    if ( v5 )
    {
      v27 = *((_QWORD *)a2 + 2);
      if ( *((_QWORD *)v5 + 1) == v27 + *((_QWORD *)a2 + 1) && *(_DWORD *)v5 == 2 )
      {
        *((_QWORD *)v5 + 2) += v27;
        *((_QWORD *)v5 + 1) = *((_QWORD *)a2 + 1);
        v28 = *((_QWORD *)a2 + 6);
        v29 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 7);
        if ( *(struct _VIDMM_POOL_BLOCK **)(v28 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 48)
          || *v29 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 48) )
        {
          __fastfail(3u);
        }
        *v29 = (struct _VIDMM_POOL_BLOCK *)v28;
        *(_QWORD *)(v28 + 8) = v29;
        v26 = a2;
        goto LABEL_37;
      }
    }
    *((_QWORD *)a2 + 3) = 0LL;
    *(_DWORD *)a2 = 2;
    if ( v4 )
    {
      v30 = (char **)((char *)v4 + 32);
      v31 = *v30;
      *(_QWORD *)v11 = *v30;
      *((_QWORD *)v11 + 1) = v30;
      if ( *((char ***)v31 + 1) != v30 )
        __fastfail(3u);
      *((_QWORD *)v31 + 1) = v11;
      *v30 = v11;
    }
    else if ( v5 )
    {
      v32 = (char **)*((_QWORD *)v5 + 5);
      v33 = (char *)v5 + 32;
      *(_QWORD *)v11 = v33;
      *((_QWORD *)v11 + 1) = v32;
      if ( *v32 != v33 )
        __fastfail(3u);
      *v32 = v11;
      *((_QWORD *)v33 + 1) = v11;
    }
    else
    {
      v34 = (char **)((char *)this + 40);
      v35 = *v34;
      *(_QWORD *)v11 = *v34;
      *((_QWORD *)v11 + 1) = v34;
      if ( *((char ***)v35 + 1) != v34 )
        __fastfail(3u);
      *((_QWORD *)v35 + 1) = v11;
      *v34 = v11;
    }
  }
}
