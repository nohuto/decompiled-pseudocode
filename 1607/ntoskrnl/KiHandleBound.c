/*
 * XREFs of KiHandleBound @ 0x1401D2BD8
 * Callers:
 *     KiBoundFault @ 0x14016A2C0 (KiBoundFault.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x140013F40 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140013F80 (ExReferenceCallBackBlock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 KiHandleBound()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // ebx
  struct _EX_RUNDOWN_REF *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _EX_RUNDOWN_REF *v6; // rdi

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  v2 = ExReferenceCallBackBlock(&KiBoundsCallback);
  v6 = v2;
  if ( v2 )
  {
    v1 = ((__int64 (*)(void))v2[1].Count)();
    ExDereferenceCallBackBlock(&KiBoundsCallback, v6);
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v3, v4, v5);
  return v1;
}
