/*
 * XREFs of ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00455E8
 * Callers:
 *     CheckForegroundRight @ 0x1C0045328 (CheckForegroundRight.c)
 *     NtUserCanBrokerForceForeground @ 0x1C00FDFB0 (NtUserCanBrokerForceForeground.c)
 *     NtUserSetWindowArrangement @ 0x1C0220B40 (NtUserSetWindowArrangement.c)
 * Callees:
 *     IsForegroundLocked @ 0x1C0045658 (IsForegroundLocked.c)
 *     CanForceForeground @ 0x1C0080A70 (CanForceForeground.c)
 */

_BOOL8 __fastcall CheckLegacyForegroundAccess(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // ebx

  LOBYTE(v3) = 0;
  if ( (unsigned int)IsForegroundLocked(a1, a2, gptiCurrent) && *(_QWORD *)(v2 + 384) != gppiInputProvider )
    return 0LL;
  if ( (*(_DWORD *)(v2 + 448) & 0x2C) != 0 || (unsigned int)CanForceForeground(*(_QWORD *)(v2 + 384)) )
    return 1LL;
  if ( !gptiForeground )
    return 0LL;
  if ( *(_DWORD *)(gptiForeground + 560LL) <= 0x400u )
    v3 = *(_DWORD *)(gptiForeground + 576LL);
  return (v3 & 0x40) != 0;
}
