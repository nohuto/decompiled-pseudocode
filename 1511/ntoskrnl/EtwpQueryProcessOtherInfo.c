/*
 * XREFs of EtwpQueryProcessOtherInfo @ 0x14044A2DC
 * Callers:
 *     EtwpBuildProcessEvent @ 0x140449F40 (EtwpBuildProcessEvent.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404A32FC (EtwQueryProcessTelemetryInfo.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140666328 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     PsGetProcessSectionBaseAddress @ 0x140092440 (PsGetProcessSectionBaseAddress.c)
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
