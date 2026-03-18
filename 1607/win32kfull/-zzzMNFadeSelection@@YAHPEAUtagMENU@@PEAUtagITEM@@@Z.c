/*
 * XREFs of ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C013CA74
 * Callers:
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z @ 0x1C013C724 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     MNGetPopupFromMenu @ 0x1C006B218 (MNGetPopupFromMenu.c)
 *     zzzShowFade @ 0x1C013F9EC (zzzShowFade.c)
 *     CreateFade @ 0x1C013FE3C (CreateFade.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall zzzMNFadeSelection(struct tagMENU *a1, struct tagITEM *a2)
{
  __int64 v3; // rax
  _DWORD *v4; // rbx
  LONG v5; // edx
  LONG v6; // ecx
  HDC v7; // rsi
  HDC DCEx; // rbx
  struct tagRECT v10; // [rsp+60h] [rbp-28h] BYREF

  if ( gbDisableAlpha )
    return 0LL;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000400) != 0x80000400 )
    return 0LL;
  if ( (glinp[7] & 0x1100000000LL) != 0 )
    return 0LL;
  v3 = MNGetPopupFromMenu((__int64)a1, 0LL);
  if ( !v3 )
    return 0LL;
  v4 = *(_DWORD **)(v3 + 16);
  if ( !v4 )
    return 0LL;
  v10.left = *((_DWORD *)a2 + 18) + v4[32];
  v5 = *((_DWORD *)a2 + 19) + v4[33];
  v10.right = *((_DWORD *)a2 + 20) + v10.left;
  v6 = v5 + *((_DWORD *)a2 + 21);
  v10.top = v5;
  v10.bottom = v6;
  v7 = (HDC)CreateFade(0LL, &v10, v4[88]);
  if ( !v7 )
    return 0LL;
  DCEx = (HDC)_GetDCEx(v4, 0LL, 1073807360LL);
  NtGdiBitBltInternal(
    v7,
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
