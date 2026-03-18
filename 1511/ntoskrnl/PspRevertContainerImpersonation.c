/*
 * XREFs of PspRevertContainerImpersonation @ 0x1400A019C
 * Callers:
 *     IopProcessWorkItem @ 0x14009FE90 (IopProcessWorkItem.c)
 *     PsImpersonateContainerOfThread @ 0x1400A02BC (PsImpersonateContainerOfThread.c)
 *     NtRevertContainerImpersonation @ 0x1401F5930 (NtRevertContainerImpersonation.c)
 *     PsImpersonateContainerOfProcess @ 0x1401F5938 (PsImpersonateContainerOfProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400A01F4 (KeSetThreadChargeOnlySchedulingGroup.c)
 */

__int64 PspRevertContainerImpersonation()
{
  struct _KTHREAD *CurrentThread; // rbx
  PVOID Object; // rax

  CurrentThread = KeGetCurrentThread();
  Object = CurrentThread[1].WaitBlock[1].Object;
  if ( !Object )
    return 3221225473LL;
  if ( ((unsigned __int8)Object & 1) != 0 )
    KeSetThreadChargeOnlySchedulingGroup(CurrentThread, 0LL);
  ObfDereferenceObjectWithTag(
    (PVOID)((unsigned __int64)CurrentThread[1].WaitBlock[1].Object & 0xFFFFFFFFFFFFFFFEuLL),
    0x746E6F43u);
  CurrentThread[1].WaitBlock[1].Object = 0LL;
  return 0LL;
}
