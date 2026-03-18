/*
 * XREFs of PsImpersonateContainerOfThread @ 0x1400A02BC
 * Callers:
 *     IopProcessWorkItem @ 0x14009FE90 (IopProcessWorkItem.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1406203B4 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     PspRevertContainerImpersonation @ 0x1400A019C (PspRevertContainerImpersonation.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400A01F4 (KeSetThreadChargeOnlySchedulingGroup.c)
 */

char __fastcall PsImpersonateContainerOfThread(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx

  ObfReferenceObjectWithTag((PVOID)a1, 0x746E6F43u);
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread[1].WaitBlock[1].Object )
    PspRevertContainerImpersonation();
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
