/*
 * XREFs of PspQueryJobHierarchyProcessIdList @ 0x1404B6734
 * Callers:
 *     NtQueryInformationJobObject @ 0x1403E9B88 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1403EB6A8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1403EB8D0 (PspUnlockJob.c)
 */

__int64 __fastcall PspQueryJobHierarchyProcessIdList(char *Object, _DWORD *a2, int a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v9; // esi
  __int64 v11; // [rsp+40h] [rbp-38h] BYREF
  int v12; // [rsp+48h] [rbp-30h]
  int v13; // [rsp+4Ch] [rbp-2Ch]
  int v14; // [rsp+50h] [rbp-28h]

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)(Object + 56), 1u);
  v11 = (__int64)(a2 + 2);
  v12 = a3 - 8;
  v13 = 0;
  v14 = *((_DWORD *)Object + 54);
  v9 = PspEnumJobsAndProcessesInJobHierarchy(Object, 0, 0, (int)PspQueryProcessIdListCallback, (__int64)&v11, 1u);
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
  {
    *a4 = 8 * *((_DWORD *)Object + 54) + 8;
    *a2 = *((_DWORD *)Object + 54);
    a2[1] = v13;
  }
  PspUnlockJob((__int64)Object, (__int64)CurrentThread);
  return v9;
}
