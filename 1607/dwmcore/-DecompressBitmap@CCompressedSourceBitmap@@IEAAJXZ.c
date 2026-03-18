/*
 * XREFs of ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x180183AC0
 * Callers:
 *     ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x180183CC0 (-EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1800AEC84 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x180183D04 (-EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ.c)
 */

__int64 __fastcall CCompressedSourceBitmap::DecompressBitmap(CCompressedSourceBitmap *this)
{
  struct IBitmapSource *v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  GUID *v6; // r8
  int v7; // r9d
  int v8; // eax
  unsigned int v10; // [rsp+20h] [rbp-20h]
  struct IWICBitmapSource *v11; // [rsp+68h] [rbp+28h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  struct IBitmapSource *v13; // [rsp+78h] [rbp+38h] BYREF

  v11 = 0LL;
  v1 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v3 = CCompressedSourceBitmap::EnsureWICBitmapFrame(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x138u);
    goto LABEL_20;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 38) + 80LL))(*((_QWORD *)this + 38), &v12);
  v4 = v5;
  if ( v5 < 0 )
  {
    v10 = 315;
    goto LABEL_15;
  }
  v6 = &GUID_WICPixelFormat8bppGray;
  if ( *((_DWORD *)this + 50) != 61 )
    v6 = &GUID_WICPixelFormat32bppPBGRA;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v12 + 64LL))(
         v12,
         *((_QWORD *)this + 34),
         v6,
         0LL,
         0LL,
         0LL,
         0);
  v4 = v5;
  if ( v5 < 0 )
  {
    v10 = 326;
    goto LABEL_15;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct IWICBitmapSource **))(**((_QWORD **)this + 38) + 144LL))(
         *((_QWORD *)this + 38),
         v12,
         2LL,
         &v11);
  v4 = v5;
  if ( v5 < 0 )
  {
    v10 = 330;
    goto LABEL_15;
  }
  if ( !v11 )
  {
    v4 = -2147024890;
    v10 = 331;
    v7 = -2147024890;
LABEL_9:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v10);
    goto LABEL_22;
  }
  v5 = ((__int64 (*)(void))v11->lpVtbl[1].Release)();
  v4 = v5;
  if ( v5 < 0 )
  {
    v10 = 333;
LABEL_15:
    v7 = v5;
    goto LABEL_9;
  }
  v8 = HrCreateBitmapFromWICBitmapSource(v11, &v13);
  v4 = v8;
  if ( v8 >= 0 )
  {
    *((_QWORD *)this + 35) = v13;
    goto LABEL_22;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x152u);
  v1 = v13;
LABEL_20:
  if ( v1 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v1 + 16LL))(v1);
LABEL_22:
  if ( v11 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v11->lpVtbl->Release)(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return v4;
}
