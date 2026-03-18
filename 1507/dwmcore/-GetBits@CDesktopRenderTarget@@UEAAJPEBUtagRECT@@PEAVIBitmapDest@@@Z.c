/*
 * XREFs of ?GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x180049130
 * Callers:
 *     ?GetBits@CDesktopRenderTarget@@WCI@EAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x180099D30 (-GetBits@CDesktopRenderTarget@@WCI@EAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?IsClone@CDisplay@@QEBA_NXZ @ 0x1800079E4 (-IsClone@CDisplay@@QEBA_NXZ.c)
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x18004B800 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 *     ?NeedsBlackBars@CDisplay@@QEBA_NXZ @ 0x180057B98 (-NeedsBlackBars@CDisplay@@QEBA_NXZ.c)
 *     ??A?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEBAAEAPEAVCHwndRenderTarget@@I@Z @ 0x1800602DC (--A-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEBAAEAPEAVCHwndRenderTarget@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::GetBits(
        CDesktopRenderTarget *this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3)
{
  unsigned int v3; // ebp
  unsigned int v7; // ebx
  char v8; // r10
  unsigned int v9; // r11d
  __int64 v10; // rax
  CDisplay *v11; // rcx
  int v12; // r11d
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rdx
  int Bits; // eax

  v3 = *((_DWORD *)this + 18);
  v7 = 0;
  v8 = 1;
  v9 = 0;
  if ( v3 )
  {
    while ( v8 )
    {
      v10 = DynArray<CHwndRenderTarget *,0>::operator[]((char *)this + 48, v9);
      if ( !CDisplay::IsClone(*(CDisplay **)(*(_QWORD *)v10 + 80LL)) && CDisplay::NeedsBlackBars(v11) )
        v8 = 0;
      v9 = v12 + 1;
      if ( v9 >= v3 )
      {
        if ( v8 )
          goto LABEL_9;
        return (unsigned int)-2147024809;
      }
    }
    return (unsigned int)-2147024809;
  }
  else
  {
LABEL_9:
    v13 = 0;
    if ( v3 )
    {
      while ( 1 )
      {
        v14 = DynArray<CHwndRenderTarget *,0>::operator[]((char *)this + 48, v13);
        if ( !CDisplay::IsClone(*(CDisplay **)(*(_QWORD *)v14 + 80LL)) )
        {
          Bits = CHwndRenderTarget::GetBits((CHwndRenderTarget *)(v15 + 40), a2, a3);
          v7 = Bits;
          if ( Bits < 0 )
            break;
        }
        if ( ++v13 >= *((_DWORD *)this + 18) )
          return v7;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bits, 0x700u);
    }
  }
  return v7;
}
