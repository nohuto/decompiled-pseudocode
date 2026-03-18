/*
 * XREFs of RtlPcToFileHeader @ 0x1400F1B5C
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1404CEF74 (EtwpProviderArrivalCallback.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x140028170 (RtlpxLookupFunctionTable.c)
 */

PVOID __stdcall RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int64 v4[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int64)PcValue < *(&xmmword_1402CFDD0 + 1)
    || (unsigned __int64)PcValue >= *(&xmmword_1402CFDD0 + 1) + (unsigned int)qword_1402CFDE0 )
  {
    RtlpxLookupFunctionTable((unsigned __int64)PcValue, v4);
  }
  else
  {
    *(_OWORD *)v4 = *(_OWORD *)&xmmword_1402CFDD0;
  }
  result = (PVOID)v4[1];
  *BaseOfImage = (PVOID)v4[1];
  return result;
}
