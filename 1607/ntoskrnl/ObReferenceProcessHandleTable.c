/*
 * XREFs of ObReferenceProcessHandleTable @ 0x14050D150
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401C9AC0 (IoRevokeHandlesForProcess.c)
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     ObWaitForMultipleObjects @ 0x14044EDD0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140450D80 (ObpReferenceObjectByHandleWithTag.c)
 *     PspRundownSingleProcess @ 0x14045E0C0 (PspRundownSingleProcess.c)
 *     ObFindHandleForObject @ 0x14045E424 (ObFindHandleForObject.c)
 *     ObInitProcess @ 0x14045F504 (ObInitProcess.c)
 *     PspApplyMitigationOptions @ 0x140471E18 (PspApplyMitigationOptions.c)
 *     ObGetProcessHandleCount @ 0x1404A2C34 (ObGetProcessHandleCount.c)
 *     ObCaptureObjectStateForDuplication @ 0x1404CA3FC (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x1404CBC54 (ObCompleteObjectDuplication.c)
 *     ObDuplicateObject @ 0x14050CBB0 (ObDuplicateObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x1406256BC (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x14062CE90 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x14067D42C (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x1406A73A4 (EtwpObjectHandleRundown.c)
 * Callees:
 *     ExfAcquireRundownProtection @ 0x14008C5E0 (ExfAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 */

unsigned __int64 __fastcall ObReferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned __int64 v3; // rtt
  unsigned __int64 Count; // rbx

  v2 = a1 + 92;
  _m_prefetchw(&a1[92]);
  v3 = a1[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v3 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[92], v3 + 2, v3)
    && !ExfAcquireRundownProtection(a1 + 92) )
  {
    return 0LL;
  }
  Count = a1[131].Count;
  if ( !Count )
    ExReleaseRundownProtection(v2);
  return Count;
}
