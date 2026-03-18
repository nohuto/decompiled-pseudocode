/*
 * XREFs of NtUserMNDragLeave @ 0x1C0216EA0
 * Callers:
 *     <none>
 * Callees:
 *     UnlockMFMWFPWindow @ 0x1C01413F4 (UnlockMFMWFPWindow.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0142EC4 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxMNSetGapState @ 0x1C02333A4 (xxxMNSetGapState.c)
 */

__int64 NtUserMNDragLeave()
{
  __int64 v0; // rdx
  int v1; // esi
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  EnterCrit(0LL, 1LL);
  v1 = 0;
  v2 = gptiCurrent;
  v3 = *(_QWORD *)(gptiCurrent + 528LL);
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 + 92);
    v5 = *(unsigned int *)(v3 + 88);
    v6 = *(_QWORD *)(v3 + 80);
    ++*(_DWORD *)(v3 + 40);
    xxxMNSetGapState(v6, v5, v4, 0LL);
    UnlockMFMWFPWindow((_QWORD *)(v3 + 80), v7, v8, v9);
    *(_DWORD *)(v3 + 88) = -1;
    *(_DWORD *)(v3 + 8) &= ~0x8000u;
    *(_DWORD *)(v3 + 92) = 0;
    xxxUnlockMenuStateInternal((struct tagMENUSTATE *)v3, 1);
    v1 = 1;
  }
  UserSessionSwitchLeaveCrit(v2, v0);
  return v1;
}
