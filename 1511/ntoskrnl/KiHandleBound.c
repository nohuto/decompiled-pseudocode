/*
 * XREFs of KiHandleBound @ 0x1401C40C0
 * Callers:
 *     KiBoundFault @ 0x14015FA00 (KiBoundFault.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400384D0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140038510 (ExReferenceCallBackBlock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 KiHandleBound()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // ebx
  struct _EX_RUNDOWN_REF *v2; // rax
  struct _EX_RUNDOWN_REF *v3; // rdi

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  v2 = ExReferenceCallBackBlock(&KiBoundsCallback);
  v3 = v2;
  if ( v2 )
  {
    v1 = ((__int64 (*)(void))v2[1].Count)();
    ExDereferenceCallBackBlock(&KiBoundsCallback, v3);
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v1;
}
