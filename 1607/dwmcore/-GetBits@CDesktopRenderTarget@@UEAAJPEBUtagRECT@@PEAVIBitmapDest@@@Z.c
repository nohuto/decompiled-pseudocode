/*
 * XREFs of ?GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1800090D0
 * Callers:
 *     ?GetBits@CDesktopRenderTarget@@WCI@EAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1800BF870 (-GetBits@CDesktopRenderTarget@@WCI@EAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x180009330 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800ACBEC (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::GetBits(
        CDesktopRenderTarget *this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r10
  char v8; // r11
  __int64 v9; // rcx
  char IsEquivalentTo; // al
  char v11; // r11
  __int64 v12; // rdi
  __int64 v13; // rcx
  int Bits; // eax

  v3 = 0;
  v4 = 0LL;
  v8 = 1;
  if ( *((_DWORD *)this + 18) )
  {
    while ( v8 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4) + 152LL);
      if ( *(_QWORD *)(v9 + 136) == v9 )
      {
        IsEquivalentTo = TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(v9 + 88, v9 + 72);
        v8 = IsEquivalentTo != 0 ? v11 : 0;
      }
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)this + 18) )
      {
        if ( v8 )
          goto LABEL_7;
        return (unsigned int)-2147024809;
      }
    }
    return (unsigned int)-2147024809;
  }
  else
  {
LABEL_7:
    v12 = 0LL;
    if ( *((_DWORD *)this + 18) )
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v12);
        if ( *(_QWORD *)(*(_QWORD *)(v13 + 152) + 136LL) == *(_QWORD *)(v13 + 152) )
        {
          Bits = CHwndRenderTarget::GetBits((CHwndRenderTarget *)(v13 + 112), a2, a3);
          v3 = Bits;
          if ( Bits < 0 )
            break;
        }
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= *((_DWORD *)this + 18) )
          return v3;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bits, 0x79Du);
    }
  }
  return v3;
}
