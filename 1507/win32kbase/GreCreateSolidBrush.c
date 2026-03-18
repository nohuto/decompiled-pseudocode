/*
 * XREFs of GreCreateSolidBrush @ 0x1C000C2B0
 * Callers:
 *     SetSysColor @ 0x1C0025420 (SetSysColor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreCreateSolidBrush(unsigned int a1)
{
  return hCreateSolidBrushInternal(a1, 0, 0LL, 0);
}
