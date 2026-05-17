/*
 * XREFs of RtlPcToFileHeader @ 0x180037670
 * Callers:
 *     RtlGuardCheckImageBase @ 0x180030064 (RtlGuardCheckImageBase.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180039AF0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlQueueWorkItem @ 0x180039CF0 (RtlQueueWorkItem.c)
 *     RtlQueryInformationActivationContext @ 0x18003DAF0 (RtlQueryInformationActivationContext.c)
 *     EtwpProviderArrivalCallback @ 0x180079858 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1800362F0 (RtlpxLookupFunctionTable.c)
 */

PVOID __stdcall RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  __int64 v2; // r9
  PVOID result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_180163430 + 1)
    || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_180163430 + 1)
                                  + (unsigned __int64)(unsigned int)qword_180163440 )
  {
    RtlpxLookupFunctionTable((unsigned __int64)PcValue, (char *)&v5, *((__int64 *)&xmmword_180163430 + 1), v2);
  }
  else
  {
    v5 = xmmword_180163430;
  }
  result = (PVOID)*((_QWORD *)&v5 + 1);
  *BaseOfImage = (PVOID)*((_QWORD *)&v5 + 1);
  return result;
}
