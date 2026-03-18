/*
 * XREFs of MmGetSessionId @ 0x140050140
 * Callers:
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 *     PfpLogApplicationEvent @ 0x14001A7CC (PfpLogApplicationEvent.c)
 *     IoGetRequestorSessionId @ 0x140130848 (IoGetRequestorSessionId.c)
 *     IopCheckSessionDeviceAccess @ 0x1401F6948 (IopCheckSessionDeviceAccess.c)
 *     MmIsSessionInCurrentServerSilo @ 0x140220A64 (MmIsSessionInCurrentServerSilo.c)
 *     PspBindProcessSessionToJob @ 0x14041BBAC (PspBindProcessSessionToJob.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     PsInvokeWin32Callout @ 0x140422750 (PsInvokeWin32Callout.c)
 *     MmCreatePeb @ 0x140465AC4 (MmCreatePeb.c)
 *     PspInitializeProcessSecurity @ 0x14046A2E8 (PspInitializeProcessSecurity.c)
 *     ExpGetProcessInformation @ 0x140497410 (ExpGetProcessInformation.c)
 *     PsGetThreadSessionId @ 0x14049C020 (PsGetThreadSessionId.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     EtwpPsProvTraceProcess @ 0x14050BCA8 (EtwpPsProvTraceProcess.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 *     ExCallSessionCallBack @ 0x14051C2F8 (ExCallSessionCallBack.c)
 *     MmGetSessionMappedViewInformation @ 0x1406A0A34 (MmGetSessionMappedViewInformation.c)
 *     PopInputDisabled @ 0x1406BCB30 (PopInputDisabled.c)
 *     PsTerminateAllProcessesInSilo @ 0x1406C1334 (PsTerminateAllProcessesInSilo.c)
 *     EtwpPoolRunDown @ 0x1406E8CE0 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1406EDFF0 (ExGetSessionBigPoolInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionId(struct _KPROCESS *a1)
{
  unsigned __int64 v1; // rax
  __int64 result; // rax

  v1 = a1[1].ActiveProcessors.Bitmap[2];
  if ( !v1 )
    return 0LL;
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  result = *(unsigned int *)(v1 + 8);
  if ( (_DWORD)result == -1 )
    return 0LL;
  return result;
}
