/*
 * XREFs of EtwpQueryProcessOtherInfo @ 0x14045DBFC
 * Callers:
 *     EtwpBuildProcessEvent @ 0x14045D860 (EtwpBuildProcessEvent.c)
 *     EtwTraceAppStateChange @ 0x1404A3048 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404B1BB0 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1406A7D94 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140014238 (RtlImageNtHeader.c)
 *     PsGetProcessSectionBaseAddress @ 0x140074D2C (PsGetProcessSectionBaseAddress.c)
 */

__int64 __fastcall EtwpQueryProcessOtherInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  result = PsGetProcessSectionBaseAddress(a1);
  if ( result )
  {
    result = (__int64)RtlImageNtHeader((PVOID)result);
    if ( result )
    {
      *(_DWORD *)a2 = *(_DWORD *)(result + 88);
      result = *(unsigned int *)(result + 8);
      *(_DWORD *)(a2 + 4) = result;
    }
  }
  return result;
}
