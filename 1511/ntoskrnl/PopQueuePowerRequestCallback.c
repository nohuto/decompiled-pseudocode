/*
 * XREFs of PopQueuePowerRequestCallback @ 0x140098F88
 * Callers:
 *     PoClearPowerRequestInternal @ 0x140097640 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140097768 (PoSetPowerRequestInternal.c)
 * Callees:
 *     PopQueuePowerRequestCallbacks @ 0x140098FC4 (PopQueuePowerRequestCallbacks.c)
 */

__int64 __fastcall PopQueuePowerRequestCallback(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 (__fastcall **v5)(); // rdx
  __int64 result; // rax

  v4 = a2;
  v5 = &off_1402C72D8;
  result = 2 * v4;
  if ( *(&off_1402C72D8 + 2 * v4) )
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
