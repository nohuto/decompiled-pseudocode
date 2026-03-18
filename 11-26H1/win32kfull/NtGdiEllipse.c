/*
 * XREFs of NtGdiEllipse @ 0x140113850
 * Callers:
 *     <none>
 * Callees:
 *     GreEllipse @ 0x140113870 (GreEllipse.c)
 */

__int64 __fastcall NtGdiEllipse(HDC a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  return GreEllipse(a1, a5);
}
