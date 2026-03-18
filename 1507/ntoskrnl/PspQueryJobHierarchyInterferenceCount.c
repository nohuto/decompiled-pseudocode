/*
 * XREFs of PspQueryJobHierarchyInterferenceCount @ 0x1406C4754
 * Callers:
 *     NtQueryInformationJobObject @ 0x1404139BC (NtQueryInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140506878 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspQueryJobHierarchyInterferenceCount(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _ERESOURCE *v5; // rbx
  int v6; // esi
  __int16 v7; // cx
  _QWORD v9[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  v5 = (struct _ERESOURCE *)(a1 + 56);
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
  v10 = 0LL;
  v9[0] = &v10;
  v9[1] = a1;
  v6 = PspEnumJobsAndProcessesInJobHierarchy(
         (_QWORD *)a1,
         0,
         0,
         (int)PspQueryProcessInterferenceCountCallback,
         (__int64)v9,
         1u);
  ExReleaseResourceLite(v5);
  if ( CurrentThread )
  {
    v7 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v7;
    if ( !v7 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v6 >= 0 )
    *a2 = v10;
  return (unsigned int)v6;
}
