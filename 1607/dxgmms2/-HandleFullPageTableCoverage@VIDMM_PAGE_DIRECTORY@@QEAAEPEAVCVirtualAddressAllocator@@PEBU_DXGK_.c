/*
 * XREFs of ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE@Z @ 0x1C009407C
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00493F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x1C001F9C4 (ExAllocateFromPagedLookasideList.c)
 *     ?DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z @ 0x1C009341C (-DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z.c)
 */

unsigned __int8 __fastcall VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct _DXGK_GPUMMUCAPS *a3,
        const struct COMMIT_VA_STATE *a4,
        const struct VIDMM_PAGE_TABLE_LEVEL_DESC *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned __int8 *a10)
{
  __int64 v11; // r9
  bool v12; // r12
  char v13; // bl
  char v14; // bp
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  _DWORD *v23; // [rsp+58h] [rbp+10h]

  v11 = *((_QWORD *)a2 + 8);
  v12 = 0;
  v23 = 0LL;
  v13 = 0;
  v14 = 0;
  if ( (*(_QWORD *)a4 & 1) != 0 )
  {
    if ( (*(_QWORD *)a4 & 2) != 0 )
    {
      v12 = (*(_BYTE *)(v11 + 40872) & 0x40) != 0;
    }
    else if ( (*(_DWORD *)this & 0x20) != 0
           && *((_BYTE *)a4 + 59)
           && !*((_QWORD *)a4 + 8)
           && ((a3->Value & 0x100) != 0 || (((*((_QWORD *)a5 + 5) << 12) - 1LL) & a9) == 0) )
    {
      v23 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v11 + 40192));
      if ( v23 )
      {
        v13 = 1;
      }
      else
      {
        v18 = WdLogNewEntry5_WdWarning(v17);
        WdLogEvent5_WdWarning(v18);
      }
    }
  }
  else
  {
    v14 = 1;
  }
  if ( !(v12 | (unsigned __int8)(v13 | v14)) )
    return 0;
  if ( (*(_BYTE *)(*((_QWORD *)this + 3) + 16LL * a6) & 1) != 0 )
  {
    VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(this, a2, a6, a8);
    *a10 = 1;
  }
  if ( a7 != a6 && (*(_BYTE *)(*((_QWORD *)this + 3) + 16LL * a7) & 1) != 0 )
  {
    VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(this, a2, a7, a8);
    *a10 = 1;
  }
  if ( !v14 )
  {
    v19 = *((_QWORD *)this + 3);
    *a10 = 1;
    *(_QWORD *)(v19 + 16LL * a6) |= 1uLL;
    ++*((_DWORD *)this + 1);
    v20 = *((_QWORD *)this + 3);
    if ( v12 )
    {
      *(_QWORD *)(v20 + 16LL * a6) |= 2uLL;
    }
    else
    {
      *(_QWORD *)(v20 + 16LL * a6) |= 0x400uLL;
      v21 = *(_QWORD *)a4;
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6 + 8) = a9 >> 12;
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6) ^= (*(_DWORD *)(*((_QWORD *)this + 3) + 16LL * a6) ^ (32 * *((_DWORD *)a4 + 13))) & 0x3E0;
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6) ^= ((unsigned __int8)v21 ^ (unsigned __int8)*(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6)) & 8;
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6) ^= ((unsigned __int8)v21 ^ (unsigned __int8)*(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6)) & 0x10;
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6) ^= ((unsigned __int8)v21 ^ (unsigned __int8)*(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6)) & 4;
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6) ^= ((unsigned int)v21 ^ (unsigned int)*(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6)) & 0x1F800;
      v23[2] = *((_DWORD *)a4 + 12);
      *(_QWORD *)v23 = *((_QWORD *)a4 + 5);
      *((_QWORD *)v23 + 2) = *((_QWORD *)a4 + 2);
      *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * a6) = v23;
    }
  }
  return 1;
}
