/*
 * XREFs of PspQueryJobHierarchyProcessIdList @ 0x140415AF0
 * Callers:
 *     NtQueryInformationJobObject @ 0x1404139BC (NtQueryInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140506878 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspQueryJobHierarchyProcessIdList(__int64 a1, _DWORD *a2, int a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v9; // r14d
  __int16 v10; // ax
  _DWORD *v12; // [rsp+40h] [rbp-48h] BYREF
  int v13; // [rsp+48h] [rbp-40h]
  int v14; // [rsp+4Ch] [rbp-3Ch]
  int v15; // [rsp+50h] [rbp-38h]

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
  v12 = a2 + 2;
  v13 = a3 - 8;
  v14 = 0;
  v15 = *(_DWORD *)(a1 + 216);
  v9 = PspEnumJobsAndProcessesInJobHierarchy(a1, 0, 0, (unsigned int)PspQueryProcessIdListCallback, (__int64)&v12, 1);
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
  {
    *a4 = 8 * *(_DWORD *)(a1 + 216) + 8;
    *a2 = *(_DWORD *)(a1 + 216);
    a2[1] = v14;
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( CurrentThread )
  {
    v10 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v10;
    if ( !v10
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v9;
}
