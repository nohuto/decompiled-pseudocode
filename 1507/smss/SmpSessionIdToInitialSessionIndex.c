/*
 * XREFs of SmpSessionIdToInitialSessionIndex @ 0x140005210
 * Callers:
 *     SmpTerminateCSR @ 0x140001008 (SmpTerminateCSR.c)
 *     SmpExecPgm @ 0x140004EF0 (SmpExecPgm.c)
 *     SmpSetCoreProcessIds @ 0x14000512C (SmpSetCoreProcessIds.c)
 *     SmpDestroyControlBlock @ 0x140007C5C (SmpDestroyControlBlock.c)
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
