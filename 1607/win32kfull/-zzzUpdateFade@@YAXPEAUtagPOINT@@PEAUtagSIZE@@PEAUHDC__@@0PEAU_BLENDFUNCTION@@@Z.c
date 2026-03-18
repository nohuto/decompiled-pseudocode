/*
 * XREFs of ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C013FB2C
 * Callers:
 *     zzzShowFade @ 0x1C013F9EC (zzzShowFade.c)
 *     zzzAnimateFade @ 0x1C013FA4C (zzzAnimateFade.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C00503E0 (GreUpdateSprite.c)
 *     zzzUpdateLayeredWindow @ 0x1C0053734 (zzzUpdateLayeredWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 */

void __fastcall zzzUpdateFade(
        struct tagPOINT *a1,
        struct tagSIZE *a2,
        HDC a3,
        struct tagPOINT *a4,
        struct _BLENDFUNCTION *a5)
{
  struct tagSIZE *v7; // rsi
  unsigned int v9; // eax
  __m128i *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _LUID *v13; // [rsp+70h] [rbp-38h]
  _QWORD v14[4]; // [rsp+80h] [rbp-28h] BYREF

  v7 = a2;
  v9 = gfade[12];
  if ( (v9 & 8) != 0 )
  {
    LOBYTE(a2) = 1;
    v10 = (__m128i *)HMValidateHandleNoSecure(*(unsigned __int64 *)gfade, (__int64)a2, (__int64)a3, (__int64)a4);
    if ( v10 )
    {
      v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v14;
      v14[1] = v10;
      ++v10->m128i_i32[2];
      zzzUpdateLayeredWindow(v10, 0LL, a1, v7, a3, a4, 0, a5, 2, 0LL);
      ThreadUnlock1(v12, v11);
    }
  }
  else
  {
    LODWORD(v13) = 0;
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
      v13);
  }
}
