/*
 * XREFs of ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_K1@Z @ 0x1C003CD00
 * Callers:
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C003E4A0 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 * Callees:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C003DE20 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_KIIPEAU_DXGK_PTE@@5II4W4_DXGK_PAGETABLEUPDATEMODE@@4U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0044F20 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C004A988 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z @ 0x1C005405C (-GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C00670E0 (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  unsigned __int64 v4; // rbp
  struct CVirtualAddressAllocator *v5; // r13
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // r12d
  unsigned int v13; // r15d
  unsigned int v14; // r15d
  char v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  VIDMM_GLOBAL *v27; // rsi
  int v28; // ebx
  enum _DXGK_PAGETABLEUPDATEMODE v29; // r9d
  struct VIDMM_ALLOC *v30; // r10
  __int64 v31; // rdx
  int v32; // eax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  unsigned int v40; // eax
  __int64 **v41; // rax
  __int64 *v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 **v45; // rax
  unsigned int v46; // [rsp+90h] [rbp-58h]
  unsigned int v47; // [rsp+98h] [rbp-50h] BYREF
  void *v48; // [rsp+A0h] [rbp-48h] BYREF
  void *v49; // [rsp+A8h] [rbp-40h] BYREF
  unsigned __int64 v51; // [rsp+100h] [rbp+18h]

  v51 = a3;
  v4 = a3;
  v5 = a2;
  if ( (a3 & 0xFFF) != 0 )
    return 3221225485LL;
  v7 = a3 >> 12;
  v8 = (a3 >> 12) + a4;
  if ( v8 <= v7 )
    return 3221225485LL;
  v9 = *((_QWORD *)a2 + 8);
  v10 = *((_QWORD *)this + 1);
  v11 = *(_QWORD *)(v9 + 40048) + 456LL * ((*(_DWORD *)this >> 7) & 0x1F);
  if ( !v10 || !*(_QWORD *)(v10 + 128) )
    return 0LL;
  v12 = v7 & *(_DWORD *)(v11 + 56);
  v46 = v12;
  v13 = *(_DWORD *)(v11 + 56) & (v8 - 1);
  if ( (*(_DWORD *)this & 0x40) != 0 )
  {
    v12 >>= 4;
    v13 >>= 4;
    v4 &= 0xFFFFFFFFFFFF0000uLL;
    v46 = v12;
    v51 = v4;
  }
  v14 = v13 - v12 + 1;
  v15 = 1;
  if ( *(_QWORD *)(v9 + 40688) && v12 < v14 + v12 )
  {
    v16 = 16LL * v12;
    v17 = v14;
    do
    {
      v18 = *((_QWORD *)this + 3);
      v19 = *(_QWORD *)(v16 + v18);
      if ( (v19 & 1) != 0 )
      {
        v20 = *(_QWORD *)(v16 + v18 + 8);
        v21 = (v19 >> 5) & 0x1F;
        if ( *(_QWORD *)(v9 + 40688) )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v9 + 40672, 0LL);
          *(_QWORD *)(v9 + 40680) = KeGetCurrentThread();
          if ( *(_DWORD *)(v9 + 40696) == dword_1C002F308 )
            *(_DWORD *)(v9 + 40696) = 0;
          v22 = MEMORY[0xFFFFF78000000014];
          v23 = *(_QWORD *)(v9 + 40688) + 48LL * *(unsigned int *)(v9 + 40696);
          *(_QWORD *)(v23 + 24) = 0LL;
          *(_QWORD *)v23 = v22;
          *(_DWORD *)(v23 + 32) = 1;
          *(_DWORD *)(v23 + 36) = v21;
          *(_QWORD *)(v23 + 8) = v20;
          *(_QWORD *)(v23 + 16) = 1LL;
          *(_DWORD *)(v23 + 40) = *(_DWORD *)(v9 + 40664);
          ++*(_DWORD *)(v9 + 40696);
          *(_QWORD *)(v9 + 40680) = 0LL;
          ExReleasePushLockExclusiveEx(v9 + 40672, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      v16 += 16LL;
      --v17;
    }
    while ( v17 );
    v12 = v46;
    v4 = v51;
    v15 = 1;
    v5 = a2;
  }
  if ( v12 < v14 + v12 )
  {
    v24 = 16LL * v12;
    v25 = v14;
    do
    {
      v26 = *((_QWORD *)this + 3);
      if ( (*(_BYTE *)(v26 + v24) & 1) != 0 )
      {
        --*((_DWORD *)this + 1);
        *(_QWORD *)(v26 + v24) = 0LL;
        *(_QWORD *)(v24 + *((_QWORD *)this + 3) + 8) = 0LL;
      }
      v24 += 16LL;
      --v25;
    }
    while ( v25 );
  }
  if ( !*((_DWORD *)this + 1) && (*((_DWORD *)v5 + 30) & 4) == 0 )
    return 0LL;
  if ( (*(_DWORD *)this & 0x40) == 0 )
    v15 = 0;
  v27 = (VIDMM_GLOBAL *)*((_QWORD *)v5 + 8);
  v28 = (8 * v15) & 8;
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(this, v5, &v47, (unsigned __int64 *)&v48, &v49) >= 0 )
  {
    if ( (*((_BYTE *)v27 + 40608) & 8) != 0 )
    {
      v30 = 0LL;
      v29 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    }
    else
    {
      v29 = (int)(*(_DWORD *)this << 16) >> 29;
      v30 = 0LL;
    }
    if ( !*((_QWORD *)v5 + 11) )
    {
      v40 = VIDMM_GLOBAL::AdapterId(*((VIDMM_GLOBAL **)v5 + 8));
      *((_QWORD *)v5 + 11) = VIDMM_PROCESS::GetKmdProcessHandle(*((VIDMM_PROCESS **)v5 + 9), v40);
    }
    VIDMM_GLOBAL::UpdatePageTable(
      v27,
      *(_DWORD *)this & 7,
      *((void **)v5 + 11),
      0LL,
      v30,
      v30,
      (unsigned __int64)v30,
      v12,
      v14,
      (struct _DXGK_PTE *)v30,
      (struct _DXGK_PTE *)v30,
      (*(_DWORD *)this >> 7) & 0x1F,
      v47,
      (unsigned __int64)v48,
      v29,
      v4 >> 12,
      (struct _DXGK_UPDATEPAGETABLEFLAGS)v28);
    v31 = *((_QWORD *)v5 + 8);
    if ( (*(_BYTE *)(v31 + 40608) & 8) != 0 || (v32 = (int)(*(_DWORD *)this << 16) >> 29) == 0 )
    {
      VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(this, (struct VIDMM_GLOBAL *)v31, v48, v49);
    }
    else if ( v32 == 1
           && *(struct CVirtualAddressAllocator **)(v31
                                                  + 8 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F)
                                                  + 40088) != v5 )
    {
      v41 = (__int64 **)(*((_QWORD *)this + 2) + 128LL);
      v42 = *v41;
      v43 = **v41;
      if ( (__int64 **)(*v41)[1] != v41 || *(__int64 **)(v43 + 8) != v42 )
        __fastfail(3u);
      *v41 = (__int64 *)v43;
      *(_QWORD *)(v43 + 8) = v41;
      v42[2] = *(_QWORD *)(v31 + 8LL * ((*(_DWORD *)this >> 7) & 0x1F) + 4880);
      v44 = 456LL * ((*(_DWORD *)this >> 7) & 0x1F) + 440 + *(_QWORD *)(v31 + 40048);
      v45 = *(__int64 ***)(v44 + 8);
      *v42 = v44;
      v42[1] = (__int64)v45;
      if ( *v45 != (__int64 *)v44 )
        __fastfail(3u);
      *v45 = v42;
      *(_QWORD *)(v44 + 8) = v42;
    }
    return 0LL;
  }
  v34 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v34 + 24) = 3270LL;
  WdLogEvent5_WdError(v34);
  v39 = WdLogNewEntry5_WdAssertion(v36, v35, v37, v38);
  *(_QWORD *)(v39 + 24) = 4903LL;
  WdLogEvent5_WdAssertion(v39);
  return 3221225473LL;
}
