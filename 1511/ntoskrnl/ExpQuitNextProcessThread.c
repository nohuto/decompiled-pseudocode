/*
 * XREFs of ExpQuitNextProcessThread @ 0x14066B9E0
 * Callers:
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 */

PVOID __fastcall ExpQuitNextProcessThread(PVOID *a1)
{
  PVOID result; // rax

  result = PsIdleProcess;
  if ( a1[68] != PsIdleProcess )
    return (PVOID)ObfDereferenceObjectWithTag(a1, 0x6E457350u);
  return result;
}
