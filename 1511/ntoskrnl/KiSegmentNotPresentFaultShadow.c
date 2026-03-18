/*
 * XREFs of KiSegmentNotPresentFaultShadow @ 0x140224580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn KiSegmentNotPresentFaultShadow(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6)
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
  KiSegmentNotPresentFault();
}
