/*
 * XREFs of RtlGuardCheckImageBase @ 0x180030064
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180033840 (LdrpHandleProtectedDelayload.c)
 *     LdrpResolveProcedureAddress @ 0x18007B5EC (LdrpResolveProcedureAddress.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x180037670 (RtlPcToFileHeader.c)
 */

PVOID __fastcall RtlGuardCheckImageBase(PVOID a1)
{
  PVOID result; // rax
  PVOID BaseOfImage; // [rsp+38h] [rbp+10h] BYREF

  if ( qword_180163310 )
  {
    result = RtlPcToFileHeader(a1, &BaseOfImage);
    if ( BaseOfImage != a1 )
      __fastfail(0x18u);
  }
  return result;
}
