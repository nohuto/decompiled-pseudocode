/*
 * XREFs of BgpTxtDisplayCharacter @ 0x1401277F4
 * Callers:
 *     BgpDisplayCharacterEx @ 0x14023941C (BgpDisplayCharacterEx.c)
 *     AnFwpProgressAnimationManual @ 0x1407253F8 (AnFwpProgressAnimationManual.c)
 *     AnFwpProgressIndicatorTimer @ 0x1407271D8 (AnFwpProgressIndicatorTimer.c)
 *     AnFwDisplayProgressIndicator @ 0x140727494 (AnFwDisplayProgressIndicator.c)
 * Callees:
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     TxtpGetCacheEntry @ 0x140127A14 (TxtpGetCacheEntry.c)
 *     BgpGxDrawRectangle @ 0x140127A94 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x140127D00 (BgpGetBitsPerPixel.c)
 *     BgpRasPrintGlyph @ 0x140127D20 (BgpRasPrintGlyph.c)
 *     BgpGxFillRectangle @ 0x1401282D8 (BgpGxFillRectangle.c)
 *     BgpFoGetTextMetrics @ 0x140128370 (BgpFoGetTextMetrics.c)
 *     BgpGxConvertRectangleEx @ 0x1402394C4 (BgpGxConvertRectangleEx.c)
 *     TxtpAddCacheEntry @ 0x1407275FC (TxtpAddCacheEntry.c)
 *     BgpGxRectangleDestroy @ 0x1407276C0 (BgpGxRectangleDestroy.c)
 *     BgpGxBlendRectangle @ 0x14072AD60 (BgpGxBlendRectangle.c)
 *     TxtpJustifyRectangle @ 0x14072B2C8 (TxtpJustifyRectangle.c)
 */

__int64 __fastcall BgpTxtDisplayCharacter(__int64 a1, __int64 a2, int a3, _DWORD *a4, _DWORD *a5, int a6)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  _DWORD *v9; // rsi
  unsigned int *v10; // r11
  _DWORD *v11; // rbx
  char v12; // r14
  _DWORD *v13; // r15
  int v14; // edi
  int v15; // r13d
  __int64 CacheEntry; // rax
  __int64 result; // rax
  unsigned __int16 v18; // r13
  int v19; // ecx
  int v20; // r11d
  int v21; // eax
  unsigned int BitsPerPixel; // eax
  __int64 v23; // r10
  int v24; // eax
  int v25; // [rsp+58h] [rbp-41h] BYREF
  int v26; // [rsp+5Ch] [rbp-3Dh]
  int v27; // [rsp+60h] [rbp-39h]
  __int64 v28; // [rsp+68h] [rbp-31h] BYREF
  __int64 v29; // [rsp+70h] [rbp-29h]
  _DWORD *v30; // [rsp+78h] [rbp-21h] BYREF
  _DWORD *v31; // [rsp+80h] [rbp-19h] BYREF
  __int64 v32; // [rsp+88h] [rbp-11h]
  char v33; // [rsp+E8h] [rbp+4Fh] BYREF
  int v34; // [rsp+ECh] [rbp+53h]
  unsigned __int16 v35; // [rsp+F0h] [rbp+57h]
  int v36; // [rsp+F8h] [rbp+5Fh]
  _DWORD *v37; // [rsp+100h] [rbp+67h]

  v37 = a4;
  v36 = a3;
  v35 = a2;
  v32 = *(_QWORD *)(a1 + 24);
  v7 = 0LL;
  v29 = 0LL;
  v8 = 0LL;
  a6 = 0;
  v9 = *(_DWORD **)(a1 + 32);
  v10 = (unsigned int *)(a1 + 40);
  v11 = 0LL;
  v12 = *(_BYTE *)(a1 + 60) & 1;
  v28 = 0LL;
  v26 = 0;
  v13 = 0LL;
  v27 = 0;
  v14 = 0;
  v30 = 0LL;
  v15 = 0;
  v31 = 0LL;
  v33 = 0;
  v25 = 0;
  if ( (unsigned __int16)a2 < 0x20u )
    goto LABEL_12;
  if ( v12 )
  {
    CacheEntry = TxtpGetCacheEntry(&TxtpTextCache, a2, a1 + 40);
    v29 = CacheEntry;
    if ( CacheEntry )
    {
      v11 = *(_DWORD **)(CacheEntry + 48);
      v12 = 0;
      goto LABEL_5;
    }
  }
  BgpGxFillRectangle(v9, *v10, v8);
  v18 = v35;
  v27 = v9[1];
  v26 = *v9;
  v21 = BgpRasPrintGlyph(v19, v20, v35, v28, HIDWORD(v28), 1, (__int64)&v25);
  v14 = v21;
  if ( v21 < 0 )
  {
    DbgPrintEx(0x65u, 0, "BGFX internal font error %x char %x!\n", v21, v18);
    v15 = v25;
    LODWORD(v8) = 0;
    goto LABEL_11;
  }
  v15 = v25;
  if ( !v12 )
  {
    result = BgpFoGetTextMetrics(a1 + 40, &v33);
    v14 = result;
    if ( (int)result < 0 )
      return result;
    a6 = v34;
    *v9 = v34;
    v9[1] = v15;
    v33 = 1;
  }
  if ( v32 )
  {
    TxtpJustifyRectangle(a1, a1 + 8, &v28);
    v24 = BgpGxBlendRectangle(v23, v9, &v28, &v30);
    v11 = v30;
    v14 = v24;
    if ( v24 < 0 )
      goto LABEL_10;
  }
  else
  {
    v11 = v9;
  }
  if ( !v12 )
    goto LABEL_5;
  BitsPerPixel = BgpGetBitsPerPixel();
  if ( v11 != v9 && BitsPerPixel == v11[2] )
  {
    v13 = v11;
LABEL_5:
    HIDWORD(v28) = *(_DWORD *)(a1 + 4);
    LODWORD(v28) = *(_DWORD *)a1 + v28;
    if ( (v36 & 1) != 0 || (dword_1402F9F90 & 0x1000000) != 0 || (v14 = BgpGxDrawRectangle(v11, &v28), v14 >= 0) )
    {
      if ( v12 )
        v14 = TxtpAddCacheEntry(&TxtpTextCache, v35, a1 + 40, v13);
    }
    goto LABEL_10;
  }
  v14 = BgpGxConvertRectangleEx(v11, BitsPerPixel, &v31, 0LL);
  if ( v14 >= 0 )
  {
    if ( v11 != v9 )
      BgpGxRectangleDestroy(v11);
    v13 = v31;
    v11 = v31;
    goto LABEL_5;
  }
LABEL_10:
  LODWORD(v8) = a6;
LABEL_11:
  v7 = v29;
LABEL_12:
  if ( v37 )
    *v37 = v15;
  if ( a5 )
    *a5 = v8;
  if ( v11 != v9 && !v7 && (!v12 || v14 < 0) && v11 )
    BgpGxRectangleDestroy(v11);
  if ( v33 )
  {
    *v9 = v26;
    v9[1] = v27;
  }
  return (unsigned int)v14;
}
