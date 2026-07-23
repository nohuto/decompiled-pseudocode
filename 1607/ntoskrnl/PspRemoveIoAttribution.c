/*
 * XREFs of PspRemoveIoAttribution @ 0x1404D4A40
 * Callers:
 *     PspJobDelete @ 0x14010CAAC (PspJobDelete.c)
 *     PspSetJobIoAttribution @ 0x1404D4800 (PspSetJobIoAttribution.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14001EF2C (IoDiskIoAttributionDereference.c)
 *     IoStopDiskIoAttributionForContext @ 0x1400B4FE0 (IoStopDiskIoAttributionForContext.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140467544 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspRemoveIoAttribution(__int64 a1)
{
  __int64 v2; // rax
  _QWORD v4[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 1340) )
  {
    IoStopDiskIoAttributionForContext(*(PRTL_BALANCED_NODE *)(a1 + 1344));
    IoDiskIoAttributionDereference(*(_QWORD *)(a1 + 1344));
    *(_QWORD *)(a1 + 1344) = 0LL;
    v2 = a1;
  }
  else
  {
    v2 = 0LL;
  }
  v4[1] = v2;
  v4[0] = 0LL;
  v4[2] = 0LL;
  return PspEnumJobsAndProcessesInJobHierarchy(
           (_QWORD *)a1,
           (int)PspSetJobIoAttributionJobPreCallback,
           0,
           (int)PspSetJobIoAttributionProcessCallback,
           (__int64)v4,
           5);
}
