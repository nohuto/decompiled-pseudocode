/*
 * XREFs of PopQueuePowerRequestCallback @ 0x1400D09B4
 * Callers:
 *     PoClearPowerRequestInternal @ 0x1400D1B8C (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1400D1CD0 (PoSetPowerRequestInternal.c)
 * Callees:
 *     PopQueuePowerRequestCallbacks @ 0x1400D129C (PopQueuePowerRequestCallbacks.c)
 */

__int64 __fastcall PopQueuePowerRequestCallback(__int64 a1, int a2, char a3, char a4)
{
  __int64 v4; // r10
  __int64 (__fastcall **v5)(); // rdx
  __int64 result; // rax

  v4 = a2;
  v5 = &off_1403163A8;
  result = 2 * v4;
  if ( *(&off_1403163A8 + 2 * v4) )
  {
    if ( a3 )
      ++*(_BYTE *)(v4 + a1 + 72);
    else
      --*(_BYTE *)(v4 + a1 + 72);
    LOBYTE(v5) = a4;
    return PopQueuePowerRequestCallbacks(a1, v5);
  }
  return result;
}
