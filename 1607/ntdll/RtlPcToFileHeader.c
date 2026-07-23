/*
 * XREFs of RtlPcToFileHeader @ 0x180037660
 * Callers:
 *     RtlGuardCheckImageBase @ 0x180030054 (RtlGuardCheckImageBase.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180039AE0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlQueueWorkItem @ 0x180039CE0 (RtlQueueWorkItem.c)
 *     RtlQueryInformationActivationContext @ 0x18003DAE0 (RtlQueryInformationActivationContext.c)
 *     EtwpProviderArrivalCallback @ 0x180079848 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1800362E0 (RtlpxLookupFunctionTable.c)
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
