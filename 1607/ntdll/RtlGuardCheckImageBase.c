/*
 * XREFs of RtlGuardCheckImageBase @ 0x180030054
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180033830 (LdrpHandleProtectedDelayload.c)
 *     LdrpResolveProcedureAddress @ 0x18007B5DC (LdrpResolveProcedureAddress.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x180037660 (RtlPcToFileHeader.c)
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
