/*
 * XREFs of RegisterGuestIdleStates @ 0x1C001BF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterGuestIdleStates(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 248) & 0x200LL) != 0 )
    return RegisterVmIdleStates();
  else
    return 0LL;
}
