/*
 * XREFs of ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180072730
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180162844 (-GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PE.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180164480 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x180164A18 (-RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource.c)
 * Callees:
 *     ??1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ @ 0x1800226EC (--1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18002EA8C (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x180081F30 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 *     ?SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ @ 0x180083630 (-SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800838A0 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?Release@CMILBrushBitmap@@UEAAKXZ @ 0x1800845A0 (-Release@CMILBrushBitmap@@UEAAKXZ.c)
 *     ?SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ @ 0x180084890 (-SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ.c)
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x180084D70 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     ?GetColorSpace@CBitmap@@UEAA?AW4ColorSpace@@XZ @ 0x180085130 (-GetColorSpace@CBitmap@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180085190 (-GetAlphaMode@CBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800851F0 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?Create@CMILBrushBitmap@@SAJPEAPEAV1@@Z @ 0x1800B76C8 (-Create@CMILBrushBitmap@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTexturedColorSource::RealizeFromBitmapSource(
        struct CD3DDeviceLevel1 *a1,
        CBitmap *this,
        __int128 *a3,
        int a4,
        int a5,
        __int64 a6,
        CHwBitmapColorSource **a7)
{
  int v7; // edi
  __int64 v8; // rsi
  CBitmapOfDeviceBitmaps *v12; // rcx
  void (*v13)(void); // rax
  __int64 v14; // rbx
  bool v15; // zf
  __int64 v16; // rax
  __int64 (__fastcall *v17)(CBitmap *__hidden, enum DXGI_FORMAT *); // rax
  enum DXGI_ALPHA_MODE (__fastcall *v18)(CBitmap *__hidden); // rax
  enum DXGI_ALPHA_MODE AlphaMode; // eax
  __int64 (__fastcall *v20)(CBitmap *); // rax
  enum DXGI_FORMAT ColorSpace; // eax
  int v22; // eax
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int128 v25; // xmm3
  int v26; // eax
  CMILBrushBitmap *v27; // rdi
  void (__fastcall *v28)(CMILBrushBitmap *__hidden); // rax
  __int128 v29; // xmm0
  __int64 v30; // xmm1_8
  __int64 v31; // rax
  __int64 (__fastcall *v32)(CBitmap *__hidden, unsigned int *, unsigned int *); // rax
  int Size; // eax
  int v34; // eax
  CHwBitmapColorSource *v35; // r15
  __int64 (__fastcall *v36)(CHwBitmapColorSource *__hidden); // rax
  int v37; // eax
  char *v38; // r8
  char *v39; // rdx
  __int64 v40; // r9
  unsigned int (__fastcall *v41)(CMILBrushBitmap *__hidden); // rax
  _QWORD *v43; // rcx
  _QWORD *v44; // rax
  int v45; // eax
  char *v46; // rdx
  char *i; // r8
  __int64 v48; // r9
  _QWORD *v49; // rcx
  _QWORD *v50; // rax
  unsigned int v51; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v52; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v53; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+40h] [rbp-C0h] BYREF
  CHwBitmapColorSource *v55; // [rsp+48h] [rbp-B8h] BYREF
  enum DXGI_FORMAT v56[6]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v57; // [rsp+68h] [rbp-98h]
  __int128 v58; // [rsp+78h] [rbp-88h]
  int v59; // [rsp+88h] [rbp-78h]
  void **v60; // [rsp+90h] [rbp-70h] BYREF
  int v61; // [rsp+98h] [rbp-68h]
  void **v62; // [rsp+A0h] [rbp-60h]
  int v63; // [rsp+A8h] [rbp-58h]
  __int64 v64; // [rsp+B0h] [rbp-50h]
  void **v65; // [rsp+B8h] [rbp-48h] BYREF
  int v66; // [rsp+C0h] [rbp-40h]
  int v67; // [rsp+C4h] [rbp-3Ch]
  int v68; // [rsp+C8h] [rbp-38h]
  __int64 v69; // [rsp+D0h] [rbp-30h]
  void **v70; // [rsp+D8h] [rbp-28h]
  __int128 v71; // [rsp+E0h] [rbp-20h]
  CMILBrushBitmap *v72; // [rsp+F0h] [rbp-10h]
  _QWORD v73[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v74; // [rsp+110h] [rbp+10h]
  __int64 v75; // [rsp+120h] [rbp+20h]
  int v76; // [rsp+128h] [rbp+28h]
  int v77; // [rsp+12Ch] [rbp+2Ch]
  int v78; // [rsp+130h] [rbp+30h]
  int v79; // [rsp+134h] [rbp+34h]
  float v80; // [rsp+138h] [rbp+38h]
  float v81; // [rsp+13Ch] [rbp+3Ch]
  __int64 v82; // [rsp+140h] [rbp+40h]
  unsigned int v84; // [rsp+1C0h] [rbp+C0h]

  v84 = a5 & 0xFFFFFFFE;
  v7 = 0;
  v8 = 0LL;
  v55 = 0LL;
  if ( *((_QWORD *)a1 + 96) || (v45 = CMILBrushBitmap::Create((struct CMILBrushBitmap **)a1 + 96), v7 = v45, v45 >= 0) )
  {
    v12 = (CBitmapOfDeviceBitmaps *)*((_QWORD *)a1 + 96);
    v13 = *(void (**)(void))(*(_QWORD *)v12 + 8LL);
    if ( (char *)v13 == (char *)CBitmapOfDeviceBitmaps::AddRef )
      CBitmapOfDeviceBitmaps::AddRef(v12);
    else
      v13();
    v8 = *((_QWORD *)a1 + 96);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0x185u);
  }
  v51 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x12Eu);
    goto LABEL_45;
  }
  v54 = 0LL;
  v14 = 0LL;
  if ( v8 )
  {
    v15 = (*(_DWORD *)(v8 + 120))++ == -1;
    v14 = v8;
    v54 = v8;
    if ( v15 )
      *(_DWORD *)(v8 + 120) = 1;
    *(_QWORD *)(v8 + 200) = this;
    *(_DWORD *)(v8 + 208) = 0;
    v16 = *(_QWORD *)this;
    memset(v56, 0, sizeof(v56));
    v17 = *(__int64 (__fastcall **)(CBitmap *__hidden, enum DXGI_FORMAT *))(v16 + 24);
    if ( v17 == CBitmap::GetPixelFormat )
      CBitmap::GetPixelFormat(this, v56);
    else
      v17(this, v56);
    v18 = *(enum DXGI_ALPHA_MODE (__fastcall **)(CBitmap *__hidden))(*(_QWORD *)this + 32LL);
    if ( v18 == CBitmap::GetAlphaMode )
      AlphaMode = CBitmap::GetAlphaMode(this);
    else
      AlphaMode = v18(this);
    v56[1] = AlphaMode;
    v20 = *(__int64 (__fastcall **)(CBitmap *))(*(_QWORD *)this + 40LL);
    if ( (char *)v20 == (char *)CBitmap::GetColorSpace )
      ColorSpace = (unsigned int)CBitmap::GetColorSpace(this);
    else
      ColorSpace = (unsigned int)v20(this);
    v56[2] = ColorSpace;
    *(_OWORD *)(v8 + 32) = *(_OWORD *)v56;
    *(_QWORD *)(v8 + 48) = *(_QWORD *)&v56[4];
    v22 = dword_1801EAD50;
    v23 = xmmword_1801EAD20;
    v24 = xmmword_1801EAD30;
    v25 = xmmword_1801EAD40;
    *(_OWORD *)(v8 + 128) = CMILMatrix::Identity;
    *(_OWORD *)(v8 + 144) = v23;
    *(_OWORD *)(v8 + 160) = v24;
    *(_OWORD *)(v8 + 176) = v25;
    *(_DWORD *)(v8 + 192) = v22;
    *(_DWORD *)(v8 + 124) = 1;
    if ( a6 )
    {
      *(_OWORD *)(v8 + 228) = *(_OWORD *)a6;
      *(_OWORD *)(v8 + 244) = *(_OWORD *)(a6 + 16);
      v26 = *(_DWORD *)(a6 + 32);
    }
    else
    {
      *(_OWORD *)(v8 + 228) = _xmm;
      LOBYTE(v59) = 0;
      v26 = v59;
      *(_OWORD *)(v8 + 244) = 0LL;
      v57 = _xmm;
      v58 = 0LL;
    }
    *(_DWORD *)(v8 + 260) = v26;
    *(_DWORD *)(v8 + 264) = v84;
  }
  v63 = 0;
  v61 = 0;
  v60 = &CLegacyMilBrushRealizer::`vftable';
  v62 = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILObject'};
  v65 = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILBrush'};
  v64 = 0LL;
  v66 = 0;
  v69 = 0LL;
  v72 = 0LL;
  v70 = &LocalMILObject<CMILBrushSolid>::`vftable'{for `IMILBrushSolid'};
  v67 = 3;
  v68 = 1;
  v71 = 0LL;
  CMILBrush::SetDefaultRealizationPixelFormat((CMILBrush *)&v65);
  v60 = &LocalMILObject<CImmediateBrushRealizer>::`vftable';
  if ( v8 )
    v27 = (CMILBrushBitmap *)(v8 + 24);
  else
    v27 = 0LL;
  if ( v72 )
    (*(void (__fastcall **)(CMILBrushBitmap *))(*(_QWORD *)v72 + 16LL))(v72);
  v72 = v27;
  if ( v27 )
  {
    (*(void (__fastcall **)(CMILBrushBitmap *))(*(_QWORD *)v27 + 8LL))(v27);
    v27 = v72;
    if ( v72 )
    {
      v28 = *(void (__fastcall **)(CMILBrushBitmap *__hidden))(*(_QWORD *)v72 + 48LL);
      if ( v28 == CMILBrushBitmap::SetDefaultRealizationPixelFormat )
        CMILBrushBitmap::SetDefaultRealizationPixelFormat(v72);
      else
        v28(v72);
      v27 = v72;
    }
  }
  if ( a3 )
  {
    *(_OWORD *)((char *)v27 + 8) = *a3;
    *((_QWORD *)v27 + 3) = *((_QWORD *)a3 + 2);
  }
  v29 = *a3;
  v77 = 1;
  v30 = *((_QWORD *)a3 + 2);
  v73[0] = &g_scratchContextState;
  v74 = v29;
  v73[1] = &CMILMatrix::Identity;
  v76 = a4;
  v31 = *(_QWORD *)this;
  v75 = v30;
  v82 = 0LL;
  v32 = *(__int64 (__fastcall **)(CBitmap *__hidden, unsigned int *, unsigned int *))(v31 + 56);
  if ( v32 == CBitmap::GetSize )
    Size = CBitmap::GetSize(this, &v52, &v53);
  else
    Size = v32(this, &v52, &v53);
  v51 = Size;
  v7 = Size;
  if ( Size < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Size, 0x15Eu);
    v60 = &CImmediateBrushRealizer::`vftable';
    CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)&v60);
    CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v54);
    goto LABEL_45;
  }
  v78 = 1056964608;
  v79 = 1056964608;
  v80 = (float)(int)v52 - 0.5;
  v81 = (float)(int)v53 - 0.5;
  v34 = CHwBitmapColorSource::DeriveFromBrushAndContext(
          a1,
          (struct CMILBrushBitmap *)v8,
          (const struct CHwBrushContext *)v73,
          &v55);
  v51 = v34;
  v7 = v34;
  if ( v34 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x16Au);
    v60 = &CImmediateBrushRealizer::`vftable';
    CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)&v60);
    CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v54);
    v35 = v55;
  }
  else
  {
    v35 = v55;
    ++*((_DWORD *)a1 + 222);
    v36 = *(__int64 (__fastcall **)(CHwBitmapColorSource *__hidden))(*(_QWORD *)v35 + 40LL);
    if ( v36 == CHwBitmapColorSource::Realize )
      v37 = CHwBitmapColorSource::Realize(v35);
    else
      v37 = v36(v35);
    v51 = v37;
    v7 = v37;
    if ( v37 >= 0 )
    {
      *a7 = v35;
      v38 = (char *)a1 + 960;
      v39 = (char *)*((_QWORD *)a1 + 121);
      if ( v39 != (char *)a1 + 960 )
      {
        do
        {
          if ( *((_DWORD *)v39 + 8) != *((_DWORD *)a1 + 222) )
            break;
          *((_DWORD *)v39 + 8) = 0;
          v39 = (char *)*((_QWORD *)v39 + 1);
        }
        while ( v39 != v38 );
      }
      v40 = *(_QWORD *)v39;
      if ( *(char **)v39 != v38 )
      {
        v43 = (_QWORD *)*((_QWORD *)a1 + 121);
        *(_QWORD *)v39 = v38;
        v44 = (_QWORD *)*((_QWORD *)a1 + 119);
        *((_QWORD *)a1 + 121) = v39;
        *v44 = v40;
        *(_QWORD *)(v40 + 8) = v44;
        *((_QWORD *)a1 + 119) = v43;
        *v43 = (char *)a1 + 944;
      }
      --*((_DWORD *)a1 + 222);
      v60 = &CLegacyMilBrushRealizer::`vftable';
      if ( v72 )
        (*(void (__fastcall **)(CMILBrushBitmap *))(*(_QWORD *)v72 + 16LL))(v72);
      v65 = &CMILBrushSolid::`vftable'{for `CMILBrush'};
      v70 = &CMILBrushSolid::`vftable'{for `IMILBrushSolid'};
      v62 = &CMILCOMBase::`vftable';
      v60 = &CMILRefCountBase::`vftable';
      if ( v14 )
      {
        v15 = (*(_DWORD *)(v14 + 120))++ == -1;
        if ( v15 )
          *(_DWORD *)(v14 + 120) = 1;
        *(_QWORD *)(v14 + 200) = 0LL;
      }
      goto LABEL_45;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x171u);
    v46 = (char *)*((_QWORD *)a1 + 121);
    for ( i = (char *)a1 + 960; v46 != i; v46 = (char *)*((_QWORD *)v46 + 1) )
    {
      if ( *((_DWORD *)v46 + 8) != *((_DWORD *)a1 + 222) )
        break;
      *((_DWORD *)v46 + 8) = 0;
    }
    v48 = *(_QWORD *)v46;
    if ( *(char **)v46 != i )
    {
      v49 = (_QWORD *)*((_QWORD *)a1 + 121);
      *(_QWORD *)v46 = i;
      v50 = (_QWORD *)*((_QWORD *)a1 + 119);
      *((_QWORD *)a1 + 121) = v46;
      *v50 = v48;
      *(_QWORD *)(v48 + 8) = v50;
      *((_QWORD *)a1 + 119) = v49;
      *v49 = (char *)a1 + 944;
    }
    --*((_DWORD *)a1 + 222);
    v60 = &CImmediateBrushRealizer::`vftable';
    CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)&v60);
    CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v54);
  }
  if ( v35 )
    (*(void (__fastcall **)(CHwBitmapColorSource *))(*(_QWORD *)v35 + 8LL))(v35);
LABEL_45:
  if ( v8 )
  {
    v41 = *(unsigned int (__fastcall **)(CMILBrushBitmap *__hidden))(*(_QWORD *)v8 + 16LL);
    if ( v41 == CMILBrushBitmap::Release )
      CMILBrushBitmap::Release((CMILBrushBitmap *)v8);
    else
      v41((CMILBrushBitmap *)v8);
  }
  TranslateDXGIorD3DErrorInContext((unsigned int)v7, 0LL, &v51);
  return v51;
}
