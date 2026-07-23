/*
 * XREFs of PspQueryJobHierarchyProcessIdList @ 0x1404BED88
 * Callers:
 *     NtQueryInformationJobObject @ 0x140465EA0 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140467544 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x140467D80 (PspUnlockJob.c)
 */

__int64 __fastcall PspQueryJobHierarchyProcessIdList(__int64 a1, _DWORD *a2, int a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v9; // esi
  _DWORD *v11; // [rsp+40h] [rbp-38h] BYREF
  int v12; // [rsp+48h] [rbp-30h]
  int v13; // [rsp+4Ch] [rbp-2Ch]
  int v14; // [rsp+50h] [rbp-28h]

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
  v11 = a2 + 2;
  v12 = a3 - 8;
  v13 = 0;
  v14 = *(_DWORD *)(a1 + 216);
  v9 = PspEnumJobsAndProcessesInJobHierarchy((_QWORD *)a1, 0, 0, (int)PspQueryProcessIdListCallback, (__int64)&v11, 1);
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
  {
    *a4 = 8 * *(_DWORD *)(a1 + 216) + 8;
    *a2 = *(_DWORD *)(a1 + 216);
    a2[1] = v13;
  }
  PspUnlockJob(a1, (__int64)CurrentThread);
  return v9;
}
