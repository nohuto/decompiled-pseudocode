/*
 * XREFs of ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@@Z @ 0x18007AA50
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180034BF0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?IsMonitorSpecificContent@CBitmapRealization@@QEBA_NXZ @ 0x18000DBC4 (-IsMonitorSpecificContent@CBitmapRealization@@QEBA_NXZ.c)
 *     ?IsStereoContent@CBitmapRealization@@UEBA_NXZ @ 0x18000DBF0 (-IsStereoContent@CBitmapRealization@@UEBA_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18002F37C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800326A0 (-GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoC.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD3D11TextureAddressFromExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@ExtendMode@@@Z @ 0x1800B3FBC (-GetD3D11TextureAddressFromExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@ExtendMode@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CCommonRenderingEffect::SetStateOnDevice(
        CCommonRenderingEffect *this,
        struct CD3DDeviceLevel1 *a2,
        const struct _LUID *a3,
        const struct DisplayId *a4,
        const enum StereoContext *a5)
{
  __int64 *v5; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  char *v10; // r14
  unsigned int v11; // r12d
  __int64 v12; // r13
  __int64 v13; // r15
  struct ID3D11ShaderResourceView **v14; // rsi
  __int64 v15; // r13
  __int64 *v16; // rdi
  const enum StereoContext *v18; // rax
  unsigned int v19; // ecx
  unsigned int v20; // ebx
  struct _LUID v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r13
  int BitmapShaderResourceViewNoRef; // eax
  int v25; // ebx
  int v26; // edi
  char *v27; // rsi
  int v28; // eax
  int D3D11TextureAddressFromExtendMode; // eax
  __int64 v30; // rcx
  int v31; // r8d
  __int64 v32; // r9
  __int64 v33; // rcx
  int v34; // eax
  int v35; // eax
  __int64 v36; // rax
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  CCompositionSurfaceInfo *v38; // rcx
  struct CBitmapRealization *v39; // rax
  __int64 v40; // rax
  CBitmapRealization *v41; // rcx
  unsigned int v42; // [rsp+30h] [rbp-D0h]
  unsigned int v43; // [rsp+30h] [rbp-D0h]
  __int16 v44; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall *v45)(__int64, struct _LUID, int, __int64, struct ID3D11ShaderResourceView **); // [rsp+60h] [rbp-A0h]
  __int128 v46; // [rsp+68h] [rbp-98h] BYREF
  char *v47; // [rsp+78h] [rbp-88h]
  __int128 v48; // [rsp+80h] [rbp-80h]
  __int128 v49; // [rsp+90h] [rbp-70h]
  __int128 v50; // [rsp+A0h] [rbp-60h]
  int v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  const struct _LUID *v53; // [rsp+C0h] [rbp-40h]
  struct CD3DDeviceLevel1 *v54; // [rsp+C8h] [rbp-38h]
  const enum StereoContext *v55; // [rsp+D0h] [rbp-30h]
  unsigned int *v56; // [rsp+D8h] [rbp-28h]
  __int64 *v57; // [rsp+E0h] [rbp-20h]
  __int128 v58; // [rsp+E8h] [rbp-18h] BYREF
  _OWORD v59[3]; // [rsp+F8h] [rbp-8h] BYREF
  int v60; // [rsp+128h] [rbp+28h]

  v5 = (__int64 *)*((_QWORD *)a2 + 70);
  v55 = a5;
  v7 = *((unsigned int *)this + 8);
  v56 = (unsigned int *)a4;
  v53 = a3;
  v54 = a2;
  v8 = *((_QWORD *)a2 + v7 + 133);
  v46 = 0LL;
  v42 = 0;
  v58 = 0LL;
  v9 = *v5;
  v57 = v5;
  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(v9 + 88))(v5, *((_QWORD *)a2 + 132), 0LL, 0LL);
  (*(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(*v5 + 72))(v5, v8, 0LL, 0LL);
  v10 = (char *)this + 24;
  v11 = 0;
  v47 = (char *)this + 24;
  v12 = this - (CCommonRenderingEffect *)&v46;
  v52 = v12;
  v13 = 0LL;
  while ( 1 )
  {
    v14 = (struct ID3D11ShaderResourceView **)((char *)&v46 + v13);
    v15 = *(_QWORD *)((char *)&v46 + v13 + v12 + 8);
    if ( !v15 )
      goto LABEL_3;
    v18 = v55;
    *v14 = 0LL;
    v19 = *(_DWORD *)v18;
    v43 = *(_DWORD *)v18;
    v20 = *v56;
    v21 = *v53;
    if ( !*(_QWORD *)(v15 + 448) )
    {
      if ( *(_BYTE *)(v15 + 456) )
      {
        --*(_DWORD *)(*(_QWORD *)(v15 + 16) + 212LL);
        *(_BYTE *)(v15 + 456) = 0;
      }
      if ( *(_BYTE *)(v15 + 457) )
      {
        --*(_DWORD *)(*(_QWORD *)(v15 + 16) + 208LL);
        *(_BYTE *)(v15 + 457) = 0;
      }
      v36 = *(_QWORD *)(v15 + 448);
      if ( *(_QWORD *)(v15 + 440) )
      {
        if ( v36 )
        {
          (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(__int64, struct _LUID, int, __int64, struct ID3D11ShaderResourceView **)))(*(_QWORD *)v36 + 16LL))(
            *(_QWORD *)(v15 + 448),
            CDxHandleBitmapRealization::GetBitmapShaderResourceViewNoRef);
          v14 = (struct ID3D11ShaderResourceView **)((char *)&v46 + v13);
        }
        RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*(CCompositionSurfaceInfo **)(v15 + 440));
        v38 = *(CCompositionSurfaceInfo **)(v15 + 440);
        *(_QWORD *)(v15 + 448) = RenderingRealizationNoRef;
        if ( !CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v38) )
          goto LABEL_39;
        v39 = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*(CCompositionSurfaceInfo **)(v15 + 440));
        (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v39 + 8LL))(v39);
        v10 = v47;
      }
      else
      {
        if ( !v36 )
          goto LABEL_40;
        (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(__int64, struct _LUID, int, __int64, struct ID3D11ShaderResourceView **)))(*(_QWORD *)v36 + 16LL))(
          *(_QWORD *)(v15 + 448),
          CDxHandleBitmapRealization::GetBitmapShaderResourceViewNoRef);
        *(_QWORD *)(v15 + 448) = 0LL;
      }
      v14 = (struct ID3D11ShaderResourceView **)((char *)&v46 + v13);
LABEL_39:
      v19 = v43;
LABEL_40:
      v40 = *(_QWORD *)(v15 + 448);
      if ( v40 )
      {
        if ( CBitmapRealization::IsStereoContent((CBitmapRealization *)(v40 + 112)) )
        {
          ++*(_DWORD *)(*(_QWORD *)(v15 + 16) + 212LL);
          *(_BYTE *)(v15 + 456) = 1;
        }
        v41 = *(CBitmapRealization **)(v15 + 448);
        if ( *((_DWORD *)v41 + 42) || (unsigned __int8)CBitmapRealization::IsMonitorSpecificContent(v41) )
        {
          ++*(_DWORD *)(*(_QWORD *)(v15 + 16) + 208LL);
          *(_BYTE *)(v15 + 457) = 1;
        }
        v19 = v43;
      }
    }
    v22 = *(_QWORD *)(v15 + 448);
    if ( v22 )
    {
      v23 = v22 + 112;
      v45 = *(__int64 (__fastcall **)(__int64, struct _LUID, int, __int64, struct ID3D11ShaderResourceView **))(*(_QWORD *)(v22 + 112) + 112LL);
      if ( v45 == CDxHandleBitmapRealization::GetBitmapShaderResourceViewNoRef )
        BitmapShaderResourceViewNoRef = CDxHandleBitmapRealization::GetBitmapShaderResourceViewNoRef(
                                          v23,
                                          v21,
                                          v20,
                                          v19,
                                          v14);
      else
        BitmapShaderResourceViewNoRef = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v45)(
                                          v23,
                                          v21,
                                          v20,
                                          v43,
                                          v14);
      v25 = BitmapShaderResourceViewNoRef;
      if ( BitmapShaderResourceViewNoRef >= 0 )
        goto LABEL_11;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapShaderResourceViewNoRef, 0x75u);
    }
    else
    {
      v25 = -2003292412;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x79u);
    }
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xF8u);
      return (unsigned int)v25;
    }
LABEL_11:
    v26 = 0;
    v27 = (char *)v54
        + 128 * (unsigned int)(unsigned __int8)*(_WORD *)v10
        + 32 * (unsigned __int8)HIBYTE(*(_WORD *)v10)
        + 8 * (unsigned __int8)v10[2];
    if ( *((_QWORD *)v27 + 170) )
      goto LABEL_12;
    v44 = *(_WORD *)v10;
    v28 = (unsigned __int8)*(_WORD *)v10 ? 21 : 0;
    LODWORD(v48) = v28;
    D3D11TextureAddressFromExtendMode = GetD3D11TextureAddressFromExtendMode(HIBYTE(v44));
    v30 = (unsigned __int8)v10[2];
    DWORD1(v48) = D3D11TextureAddressFromExtendMode;
    DWORD2(v48) = GetD3D11TextureAddressFromExtendMode(v30);
    HIDWORD(v48) = GetD3D11TextureAddressFromExtendMode(0LL);
    v51 = 2139095039;
    v60 = 2139095039;
    *(_QWORD *)&v49 = (unsigned int)v33 | 0x100000000LL;
    *((_QWORD *)&v49 + 1) = 8LL;
    *(_QWORD *)((char *)&v50 + 4) = v33;
    LODWORD(v50) = v33;
    HIDWORD(v50) = v33;
    v59[0] = v48;
    v59[1] = v49;
    v59[2] = v50;
    if ( DWORD1(v48) == 4 || v31 == 4 || HIDWORD(v48) == 4 )
      v34 = 37632;
    else
      v34 = 37120;
    if ( *(_DWORD *)(v32 + 612) < v34 )
      break;
    v35 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**(_QWORD **)(v32 + 552) + 184LL))(
            *(_QWORD *)(v32 + 552),
            v59,
            v27 + 1360);
    v26 = v35;
    if ( v35 >= 0 )
    {
LABEL_12:
      *(_QWORD *)((char *)&v59[-1] + v13) = *((_QWORD *)v27 + 170);
      goto LABEL_13;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0xF76u);
LABEL_13:
    v25 = v26;
    v42 = v26;
    if ( v26 < 0 )
      goto LABEL_52;
LABEL_3:
    v10 += 3;
    ++v11;
    v13 += 8LL;
    v47 = v10;
    if ( v11 >= 2 )
    {
      v16 = v57;
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int128 *))(*v57 + 64))(v57, 0LL, 2LL, &v46);
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int128 *))(*v16 + 80))(v16, 0LL, 2LL, &v58);
      return v42;
    }
    v12 = v52;
  }
  v26 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xF7Au);
  v25 = -2147024809;
LABEL_52:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xFDu);
  return (unsigned int)v25;
}
