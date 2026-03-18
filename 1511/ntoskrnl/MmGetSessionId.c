/*
 * XREFs of MmGetSessionId @ 0x140038610
 * Callers:
 *     PfpLogApplicationEvent @ 0x14001B76C (PfpLogApplicationEvent.c)
 *     IoGetRequestorSessionId @ 0x1400F32A8 (IoGetRequestorSessionId.c)
 *     IopCheckSessionDeviceAccess @ 0x1401BB60C (IopCheckSessionDeviceAccess.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1401DBD8C (MmIsSessionInCurrentServerSilo.c)
 *     PspBindProcessSessionToJob @ 0x1403E82EC (PspBindProcessSessionToJob.c)
 *     PsInvokeWin32Callout @ 0x1403F6790 (PsInvokeWin32Callout.c)
 *     PsGetThreadSessionId @ 0x1403F6B00 (PsGetThreadSessionId.c)
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     ExCallSessionCallBack @ 0x140445140 (ExCallSessionCallBack.c)
 *     EtwpPsProvTraceProcess @ 0x14044A4A8 (EtwpPsProvTraceProcess.c)
 *     PspInitializeProcessSecurity @ 0x14044F884 (PspInitializeProcessSecurity.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     MmCreatePeb @ 0x140463D38 (MmCreatePeb.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 *     MmGetSessionMappedViewInformation @ 0x1406213A0 (MmGetSessionMappedViewInformation.c)
 *     PopInputDisabled @ 0x14063C4D4 (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x140665B54 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x14066A9A8 (ExGetSessionBigPoolInformation.c)
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
