/*
 * XREFs of NtUserMNDragLeave @ 0x1402B7D20
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x140177E40 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     UnlockMFMWFPWindow @ 0x140291824 (UnlockMFMWFPWindow.c)
 *     xxxMNSetGapState @ 0x1402F9954 (xxxMNSetGapState.c)
 */

__int64 NtUserMNDragLeave()
{
  __int64 v0; // rcx
  __int64 v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx

  EnterCrit(0LL, 0LL);
  v1 = 0LL;
  v3 = *((_QWORD *)PtiCurrent(v0) + 80);
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 + 92);
    v5 = *(unsigned int *)(v3 + 88);
    v6 = *(_QWORD *)(v3 + 80);
    ++*(_DWORD *)(v3 + 40);
    xxxMNSetGapState(v6, v5, v4, 0LL);
    UnlockMFMWFPWindow((__int64 *)(v3 + 80));
    *(_DWORD *)(v3 + 8) &= ~0x8000u;
    *(_DWORD *)(v3 + 88) = -1;
    *(_DWORD *)(v3 + 92) = 0;
    xxxUnlockMenuStateInternal((struct tagMENUSTATE *)v3, 1);
    v1 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v2);
  return v1;
}
