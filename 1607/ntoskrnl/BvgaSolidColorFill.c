/*
 * XREFs of BvgaSolidColorFill @ 0x1401C41D8
 * Callers:
 *     <none>
 * Callees:
 *     HeadlessDispatch @ 0x14013CB10 (HeadlessDispatch.c)
 *     BvgaAcquireLock @ 0x1401C3F08 (BvgaAcquireLock.c)
 *     BvgaReleaseLock @ 0x1401C412C (BvgaReleaseLock.c)
 */

void __fastcall BvgaSolidColorFill(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  _DWORD v9[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( !BvgaDisplayState )
  {
    BvgaAcquireLock();
    if ( BvgaBootDriverInstalled )
      VidSolidColorFill(a1, a2, a3, a4, a5);
    BvgaTerminalBkgdColor = 40;
    v9[1] = 40;
    v9[0] = BvgaTerminalTextColor;
    HeadlessDispatch(9u, (__int64)v9, 8LL, 0LL, 0LL);
    HeadlessDispatch(4u, 0LL, 0LL, 0LL, 0LL);
    BvgaReleaseLock();
  }
}
