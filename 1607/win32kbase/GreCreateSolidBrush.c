/*
 * XREFs of GreCreateSolidBrush @ 0x1C005B6F0
 * Callers:
 *     SetSysColor @ 0x1C005B1F4 (SetSysColor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreCreateSolidBrush(unsigned int a1)
{
  return hCreateSolidBrushInternal(a1, 0, 0LL, 0);
}
