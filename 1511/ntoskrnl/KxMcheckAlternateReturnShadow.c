/*
 * XREFs of KxMcheckAlternateReturnShadow @ 0x140224900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall KxMcheckAlternateReturnShadow(int a1, unsigned __int64 a2, __int64 a3, int a4, char a5)
{
  unsigned __int64 KernelDirectoryTableBase; // rsi
  char v9; // [rsp-20h] [rbp-20h]

  if ( (v9 & 1) != 0 )
  {
    __asm { swapgs }
    KernelDirectoryTableBase = KeGetPcr()->Prcb.KernelDirectoryTableBase;
    if ( !_bittest(MK_FP(__GS__, 28696LL), 1u) )
      __writecr3(KernelDirectoryTableBase);
  }
  return KxMcheckAlternateReturn(a1, a2, a3, a4, a5);
}
