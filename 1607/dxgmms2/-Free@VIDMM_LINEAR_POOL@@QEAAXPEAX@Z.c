/*
 * XREFs of ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0065BF4
 * Callers:
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C0064500 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0096E70 (-ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapPagesFromAperture@VIDMM_APERTURE_SEGMENT@@UEAAXKPEAU_MDL@@PEAX_K@Z @ 0x1C0097410 (-UnmapPagesFromAperture@VIDMM_APERTURE_SEGMENT@@UEAAXKPEAU_MDL@@PEAX_K@Z.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C0097690 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 *     ?FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z @ 0x1C0097DD0 (-FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0098B20 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C009D444 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C009DBF8 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C009ECC4 (--1VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 * Callees:
 *     ?FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z @ 0x1C0065214 (-FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C00652DC (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::Free(VIDMM_LINEAR_POOL *this, struct _VIDMM_POOL_BLOCK *a2, __int64 a3, __int64 a4)
{
  struct _VIDMM_POOL_BLOCK *v4; // r14
  struct _VIDMM_POOL_BLOCK *v5; // rdi
  VIDMM_LINEAR_POOL *v8; // rax
  char *v9; // rbx
  VIDMM_LINEAR_POOL *v10; // rax
  __int64 v11; // rcx
  char **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  struct _VIDMM_POOL_BLOCK **v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  struct _VIDMM_POOL_BLOCK **v18; // rcx
  __int64 v19; // rdx
  struct _VIDMM_POOL_BLOCK **v20; // rcx
  struct _VIDMM_POOL_BLOCK *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  struct _VIDMM_POOL_BLOCK **v24; // rcx
  char *v25; // r14
  __int64 v26; // rax
  __int64 v27; // rcx
  char **v28; // rax
  char **v29; // rax
  char *v30; // rdi
  __int64 v31; // rax
  char **v32; // rax
  __int64 v33; // rcx
  struct _VIDMM_POOL_BLOCK *v34; // [rsp+48h] [rbp+10h] BYREF
  struct _VIDMM_POOL_BLOCK *v35; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  if ( *((_BYTE *)a2 + 56) == 4 )
  {
    v8 = (VIDMM_LINEAR_POOL *)*((_QWORD *)a2 + 4);
    if ( v8 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
      v4 = (VIDMM_LINEAR_POOL *)((char *)v8 - 24);
    v9 = (char *)a2 + 24;
    v10 = (VIDMM_LINEAR_POOL *)*((_QWORD *)a2 + 3);
    if ( v10 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
      v5 = (VIDMM_LINEAR_POOL *)((char *)v10 - 24);
    v11 = *((_QWORD *)a2 + 3);
    v12 = (char **)*((_QWORD *)a2 + 4);
    if ( *(char **)(v11 + 8) != v9 || *v12 != v9 )
      __fastfail(3u);
    *v12 = (char *)v11;
    *(_QWORD *)(v11 + 8) = v12;
    *(_QWORD *)v9 = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    if ( !*((_DWORD *)this + 4) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v11, a2);
      *(_QWORD *)(v31 + 24) = 1476LL;
      WdLogEvent5_WdAssertion(v31);
    }
    --*((_DWORD *)this + 4);
  }
  else
  {
    v9 = (char *)a2 + 24;
    v27 = *((_QWORD *)a2 + 3);
    v28 = (char **)*((_QWORD *)a2 + 4);
    if ( *(struct _VIDMM_POOL_BLOCK **)(v27 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24) || *v28 != v9 )
      __fastfail(3u);
    *v28 = (char *)v27;
    *(_QWORD *)(v27 + 8) = v28;
    *(_QWORD *)v9 = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    VIDMM_LINEAR_POOL::FindAdjacentBlocksOnFreeList(this, a2, &v34, &v35);
    v4 = v34;
    v5 = v35;
  }
  if ( v4 && (v13 = *((_QWORD *)v4 + 1), v13 + *(_QWORD *)v4 == *(_QWORD *)a2) && *((_BYTE *)v4 + 56) == 2 )
  {
    *((_QWORD *)v4 + 1) = v13 + *((_QWORD *)a2 + 1);
    v14 = *((_QWORD *)a2 + 5);
    v15 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6);
    if ( *(struct _VIDMM_POOL_BLOCK **)(v14 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40)
      || *v15 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
    {
      __fastfail(3u);
    }
    *v15 = (struct _VIDMM_POOL_BLOCK *)v14;
    *(_QWORD *)(v14 + 8) = v15;
    VIDMM_LINEAR_POOL::FreeBlock(this, a2);
    if ( v5 )
    {
      v16 = *((_QWORD *)v4 + 1);
      if ( *(_QWORD *)v5 == v16 + *(_QWORD *)v4 && *((_BYTE *)v5 + 56) == 2 )
      {
        *((_QWORD *)v4 + 1) = v16 + *((_QWORD *)v5 + 1);
        v17 = *((_QWORD *)v5 + 3);
        v18 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v5 + 4);
        if ( *(struct _VIDMM_POOL_BLOCK **)(v17 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)v5 + 24)
          || *v18 != (struct _VIDMM_POOL_BLOCK *)((char *)v5 + 24) )
        {
          __fastfail(3u);
        }
        *v18 = (struct _VIDMM_POOL_BLOCK *)v17;
        *(_QWORD *)(v17 + 8) = v18;
        v19 = *((_QWORD *)v5 + 5);
        v20 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v5 + 6);
        if ( *(struct _VIDMM_POOL_BLOCK **)(v19 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)v5 + 40)
          || *v20 != (struct _VIDMM_POOL_BLOCK *)((char *)v5 + 40) )
        {
          __fastfail(3u);
        }
        *v20 = (struct _VIDMM_POOL_BLOCK *)v19;
        *(_QWORD *)(v19 + 8) = v20;
        v21 = v5;
LABEL_32:
        VIDMM_LINEAR_POOL::FreeBlock(this, v21);
      }
    }
  }
  else
  {
    if ( v5 )
    {
      v22 = *((_QWORD *)a2 + 1);
      if ( *(_QWORD *)v5 == v22 + *(_QWORD *)a2 && *((_BYTE *)v5 + 56) == 2 )
      {
        *((_QWORD *)v5 + 1) += v22;
        *(_QWORD *)v5 = *(_QWORD *)a2;
        v23 = *((_QWORD *)a2 + 5);
        v24 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6);
        if ( *(struct _VIDMM_POOL_BLOCK **)(v23 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40)
          || *v24 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
        {
          __fastfail(3u);
        }
        *v24 = (struct _VIDMM_POOL_BLOCK *)v23;
        *(_QWORD *)(v23 + 8) = v24;
        v21 = a2;
        goto LABEL_32;
      }
    }
    *((_QWORD *)a2 + 2) = 0LL;
    *((_BYTE *)a2 + 56) = 2;
    if ( v4 )
    {
      v25 = (char *)v4 + 24;
      v26 = *(_QWORD *)v25;
      if ( *(char **)(*(_QWORD *)v25 + 8LL) != v25 )
        __fastfail(3u);
      *(_QWORD *)v9 = v26;
      *((_QWORD *)v9 + 1) = v25;
      *(_QWORD *)(v26 + 8) = v9;
      *(_QWORD *)v25 = v9;
    }
    else if ( v5 )
    {
      v29 = (char **)*((_QWORD *)v5 + 4);
      v30 = (char *)v5 + 24;
      if ( *v29 != v30 )
        __fastfail(3u);
      *(_QWORD *)v9 = v30;
      *((_QWORD *)v9 + 1) = v29;
      *v29 = v9;
      *((_QWORD *)v30 + 1) = v9;
    }
    else
    {
      v32 = (char **)((char *)this + 40);
      v33 = *((_QWORD *)this + 5);
      if ( *(VIDMM_LINEAR_POOL **)(v33 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
        __fastfail(3u);
      *(_QWORD *)v9 = v33;
      *((_QWORD *)v9 + 1) = v32;
      *(_QWORD *)(v33 + 8) = v9;
      *v32 = v9;
    }
  }
}
