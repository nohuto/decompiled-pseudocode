/*
 * XREFs of ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x18009E800
 * Callers:
 *     ?PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapLock@@_N@Z @ 0x1800820B0 (-PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ?PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800822E4 (-PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV-$TMilRect@I.c)
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180084A40 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?GetStride@CBitmapLock@@W7EAAJPEAI@Z @ 0x1800C1CC0 (-GetStride@CBitmapLock@@W7EAAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18009E978 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmapLock::GetStride(CBitmapLock *this, unsigned int *a2)
{
  unsigned int v2; // ebx
  char *v5; // rcx
  char *v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( this == (CBitmapLock *)72 )
    v5 = 0LL;
  else
    v5 = (char *)this - 56;
  v7 = v5;
  if ( v5[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 8));
  if ( a2 )
  {
    if ( *((_BYTE *)this + 16) )
    {
      *a2 = *((_DWORD *)this + 10);
    }
    else
    {
      v2 = -2003292412;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x8Eu);
    }
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x8Cu);
  }
  CGuard<CMTALock>::~CGuard<CMTALock>(&v7);
  return v2;
}
