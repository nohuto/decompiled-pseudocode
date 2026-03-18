/*
 * XREFs of PsImpersonateContainerOfProcess @ 0x1402444F4
 * Callers:
 *     IopProcessWorkItem @ 0x140032200 (IopProcessWorkItem.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14069F5B0 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x14003237C (KeSetThreadChargeOnlySchedulingGroup.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsImpersonateContainerOfProcess(void *a1)
{
  LONG_PTR result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v4; // rbx

  result = ObfReferenceObjectWithTag(a1, 0x746E6F43u);
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread[1].WaitBlock[1].Object )
  {
    v4 = KeGetCurrentThread();
    result = (LONG_PTR)v4[1].WaitBlock[1].Object;
    if ( result )
    {
      if ( (result & 1) != 0 )
        KeSetThreadChargeOnlySchedulingGroup((__int64)v4, 0LL);
      result = ObfDereferenceObjectWithTag(
                 (PVOID)((unsigned __int64)v4[1].WaitBlock[1].Object & 0xFFFFFFFFFFFFFFFEuLL),
                 0x746E6F43u);
      v4[1].WaitBlock[1].Object = 0LL;
    }
  }
  CurrentThread[1].WaitBlock[1].Object = a1;
  return result;
}
