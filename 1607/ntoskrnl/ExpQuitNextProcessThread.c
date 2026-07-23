/*
 * XREFs of ExpQuitNextProcessThread @ 0x1406AC390
 * Callers:
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 */

PVOID __fastcall ExpQuitNextProcessThread(PVOID *a1)
{
  PVOID result; // rax

  result = PsIdleProcess;
  if ( a1[68] != PsIdleProcess )
    return (PVOID)ObfDereferenceObjectWithTag(a1, 0x6E457350u);
  return result;
}
