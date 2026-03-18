/*
 * XREFs of ?AddToCurrentFrameInvalidRegion@CHwDisplayRenderTarget@@IEAAJPEAUHRGN__@@@Z @ 0x18008F8EC
 * Callers:
 *     ?NotifyRenderedRect@CHwFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007AFE0 (-NotifyRenderedRect@CHwFullScreenRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017A5E0 (-NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180169220 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::AddToCurrentFrameInvalidRegion(HRGN *this, HRGN a2)
{
  signed int v2; // ebx
  HRGN RectRgn; // rax
  signed int v7; // eax
  int v8; // edx
  unsigned int v9; // ecx
  int v10; // r8d
  signed int LastError; // eax

  v2 = 0;
  if ( this[41] || (SetLastError(0), RectRgn = CreateRectRgn(0, 0, 0, 0), (this[41] = RectRgn) != 0LL) )
  {
    SetLastError(0);
    if ( !CombineRgn(this[41], this[41], a2, 2) )
    {
      LastError = GetLastError();
      v2 = LastError;
      if ( LastError > 0 )
        v2 = (unsigned __int16)LastError | 0x80070000;
      if ( v2 >= 0 )
        v2 = -2003304445;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x50Fu);
    }
  }
  else
  {
    v7 = GetLastError();
    v2 = v7;
    if ( v7 > 0 )
      v2 = (unsigned __int16)v7 | 0x80070000;
    if ( v2 >= 0 )
      v2 = CheckGUIHandleQuota(v9, v8, v10);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x509u);
  }
  return (unsigned int)v2;
}
