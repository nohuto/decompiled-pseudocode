/*
 * XREFs of ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C0071698
 * Callers:
 *     ?TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C0071744 (-TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 * Callees:
 *     ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJ_K@Z @ 0x1C003D31C (-VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJ_K@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C004F7AC (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::TrimAllocation(
        VIDMM_GLOBAL **a1,
        __int64 a2,
        int a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  int v14; // [rsp+50h] [rbp+18h]

  v14 = a3;
  v12 = 0LL;
  v13 = 0LL;
  VIDMM_GLOBAL::MarkGlobalAllocation(a1[1], (DXGFASTMUTEX **)a2, &v12, &v13);
  v8 = *(_QWORD *)(a2 + 128);
  *(_DWORD *)(a2 + 80) |= 0x40u;
  if ( (*(_DWORD *)(v8 + 56) & 0x1000) == 0 && a5 && v13 % a5 )
  {
    v9 = a5 - v13 % a5;
    if ( v12 < v9 )
      return 3221225473LL;
    v10 = v12 - v9;
  }
  else
  {
    v10 = v12;
  }
  if ( (v14 & 1) != 0 && v10 >= a4
    || (v14 & 2) != 0 && (int)VIDMM_SEGMENT::VerifyCommitLimit((VIDMM_SEGMENT *)a1, a4) >= 0 )
  {
    return 0LL;
  }
  return 3221225473LL;
}
