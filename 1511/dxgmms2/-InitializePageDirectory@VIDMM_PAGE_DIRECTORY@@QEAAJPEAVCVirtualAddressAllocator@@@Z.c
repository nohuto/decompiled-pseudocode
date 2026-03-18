/*
 * XREFs of ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C003F8B4
 * Callers:
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C005FBF0 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C003DBCC (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::InitializePageDirectory(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2)
{
  __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // r10d
  unsigned int v9; // r8d
  unsigned int v10; // edi
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rax
  PVOID v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  SIZE_T v18; // rax
  PVOID v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  int VidMmObjects; // ebx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax

  v4 = *((_QWORD *)a2 + 12) + 32LL * ((*(_DWORD *)this >> 7) & 0x1F);
  v5 = *(_QWORD *)(*((_QWORD *)a2 + 8) + 40048LL) + 456LL * ((*(_DWORD *)this >> 7) & 0x1F);
  if ( (*(_DWORD *)this & 0x10) != 0 && !*(_DWORD *)(v4 + 16) )
    return 0LL;
  v6 = *(_DWORD *)this ^ ((unsigned __int16)*(_DWORD *)this ^ (unsigned __int16)(32 * **(_DWORD **)(v5 + 424))) & 0x1000;
  *(_DWORD *)this = v6;
  v7 = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v5 + 408) << 13)) & 0xE000;
  *(_DWORD *)this = v7;
  v8 = v7;
  if ( (v7 & 0x10) != 0 )
  {
    v9 = *(_DWORD *)(v4 + 16);
    v10 = *(_DWORD *)(v4 + 20);
  }
  else
  {
    v30 = v7 & 7;
    v9 = *(_DWORD *)(v5 + 48 * v30 + 72);
    v10 = *(_DWORD *)(v5 + 48 * v30 + 80);
  }
  if ( (v8 & 0x1020) == 0x1020 )
    v9 *= 2;
  v11 = v9;
  v12 = 16LL * v9;
  *(_DWORD *)this = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(v8 >> 6)) & 0x40;
  if ( !is_mul_ok(v9, 0x10uLL) )
    v12 = -1LL;
  v13 = operator new(v12, 0x37356956u, PagedPool);
  *((_QWORD *)this + 3) = v13;
  if ( !v13 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    *(_QWORD *)(v31 + 24) = 3678LL;
LABEL_18:
    WdLogEvent5_WdAssertion(v31);
    return 3221225495LL;
  }
  memset(v13, 0, 16LL * (unsigned int)v11);
  v18 = 8 * v11;
  if ( !is_mul_ok(v11, 8uLL) )
    v18 = -1LL;
  v19 = operator new(v18, 0x33356956u, PagedPool);
  *((_QWORD *)this + 4) = v19;
  if ( !v19 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
    *(_QWORD *)(v31 + 24) = 3686LL;
    goto LABEL_18;
  }
  memset(v19, 0, 8LL * (unsigned int)v11);
  VidMmObjects = VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(
                   (struct VIDMM_ALLOC **)this,
                   a2,
                   v10,
                   *(_DWORD *)(32LL * ((*(_DWORD *)this >> 7) & 0x1F) + *((_QWORD *)a2 + 12) + 24));
  if ( VidMmObjects >= 0 )
    return 0LL;
  v32 = WdLogNewEntry5_WdAssertion(v25, v24, v27, v28);
  *(_QWORD *)(v32 + 24) = 3694LL;
  WdLogEvent5_WdAssertion(v32);
  return (unsigned int)VidMmObjects;
}
