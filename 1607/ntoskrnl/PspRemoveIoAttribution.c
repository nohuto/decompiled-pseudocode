/*
 * XREFs of PspRemoveIoAttribution @ 0x1404F22AC
 * Callers:
 *     PspJobDelete @ 0x1400888BC (PspJobDelete.c)
 *     PspSetJobIoAttribution @ 0x1404F206C (PspSetJobIoAttribution.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14001F3AC (IoDiskIoAttributionDereference.c)
 *     IoStopDiskIoAttributionForContext @ 0x1400B71B8 (IoStopDiskIoAttributionForContext.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140468674 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspRemoveIoAttribution(__int64 a1)
{
  __int64 v2; // rax
  _QWORD v4[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 1340) )
  {
    IoStopDiskIoAttributionForContext(*(struct _EX_RUNDOWN_REF **)(a1 + 1344));
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
