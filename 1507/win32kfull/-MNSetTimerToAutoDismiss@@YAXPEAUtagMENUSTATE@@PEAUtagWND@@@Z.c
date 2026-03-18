/*
 * XREFs of ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C02158C4
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxMNMouseMove @ 0x1C010BB60 (xxxMNMouseMove.c)
 * Callees:
 *     InternalSetTimer @ 0x1C007A390 (InternalSetTimer.c)
 */

void __fastcall MNSetTimerToAutoDismiss(struct tagMENUSTATE *a1, struct tagWND *a2)
{
  if ( (*((_DWORD *)a1 + 2) & 0x1800) == 0x800 )
  {
    if ( InternalSetTimer((__int64)a2, 65529LL, 16 * gdtMNDropDown, 0LL, 0, 16) )
      *((_DWORD *)a1 + 2) |= 0x1000u;
  }
}
