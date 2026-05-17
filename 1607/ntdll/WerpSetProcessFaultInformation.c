/*
 * XREFs of WerpSetProcessFaultInformation @ 0x180006BA8
 * Callers:
 *     RtlReportExceptionHelper @ 0x18000787C (RtlReportExceptionHelper.c)
 *     RtlReportExceptionEx @ 0x1800D86C0 (RtlReportExceptionEx.c)
 * Callees:
 *     NtSetInformationProcess @ 0x1800A67A0 (NtSetInformationProcess.c)
 */

__int64 __fastcall WerpSetProcessFaultInformation(__int64 a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+34h] [rbp+Ch]

  v2 = 0;
  v3 = 0;
  if ( !a1 )
    return 3221225711LL;
  v3 = 0;
  v2 = 1;
  return NtSetInformationProcess(a1, 63LL, &v2, 8LL);
}
