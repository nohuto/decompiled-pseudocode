/*
 * XREFs of RtlPcToFileHeader @ 0x14016D544
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1404660B8 (EtwpProviderArrivalCallback.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14001F3E0 (RtlpxLookupFunctionTable.c)
 */

PVOID __stdcall RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int64 v4[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int64)PcValue < *(&xmmword_14031EF70 + 1)
    || (unsigned __int64)PcValue >= *(&xmmword_14031EF70 + 1) + (unsigned int)qword_14031EF80 )
  {
    RtlpxLookupFunctionTable((unsigned __int64)PcValue, v4);
  }
  else
  {
    *(_OWORD *)v4 = *(_OWORD *)&xmmword_14031EF70;
  }
  result = (PVOID)v4[1];
  *BaseOfImage = (PVOID)v4[1];
  return result;
}
