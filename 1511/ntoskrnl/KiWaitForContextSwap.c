/*
 * XREFs of KiWaitForContextSwap @ 0x14007BE78
 * Callers:
 *     KeDeleteThread @ 0x14002DA44 (KeDeleteThread.c)
 *     KiOutSwapKernelStacks @ 0x1400E8164 (KiOutSwapKernelStacks.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

char __fastcall KiWaitForContextSwap(__int64 a1)
{
  char result; // al
  int i; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0; ; KeYieldProcessorEx(&i) )
  {
    result = *(_BYTE *)(a1 + 113);
    if ( !result )
      break;
  }
  return result;
}
