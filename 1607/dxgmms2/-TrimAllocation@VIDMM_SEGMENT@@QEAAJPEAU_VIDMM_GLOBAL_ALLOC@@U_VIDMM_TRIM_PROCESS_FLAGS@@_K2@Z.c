/*
 * XREFs of ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C009A780
 * Callers:
 *     ?TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C009A8B0 (-TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 * Callees:
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C004BA80 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJ_K@Z @ 0x1C0064308 (-VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::TrimAllocation(
        VIDMM_GLOBAL **a1,
        __int64 a2,
        int a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp+10h] BYREF
  int v16; // [rsp+50h] [rbp+18h]

  v16 = a3;
  v14 = 0LL;
  v15 = 0LL;
  VIDMM_GLOBAL::MarkGlobalAllocation(a1[1], (DXGFASTMUTEX **)a2, &v14, &v15);
  v10 = *(_QWORD *)(a2 + 136);
  *(_DWORD *)(a2 + 80) |= 0x40u;
  if ( (*(_DWORD *)(v10 + 56) & 0x1000) == 0 && a5 && v15 % a5 )
  {
    v11 = a5 - v15 % a5;
    if ( v14 < v11 )
      return 3221225473LL;
    v12 = v14 - v11;
  }
  else
  {
    v12 = v14;
  }
  if ( (v16 & 1) != 0 && v12 >= a4
    || (v16 & 2) != 0 && (int)VIDMM_SEGMENT::VerifyCommitLimit((VIDMM_SEGMENT *)a1, a4, v8, v9) >= 0 )
  {
    return 0LL;
  }
  return 3221225473LL;
}
