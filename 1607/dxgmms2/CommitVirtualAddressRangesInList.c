/*
 * XREFs of CommitVirtualAddressRangesInList @ 0x1C00885A4
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C004EFA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0048A50 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 */

__int64 __fastcall CommitVirtualAddressRangesInList(_QWORD *a1, __int64 ***a2)
{
  __int64 **v2; // r15
  CVirtualAddressAllocator *v4; // r13
  int v5; // esi
  _QWORD *v6; // rdi
  bool v8; // zf
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v16; // [rsp+70h] [rbp+8h]

  v2 = *a2;
  v4 = (CVirtualAddressAllocator *)a2[1];
  v5 = 0;
  v6 = (_QWORD *)*a1;
  v8 = *a1 == (_QWORD)a1;
  v9 = *((_QWORD *)v4 + 8);
  v10 = ***a2;
  v16 = v10;
  while ( !v8 )
  {
    if ( (v6[5] & 0x400) == 0 && (*(_BYTE *)(v9 + 40872) & 1) != 0 )
    {
      v5 = CVirtualAddressAllocator::CommitVirtualAddressRange(
             v4,
             (struct VIDMM_MAPPED_VA_RANGE *)(v6 - 3),
             *(_DWORD *)(v10 + 76) & 0x3F,
             *((_DWORD *)a2 + 6),
             (unsigned __int64)a2[4] + v6[6],
             (struct _MDL *)a2[5],
             0,
             (struct VIDMM_ALLOC **)a2 + 6);
      if ( v5 < 0 )
      {
        v14 = WdLogNewEntry5_WdWarning(v11);
        *(_QWORD *)(v14 + 24) = v2;
        *(_QWORD *)(v14 + 32) = 16126LL;
        WdLogEvent5_WdWarning(v14);
        if ( v5 == -1073741267 )
          *((_BYTE *)a2 + 56) = 1;
        return (unsigned int)v5;
      }
      *((_DWORD *)a2 + 15) |= 1 << ((*((_DWORD *)v6 + 10) >> 4) & 0x3F);
      v12 = v6[9];
      if ( (unsigned __int64)a2[8] < v12 )
        v12 = (unsigned __int64)a2[8];
      a2[8] = (__int64 **)v12;
      v13 = v6[10];
      v10 = v16;
      if ( (unsigned __int64)a2[9] > v13 )
        v13 = (unsigned __int64)a2[9];
      a2[9] = (__int64 **)v13;
      *((_BYTE *)a2 + 80) = 1;
    }
    v6 = (_QWORD *)*v6;
    v8 = v6 == a1;
  }
  return (unsigned int)v5;
}
