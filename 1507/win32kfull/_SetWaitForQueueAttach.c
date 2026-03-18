/*
 * XREFs of _SetWaitForQueueAttach @ 0x1C01D17E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetWaitForQueueAttach(int a1)
{
  __int64 result; // rax

  if ( (a1 != 0) != a1 )
    return 0LL;
  result = 1LL;
  *(_DWORD *)(gptiCurrent + 1080LL) ^= (*(_DWORD *)(gptiCurrent + 1080LL) ^ (a1 << 10)) & 0x400;
  return result;
}
