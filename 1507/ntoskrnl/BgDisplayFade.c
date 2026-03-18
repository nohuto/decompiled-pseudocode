/*
 * XREFs of BgDisplayFade @ 0x14075C83C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14014FED8 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDisplayStringEx @ 0x1401F1188 (BgkDisplayStringEx.c)
 *     PoBroadcastSystemState @ 0x1403EE2D4 (PoBroadcastSystemState.c)
 *     BgkDisplayCharacter @ 0x14076113C (BgkDisplayCharacter.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14010280C (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140150250 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 *     AnFwDisplayFade @ 0x14075D0A8 (AnFwDisplayFade.c)
 */

__int64 BgDisplayFade()
{
  unsigned int v0; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140323CF0 & 1) != 0 )
    v0 = AnFwDisplayFade();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
