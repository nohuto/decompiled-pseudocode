/*
 * XREFs of ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800725DC
 * Callers:
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x180072800 (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180072EF8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800498AE (memcmp_0.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 */

__int64 __fastcall CMagnifier::OnSetColorEffect(CMagnifier *this, const struct MilColorTransform *a2)
{
  unsigned int v3; // ebx
  CResource *v5; // rcx
  int v6; // eax
  int v7; // eax
  char *v8; // r15
  int v9; // eax
  int v10; // eax
  __int128 v11; // xmm1
  CResource *v12; // rcx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // eax
  CResource *v18; // rcx
  int v19; // eax
  int v21; // [rsp+30h] [rbp-59h] BYREF
  __int64 v22; // [rsp+34h] [rbp-55h]
  int v23; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v24[4]; // [rsp+44h] [rbp-45h] BYREF
  __int128 v25; // [rsp+48h] [rbp-41h]
  __int128 v26; // [rsp+58h] [rbp-31h]
  __int128 v27; // [rsp+68h] [rbp-21h]
  __int128 v28; // [rsp+78h] [rbp-11h]
  __int128 v29; // [rsp+88h] [rbp-1h]
  __int128 v30; // [rsp+98h] [rbp+Fh]
  int v31; // [rsp+A8h] [rbp+1Fh]

  v21 = 108;
  v3 = 0;
  v22 = 0LL;
  if ( memcmp_0(&gMilColorTransfIdentity, a2, 0x64uLL) )
  {
    if ( !memcmp_0((char *)this + 76, a2, 0x64uLL) )
      return v3;
    v8 = (char *)this + 48;
    if ( !*((_QWORD *)this + 6) )
    {
      v9 = CResource::Create(0x30u, *((_QWORD *)this + 2), (CBaseObject **)this + 6);
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0xD3u);
        return v3;
      }
    }
    v23 = 35;
    memset_0(v24, 0, 0x68uLL);
    v10 = *((_DWORD *)a2 + 24);
    v11 = *((_OWORD *)a2 + 1);
    v12 = *(CResource **)v8;
    v25 = *(_OWORD *)a2;
    v31 = v10;
    v13 = *((_OWORD *)a2 + 2);
    v26 = v11;
    v14 = *((_OWORD *)a2 + 3);
    v27 = v13;
    v15 = *((_OWORD *)a2 + 4);
    v28 = v14;
    v16 = *((_OWORD *)a2 + 5);
    v29 = v15;
    v30 = v16;
    v17 = CResource::Send(v12, &v23, 0x6Cu);
    v3 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0xD8u);
      return v3;
    }
    v18 = (CResource *)*((_QWORD *)this + 4);
    HIDWORD(v22) = *(_DWORD *)(*(_QWORD *)v8 + 24LL);
    v19 = CResource::Send(v18, &v21, 0xCu);
    v3 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0xDBu);
      return v3;
    }
    *(_OWORD *)((char *)this + 76) = *(_OWORD *)a2;
    *(_OWORD *)((char *)this + 92) = *((_OWORD *)a2 + 1);
    *(_OWORD *)((char *)this + 108) = *((_OWORD *)a2 + 2);
    *(_OWORD *)((char *)this + 124) = *((_OWORD *)a2 + 3);
    *(_OWORD *)((char *)this + 140) = *((_OWORD *)a2 + 4);
    *(_OWORD *)((char *)this + 156) = *((_OWORD *)a2 + 5);
    v7 = *((_DWORD *)a2 + 24);
LABEL_15:
    *((_DWORD *)this + 43) = v7;
    return v3;
  }
  v5 = (CResource *)*((_QWORD *)this + 4);
  HIDWORD(v22) = 0;
  v6 = CResource::Send(v5, &v21, 0xCu);
  v3 = v6;
  if ( v6 >= 0 )
  {
    *(_OWORD *)((char *)this + 76) = gMilColorTransfIdentity;
    *(_OWORD *)((char *)this + 92) = xmmword_1800B9620;
    *(_OWORD *)((char *)this + 108) = xmmword_1800B9630;
    *(_OWORD *)((char *)this + 124) = xmmword_1800B9640;
    *(_OWORD *)((char *)this + 140) = xmmword_1800B9650;
    *(_OWORD *)((char *)this + 156) = xmmword_1800B9660;
    v7 = dword_1800B9670;
    goto LABEL_15;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0xC4u);
  return v3;
}
