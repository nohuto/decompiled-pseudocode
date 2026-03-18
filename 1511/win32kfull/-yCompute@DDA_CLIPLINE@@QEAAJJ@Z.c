/*
 * XREFs of ?yCompute@DDA_CLIPLINE@@QEAAJJ@Z @ 0x1C02C8CCC
 * Callers:
 *     ?vIntersectVertical@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z @ 0x1C02C8908 (-vIntersectVertical@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DDA_CLIPLINE::yCompute(unsigned __int64 this, int a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rax

  v2 = this;
  v3 = *(_QWORD *)(this + 24) + *(int *)(this + 12) * (__int64)(a2 - *(_DWORD *)(this + 4));
  if ( v3 >= 0xFFFFFFFFLL )
    this = v3 / (unsigned __int64)*(unsigned int *)(this + 16);
  else
    LODWORD(this) = (unsigned int)v3 / *(_DWORD *)(this + 16);
  return (unsigned int)(this + *(_DWORD *)(v2 + 8));
}
