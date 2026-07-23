/*
 * XREFs of ObReferenceProcessHandleTable @ 0x1404F00E0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401C9960 (IoRevokeHandlesForProcess.c)
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     ObWaitForMultipleObjects @ 0x14044DCA0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14044FC50 (ObpReferenceObjectByHandleWithTag.c)
 *     PspRundownSingleProcess @ 0x14045CF90 (PspRundownSingleProcess.c)
 *     ObFindHandleForObject @ 0x14045D2F4 (ObFindHandleForObject.c)
 *     ObInitProcess @ 0x14045E3D4 (ObInitProcess.c)
 *     PspApplyMitigationOptions @ 0x140470CE8 (PspApplyMitigationOptions.c)
 *     ObCaptureObjectStateForDuplication @ 0x1404B017C (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x1404B1680 (ObCompleteObjectDuplication.c)
 *     ObDuplicateObject @ 0x1404EFB40 (ObDuplicateObject.c)
 *     ObGetProcessHandleCount @ 0x14051B034 (ObGetProcessHandleCount.c)
 *     IopQueryProcessIdsUsingFile @ 0x140625770 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x14062CF44 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x14067D510 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x1406A74DC (EtwpObjectHandleRundown.c)
 * Callees:
 *     ExfAcquireRundownProtection @ 0x14008BD40 (ExfAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
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
