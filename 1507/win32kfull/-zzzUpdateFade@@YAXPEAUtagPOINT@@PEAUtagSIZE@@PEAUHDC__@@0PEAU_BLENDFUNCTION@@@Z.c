/*
 * XREFs of ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C010DF3C
 * Callers:
 *     zzzShowFade @ 0x1C010DE00 (zzzShowFade.c)
 *     zzzAnimateFade @ 0x1C010DE60 (zzzAnimateFade.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 *     zzzUpdateLayeredWindow @ 0x1C0058F3C (zzzUpdateLayeredWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 */

void __fastcall zzzUpdateFade(
        struct tagPOINT *a1,
        struct tagSIZE *a2,
        HDC a3,
        struct tagPOINT *a4,
        struct _BLENDFUNCTION *a5)
{
  unsigned int v9; // eax
  __m128i *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v13[4]; // [rsp+80h] [rbp-28h] BYREF

  v9 = gfade[12];
  if ( (v9 & 8) != 0 )
  {
    v10 = (__m128i *)HMValidateHandleNoSecure(*(unsigned __int64 *)gfade, 1);
    if ( v10 )
    {
      v13[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v13;
      v13[1] = v10;
      ++v10->m128i_i32[2];
      zzzUpdateLayeredWindow(v10, 0LL, a1, a2, (__int64)a3, (__int64)a4, 0, (__int64)a5, 2u, 0LL);
      ThreadUnlock1(v12, v11);
    }
  }
  else
  {
    GreUpdateSprite(
      (HDEV)*gpDispInfo,
      0LL,
      *(void **)gfade,
      0LL,
      a1,
      a2,
      a3,
      a4,
      gfade[13],
      a5,
      2 - ((v9 & 0x40) != 0),
      0LL,
      0LL,
      1,
      0);
  }
}
