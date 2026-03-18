/*
 * XREFs of MmGetSessionId @ 0x140014160
 * Callers:
 *     PfpLogApplicationEvent @ 0x140006504 (PfpLogApplicationEvent.c)
 *     PsGetProcessSessionId @ 0x140014150 (PsGetProcessSessionId.c)
 *     IoGetRequestorSessionId @ 0x140130160 (IoGetRequestorSessionId.c)
 *     IopCheckSessionDeviceAccess @ 0x1401C9408 (IopCheckSessionDeviceAccess.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1401ECA54 (MmIsSessionInCurrentServerSilo.c)
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     PsInvokeWin32Callout @ 0x140429010 (PsInvokeWin32Callout.c)
 *     PsGetThreadSessionId @ 0x1404296D0 (PsGetThreadSessionId.c)
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 *     ExCallSessionCallBack @ 0x140463D04 (ExCallSessionCallBack.c)
 *     MmCreatePeb @ 0x14046C0B8 (MmCreatePeb.c)
 *     PspInitializeProcessSecurity @ 0x1404722F8 (PspInitializeProcessSecurity.c)
 *     EtwpStartLogger @ 0x14048EE94 (EtwpStartLogger.c)
 *     PspBindProcessSessionToJob @ 0x1404F3628 (PspBindProcessSessionToJob.c)
 *     EtwpPsProvTraceProcess @ 0x14054B508 (EtwpPsProvTraceProcess.c)
 *     MmGetSessionMappedViewInformation @ 0x140657244 (MmGetSessionMappedViewInformation.c)
 *     PopInputDisabled @ 0x140674AE0 (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x1406A7568 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1406AB034 (ExGetSessionBigPoolInformation.c)
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
