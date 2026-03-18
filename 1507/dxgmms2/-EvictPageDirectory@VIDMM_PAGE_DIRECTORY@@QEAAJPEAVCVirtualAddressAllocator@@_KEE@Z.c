/*
 * XREFs of ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005F2A4
 * Callers:
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C000ECEC (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005EE00 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005F2A4 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C0063608 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C000EE60 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ?GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ @ 0x1C0010608 (-GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C004D098 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_KIIPEAU_DXGK_PTE@@5II4W4_DXGK_PAGETABLEUPDATEMODE@@4U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0054E14 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005F2A4 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005F5EC (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C005FB04 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0060034 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::EvictPageDirectory(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        char a5)
{
  int *v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int8 v9; // r9
  int v10; // r10d
  __int64 v11; // rcx
  _DWORD **v12; // rsi
  unsigned int v13; // ebp
  unsigned __int64 v14; // rsi
  __int64 v15; // r8
  unsigned int v16; // edx
  unsigned __int64 v17; // rax
  __int64 v18; // rbp
  VIDMM_PAGE_TABLE *v19; // rcx
  VIDMM_PAGE_TABLE *v20; // rcx
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rax
  VIDMM_GLOBAL *v25; // rsi
  VIDMM_GLOBAL *KmdProcessHandle; // rax
  unsigned int v27; // r9d
  enum _DXGK_PAGETABLEUPDATEMODE v28; // r10d
  DXGK_UPDATEPAGETABLEFLAGS v29; // r11d
  unsigned int v30; // r8d
  unsigned int v31; // [rsp+90h] [rbp-58h]
  unsigned int v32; // [rsp+94h] [rbp-54h] BYREF
  unsigned __int64 v33; // [rsp+98h] [rbp-50h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-48h]
  void *v35; // [rsp+A8h] [rbp-40h] BYREF
  VIDMM_GLOBAL *v36; // [rsp+B0h] [rbp-38h]
  unsigned __int64 v37; // [rsp+B8h] [rbp-30h]
  _DWORD *v38; // [rsp+C0h] [rbp-28h]
  __int64 v39; // [rsp+C8h] [rbp-20h]

  if ( VIDMM_PAGE_TABLE_BASE::IsResident(this) )
  {
    v10 = *v7;
    v11 = ((unsigned int)*v7 >> 7) & 0x1F;
    v36 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 8);
    v12 = (_DWORD **)(*((_QWORD *)v36 + 4999) + 456 * v11);
    v35 = v12;
    if ( (v10 & 0x10) != 0 )
      v13 = *(_DWORD *)(32 * v11 + *((_QWORD *)a2 + 12) + 16);
    else
      v13 = (unsigned int)v12[6 * (v10 & 7) + 9];
    v32 = v13;
    v37 = v8;
    v38 = v12[6 * (v10 & 7) + 14];
    if ( v13 )
    {
      v14 = v37;
      v15 = 0LL;
      v39 = 0LL;
      v16 = v13;
      v17 = v13;
      v18 = 0LL;
      v34 = 0LL;
      v31 = v16;
      v33 = v17;
      while ( 1 )
      {
        if ( v9 )
        {
          v19 = *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 4) + v18);
          if ( (*(_DWORD *)this & 0x20) != 0 )
          {
            if ( v19 )
            {
              VIDMM_PAGE_TABLE::EvictPageTable(v19, a2, v14, a5);
              v16 = v31;
              v15 = v34;
            }
            if ( (*(_DWORD *)this & 0x1000) == 0 )
              goto LABEL_17;
            v20 = *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 4) + 8LL * v16);
            if ( !v20 )
              goto LABEL_17;
            VIDMM_PAGE_TABLE::EvictPageTable(v20, a2, v14, a5);
            goto LABEL_16;
          }
          if ( v19 )
          {
            VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v19, a2, v14, v9, a5);
LABEL_16:
            v15 = v34;
            v16 = v31;
          }
        }
LABEL_17:
        ++v16;
        v14 += (unsigned __int64)v38;
        v18 += 8LL;
        v9 = a4;
        v31 = v16;
        *(_QWORD *)(v15 + *((_QWORD *)this + 3)) = 0LL;
        v15 += 16LL;
        v21 = v33-- == 1;
        v34 = v15;
        if ( v21 )
        {
          v12 = (_DWORD **)v35;
          v13 = v32;
          break;
        }
      }
    }
    if ( (*v12[53] & 8) != 0 && a5 )
    {
      if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(this, a2, &v32, &v33, &v35) < 0 )
      {
        v23 = WdLogNewEntry5_WdError(v22);
        *(_QWORD *)(v23 + 24) = 5331LL;
        WdLogEvent5_WdError(v23);
        return 3221225473LL;
      }
      v25 = v36;
      KmdProcessHandle = CVirtualAddressAllocator::GetKmdProcessHandle((VIDMM_GLOBAL **)a2);
      VIDMM_GLOBAL::UpdatePageTable(
        v25,
        *(_DWORD *)this & 7,
        KmdProcessHandle,
        0LL,
        0LL,
        0LL,
        0LL,
        0,
        v13,
        0LL,
        0LL,
        v27,
        v32,
        v33,
        v28,
        a3,
        v29);
      VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(this, a2, v30, v33, v35);
    }
    else
    {
      v25 = v36;
    }
    *(_DWORD *)(*((_QWORD *)this + 1) + 76LL) |= 0x80000u;
    *(_BYTE *)(*((_QWORD *)this + 1) + 94LL) = 0;
    VIDMM_GLOBAL::EvictOneAllocation(v25, *((__int64 ***)this + 2), 0LL);
    *(_DWORD *)(*((_QWORD *)this + 1) + 76LL) &= ~0x80000u;
  }
  return 0LL;
}
