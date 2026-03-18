/*
 * XREFs of zzzShowFade @ 0x1C0139870
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0139638 (-zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     zzzStartFade @ 0x1C01397A8 (zzzStartFade.c)
 * Callees:
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01399AC (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 */

__int64 zzzShowFade()
{
  __int64 result; // rax
  HDC v1; // r8
  struct _BLENDFUNCTION v2; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v3; // [rsp+48h] [rbp+10h] BYREF

  result = gfade[12];
  if ( (result & 4) == 0 )
  {
    v3 = 0LL;
    *(_WORD *)&v2.BlendOp = 0;
    v2.AlphaFormat = 0;
    v1 = *(HDC *)&gfade[2];
    v2.SourceConstantAlpha = (result & 1) != 0 ? 40 : -41;
    zzzUpdateFade((struct tagPOINT *)&gfade[6], (struct tagSIZE *)&gfade[8], v1, &v3, &v2);
    result = *(_QWORD *)gfade;
    gfade[12] |= 4u;
  }
  return result;
}
