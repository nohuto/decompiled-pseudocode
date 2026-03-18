/*
 * XREFs of PpmUpdatePlatformIdleAccounting @ 0x140236418
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400A7C10 (PpmIdleExecuteTransition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmUpdatePlatformIdleAccounting(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 *v3; // r8

  result = 0LL;
  v3 = (unsigned __int64 *)&PpmIdleIntervalLimits;
  do
  {
    if ( a2 < *v3 )
      break;
    result = (unsigned int)(result + 1);
    v3 += 3;
  }
  while ( (unsigned int)result < 0x1A );
  if ( (unsigned int)result >= 0x1A )
  {
    ++*(_DWORD *)(a1 + 40);
  }
  else
  {
    result = a1 + 32 * (result + 5);
    *(_QWORD *)result += a2;
    ++*(_DWORD *)(result + 24);
    if ( a2 < *(_QWORD *)(result + 8) )
      *(_QWORD *)(result + 8) = a2;
    if ( a2 > *(_QWORD *)(result + 16) )
      *(_QWORD *)(result + 16) = a2;
  }
  if ( a2 < *(_QWORD *)(a1 + 24) )
    *(_QWORD *)(a1 + 24) = a2;
  if ( a2 > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)(a1 + 16) = a2;
  return result;
}
