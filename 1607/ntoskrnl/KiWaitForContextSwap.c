/*
 * XREFs of KiWaitForContextSwap @ 0x1400CBAA8
 * Callers:
 *     KiOutSwapKernelStacks @ 0x1400A73BC (KiOutSwapKernelStacks.c)
 *     KeDeleteThread @ 0x1400CBAD0 (KeDeleteThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
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
