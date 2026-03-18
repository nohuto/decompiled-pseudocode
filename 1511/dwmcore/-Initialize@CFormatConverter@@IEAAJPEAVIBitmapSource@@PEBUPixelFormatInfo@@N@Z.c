/*
 * XREFs of ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@N@Z @ 0x180154BF0
 * Callers:
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180154A28 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800A2498 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?IsValidPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@@Z @ 0x1800A33A0 (-IsValidPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@@Z.c)
 *     ?HrCheckDstPixelFormat@CFormatConverter@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1801549F4 (-HrCheckDstPixelFormat@CFormatConverter@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJPEBUPixelFormatInfo@@0IE@Z @ 0x180154EE0 (-InitializeForFormatConversion@CScanPipeline@@QEAAJPEBUPixelFormatInfo@@0IE@Z.c)
 */

__int64 __fastcall CFormatConverter::Initialize(
        CFormatConverter *this,
        struct IBitmapSource *a2,
        enum DXGI_FORMAT *a3,
        double a4)
{
  CFormatConverter *v6; // rbp
  bool v7; // zf
  int v8; // r9d
  int v9; // edi
  float v10; // xmm0_4
  int *v11; // r13
  int v12; // eax
  int v13; // eax
  CFormatConverter *v14; // rcx
  int v15; // eax
  unsigned __int8 v17; // [rsp+20h] [rbp-48h]
  unsigned int v18; // [rsp+20h] [rbp-48h]
  CFormatConverter *v19; // [rsp+70h] [rbp+8h] BYREF

  v6 = this;
  if ( this )
    this = (CFormatConverter *)((char *)this + 16);
  v7 = *((_BYTE *)this + 48) == 0;
  v19 = this;
  if ( !v7 )
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  if ( !a2 || !IsValidPixelFormatInfo(a3) )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1AEu);
    goto LABEL_39;
  }
  v8 = 0;
  *((_OWORD *)v6 + 7) = *(_OWORD *)a3;
  *((_QWORD *)v6 + 16) = *((_QWORD *)a3 + 2);
  if ( a4 < 0.0 || a4 > 100.0 )
    v8 = -2147024809;
  v9 = v8;
  if ( v8 < 0 )
  {
    v18 = 435;
    goto LABEL_12;
  }
  v7 = *((_QWORD *)v6 + 10) == 0LL;
  v10 = a4;
  *((float *)v6 + 36) = v10;
  if ( !v7 )
  {
    v9 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x1BCu);
LABEL_39:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1D7u);
    goto LABEL_40;
  }
  v11 = (int *)((char *)v6 + 88);
  v12 = (*(__int64 (__fastcall **)(struct IBitmapSource *, __int64))(*(_QWORD *)a2 + 24LL))(a2, (__int64)v6 + 88);
  v9 = v12;
  if ( v12 >= 0 )
  {
    *((_DWORD *)v6 + 23) = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 32LL))(a2);
    v13 = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 40LL))(a2);
    *((_QWORD *)v6 + 13) = 0LL;
    v9 = -2003292288;
    *((_DWORD *)v6 + 24) = v13;
    v15 = *v11;
    if ( *v11 == 2 || v15 > 9 && (v15 <= 11 || v15 == 24 || v15 == 28 || v15 == 65 || (unsigned int)(v15 - 87) <= 1) )
      v9 = 0;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1C4u);
      goto LABEL_36;
    }
    v12 = CFormatConverter::HrCheckDstPixelFormat(v14, *((_DWORD *)v6 + 28));
    v9 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(struct IBitmapSource *, __int64, __int64))(*(_QWORD *)a2 + 56LL))(
              a2,
              (__int64)v6 + 136,
              (__int64)v6 + 140);
      v9 = v12;
      if ( v12 >= 0 )
      {
        v12 = CScanPipeline::InitializeForFormatConversion(
                (CFormatConverter *)((char *)v6 + 152),
                (CFormatConverter *)((char *)v6 + 112),
                (CFormatConverter *)((char *)v6 + 88),
                *((_DWORD *)v6 + 34),
                v17);
        v9 = v12;
        if ( v12 >= 0 )
        {
          *((_QWORD *)v6 + 10) = a2;
          (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 8LL))(a2);
          goto LABEL_36;
        }
        v18 = 462;
      }
      else
      {
        v18 = 455;
      }
    }
    else
    {
      v18 = 453;
    }
  }
  else
  {
    v18 = 447;
  }
  v8 = v12;
LABEL_12:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v18);
LABEL_36:
  if ( v9 < 0 )
    goto LABEL_39;
LABEL_40:
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v19);
  return (unsigned int)v9;
}
