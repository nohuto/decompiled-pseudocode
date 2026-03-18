/*
 * XREFs of ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C003DF00
 * Callers:
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C0014E18 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C003DF00 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C003E220 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C003E4A0 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C0011430 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ?GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ @ 0x1C00114EC (-GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C003DA64 (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C003DDD4 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C003DE20 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C003DF00 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_KIIPEAU_DXGK_PTE@@5II4W4_DXGK_PAGETABLEUPDATEMODE@@4U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0044F20 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0047074 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::EvictPageDirectory(
        struct VIDMM_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  unsigned __int64 v5; // rbp
  struct CVirtualAddressAllocator *v6; // rdi
  int *v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int8 v10; // r9
  int v11; // r10d
  VIDMM_GLOBAL *v12; // rsi
  __int64 v13; // rcx
  void *v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdi
  unsigned int v20; // ebp
  struct VIDMM_ALLOC **v21; // rcx
  struct VIDMM_ALLOC **v22; // rcx
  bool v23; // zf
  VIDMM_GLOBAL *KmdProcessHandle; // rax
  unsigned int v25; // r9d
  enum _DXGK_PAGETABLEUPDATEMODE v26; // r10d
  struct _DXGK_UPDATEPAGETABLEFLAGS v27; // r11d
  __int64 v28; // r8
  __int64 v30; // rax
  unsigned int v31; // [rsp+90h] [rbp-48h]
  unsigned int v32[2]; // [rsp+98h] [rbp-40h] BYREF
  unsigned __int64 v33; // [rsp+A0h] [rbp-38h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-30h]
  VIDMM_GLOBAL *v35; // [rsp+B0h] [rbp-28h]
  void *v36; // [rsp+B8h] [rbp-20h] BYREF

  v5 = a3;
  v6 = a2;
  if ( !VIDMM_PAGE_TABLE_BASE::IsResident((VIDMM_PAGE_TABLE_BASE *)this) )
    return 0LL;
  v11 = *v8;
  v12 = (VIDMM_GLOBAL *)*((_QWORD *)v6 + 8);
  v13 = ((unsigned int)*v8 >> 7) & 0x1F;
  v35 = v12;
  v14 = (void *)(*((_QWORD *)v12 + 5006) + 456 * v13);
  v36 = v14;
  if ( (v11 & 0x10) != 0 )
    v15 = *(_DWORD *)(32 * v13 + *((_QWORD *)v6 + 12) + 16);
  else
    v15 = *((_DWORD *)v14 + 12 * (v11 & 7) + 18);
  v31 = v15;
  v16 = *((_QWORD *)v14 + 6 * (v11 & 7) + 14);
  v17 = v9;
  *(_QWORD *)v32 = v9;
  v34 = v16;
  if ( v15 )
  {
    v18 = 0LL;
    v19 = 0LL;
    v33 = v15;
    v20 = v15;
    do
    {
      if ( v10 )
      {
        v21 = *(struct VIDMM_ALLOC ***)((char *)this[4] + v19);
        if ( (*(_DWORD *)this & 0x20) != 0 )
        {
          if ( v21 )
            VIDMM_PAGE_TABLE::EvictPageTable(v21, a2);
          if ( (*(_DWORD *)this & 0x1000) != 0 )
          {
            v22 = (struct VIDMM_ALLOC **)*((_QWORD *)this[4] + v20);
            if ( v22 )
              VIDMM_PAGE_TABLE::EvictPageTable(v22, a2);
          }
        }
        else if ( v21 )
        {
          VIDMM_PAGE_DIRECTORY::EvictPageDirectory((VIDMM_PAGE_DIRECTORY *)v21, a2, v17, v10, a5);
        }
      }
      ++v20;
      v10 = a4;
      v19 += 8LL;
      *(_QWORD *)((char *)this[3] + v18) = 0LL;
      v18 += 16LL;
      *(_QWORD *)v32 += v34;
      v23 = v33-- == 1;
      v17 = *(_QWORD *)v32;
    }
    while ( !v23 );
    v6 = a2;
    v12 = v35;
    v5 = a3;
  }
  if ( (**((_DWORD **)v36 + 53) & 8) == 0 || !a5 )
  {
LABEL_19:
    *((_DWORD *)this[1] + 19) |= 0x100000u;
    *((_BYTE *)this[1] + 94) = 0;
    VIDMM_GLOBAL::EvictOneAllocation(v12, this[2], 0);
    *((_DWORD *)this[1] + 19) &= ~0x100000u;
    return 0LL;
  }
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress((VIDMM_PAGE_TABLE_BASE *)this, v6, v32, &v33, &v36) >= 0 )
  {
    KmdProcessHandle = CVirtualAddressAllocator::GetKmdProcessHandle((VIDMM_GLOBAL **)v6);
    VIDMM_GLOBAL::UpdatePageTable(
      v12,
      *(_DWORD *)this & 7,
      KmdProcessHandle,
      0LL,
      0LL,
      0LL,
      0LL,
      0,
      v31,
      0LL,
      0LL,
      v25,
      v32[0],
      v33,
      v26,
      v5,
      v27);
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress((VIDMM_PAGE_TABLE_BASE *)this, v6, v28, (void *)v33, v36);
    goto LABEL_19;
  }
  v30 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v30 + 24) = 5352LL;
  WdLogEvent5_WdError(v30);
  return 3221225473LL;
}
