/*
 * XREFs of PopQueuePowerRequestCallback @ 0x1400F9ADC
 * Callers:
 *     PoClearPowerRequestInternal @ 0x1400F9750 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1400F988C (PoSetPowerRequestInternal.c)
 * Callees:
 *     PopQueuePowerRequestCallbacks @ 0x1400F9B18 (PopQueuePowerRequestCallbacks.c)
 */

__int64 __fastcall PopQueuePowerRequestCallback(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 (__fastcall **v5)(); // rdx
  __int64 result; // rax

  v4 = a2;
  v5 = &off_1402F26A8;
  result = 2 * v4;
  if ( *(&off_1402F26A8 + 2 * v4) )
  {
    if ( (_BYTE)a3 )
      ++*(_BYTE *)(v4 + a1 + 72);
    else
      --*(_BYTE *)(v4 + a1 + 72);
    LOBYTE(v5) = a4;
    return PopQueuePowerRequestCallbacks(a1, v5, a3, a4);
  }
  return result;
}
