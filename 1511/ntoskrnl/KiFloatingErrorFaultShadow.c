/*
 * XREFs of KiFloatingErrorFaultShadow @ 0x140224780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn KiFloatingErrorFaultShadow(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned __int64 KernelDirectoryTableBase; // rsi
  char v8; // [rsp-20h] [rbp-20h]

  if ( (v8 & 1) != 0 )
  {
    __asm { swapgs }
    KernelDirectoryTableBase = KeGetPcr()->Prcb.KernelDirectoryTableBase;
    if ( !_bittest(MK_FP(__GS__, 28696LL), 1u) )
      __writecr3(KernelDirectoryTableBase);
  }
  KiFloatingErrorFault();
}
