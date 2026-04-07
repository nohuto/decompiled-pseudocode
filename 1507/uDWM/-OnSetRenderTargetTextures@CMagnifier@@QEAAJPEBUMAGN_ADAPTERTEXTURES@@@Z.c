/*
 * XREFs of ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x180072800
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180072EF8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x180071F40 (-Initialize@CMagnifier@@AEAAJXZ.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800725DC (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 */

__int64 __fastcall CMagnifier::OnSetRenderTargetTextures(CMagnifier *this, const struct MAGN_ADAPTERTEXTURES *a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int v12; // eax
  unsigned int v13; // edi
  CResource *v14; // rcx
  int v15; // eax
  CResource *v16; // rcx
  int v17; // eax
  CBaseObject *v18; // rcx
  int v19; // eax
  int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm0
  _OWORD *v35; // rsi
  CResource *v36; // rcx
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  int v41; // eax
  unsigned int v42; // edx
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int128 v46; // xmm1
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm0
  _OWORD *v54; // rsi
  CResource *v55; // rcx
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  int v60; // eax
  int v62; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v63; // [rsp+34h] [rbp-CCh]
  int v64; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v65; // [rsp+44h] [rbp-BCh]
  _OWORD v66[6]; // [rsp+50h] [rbp-B0h] BYREF
  int v67; // [rsp+B0h] [rbp-50h]
  int v68; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v69[4]; // [rsp+C4h] [rbp-3Ch] BYREF
  __int64 v70; // [rsp+C8h] [rbp-38h]
  __int128 v71; // [rsp+D0h] [rbp-30h]
  __int128 v72; // [rsp+E0h] [rbp-20h]
  _OWORD v73[11]; // [rsp+F0h] [rbp-10h]
  int v74; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v75[4]; // [rsp+1A4h] [rbp+A4h] BYREF
  __int128 v76; // [rsp+1A8h] [rbp+A8h]
  __int128 v77; // [rsp+1B8h] [rbp+B8h]
  _OWORD v78[11]; // [rsp+1C8h] [rbp+C8h]

  v68 = 106;
  memset_0(v69, 0, 0xDCuLL);
  v74 = 109;
  memset_0(v75, 0, 0xD4uLL);
  v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)this + 44);
  if ( *(_DWORD *)a2 <= v5 )
  {
    if ( v4 > 6 )
      v4 = 6;
    v42 = 0;
    *((_DWORD *)this + 44) = v4;
    *((_DWORD *)this + 47) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 45) = *((_DWORD *)a2 + 2);
    for ( *((_DWORD *)this + 46) = *((_DWORD *)a2 + 3); v42 < *((_DWORD *)this + 44); v78[v43 / 0x10] = v46 )
    {
      v43 = 32LL * v42;
      v44 = v42++;
      v45 = 32 * (v44 + 6);
      *(_OWORD *)((char *)this + v45) = *(_OWORD *)((char *)a2 + v43 + 16);
      *(_OWORD *)((char *)this + v45 + 16) = *(_OWORD *)((char *)a2 + v43 + 32);
      v46 = *(_OWORD *)((char *)a2 + v43 + 32);
      v78[v43 / 0x10 - 1] = *(_OWORD *)((char *)a2 + v43 + 16);
    }
    v47 = *((_OWORD *)a2 + 1);
    v76 = *(_OWORD *)a2;
    v48 = *((_OWORD *)a2 + 2);
    v77 = v47;
    v49 = *((_OWORD *)a2 + 3);
    v78[0] = v48;
    v50 = *((_OWORD *)a2 + 4);
    v78[1] = v49;
    v51 = *((_OWORD *)a2 + 5);
    v78[2] = v50;
    v52 = *((_OWORD *)a2 + 6);
    v78[3] = v51;
    v78[4] = v52;
    v53 = *((_OWORD *)a2 + 7);
    v54 = (_OWORD *)((char *)a2 + 128);
    v55 = (CResource *)*((_QWORD *)this + 4);
    v78[5] = v53;
    v56 = v54[1];
    v78[6] = *v54;
    v57 = v54[2];
    v78[7] = v56;
    v58 = v54[3];
    v78[8] = v57;
    v59 = v54[4];
    v78[9] = v58;
    v78[10] = v59;
    v60 = CResource::Send(v55, &v74, 0xD8u);
    v13 = v60;
    if ( v60 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v60, 0x1D8u);
  }
  else
  {
    if ( v5 )
    {
      v6 = *(_OWORD *)((char *)this + 76);
      v7 = *(_OWORD *)((char *)this + 92);
      v67 = *((_DWORD *)this + 43);
      v66[0] = v6;
      v8 = *(_OWORD *)((char *)this + 108);
      v66[1] = v7;
      v9 = *(_OWORD *)((char *)this + 124);
      v66[2] = v8;
      v10 = *(_OWORD *)((char *)this + 140);
      v66[3] = v9;
      v11 = *(_OWORD *)((char *)this + 156);
      v66[4] = v10;
      v66[5] = v11;
      v12 = CMagnifier::OnSetColorEffect(this, (const struct MilColorTransform *)&gMilColorTransfIdentity);
      v13 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x199u);
        return v13;
      }
      v14 = (CResource *)*((_QWORD *)this + 4);
      v62 = 107;
      v63 = 0LL;
      v15 = CResource::Send(v14, &v62, 0xCu);
      v13 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x19Du);
        return v13;
      }
      v16 = (CResource *)*((_QWORD *)this + 4);
      v64 = 108;
      v65 = 0LL;
      v17 = CResource::Send(v16, &v64, 0xCu);
      v13 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x1A1u);
        return v13;
      }
      v18 = (CBaseObject *)*((_QWORD *)this + 4);
      if ( v18 )
      {
        CBaseObject::Release(v18);
        *((_QWORD *)this + 4) = 0LL;
      }
      *((_DWORD *)this + 44) = 0;
      v19 = CMagnifier::Initialize(this);
      v13 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x1A6u);
        return v13;
      }
      v20 = CMagnifier::OnSetColorEffect(this, (const struct MilColorTransform *)v66);
      v13 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x1A7u);
        return v13;
      }
    }
    v21 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 > 6u )
      v21 = 6;
    if ( v21 > 6 )
      v21 = 6;
    v22 = 0;
    *((_DWORD *)this + 44) = v21;
    *((_DWORD *)this + 47) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 45) = *((_DWORD *)a2 + 2);
    for ( *((_DWORD *)this + 46) = *((_DWORD *)a2 + 3); v22 < *((_DWORD *)this + 44); v73[v23 / 0x10] = v26 )
    {
      v23 = 32LL * v22;
      v24 = v22++;
      v25 = 32 * (v24 + 6);
      *(_OWORD *)((char *)this + v25) = *(_OWORD *)((char *)a2 + v23 + 16);
      *(_OWORD *)((char *)this + v25 + 16) = *(_OWORD *)((char *)a2 + v23 + 32);
      v26 = *(_OWORD *)((char *)a2 + v23 + 32);
      v73[v23 / 0x10 - 1] = *(_OWORD *)((char *)a2 + v23 + 16);
    }
    v27 = *(_OWORD *)a2;
    v28 = *((_OWORD *)a2 + 1);
    v70 = *((_QWORD *)this + 8);
    v71 = v27;
    v29 = *((_OWORD *)a2 + 2);
    v72 = v28;
    v30 = *((_OWORD *)a2 + 3);
    v73[0] = v29;
    v31 = *((_OWORD *)a2 + 4);
    v73[1] = v30;
    v32 = *((_OWORD *)a2 + 5);
    v73[2] = v31;
    v33 = *((_OWORD *)a2 + 6);
    v73[3] = v32;
    v73[4] = v33;
    v34 = *((_OWORD *)a2 + 7);
    v35 = (_OWORD *)((char *)a2 + 128);
    v36 = (CResource *)*((_QWORD *)this + 4);
    v73[5] = v34;
    v37 = v35[1];
    v73[6] = *v35;
    v38 = v35[2];
    v73[7] = v37;
    v39 = v35[3];
    v73[8] = v38;
    v40 = v35[4];
    v73[9] = v39;
    v73[10] = v40;
    v41 = CResource::Send(v36, &v68, 0xE0u);
    v13 = v41;
    if ( v41 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v41, 0x1BEu);
  }
  return v13;
}
