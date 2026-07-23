/*
 * XREFs of LdrpResReportResourceAccessInternalInitOnce @ 0x180087710
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventSetInformation @ 0x18002A160 (EtwEventSetInformation.c)
 *     EtwEventRegister @ 0x18002A3B0 (EtwEventRegister.c)
 */

__int64 __fastcall LdrpResReportResourceAccessInternalInitOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  GUID v3; // xmm0
  GUID ProviderId; // [rsp+20h] [rbp-18h] BYREF

  v3 = (GUID)*((_OWORD *)off_18014C4C8 - 1);
  qword_18014C4E8 = 0LL;
  qword_18014C4F0 = 0LL;
  ProviderId = v3;
  if ( !EtwEventRegister(&ProviderId, (PENABLECALLBACK)TlgEnableCallback, &dword_18014C4C0, &qword_18014C4E0) )
    EtwEventSetInformation(qword_18014C4E0, (EVENT_INFO_CLASS)2, off_18014C4C8, *(unsigned __int16 *)off_18014C4C8);
  dword_180152FE0 = (unsigned __int16)(__rdtsc() >> 4);
  return 1LL;
}
