/*
 * XREFs of RtlGuardCheckImageBase @ 0x1800399B0
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180032120 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x180037810 (RtlPcToFileHeader.c)
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
