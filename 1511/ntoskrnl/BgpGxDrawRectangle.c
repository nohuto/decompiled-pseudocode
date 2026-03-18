/*
 * XREFs of BgpGxDrawRectangle @ 0x14011C310
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x14011C070 (BgpTxtDisplayCharacter.c)
 *     BgpClearScreen @ 0x14021EDD0 (BgpClearScreen.c)
 *     AnFwpFadeAnimationTimer @ 0x1406DAF40 (AnFwpFadeAnimationTimer.c)
 *     BgpTxtClearRegion @ 0x1406DECC0 (BgpTxtClearRegion.c)
 *     BgpTxtDisplayString @ 0x1406DECE0 (BgpTxtDisplayString.c)
 *     BgpGxDrawBitmapImage @ 0x1406DF20C (BgpGxDrawBitmapImage.c)
 * Callees:
 *     GxpWriteFrameBufferPixels @ 0x14011C384 (GxpWriteFrameBufferPixels.c)
 *     BgpGetBitsPerPixel @ 0x14011C4EC (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangle @ 0x14011CB14 (BgpGxConvertRectangle.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     BgpGxRectangleDestroy @ 0x1406DB7A4 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall BgpGxDrawRectangle(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rbx
  unsigned int BitsPerPixel; // eax
  _BYTE *v5; // r10
  unsigned int v6; // edi
  __int64 result; // rax
  __int64 v8; // r9
  _BYTE *v9; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v10[80]; // [rsp+30h] [rbp-68h] BYREF

  v2 = 0LL;
  v9 = 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  if ( *((_DWORD *)v5 + 2) != BitsPerPixel )
  {
    if ( (dword_1402D4BB0 & 0xC00) != 0 )
    {
      v8 = 1LL;
      v9 = v10;
    }
    else
    {
      v8 = 0LL;
    }
    result = BgpGxConvertRectangle(v5, BitsPerPixel, &v9, v8);
    if ( (int)result < 0 )
      return result;
    v2 = v9;
    v5 = v9;
  }
  v6 = GxpWriteFrameBufferPixels(v5, a2);
  if ( v2 )
  {
    if ( v2 != v10 )
      BgpGxRectangleDestroy(v2);
  }
  return v6;
}
