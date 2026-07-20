/*
 * XREFs of SmpSessionIdToInitialSessionIndex @ 0x1400032E0
 * Callers:
 *     SmpExecPgm @ 0x140002FB0 (SmpExecPgm.c)
 *     SmpSetCoreProcessIds @ 0x1400031FC (SmpSetCoreProcessIds.c)
 *     SmpDestroyControlBlock @ 0x1400048FC (SmpDestroyControlBlock.c)
 *     SmpTerminateCSR @ 0x140004D8C (SmpTerminateCSR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpSessionIdToInitialSessionIndex(int a1)
{
  __int64 result; // rax
  _DWORD *i; // rcx

  if ( a1 == -1 )
    return 0xFFFFFFFFLL;
  result = 0LL;
  if ( !SmpNumberInitialSessions )
    return 0xFFFFFFFFLL;
  for ( i = (_DWORD *)SmpCoreProcessIds; a1 != *i; i += 10 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= SmpNumberInitialSessions )
      return 0xFFFFFFFFLL;
  }
  return result;
}
