/*
 * XREFs of ExpQuitNextProcessThread @ 0x1406AC258
 * Callers:
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 */

PVOID __fastcall ExpQuitNextProcessThread(PVOID *a1)
{
  PVOID result; // rax

  result = PsIdleProcess;
  if ( a1[68] != PsIdleProcess )
    return (PVOID)ObfDereferenceObjectWithTag(a1, 0x6E457350u);
  return result;
}
