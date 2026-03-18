/*
 * XREFs of ObReferenceProcessHandleTable @ 0x1404249F8
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401F7200 (IoRevokeHandlesForProcess.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     ObDuplicateObject @ 0x1404243A0 (ObDuplicateObject.c)
 *     ObInitProcess @ 0x140467784 (ObInitProcess.c)
 *     PspApplyMitigationOptions @ 0x140469EBC (PspApplyMitigationOptions.c)
 *     ObWaitForMultipleObjects @ 0x140495AC0 (ObWaitForMultipleObjects.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     ObGetProcessHandleCount @ 0x140508648 (ObGetProcessHandleCount.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 *     ObFindHandleForObject @ 0x140521C74 (ObFindHandleForObject.c)
 *     ObCaptureObjectStateForDuplication @ 0x14053B60C (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x14053E31C (ObCompleteObjectDuplication.c)
 *     ObClearProcessHandleTable @ 0x14055AC34 (ObClearProcessHandleTable.c)
 *     IopQueryProcessIdsUsingFile @ 0x1406761D0 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x14067D92C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x1406BFC88 (PsSetProcessHandleTracingInformation.c)
 *     PspIoRateControlProcessCallback @ 0x1406C4628 (PspIoRateControlProcessCallback.c)
 *     EtwpObjectHandleRundown @ 0x1406E8B14 (EtwpObjectHandleRundown.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 */

unsigned __int64 __fastcall ObReferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rbx
  unsigned __int64 Count; // rdi
  unsigned __int64 v4; // rtt
  unsigned __int64 v6; // rtt

  v2 = a1 + 92;
  Count = 0LL;
  _m_prefetchw(&a1[92]);
  v4 = a1[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v4 == _InterlockedCompareExchange64((volatile signed __int64 *)&a1[92], v4 + 2, v4)
    || ExfAcquireRundownProtection(a1 + 92) )
  {
    Count = a1[131].Count;
    if ( !Count )
    {
      _m_prefetchw(v2);
      v6 = v2->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v6 != _InterlockedCompareExchange64((volatile signed __int64 *)v2, v6 - 2, v6) )
        ExfReleaseRundownProtection(v2);
    }
  }
  return Count;
}
