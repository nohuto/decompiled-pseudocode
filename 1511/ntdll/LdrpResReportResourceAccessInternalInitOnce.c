/*
 * XREFs of LdrpResReportResourceAccessInternalInitOnce @ 0x1800512B0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventSetInformation @ 0x180053EA0 (EtwEventSetInformation.c)
 *     EtwEventRegister @ 0x1800541A0 (EtwEventRegister.c)
 */

__int64 __fastcall LdrpResReportResourceAccessInternalInitOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  GUID v3; // xmm0
  GUID ProviderId; // [rsp+20h] [rbp-18h] BYREF

  v3 = (GUID)*((_OWORD *)EventInformation - 1);
  qword_180142198 = 0LL;
  qword_1801421A0 = 0LL;
  ProviderId = v3;
  if ( !EtwEventRegister(&ProviderId, (PENABLECALLBACK)TlgEnableCallback, &dword_180142170, &RegHandle) )
    EtwEventSetInformation(RegHandle, (EVENT_INFO_CLASS)2, EventInformation, *(unsigned __int16 *)EventInformation);
  dword_180145ED4 = (unsigned __int8)(__rdtsc() >> 4);
  return 1LL;
}
