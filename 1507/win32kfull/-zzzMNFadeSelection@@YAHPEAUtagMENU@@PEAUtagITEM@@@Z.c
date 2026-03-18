/*
 * XREFs of ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C010DBC8
 * Callers:
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z @ 0x1C010C838 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z.c)
 * Callees:
 *     MNGetPopupFromMenu @ 0x1C005573C (MNGetPopupFromMenu.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     zzzShowFade @ 0x1C010DE00 (zzzShowFade.c)
 *     CreateFade @ 0x1C010E24C (CreateFade.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall zzzMNFadeSelection(struct tagMENU *a1, struct tagITEM *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  HDC Fade; // rsi
  HDC DCEx; // rbx

  if ( gbDisableAlpha )
    return 0LL;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000400) != 0x80000400 )
    return 0LL;
  if ( (glinp[15] & 0x11) != 0 )
    return 0LL;
  v3 = MNGetPopupFromMenu((__int64)a1, 0LL);
  if ( !v3 )
    return 0LL;
  v4 = *(_QWORD *)(v3 + 16);
  if ( !v4 )
    return 0LL;
  Fade = (HDC)CreateFade(0LL, *(_DWORD *)(v4 + 344));
  if ( !Fade )
    return 0LL;
  DCEx = (HDC)_GetDCEx(v4, 0LL, 1073807360LL);
  NtGdiBitBltInternal(
    Fade,
    0,
    0,
    *((_DWORD *)a2 + 20),
    *((_DWORD *)a2 + 21),
    DCEx,
    *((_DWORD *)a2 + 18),
    *((_DWORD *)a2 + 19),
    0xCC0020u,
    0,
    0);
  _ReleaseDC(DCEx);
  zzzShowFade();
  return 1LL;
}
