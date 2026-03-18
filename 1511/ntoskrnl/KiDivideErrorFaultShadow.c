/*
 * XREFs of KiDivideErrorFaultShadow @ 0x140224000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
__int64 KiDivideErrorFaultShadow()
{
  unsigned __int64 KernelDirectoryTableBase; // rsi
  char v4; // [rsp-20h] [rbp-20h]

  if ( (v4 & 1) != 0 )
  {
    __asm { swapgs }
    KernelDirectoryTableBase = KeGetPcr()->Prcb.KernelDirectoryTableBase;
    if ( !_bittest(MK_FP(__GS__, 28696LL), 1u) )
      __writecr3(KernelDirectoryTableBase);
  }
  return KiDivideErrorFault();
}
