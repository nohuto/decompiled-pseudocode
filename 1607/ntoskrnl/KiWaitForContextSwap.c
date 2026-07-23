/*
 * XREFs of KiWaitForContextSwap @ 0x1400C9948
 * Callers:
 *     KiOutSwapKernelStacks @ 0x1400A5934 (KiOutSwapKernelStacks.c)
 *     KeDeleteThread @ 0x1400C9970 (KeDeleteThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
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
