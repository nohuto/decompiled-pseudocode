/*
 * XREFs of RtlPcToFileHeader @ 0x180037810
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1800034E4 (EtwpProviderArrivalCallback.c)
 *     RtlQueueWorkItem @ 0x18000BBE0 (RtlQueueWorkItem.c)
 *     RtlQueryInformationActivationContext @ 0x18000D770 (RtlQueryInformationActivationContext.c)
 *     RtlGuardCheckImageBase @ 0x1800399B0 (RtlGuardCheckImageBase.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180036540 (RtlpxLookupFunctionTable.c)
 */

PVOID __stdcall RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int64)PcValue < LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
    || (unsigned __int64)PcValue >= LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
                                  + LODWORD(LdrSystemDllInitBlock.MitigationOptionsMap.Map[2]) )
  {
    RtlpxLookupFunctionTable(PcValue, (__int64)&v4);
  }
  else
  {
    v4 = *(_OWORD *)LdrSystemDllInitBlock.MitigationOptionsMap.Map;
  }
  result = (PVOID)*((_QWORD *)&v4 + 1);
  *BaseOfImage = (PVOID)*((_QWORD *)&v4 + 1);
  return result;
}
