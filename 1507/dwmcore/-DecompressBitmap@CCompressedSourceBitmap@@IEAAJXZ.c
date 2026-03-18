/*
 * XREFs of ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x180144BB8
 * Callers:
 *     ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x180144DF8 (-EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x18005EF94 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x180144E3C (-EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ.c)
 */

__int64 __fastcall CCompressedSourceBitmap::DecompressBitmap(CCompressedSourceBitmap *this)
{
  int v2; // eax
  unsigned int v3; // edi
  GUID *v4; // rsi
  int v5; // eax
  struct IBitmapSource *v6; // rsi
  unsigned int v8; // [rsp+20h] [rbp-40h]
  struct IWICBitmapSource *v9; // [rsp+98h] [rbp+38h] BYREF
  __int64 v10; // [rsp+A0h] [rbp+40h] BYREF
  struct IBitmapSource *v11; // [rsp+A8h] [rbp+48h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v2 = CCompressedSourceBitmap::EnsureWICBitmapFrame(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v8 = 315;
LABEL_3:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, v8);
    goto LABEL_22;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 38) + 80LL))(*((_QWORD *)this + 38), &v10);
  v3 = v2;
  if ( v2 < 0 )
  {
    v8 = 318;
    goto LABEL_3;
  }
  v4 = &GUID_WICPixelFormat8bppGray;
  if ( *((_DWORD *)this + 50) != 61 )
    v4 = &GUID_WICPixelFormat32bppPBGRA;
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v10 + 64LL))(
         v10,
         *((_QWORD *)this + 34),
         v4,
         0LL,
         0LL,
         0LL,
         0);
  v3 = v2;
  if ( v2 < 0 )
  {
    v8 = 329;
    goto LABEL_3;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct IWICBitmapSource **))(**((_QWORD **)this + 38) + 144LL))(
         *((_QWORD *)this + 38),
         v10,
         2LL,
         &v9);
  v3 = v2;
  if ( v2 < 0 )
  {
    v8 = 333;
    goto LABEL_3;
  }
  if ( !v9 )
  {
    v3 = -2147024890;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x14Eu);
    goto LABEL_22;
  }
  v2 = ((__int64 (__fastcall *)(struct IWICBitmapSource *))v9->lpVtbl[1].Release)(v9);
  v3 = v2;
  if ( v2 < 0 )
  {
    v8 = 336;
    goto LABEL_3;
  }
  v5 = HrCreateBitmapFromWICBitmapSource(v9, &v11);
  v3 = v5;
  if ( v5 >= 0 )
  {
    v6 = 0LL;
    *((_QWORD *)this + 35) = v11;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x155u);
    v6 = v11;
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v6 + 16LL))(v6);
LABEL_22:
  if ( v9 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v9->lpVtbl->Release)(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v3;
}
