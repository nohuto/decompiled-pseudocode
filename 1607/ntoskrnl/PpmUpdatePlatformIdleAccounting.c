/*
 * XREFs of PpmUpdatePlatformIdleAccounting @ 0x140201790
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400D83E0 (PpmIdleExecuteTransition.c)
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
    result *= 32LL;
    *(_QWORD *)(result + a1 + 168) += a2;
    ++*(_DWORD *)(result + a1 + 192);
    if ( a2 < *(_QWORD *)(result + a1 + 176) )
      *(_QWORD *)(result + a1 + 176) = a2;
    if ( a2 > *(_QWORD *)(result + a1 + 184) )
      *(_QWORD *)(result + a1 + 184) = a2;
  }
  if ( a2 < *(_QWORD *)(a1 + 24) )
    *(_QWORD *)(a1 + 24) = a2;
  if ( a2 > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)(a1 + 16) = a2;
  return result;
}
