/*
 * XREFs of SepAcquireOrderedReadLocks @ 0x14007F810
 * Callers:
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
 *     NtCompareTokens @ 0x140475A20 (NtCompareTokens.c)
 *     SepIsSiblingTokenByPointer @ 0x1404766F4 (SepIsSiblingTokenByPointer.c)
 *     SeTokenCanImpersonate @ 0x14050F920 (SeTokenCanImpersonate.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN __fastcall SepAcquireOrderedReadLocks(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rax
  struct _ERESOURCE *v6; // rcx
  struct _KTHREAD *v8; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a1 >= a2 )
  {
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a2 + 48), 1u);
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    v6 = *(struct _ERESOURCE **)(a1 + 48);
  }
  else
  {
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
    v5 = KeGetCurrentThread();
    --v5->KernelApcDisable;
    v6 = *(struct _ERESOURCE **)(a2 + 48);
  }
  return ExAcquireResourceSharedLite(v6, 1u);
}
