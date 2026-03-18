/*
 * XREFs of xxxUnlockMenuState @ 0x1C010B940
 * Callers:
 *     xxxSysCommand @ 0x1C0109460 (xxxSysCommand.c)
 *     xxxMNStartMenuState @ 0x1C01FD458 (xxxMNStartMenuState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxUnlockMenuState(struct tagMENUSTATE *a1)
{
  return xxxUnlockMenuStateInternal(a1, 0);
}
