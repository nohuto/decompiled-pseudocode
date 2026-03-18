/*
 * XREFs of ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x140177E40
 * Callers:
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     NtUserMNDragLeave @ 0x1402B7D20 (NtUserMNDragLeave.c)
 *     xxxMNStartMenuState @ 0x1402D09E8 (xxxMNStartMenuState.c)
 *     xxxMNDragOver @ 0x1402F97D8 (xxxMNDragOver.c)
 * Callees:
 *     xxxMNEndMenuState @ 0x140177ED0 (xxxMNEndMenuState.c)
 */

__int64 __fastcall xxxUnlockMenuStateInternal(struct tagMENUSTATE *a1, int a2)
{
  int v4; // r9d

  if ( (*((_DWORD *)a1 + 10))-- != 1 )
    return 0LL;
  v4 = *((_DWORD *)a1 + 2);
  if ( (v4 & 4) != 0 && (**(_DWORD **)a1 & 0x8000) == 0 )
    return 0LL;
  if ( !a2 && (v4 & 0x1000000) == 0 )
    return 0LL;
  xxxMNEndMenuState(a1);
  return 1LL;
}
