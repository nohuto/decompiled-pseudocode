/*
 * XREFs of BgDisplayFade @ 0x140725814
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140126E68 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDisplayStringEx @ 0x1401C3D58 (BgkDisplayStringEx.c)
 *     PoBroadcastSystemState @ 0x1403CEBF8 (PoBroadcastSystemState.c)
 *     BgkDisplayCharacter @ 0x14072A0A8 (BgkDisplayCharacter.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14002ECE0 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x1401271F4 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140127230 (BgpFwAcquireLock.c)
 *     AnFwDisplayFade @ 0x14072664C (AnFwDisplayFade.c)
 */

__int64 BgDisplayFade()
{
  unsigned int v0; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_1402F9F90 & 1) != 0 )
    v0 = AnFwDisplayFade();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
