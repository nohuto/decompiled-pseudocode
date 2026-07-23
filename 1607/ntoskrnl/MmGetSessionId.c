/*
 * XREFs of MmGetSessionId @ 0x140013CE0
 * Callers:
 *     PfpLogApplicationEvent @ 0x140006674 (PfpLogApplicationEvent.c)
 *     PsGetProcessSessionId @ 0x140013CD0 (PsGetProcessSessionId.c)
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     IoGetRequestorSessionId @ 0x1401306D0 (IoGetRequestorSessionId.c)
 *     IopCheckSessionDeviceAccess @ 0x1401C92A8 (IopCheckSessionDeviceAccess.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1401EC880 (MmIsSessionInCurrentServerSilo.c)
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 *     PsGetThreadSessionId @ 0x1404285A0 (PsGetThreadSessionId.c)
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 *     ExCallSessionCallBack @ 0x140462BD4 (ExCallSessionCallBack.c)
 *     MmCreatePeb @ 0x14046AF88 (MmCreatePeb.c)
 *     PspInitializeProcessSecurity @ 0x1404711C8 (PspInitializeProcessSecurity.c)
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     PspBindProcessSessionToJob @ 0x1404D65B4 (PspBindProcessSessionToJob.c)
 *     EtwpPsProvTraceProcess @ 0x14054BA48 (EtwpPsProvTraceProcess.c)
 *     MmGetSessionMappedViewInformation @ 0x140657328 (MmGetSessionMappedViewInformation.c)
 *     PopInputDisabled @ 0x140674BC4 (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x1406A76A0 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1406AB16C (ExGetSessionBigPoolInformation.c)
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
