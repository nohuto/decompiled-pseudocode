/*
 * XREFs of BgpGxDrawRectangle @ 0x1401505A0
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140150300 (BgpTxtDisplayCharacter.c)
 *     BgpClearScreen @ 0x14026E1F8 (BgpClearScreen.c)
 *     AnFwpFadeAnimationTimer @ 0x14075DF88 (AnFwpFadeAnimationTimer.c)
 *     BgpTxtClearRegion @ 0x140761D3C (BgpTxtClearRegion.c)
 *     BgpTxtDisplayString @ 0x140761D5C (BgpTxtDisplayString.c)
 *     BgpGxDrawBitmapImage @ 0x140762288 (BgpGxDrawBitmapImage.c)
 * Callees:
 *     GxpWriteFrameBufferPixels @ 0x140150614 (GxpWriteFrameBufferPixels.c)
 *     BgpGetBitsPerPixel @ 0x14015076C (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangle @ 0x140150D94 (BgpGxConvertRectangle.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     BgpGxRectangleDestroy @ 0x14075E7EC (BgpGxRectangleDestroy.c)
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
    if ( (dword_140323CF0 & 0xC00) != 0 )
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
