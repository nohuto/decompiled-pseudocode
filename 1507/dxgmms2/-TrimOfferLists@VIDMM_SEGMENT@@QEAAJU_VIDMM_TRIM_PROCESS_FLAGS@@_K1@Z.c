/*
 * XREFs of ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C0071848
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C003D820 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 * Callees:
 *     ?TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C0071744 (-TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::TrimOfferLists(__int64 a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax

  result = VIDMM_SEGMENT::TrimOfferList(a1, (_QWORD **)(a1 + 272), a2, a3, a4);
  if ( (int)result < 0 )
    return VIDMM_SEGMENT::TrimOfferList(a1, (_QWORD **)(a1 + 288), a2, a3, a4);
  return result;
}
