/*
 * XREFs of RtlPcToFileHeader @ 0x180018580
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1800027E4 (EtwpProviderArrivalCallback.c)
 *     RtlQueryInformationActivationContext @ 0x18003E1C0 (RtlQueryInformationActivationContext.c)
 *     RtlGuardCheckImageBase @ 0x18006F6E4 (RtlGuardCheckImageBase.c)
 *     RtlQueueWorkItem @ 0x18007C3C0 (RtlQueueWorkItem.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180015180 (RtlpxLookupFunctionTable.c)
 */

PVOID __stdcall RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_180157330 + 1)
    || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_180157330 + 1)
                                  + (unsigned __int64)(unsigned int)qword_180157340 )
  {
    RtlpxLookupFunctionTable((unsigned __int64)PcValue, (__int64 *)&v4);
  }
  else
  {
    v4 = xmmword_180157330;
  }
  result = (PVOID)*((_QWORD *)&v4 + 1);
  *BaseOfImage = (PVOID)*((_QWORD *)&v4 + 1);
  return result;
}
