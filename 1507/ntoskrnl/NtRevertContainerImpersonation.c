/*
 * XREFs of NtRevertContainerImpersonation @ 0x140244494
 * Callers:
 *     <none>
 * Callees:
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x14003237C (KeSetThreadChargeOnlySchedulingGroup.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 */

__int64 NtRevertContainerImpersonation()
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v1; // ebx
  PVOID Object; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  Object = CurrentThread[1].WaitBlock[1].Object;
  if ( Object )
  {
    if ( ((unsigned __int8)Object & 1) != 0 )
      KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL);
    ObfDereferenceObjectWithTag(
      (PVOID)((unsigned __int64)CurrentThread[1].WaitBlock[1].Object & 0xFFFFFFFFFFFFFFFEuLL),
      0x746E6F43u);
    CurrentThread[1].WaitBlock[1].Object = 0LL;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
