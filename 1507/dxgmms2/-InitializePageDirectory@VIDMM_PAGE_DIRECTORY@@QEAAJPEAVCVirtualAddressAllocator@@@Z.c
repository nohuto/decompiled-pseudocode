/*
 * XREFs of ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0060648
 * Callers:
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C005E758 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C005EB98 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
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
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  SIZE_T v13; // rax
  PVOID v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  SIZE_T v21; // rax
  PVOID v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  int VidMmObjects; // ebx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax

  v4 = *((_QWORD *)a2 + 12) + 32LL * ((*(_DWORD *)this >> 7) & 0x1F);
  v5 = *(_QWORD *)(*((_QWORD *)a2 + 8) + 39992LL) + 456LL * ((*(_DWORD *)this >> 7) & 0x1F);
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
    v11 = v7 & 7;
    v9 = *(_DWORD *)(v5 + 48 * v11 + 72);
    v10 = *(_DWORD *)(v5 + 48 * v11 + 80);
  }
  if ( (v8 & 0x1020) == 0x1020 )
    v9 *= 2;
  v12 = v9;
  v13 = 16LL * v9;
  *(_DWORD *)this = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(v8 >> 6)) & 0x40;
  if ( !is_mul_ok(v9, 0x10uLL) )
    v13 = -1LL;
  v14 = operator new(v13, 0x37356956u, PagedPool);
  *((_QWORD *)this + 3) = v14;
  if ( !v14 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    *(_QWORD *)(v19 + 24) = 3698LL;
LABEL_12:
    WdLogEvent5_WdAssertion(v19);
    return 3221225495LL;
  }
  memset(v14, 0, 16 * v12);
  v21 = 8 * v12;
  if ( !is_mul_ok(v12, 8uLL) )
    v21 = -1LL;
  v22 = operator new(v21, 0x33356956u, PagedPool);
  *((_QWORD *)this + 4) = v22;
  if ( !v22 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
    *(_QWORD *)(v19 + 24) = 3706LL;
    goto LABEL_12;
  }
  memset(v22, 0, 8 * v12);
  VidMmObjects = VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(
                   this,
                   a2,
                   v10,
                   *(_DWORD *)(32LL * ((*(_DWORD *)this >> 7) & 0x1F) + *((_QWORD *)a2 + 12) + 24));
  if ( VidMmObjects >= 0 )
    return 0LL;
  v32 = WdLogNewEntry5_WdAssertion(v28, v27, v30, v31);
  *(_QWORD *)(v32 + 24) = 3714LL;
  WdLogEvent5_WdAssertion(v32);
  return (unsigned int)VidMmObjects;
}
