/*
 * XREFs of LongAdd @ 0x1C00B1230
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003D0A0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C003FF30 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LongAdd(int a1, int a2, _DWORD *a3)
{
  __int64 v3; // r9

  v3 = a2 + (__int64)a1;
  if ( (unsigned __int64)(v3 + 0x80000000LL) > 0xFFFFFFFF )
  {
    *a3 = -1;
    return 2147942934LL;
  }
  else
  {
    *a3 = v3;
    return 0LL;
  }
}
