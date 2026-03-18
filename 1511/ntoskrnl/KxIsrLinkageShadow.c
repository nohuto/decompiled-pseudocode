/*
 * XREFs of KxIsrLinkageShadow @ 0x1402258C0
 * Callers:
 *     KiIsrThunkShadow @ 0x140225080 (KiIsrThunkShadow.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
__int64 KxIsrLinkageShadow(_DWORD a1, _DWORD a2, _DWORD a3, _DWORD a4, int a5, ...)
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
  return KxIsrLinkage();
}
