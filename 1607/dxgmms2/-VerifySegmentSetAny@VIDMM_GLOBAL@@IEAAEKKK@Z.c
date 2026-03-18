/*
 * XREFs of ?VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z @ 0x1C0052C68
 * Callers:
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C0052898 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifySegmentSetAny(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  _DWORD *v4; // rdx
  unsigned int v5; // r10d

  v4 = (_DWORD *)(*((_QWORD *)this + 5017) + 456LL * a2);
  v5 = v4[1];
  if ( (~*v4 & a3) != 0 || !a3 )
    return 0;
  while ( (a3 & 1) == 0 || a4 != (a4 & *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v5) + 56LL)) )
  {
    ++v5;
    a3 >>= 1;
    if ( !a3 )
      return 0;
  }
  return 1;
}
