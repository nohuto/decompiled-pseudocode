/*
 * XREFs of RtlGuardCheckImageBase @ 0x18006F6E4
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x180016890 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x180016B20 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x180018580 (RtlPcToFileHeader.c)
 */

PVOID __fastcall RtlGuardCheckImageBase(PVOID a1)
{
  PVOID result; // rax
  PVOID BaseOfImage; // [rsp+38h] [rbp+10h] BYREF

  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
  {
    result = RtlPcToFileHeader(a1, &BaseOfImage);
    if ( BaseOfImage != a1 )
      __fastfail(0x18u);
  }
  return result;
}
