/*
 * XREFs of BvgaSolidColorFill @ 0x1401F1818
 * Callers:
 *     <none>
 * Callees:
 *     HeadlessDispatch @ 0x14015F390 (HeadlessDispatch.c)
 *     BvgaAcquireLock @ 0x1401F150C (BvgaAcquireLock.c)
 *     BvgaReleaseLock @ 0x1401F1754 (BvgaReleaseLock.c)
 */

__int64 __fastcall BvgaSolidColorFill(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 result; // rax
  _DWORD v10[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( !BvgaDisplayState )
  {
    BvgaAcquireLock();
    if ( BvgaBootDriverInstalled )
      VidSolidColorFill(a1, a2, a3, a4, a5);
    BvgaTerminalBkgdColor = 40;
    v10[1] = 40;
    v10[0] = BvgaTerminalTextColor;
    HeadlessDispatch(9u, (__int64)v10, 8LL, 0LL, 0LL);
    HeadlessDispatch(4u, 0LL, 0LL, 0LL, 0LL);
    return BvgaReleaseLock();
  }
  return result;
}
