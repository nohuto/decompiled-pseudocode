/*
 * XREFs of RegisterGuestIdleStates @ 0x1C001AF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterGuestIdleStates(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 248) & 0x200LL) != 0 )
    return RegisterVmIdleStates(a1);
  else
    return 0LL;
}
