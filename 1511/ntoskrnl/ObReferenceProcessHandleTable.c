/*
 * XREFs of ObReferenceProcessHandleTable @ 0x14047D304
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401BBC4C (IoRevokeHandlesForProcess.c)
 *     ObInitProcess @ 0x1403E3544 (ObInitProcess.c)
 *     PspRundownSingleProcess @ 0x1403E770C (PspRundownSingleProcess.c)
 *     ObGetProcessHandleCount @ 0x1403E94CC (ObGetProcessHandleCount.c)
 *     ObWaitForMultipleObjects @ 0x14040B380 (ObWaitForMultipleObjects.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     PspApplyMitigationOptions @ 0x14044F404 (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     ObCaptureObjectStateForDuplication @ 0x14047D164 (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x140480070 (ObCompleteObjectDuplication.c)
 *     ObFindHandleForObject @ 0x140480D40 (ObFindHandleForObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x1405FBA88 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140602B0C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x14063EDC4 (PsSetProcessHandleTracingInformation.c)
 *     PspIoRateControlProcessCallback @ 0x140642104 (PspIoRateControlProcessCallback.c)
 *     EtwpObjectHandleRundown @ 0x14066599C (EtwpObjectHandleRundown.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 */

unsigned __int64 __fastcall ObReferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rdi
  unsigned __int64 Count; // rbx

  v1 = a1 + 92;
  Count = 0LL;
  if ( ExAcquireRundownProtection(a1 + 92) )
  {
    Count = a1[131].Count;
    if ( !Count )
      ExReleaseRundownProtection_0(v1);
  }
  return Count;
}
