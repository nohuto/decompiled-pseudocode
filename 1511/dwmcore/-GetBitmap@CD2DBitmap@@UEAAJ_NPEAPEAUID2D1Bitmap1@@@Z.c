/*
 * XREFs of ?GetBitmap@CD2DBitmap@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18000DAD0
 * Callers:
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N3PEAPEAUID2D1Bitmap1@@@Z @ 0x18000D440 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DBitmap::GetBitmap(CD2DBitmap *this, char a2, struct ID2D1Bitmap1 **a3)
{
  int v3; // esi
  __int64 v7; // rdi
  __int128 v8; // xmm1
  __int64 v9; // rcx
  int v10; // eax
  _OWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0;
  *a3 = 0LL;
  if ( a2 )
  {
    if ( !*((_QWORD *)this + 7) )
    {
      v7 = *((_QWORD *)this + 6);
      v8 = *((_OWORD *)this + 8);
      v9 = *(_QWORD *)(*((_QWORD *)this - 10) + 16LL);
      v11[0] = *((_OWORD *)this + 7);
      DWORD1(v11[0]) = 3;
      v11[1] = v8;
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _OWORD *, char *))(**(_QWORD **)(v9 + 48) + 96LL))(
              *(_QWORD *)(v9 + 48),
              v7,
              v11,
              (char *)this + 56);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x23Cu);
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB7u);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 8LL))(*((_QWORD *)this + 7));
      *a3 = (struct ID2D1Bitmap1 *)*((_QWORD *)this + 7);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 8LL))(*((_QWORD *)this + 6));
    *a3 = (struct ID2D1Bitmap1 *)*((_QWORD *)this + 6);
  }
  return (unsigned int)v3;
}
