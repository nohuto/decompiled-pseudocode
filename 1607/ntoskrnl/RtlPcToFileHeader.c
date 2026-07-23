/*
 * XREFs of RtlPcToFileHeader @ 0x1400A3AD0
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1404B47FC (EtwpProviderArrivalCallback.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1400510C0 (RtlpxLookupFunctionTable.c)
 */

PVOID __stdcall RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int64 v4[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int64)PcValue < *(&xmmword_1402F6FB0 + 1)
    || (unsigned __int64)PcValue >= *(&xmmword_1402F6FB0 + 1) + (unsigned int)qword_1402F6FC0 )
  {
    RtlpxLookupFunctionTable((unsigned __int64)PcValue, v4);
  }
  else
  {
    *(_OWORD *)v4 = *(_OWORD *)&xmmword_1402F6FB0;
  }
  result = (PVOID)v4[1];
  *BaseOfImage = (PVOID)v4[1];
  return result;
}
