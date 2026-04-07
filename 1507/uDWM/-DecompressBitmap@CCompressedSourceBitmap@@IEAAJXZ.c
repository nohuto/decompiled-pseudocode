/*
 * XREFs of ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x18003E128
 * Callers:
 *     ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x18003E2F0 (-EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x18003D858 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x18003E320 (-EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CCompressedSourceBitmap::DecompressBitmap(CCompressedSourceBitmap *this)
{
  int v2; // eax
  unsigned int v3; // edi
  GUID *v4; // rsi
  int v5; // eax
  struct IBitmapSource *v6; // rsi
  int v8; // r9d
  unsigned int v9; // [rsp+20h] [rbp-40h]
  struct IWICBitmapSource *v10; // [rsp+98h] [rbp+38h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+40h] BYREF
  struct IBitmapSource *v12; // [rsp+A8h] [rbp+48h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v2 = CCompressedSourceBitmap::EnsureWICBitmapFrame(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v9 = 315;
LABEL_20:
    v8 = v2;
LABEL_22:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, v9);
    goto LABEL_13;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 38) + 80LL))(*((_QWORD *)this + 38), &v11);
  v3 = v2;
  if ( v2 < 0 )
  {
    v9 = 318;
    goto LABEL_20;
  }
  v4 = &GUID_WICPixelFormat8bppGray;
  if ( *((_DWORD *)this + 50) != 61 )
    v4 = &GUID_WICPixelFormat32bppPBGRA;
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v11 + 64LL))(
         v11,
         *((_QWORD *)this + 34),
         v4,
         0LL,
         0LL,
         0LL,
         0);
  v3 = v2;
  if ( v2 < 0 )
  {
    v9 = 329;
    goto LABEL_20;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct IWICBitmapSource **))(**((_QWORD **)this + 38) + 144LL))(
         *((_QWORD *)this + 38),
         v11,
         2LL,
         &v10);
  v3 = v2;
  if ( v2 < 0 )
  {
    v9 = 333;
    goto LABEL_20;
  }
  if ( !v10 )
  {
    v3 = -2147024890;
    v9 = 334;
    v8 = -2147024890;
    goto LABEL_22;
  }
  v2 = ((__int64 (__fastcall *)(struct IWICBitmapSource *))v10->lpVtbl[1].Release)(v10);
  v3 = v2;
  if ( v2 < 0 )
  {
    v9 = 336;
    goto LABEL_20;
  }
  v5 = HrCreateBitmapFromWICBitmapSource(v10, &v12);
  v3 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x155u);
    v6 = v12;
  }
  else
  {
    v6 = 0LL;
    *((_QWORD *)this + 35) = v12;
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v6 + 16LL))(v6);
LABEL_13:
  if ( v10 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v10->lpVtbl->Release)(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v3;
}
