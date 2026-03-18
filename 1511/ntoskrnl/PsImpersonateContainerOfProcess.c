/*
 * XREFs of PsImpersonateContainerOfProcess @ 0x1401F5938
 * Callers:
 *     IopProcessWorkItem @ 0x14009FE90 (IopProcessWorkItem.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1406203B4 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     PspRevertContainerImpersonation @ 0x1400A019C (PspRevertContainerImpersonation.c)
 */

LONG_PTR __fastcall PsImpersonateContainerOfProcess(void *a1)
{
  LONG_PTR result; // rax
  struct _KTHREAD *CurrentThread; // rdi

  result = ObfReferenceObjectWithTag(a1, 0x746E6F43u);
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread[1].WaitBlock[1].Object )
    result = PspRevertContainerImpersonation();
  CurrentThread[1].WaitBlock[1].Object = a1;
  return result;
}
