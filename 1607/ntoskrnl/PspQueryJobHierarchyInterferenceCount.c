/*
 * XREFs of PspQueryJobHierarchyInterferenceCount @ 0x1406806F8
 * Callers:
 *     NtQueryInformationJobObject @ 0x140465EA0 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140467544 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x140467D80 (PspUnlockJob.c)
 */

__int64 __fastcall PspQueryJobHierarchyInterferenceCount(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v5; // edi
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
  v8 = 0LL;
  v7[0] = &v8;
  v7[1] = a1;
  v5 = PspEnumJobsAndProcessesInJobHierarchy(
         (_QWORD *)a1,
         0,
         0,
         (int)PspQueryProcessInterferenceCountCallback,
         (__int64)v7,
         1);
  PspUnlockJob(a1, (__int64)CurrentThread);
  if ( v5 >= 0 )
    *a2 = v8;
  return (unsigned int)v5;
}
