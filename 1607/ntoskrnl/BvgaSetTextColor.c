/*
 * XREFs of BvgaSetTextColor @ 0x1401C418C
 * Callers:
 *     <none>
 * Callees:
 *     HeadlessDispatch @ 0x14013CB10 (HeadlessDispatch.c)
 */

__int64 __fastcall BvgaSetTextColor(unsigned int a1)
{
  int v3; // [rsp+48h] [rbp+10h] BYREF
  int v4; // [rsp+4Ch] [rbp+14h]

  BvgaTerminalTextColor = 37;
  v3 = 37;
  v4 = BvgaTerminalBkgdColor;
  HeadlessDispatch(9u, (__int64)&v3, 8LL, 0LL, 0LL);
  return VidSetTextColor(a1);
}
