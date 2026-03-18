/*
 * XREFs of PsImpersonateContainerOfThread @ 0x14003262C
 * Callers:
 *     IopProcessWorkItem @ 0x140032200 (IopProcessWorkItem.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14069F5B0 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x14003237C (KeSetThreadChargeOnlySchedulingGroup.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 */

char __fastcall PsImpersonateContainerOfThread(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  struct _KTHREAD *v6; // rbx
  PVOID Object; // rax

  ObfReferenceObjectWithTag((PVOID)a1, 0x746E6F43u);
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread[1].WaitBlock[1].Object )
  {
    v6 = KeGetCurrentThread();
    Object = v6[1].WaitBlock[1].Object;
    if ( Object )
    {
      if ( ((unsigned __int8)Object & 1) != 0 )
        KeSetThreadChargeOnlySchedulingGroup((__int64)v6, 0LL);
      ObfDereferenceObjectWithTag(
        (PVOID)((unsigned __int64)v6[1].WaitBlock[1].Object & 0xFFFFFFFFFFFFFFFEuLL),
        0x746E6F43u);
      v6[1].WaitBlock[1].Object = 0LL;
    }
  }
  CurrentThread[1].WaitBlock[1].Object = (PVOID)(a1 | 1);
  v3 = *(_QWORD *)(a1 + 544);
  v4 = *(_QWORD *)(v3 + 944);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 1008);
    if ( v5 )
      LOBYTE(v3) = KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, v5);
  }
  return v3;
}
