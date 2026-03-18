/*
 * XREFs of ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@AEAVCVertexConstantBuffer@@AEBVCLightsMask@@@Z @ 0x180056190
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x1800565C0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180055220 (-GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoC.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800939E0 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?GetD3D11TextureAddressFromExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4ExtendMode@@@Z @ 0x1800B77C4 (-GetD3D11TextureAddressFromExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4ExtendMode@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 *     ?LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801747A8 (-LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEA.c)
 */

__int64 __fastcall CCommonRenderingEffect::SetStateOnDevice(
        CCommonRenderingEffect *this,
        struct CD3DDeviceLevel1 *a2,
        struct _LUID *a3,
        const struct DisplayId *a4,
        const enum StereoContext *a5,
        struct CVertexConstantBuffer *a6,
        const struct CLightsMask *a7)
{
  __int64 v7; // r15
  __int64 v8; // rax
  struct IBitmapRealization *v11; // rbx
  bool v12; // zf
  __int64 v13; // rdi
  __int64 v14; // rdi
  char *v15; // rsi
  __int64 v16; // r14
  __int128 *i; // rbx
  CCompositionSurfaceBitmap *v18; // rcx
  __int64 v20; // rax
  __int64 (__fastcall *v21)(CCompositionSurfaceBitmap *__hidden, struct IBitmapRealization **); // rax
  int v22; // eax
  unsigned int v23; // r12d
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 (__fastcall *v27)(__int64, __int64, unsigned int, unsigned int, struct ID3D11ShaderResourceView **); // rax
  int BitmapShaderResourceViewNoRef; // eax
  int v29; // ecx
  int v30; // r12d
  _QWORD *v31; // r8
  struct IBitmapRealization *v32; // rcx
  int v33; // eax
  int D3D11TextureAddressFromExtendMode; // eax
  __int64 v35; // rcx
  int v36; // r9d
  __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  unsigned int v41; // r12d
  struct IBitmapRealization *v42[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v43; // [rsp+40h] [rbp-C0h]
  __int16 v44; // [rsp+50h] [rbp-B0h]
  _QWORD *v45; // [rsp+60h] [rbp-A0h]
  __int128 v46; // [rsp+68h] [rbp-98h]
  __int128 v47; // [rsp+78h] [rbp-88h]
  __int128 v48; // [rsp+88h] [rbp-78h]
  int v49; // [rsp+98h] [rbp-68h]
  const enum StereoContext *v50; // [rsp+A0h] [rbp-60h]
  const struct DisplayId *v51; // [rsp+A8h] [rbp-58h]
  __int64 *v52; // [rsp+B0h] [rbp-50h]
  __int128 v53; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v54; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v55[3]; // [rsp+D8h] [rbp-28h] BYREF
  int v56; // [rsp+108h] [rbp+8h]

  v7 = *((_QWORD *)a2 + 72);
  v50 = a5;
  v8 = *((unsigned int *)this + 8);
  v52 = (__int64 *)a3;
  v51 = a4;
  v11 = (struct IBitmapRealization *)*((_QWORD *)a2 + v8 + 141);
  v42[0] = v11;
  v12 = *(_DWORD *)a7 == -1;
  LODWORD(v45) = 0;
  v54 = 0LL;
  v53 = 0LL;
  if ( v12 )
  {
    v13 = *((_QWORD *)a2 + 137);
  }
  else
  {
    v13 = *((_QWORD *)a2 + 138);
    v40 = CD3DDeviceLevel1::LinkPixelShader(a2, (unsigned int)v8, a7, v42);
    LODWORD(v45) = v40;
    v41 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x117u);
      return v41;
    }
    v11 = v42[0];
  }
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 88LL))(v7, v13, 0LL, 0LL);
  (*(void (__fastcall **)(__int64, struct IBitmapRealization *, _QWORD, _QWORD))(*(_QWORD *)v7 + 72LL))(
    v7,
    v11,
    0LL,
    0LL);
  v14 = 0LL;
  v15 = (char *)this + 24;
  v16 = this - (CCommonRenderingEffect *)&v53;
  for ( i = &v53; ; i = (__int128 *)((char *)i + 8) )
  {
    v18 = *(CCompositionSurfaceBitmap **)((char *)i + v16 + 8);
    if ( !v18 )
      goto LABEL_5;
    v20 = *(_QWORD *)v18;
    v42[0] = 0LL;
    v21 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *__hidden, struct IBitmapRealization **))(v20 + 72);
    v22 = v21 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization
        ? CCompositionSurfaceBitmap::GetCurrentRenderingRealization(v18, v42)
        : v21(v18, v42);
    v23 = v22;
    if ( v22 < 0 )
      break;
    v24 = *(unsigned int *)v50;
    v25 = *(unsigned int *)v51;
    v26 = *v52;
    v27 = *(__int64 (__fastcall **)(__int64, __int64, unsigned int, unsigned int, struct ID3D11ShaderResourceView **))(*(_QWORD *)v42[0] + 120LL);
    if ( v27 == CDxHandleBitmapRealization::GetBitmapShaderResourceViewNoRef )
      BitmapShaderResourceViewNoRef = CDxHandleBitmapRealization::GetBitmapShaderResourceViewNoRef(
                                        (__int64)v42[0],
                                        v26,
                                        v25,
                                        v24,
                                        (struct ID3D11ShaderResourceView **)&v55[-1] + v14);
    else
      BitmapShaderResourceViewNoRef = ((__int64 (__fastcall *)(struct IBitmapRealization *, __int64, __int64, __int64))v27)(
                                        v42[0],
                                        v26,
                                        v25,
                                        v24);
    v23 = BitmapShaderResourceViewNoRef;
    if ( BitmapShaderResourceViewNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapShaderResourceViewNoRef, 0x13Du);
      goto LABEL_47;
    }
    v29 = (unsigned __int8)*(_WORD *)v15;
    v30 = 0;
    v43 = *(_WORD *)v15;
    v31 = (_QWORD *)((char *)a2 + 128 * v29 + 32 * (unsigned int)HIBYTE(v43) + 8 * (unsigned __int8)v15[2] + 1632);
    v45 = v31;
    if ( !*v31 )
    {
      v44 = *(_WORD *)v15;
      if ( (_BYTE)v44 )
        v33 = 21;
      else
        v33 = 0;
      LODWORD(v46) = v33;
      D3D11TextureAddressFromExtendMode = GetD3D11TextureAddressFromExtendMode(HIBYTE(v44));
      v35 = (unsigned __int8)v15[2];
      DWORD1(v46) = D3D11TextureAddressFromExtendMode;
      DWORD2(v46) = GetD3D11TextureAddressFromExtendMode(v35);
      HIDWORD(v46) = GetD3D11TextureAddressFromExtendMode(0LL);
      v49 = 2139095039;
      v56 = 2139095039;
      *(_QWORD *)&v47 = (unsigned int)v37 | 0x100000000LL;
      *((_QWORD *)&v47 + 1) = 8LL;
      *(_QWORD *)((char *)&v48 + 4) = v37;
      LODWORD(v48) = v37;
      HIDWORD(v48) = v37;
      v55[0] = v46;
      v55[1] = v47;
      v55[2] = v48;
      if ( DWORD1(v46) == 4 || v36 == 4 || HIDWORD(v46) == 4 )
        v38 = 37632;
      else
        v38 = 37120;
      if ( *((_DWORD *)a2 + 169) < v38 )
      {
        v30 = -2147024809;
        if ( IsOOM(-2147024809) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xF8Fu);
LABEL_44:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x142u);
        Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)v42);
        return (unsigned int)v30;
      }
      v39 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *))(**((_QWORD **)a2 + 71) + 184LL))(*((_QWORD *)a2 + 71), v55);
      v30 = v39;
      if ( v39 < 0 )
      {
        if ( IsOOM(v39) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0xF8Bu);
        goto LABEL_16;
      }
      v31 = v45;
    }
    *(_QWORD *)i = *v31;
LABEL_16:
    LODWORD(v45) = v30;
    if ( v30 < 0 )
      goto LABEL_44;
    v32 = v42[0];
    if ( v42[0] )
    {
      v42[0] = 0LL;
      (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v32 + 16LL))(v32);
    }
LABEL_5:
    v14 = (unsigned int)(v14 + 1);
    v15 += 3;
    if ( (unsigned int)v14 >= 2 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v7 + 64LL))(v7, 0LL, 2LL, &v54);
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v7 + 80LL))(v7, 0LL, 2LL, &v53);
      return (unsigned int)v45;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x138u);
LABEL_47:
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)v42);
  return v23;
}
