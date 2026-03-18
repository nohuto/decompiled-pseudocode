/*
 * XREFs of ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x18003F7D0
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180023530 (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180124FDC (-GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PE.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18012520C (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x180125778 (-RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource.c)
 * Callees:
 *     ??1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ @ 0x180016178 (--1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ.c)
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x18001BE60 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800411B0 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180042CF0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x1800468D0 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x180080880 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     ?GetColorSpace@CBitmap@@UEAA?AW4ColorSpace@@XZ @ 0x180080C90 (-GetColorSpace@CBitmap@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180080CF0 (-GetAlphaMode@CBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180080D50 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?SetRealizedBrush@CBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z @ 0x18008138C (-SetRealizedBrush@CBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z.c)
 *     ??1CBrushRealizer@@MEAA@XZ @ 0x180081448 (--1CBrushRealizer@@MEAA@XZ.c)
 *     ?SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ @ 0x1800815F0 (-SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x180083270 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     ?Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z @ 0x180096D50 (-Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwTexturedColorSource::RealizeFromBitmapSource(
        struct CD3DDeviceLevel1 *a1,
        CBitmap *this,
        __int128 *a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  DWORD CurrentThreadId; // eax
  int v11; // r15d
  __int64 v12; // rsi
  struct IBitmapSource *v13; // rdx
  struct CMILFactory *v14; // rcx
  CBitmapOfDeviceBitmaps *v15; // rdi
  __int64 (__fastcall *v16)(CBitmapOfDeviceBitmaps *); // rsi
  bool v17; // zf
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 (__fastcall *v20)(CBitmap *__hidden, enum DXGI_FORMAT *); // r15
  enum DXGI_ALPHA_MODE (__fastcall *v21)(CBitmap *__hidden); // r15
  enum DXGI_ALPHA_MODE AlphaMode; // eax
  __int64 (__fastcall *v23)(CBitmap *); // r15
  int ColorSpace; // eax
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int128 v27; // xmm3
  int v28; // eax
  struct CMILBrush *v29; // rdx
  __int64 v30; // rax
  __int128 v31; // xmm0
  __int64 v32; // xmm1_8
  __int64 v33; // rax
  __int64 (__fastcall *v34)(CBitmap *__hidden, unsigned int *, unsigned int *); // rdi
  int Size; // eax
  int v36; // eax
  struct CHwTexturedColorSource *v37; // rdi
  __int64 (__fastcall *v38)(CHwBitmapColorSource *); // r15
  int v39; // eax
  char *v40; // r8
  char *v41; // rdx
  __int64 v42; // r9
  unsigned int (__fastcall *v43)(CBitmapRealization *__hidden); // rbx
  _QWORD *v45; // rcx
  _QWORD *v46; // rax
  int v47; // eax
  char *v48; // rdx
  char *i; // r8
  __int64 v50; // r9
  _QWORD *v51; // rcx
  _QWORD *v52; // rax
  unsigned int v53; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v54; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v55[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+48h] [rbp-C0h] BYREF
  struct CD3DDeviceLevel1 *v57; // [rsp+50h] [rbp-B8h] BYREF
  struct CHwTexturedColorSource *v58; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v59[24]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v60[3]; // [rsp+78h] [rbp-90h]
  __int128 v61; // [rsp+90h] [rbp-78h]
  int v62; // [rsp+A0h] [rbp-68h]
  void **v63; // [rsp+A8h] [rbp-60h] BYREF
  int v64; // [rsp+B0h] [rbp-58h]
  void **v65; // [rsp+B8h] [rbp-50h]
  int v66; // [rsp+C0h] [rbp-48h]
  __int64 v67; // [rsp+C8h] [rbp-40h]
  void **v68; // [rsp+D0h] [rbp-38h] BYREF
  int v69; // [rsp+D8h] [rbp-30h]
  int v70; // [rsp+DCh] [rbp-2Ch]
  int v71; // [rsp+E0h] [rbp-28h]
  __int64 v72; // [rsp+E8h] [rbp-20h]
  void **v73; // [rsp+F0h] [rbp-18h]
  __int128 v74; // [rsp+F8h] [rbp-10h]
  __int64 v75; // [rsp+108h] [rbp+0h]
  _QWORD v76[2]; // [rsp+118h] [rbp+10h] BYREF
  __int128 v77; // [rsp+128h] [rbp+20h]
  __int64 v78; // [rsp+138h] [rbp+30h]
  int v79; // [rsp+140h] [rbp+38h]
  int v80; // [rsp+144h] [rbp+3Ch]
  int v81; // [rsp+148h] [rbp+40h]
  int v82; // [rsp+14Ch] [rbp+44h]
  float v83; // [rsp+150h] [rbp+48h]
  float v84; // [rsp+154h] [rbp+4Ch]
  __int64 v85; // [rsp+158h] [rbp+50h]
  unsigned int v87; // [rsp+1D8h] [rbp+D0h]

  v87 = a5 & 0xFFFFFFFE;
  ++*((_DWORD *)a1 + 128);
  v60[0] = a7;
  v58 = 0LL;
  v57 = a1;
  CurrentThreadId = GetCurrentThreadId();
  ++*((_DWORD *)a1 + 128);
  v11 = 0;
  *((_DWORD *)a1 + 129) = CurrentThreadId;
  v12 = 0LL;
  *((_DWORD *)a1 + 129) = GetCurrentThreadId();
  if ( *((_QWORD *)a1 + 103)
    || (v47 = CMILBrushBitmap::Create(v14, v13, (struct CMILBrushBitmap **)a1 + 103), v11 = v47, v47 >= 0) )
  {
    v15 = (CBitmapOfDeviceBitmaps *)*((_QWORD *)a1 + 103);
    v16 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v15 + 8LL);
    if ( v16 == CBitmapOfDeviceBitmaps::AddRef )
      CBitmapOfDeviceBitmaps::AddRef(v15);
    else
      v16(*((CBitmapOfDeviceBitmaps **)a1 + 103));
    v12 = *((_QWORD *)a1 + 103);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v47, 0x1F2u);
  }
  v17 = (*((_DWORD *)a1 + 128))-- == 1;
  if ( v17 )
    *((_DWORD *)a1 + 129) = 0;
  v53 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x130u);
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v57);
    goto LABEL_42;
  }
  v18 = 0LL;
  v56 = 0LL;
  if ( v12 )
  {
    v17 = (*(_DWORD *)(v12 + 120))++ == -1;
    v18 = v12;
    v56 = v12;
    if ( v17 )
      *(_DWORD *)(v12 + 120) = 1;
    *(_QWORD *)(v12 + 192) = this;
    *(_DWORD *)(v12 + 200) = 0;
    v19 = *(_QWORD *)this;
    memset(v59, 0, sizeof(v59));
    v20 = *(__int64 (__fastcall **)(CBitmap *__hidden, enum DXGI_FORMAT *))(v19 + 24);
    if ( v20 == CBitmap::GetPixelFormat )
      CBitmap::GetPixelFormat(this, (enum DXGI_FORMAT *)v59);
    else
      v20(this, (enum DXGI_FORMAT *)v59);
    v21 = *(enum DXGI_ALPHA_MODE (__fastcall **)(CBitmap *__hidden))(*(_QWORD *)this + 32LL);
    if ( v21 == CBitmap::GetAlphaMode )
      AlphaMode = CBitmap::GetAlphaMode(this);
    else
      AlphaMode = v21(this);
    *(_DWORD *)&v59[4] = AlphaMode;
    v23 = *(__int64 (__fastcall **)(CBitmap *))(*(_QWORD *)this + 40LL);
    if ( (char *)v23 == (char *)CBitmap::GetColorSpace )
      ColorSpace = CBitmap::GetColorSpace(this);
    else
      ColorSpace = v23(this);
    *(_DWORD *)&v59[8] = ColorSpace;
    *(_OWORD *)(v12 + 32) = *(_OWORD *)v59;
    *(_QWORD *)(v12 + 48) = *(_QWORD *)&v59[16];
    v25 = xmmword_180190B10;
    v26 = xmmword_180190B20;
    v27 = xmmword_180190B30;
    *(_OWORD *)(v12 + 128) = IdentityMatrix;
    *(_OWORD *)(v12 + 144) = v25;
    *(_OWORD *)(v12 + 160) = v26;
    *(_OWORD *)(v12 + 176) = v27;
    *(_DWORD *)(v12 + 124) = 1;
    if ( a6 )
    {
      *(_OWORD *)(v12 + 220) = *(_OWORD *)a6;
      *(_OWORD *)(v12 + 236) = *(_OWORD *)(a6 + 16);
      v28 = *(_DWORD *)(a6 + 32);
    }
    else
    {
      *(_OWORD *)(v12 + 220) = _xmm;
      LOBYTE(v62) = 0;
      v28 = v62;
      *(_OWORD *)(v12 + 236) = 0LL;
      *(_OWORD *)&v60[1] = _xmm;
      v61 = 0LL;
    }
    *(_DWORD *)(v12 + 252) = v28;
    *(_DWORD *)(v12 + 256) = v87;
  }
  v66 = 0;
  v64 = 0;
  v63 = &CBrushRealizer::`vftable';
  v67 = 0LL;
  v65 = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILObject'};
  v68 = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILBrush'};
  v73 = &LocalMILObject<CMILBrushSolid>::`vftable'{for `IMILBrushSolid'};
  v69 = 0;
  v70 = 3;
  v71 = 1;
  v72 = 0LL;
  v75 = 0LL;
  v74 = 0LL;
  CMILBrush::SetDefaultRealizationPixelFormat((CMILBrush *)&v68);
  v63 = &LocalMILObject<CImmediateBrushRealizer>::`vftable';
  if ( v12 )
    v29 = (struct CMILBrush *)(v12 + 24);
  else
    v29 = 0LL;
  CBrushRealizer::SetRealizedBrush((CBrushRealizer *)&v63, v29, 0LL);
  if ( a3 )
  {
    v30 = v75;
    *(_OWORD *)(v75 + 8) = *a3;
    *(_QWORD *)(v30 + 24) = *((_QWORD *)a3 + 2);
  }
  v31 = *a3;
  v80 = 1;
  v32 = *((_QWORD *)a3 + 2);
  v76[0] = &g_scratchContextState;
  v76[1] = &IdentityMatrix;
  v79 = a4;
  v33 = *(_QWORD *)this;
  v77 = v31;
  v78 = v32;
  v85 = 0LL;
  v34 = *(__int64 (__fastcall **)(CBitmap *__hidden, unsigned int *, unsigned int *))(v33 + 56);
  if ( v34 == CBitmap::GetSize )
    Size = CBitmap::GetSize(this, v55, &v54);
  else
    Size = v34(this, v55, &v54);
  v53 = Size;
  v11 = Size;
  if ( Size < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Size, 0x160u);
    v63 = &CImmediateBrushRealizer::`vftable';
    CBrushRealizer::~CBrushRealizer((CBrushRealizer *)&v63);
    CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v56);
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v57);
    goto LABEL_42;
  }
  v81 = 1056964608;
  v82 = 1056964608;
  v83 = (float)(int)v55[0] - 0.5;
  v84 = (float)(int)v54 - 0.5;
  v36 = CHwBitmapColorSource::DeriveFromBrushAndContext(
          a1,
          (struct CMILBrushBitmap *)v12,
          (const struct CHwBrushContext *)v76,
          &v58);
  v53 = v36;
  v11 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x16Cu);
    v63 = &CImmediateBrushRealizer::`vftable';
    CBrushRealizer::~CBrushRealizer((CBrushRealizer *)&v63);
    CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v56);
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v57);
    v37 = v58;
  }
  else
  {
    ++*((_DWORD *)a1 + 226);
    v37 = v58;
    v38 = *(__int64 (__fastcall **)(CHwBitmapColorSource *))(*(_QWORD *)v58 + 40LL);
    if ( v38 == CHwBitmapColorSource::Realize )
      v39 = CHwBitmapColorSource::Realize(v58);
    else
      v39 = v38(v58);
    v53 = v39;
    v11 = v39;
    if ( v39 >= 0 )
    {
      v40 = (char *)a1 + 976;
      *(_QWORD *)v60[0] = v37;
      v41 = (char *)*((_QWORD *)a1 + 123);
      if ( v41 != (char *)a1 + 976 )
      {
        do
        {
          if ( *((_DWORD *)v41 + 8) != *((_DWORD *)a1 + 226) )
            break;
          *((_DWORD *)v41 + 8) = 0;
          v41 = (char *)*((_QWORD *)v41 + 1);
        }
        while ( v41 != v40 );
      }
      v42 = *(_QWORD *)v41;
      if ( *(char **)v41 != v40 )
      {
        v45 = (_QWORD *)*((_QWORD *)a1 + 123);
        *(_QWORD *)v41 = v40;
        v46 = (_QWORD *)*((_QWORD *)a1 + 121);
        *((_QWORD *)a1 + 123) = v41;
        *v46 = v42;
        *(_QWORD *)(v42 + 8) = v46;
        *((_QWORD *)a1 + 121) = v45;
        *v45 = (char *)a1 + 960;
      }
      --*((_DWORD *)a1 + 226);
      v63 = &CBrushRealizer::`vftable';
      if ( v75 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
      v68 = &CMILBrushSolid::`vftable'{for `CMILBrush'};
      v73 = &CMILBrushSolid::`vftable'{for `IMILBrushSolid'};
      v65 = &CMILCOMBase::`vftable';
      v63 = &CMILRefCountBase::`vftable';
      if ( v18 )
      {
        v17 = (*(_DWORD *)(v18 + 120))++ == -1;
        if ( v17 )
          *(_DWORD *)(v18 + 120) = 1;
        *(_QWORD *)(v18 + 192) = 0LL;
      }
      v17 = (*((_DWORD *)a1 + 128))-- == 1;
      if ( v17 )
        *((_DWORD *)a1 + 129) = 0;
      goto LABEL_42;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x173u);
    v48 = (char *)*((_QWORD *)a1 + 123);
    for ( i = (char *)a1 + 976; v48 != i; v48 = (char *)*((_QWORD *)v48 + 1) )
    {
      if ( *((_DWORD *)v48 + 8) != *((_DWORD *)a1 + 226) )
        break;
      *((_DWORD *)v48 + 8) = 0;
    }
    v50 = *(_QWORD *)v48;
    if ( *(char **)v48 != i )
    {
      v51 = (_QWORD *)*((_QWORD *)a1 + 123);
      *(_QWORD *)v48 = i;
      v52 = (_QWORD *)*((_QWORD *)a1 + 121);
      *((_QWORD *)a1 + 123) = v48;
      *v52 = v50;
      *(_QWORD *)(v50 + 8) = v52;
      *((_QWORD *)a1 + 121) = v51;
      *v51 = (char *)a1 + 960;
    }
    --*((_DWORD *)a1 + 226);
    v63 = &CImmediateBrushRealizer::`vftable';
    CBrushRealizer::~CBrushRealizer((CBrushRealizer *)&v63);
    CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v56);
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v57);
  }
  if ( v37 )
    (*(void (__fastcall **)(struct CHwTexturedColorSource *))(*(_QWORD *)v37 + 8LL))(v37);
LABEL_42:
  if ( v12 )
  {
    v43 = *(unsigned int (__fastcall **)(CBitmapRealization *__hidden))(*(_QWORD *)v12 + 16LL);
    if ( v43 == CBitmapRealization::Release )
      CBitmapRealization::Release((CBitmapRealization *)v12);
    else
      v43((CBitmapRealization *)v12);
  }
  TranslateDXGIorD3DErrorInContext((unsigned int)v11, 0LL, &v53);
  return v53;
}
