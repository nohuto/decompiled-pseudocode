/*
 * XREFs of BgpGxDrawRectangle @ 0x140127A94
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1401277F4 (BgpTxtDisplayCharacter.c)
 *     BgpClearScreen @ 0x1402392C4 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14023A6D0 (BgpFwDisplayBugCheckScreen.c)
 *     AnFwpFadeAnimationTimer @ 0x140726E84 (AnFwpFadeAnimationTimer.c)
 *     BgpGxDrawBitmapImage @ 0x14072B044 (BgpGxDrawBitmapImage.c)
 *     BgpTxtClearRegion @ 0x14072B090 (BgpTxtClearRegion.c)
 *     BgpTxtDisplayString @ 0x14072B0B0 (BgpTxtDisplayString.c)
 * Callees:
 *     GxpWriteFrameBufferPixels @ 0x140127B08 (GxpWriteFrameBufferPixels.c)
 *     BgpGetBitsPerPixel @ 0x140127D00 (BgpGetBitsPerPixel.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     BgpGxConvertRectangleEx @ 0x1402394C4 (BgpGxConvertRectangleEx.c)
 *     BgpGxRectangleDestroy @ 0x1407276C0 (BgpGxRectangleDestroy.c)
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
    if ( (dword_1402F9F90 & 0xC00) != 0 )
    {
      v8 = 1LL;
      v9 = v10;
    }
    else
    {
      v8 = 0LL;
    }
    result = BgpGxConvertRectangleEx(v5, BitsPerPixel, &v9, v8);
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
