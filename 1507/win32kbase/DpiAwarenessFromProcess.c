/*
 * XREFs of DpiAwarenessFromProcess @ 0x1C0018CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiAwarenessFromProcess(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 776) & 0x4000) != 0 )
    return 2LL;
  else
    return (*(_DWORD *)(a1 + 776) & 0x6000) != 0;
}
