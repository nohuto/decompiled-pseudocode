/*
 * XREFs of ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x1800A5040
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x1800A51D0 (-CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1800A522C (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800A533C (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 */

__int64 __fastcall CaptureBitsResponse::OnPresentComplete(DWORD *this)
{
  int v2; // eax
  signed int v3; // edi
  HANDLE FileMappingW; // rax
  int Bits; // eax
  int v6; // eax
  unsigned int v7; // ebx
  signed int LastError; // eax
  DWORD dwMaximumSizeLow; // [rsp+20h] [rbp-18h]

  v2 = CaptureBitsResponse::CalcSectionBitmapSize((CaptureBitsResponse *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x151u);
  }
  else
  {
    SetLastError(0);
    FileMappingW = CreateFileMappingW((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 4u, 0, this[36], 0LL);
    *((_QWORD *)this + 16) = FileMappingW;
    if ( !FileMappingW )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
      if ( v3 >= 0 )
        v3 = -2003304445;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x15Bu);
    }
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x7Au);
  }
  else
  {
    Bits = CaptureBitsResponse::MapSectionBitmap((CaptureBitsResponse *)this);
    v3 = Bits;
    if ( Bits < 0 )
    {
      dwMaximumSizeLow = 124;
    }
    else
    {
      Bits = CaptureBitsResponse::GetBits((CaptureBitsResponse *)this);
      v3 = Bits;
      if ( Bits >= 0 )
        goto LABEL_6;
      dwMaximumSizeLow = 130;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Bits, dwMaximumSizeLow);
  }
LABEL_6:
  v6 = (*(__int64 (__fastcall **)(DWORD *, _QWORD))(*(_QWORD *)this + 32LL))(this, (unsigned int)v3);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x85u);
  return v7;
}
