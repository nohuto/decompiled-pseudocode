/*
 * XREFs of ThreadLockExchangeAlways @ 0x1C005E968
 * Callers:
 *     xxxTrackMouseMove @ 0x1C009DDCC (xxxTrackMouseMove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ThreadLockExchangeAlways(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = a1;
  ++*(_DWORD *)(a1 + 8);
  if ( result )
    return HMUnlockObject(result);
  return result;
}
