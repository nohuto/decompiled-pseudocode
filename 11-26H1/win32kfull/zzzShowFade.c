/*
 * XREFs of zzzShowFade @ 0x14021B0B4
 * Callers:
 *     zzzStartFade @ 0x14021AFA8 (zzzStartFade.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1402377E4 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 * Callees:
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x14021B130 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 */

void __fastcall zzzShowFade(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  int v3; // eax
  struct _BLENDFUNCTION v4; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v5; // [rsp+48h] [rbp+10h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = *(_DWORD *)(UserSessionState + 43056);
  if ( (v3 & 4) == 0 )
  {
    v5 = 0LL;
    *(_WORD *)&v4.BlendOp = 0;
    v4.AlphaFormat = 0;
    v4.SourceConstantAlpha = (v3 & 1) != 0 ? 40 : -41;
    zzzUpdateFade(
      (struct tagPOINT *)(UserSessionState + 43032),
      (struct tagSIZE *)(UserSessionState + 43040),
      *(HDC *)(UserSessionState + 43016),
      &v5,
      &v4);
    *(_DWORD *)(UserSessionState + 43056) |= 4u;
  }
}
