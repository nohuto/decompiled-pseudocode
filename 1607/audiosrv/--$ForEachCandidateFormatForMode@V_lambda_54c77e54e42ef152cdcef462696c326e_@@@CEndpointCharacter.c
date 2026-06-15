/*
 * XREFs of ??$ForEachCandidateFormatForMode@V_lambda_54c77e54e42ef152cdcef462696c326e_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@U_GUID@@V_lambda_54c77e54e42ef152cdcef462696c326e_@@@Z @ 0x1800854E4
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1800880D8 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001A650 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001C550 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ??4?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_eecca8a7_a629_4dba_9f23_20f6db42d990@@3U__s_GUID@@B@ATL@@QEAAPEAUIMMEndpointInternal@@PEAUIUnknown@@@Z @ 0x180027844 (--4-$CComQIPtr@UIMMEndpointInternal@@$1-_GUID_eecca8a7_a629_4dba_9f23_20f6db42d990@@3U__s_GUID@@.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18002947C (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180036724 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180036D30 (memset.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??$GetDeviceFormatInternal@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics@@AEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180086DDC (--$GetDeviceFormatInternal@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics.c)
 *     _lambda_54c77e54e42ef152cdcef462696c326e_::operator() @ 0x180087520 (_lambda_54c77e54e42ef152cdcef462696c326e_--operator().c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_54c77e54e42ef152cdcef462696c326e_>(
        __int64 a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        __int64 Size,
        unsigned int *a4,
        struct _GUID *a5,
        __int128 *a6)
{
  size_t v6; // r14
  int v9; // esi
  char *v10; // rdi
  __int128 v11; // xmm6
  __int128 v12; // xmm7
  __int128 v13; // xmm8
  __int128 v14; // xmm9
  __int64 v15; // xmm10_8
  int ProposedConnectorFormatForProcessingMode; // eax
  void *v17; // rbx
  __int64 v18; // r12
  void *v19; // rcx
  SIZE_T v20; // r13
  int v21; // ebx
  __int64 v22; // r15
  __int64 v23; // r15
  int v24; // r12d
  unsigned int *v25; // rax
  __int64 v26; // rdx
  char v27; // r10
  _BYTE *v28; // rcx
  size_t v29; // r9
  unsigned int *v30; // r8
  __int64 v31; // rdx
  size_t v32; // r11
  char *v33; // rax
  int *v34; // r13
  unsigned int *v35; // rax
  char v36; // r10
  _BYTE *v37; // rdx
  size_t v38; // r9
  unsigned int *v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // r12d
  int v43; // r13d
  char *v44; // rax
  int *v45; // r12
  unsigned int v46; // eax
  unsigned int *v47; // rcx
  char *v48; // r8
  size_t v49; // r10
  unsigned int *v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rdx
  char v53; // dl
  int v54; // edx
  int v55; // r8d
  char v57; // [rsp+38h] [rbp-D0h]
  int v58; // [rsp+3Ch] [rbp-CCh] BYREF
  LPVOID pv; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+48h] [rbp-C0h]
  int v61; // [rsp+50h] [rbp-B8h]
  int v62; // [rsp+54h] [rbp-B4h]
  unsigned int *v63; // [rsp+58h] [rbp-B0h]
  __int64 v64; // [rsp+60h] [rbp-A8h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+68h] [rbp-A0h] BYREF
  char *v66; // [rsp+80h] [rbp-88h]
  int *v67; // [rsp+88h] [rbp-80h]
  SIZE_T v68; // [rsp+90h] [rbp-78h]
  struct _GUID v69; // [rsp+98h] [rbp-70h] BYREF
  char *v70; // [rsp+A8h] [rbp-60h]
  __int64 v71; // [rsp+B0h] [rbp-58h]
  __int64 v72; // [rsp+B8h] [rbp-50h]
  __int64 v73; // [rsp+C0h] [rbp-48h]
  __int64 v74[2]; // [rsp+C8h] [rbp-40h] BYREF
  __m256i v75; // [rsp+D8h] [rbp-30h]
  __int128 v76; // [rsp+F8h] [rbp-10h]
  __int64 v77; // [rsp+108h] [rbp+0h]
  _DWORD v78[14]; // [rsp+118h] [rbp+10h] BYREF
  _OWORD v79[2]; // [rsp+150h] [rbp+48h] BYREF
  int v80; // [rsp+170h] [rbp+68h]
  int v81; // [rsp+174h] [rbp+6Ch]
  _DWORD v82[2]; // [rsp+178h] [rbp+70h]
  __int64 v83; // [rsp+180h] [rbp+78h]
  __int128 v84; // [rsp+188h] [rbp+80h]
  __int128 v85; // [rsp+198h] [rbp+90h]
  int v86; // [rsp+1A8h] [rbp+A0h]
  __int64 v87; // [rsp+1B0h] [rbp+A8h]
  __int128 v88; // [rsp+1B8h] [rbp+B0h]
  int v89; // [rsp+1C8h] [rbp+C0h]
  __int64 v90; // [rsp+1D0h] [rbp+C8h]
  __int128 v91; // [rsp+1D8h] [rbp+D0h]
  int v92; // [rsp+1E8h] [rbp+E0h]
  __int64 v93; // [rsp+1F0h] [rbp+E8h]
  __int128 v94; // [rsp+1F8h] [rbp+F0h]

  v73 = -2LL;
  v63 = a4;
  v6 = (unsigned int)Size;
  v60 = (__int64)a6;
  v71 = 0LL;
  v72 = 0LL;
  v9 = 0;
  memset(&pvar, 0, sizeof(pvar));
  v78[0] = 8000;
  v78[1] = 11025;
  v78[2] = 16000;
  v78[3] = 22050;
  v78[4] = 24000;
  v78[5] = 32000;
  v78[6] = 44100;
  v78[7] = 48000;
  v78[8] = 88200;
  v78[9] = 96000;
  v78[10] = 176400;
  v78[11] = 192000;
  v78[12] = 384000;
  v79[0] = _mm_load_si128((const __m128i *)&_xmm);
  v79[1] = _mm_load_si128((const __m128i *)&_xmm);
  v80 = 32;
  v81 = 32;
  v82[0] = 0;
  v83 = 0LL;
  v84 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_54c77e54e42ef152cdcef462696c326e_>'::`2'::s_ChannelMaskEntry_1;
  v85 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_54c77e54e42ef152cdcef462696c326e_>'::`2'::s_ChannelMaskEntry_2;
  v86 = 0;
  v87 = 0LL;
  v88 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_54c77e54e42ef152cdcef462696c326e_>'::`2'::s_ChannelMaskEntry_4;
  v89 = 0;
  v90 = 0LL;
  v91 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_54c77e54e42ef152cdcef462696c326e_>'::`2'::s_ChannelMaskEntry_6;
  v92 = 0;
  v93 = 0LL;
  v94 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_54c77e54e42ef152cdcef462696c326e_>'::`2'::s_ChannelMaskEntry_8;
  v10 = 0LL;
  v70 = 0LL;
  v11 = *a6;
  v12 = a6[1];
  v13 = a6[2];
  v14 = a6[3];
  v15 = *((_QWORD *)a6 + 8);
  v64 = 0LL;
  ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_eecca8a7_a629_4dba_9f23_20f6db42d990>::operator=(
    &v64,
    *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 16),
    Size);
  if ( v64 )
  {
    v58 = 0;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v64 + 88LL))(v64, &v58);
  }
  pv = 0LL;
  *(_OWORD *)v74 = v11;
  *(_OWORD *)v75.m256i_i8 = v12;
  *(_OWORD *)&v75.m256i_u64[2] = v13;
  v76 = v14;
  v77 = v15;
  CEndpointCharacteristics::GetDeviceFormatInternal<_lambda_55a42c7c3426bff891a3f62b8d46795a_>(
    a1,
    (__int64)v74,
    (__int64)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  *(_OWORD *)v74 = v11;
  *(_OWORD *)v75.m256i_i8 = v12;
  *(_OWORD *)&v75.m256i_u64[2] = v13;
  v76 = v14;
  v77 = v15;
  CEndpointCharacteristics::GetDeviceFormatInternal<_lambda_55a42c7c3426bff891a3f62b8d46795a_>(
    a1,
    (__int64)v74,
    (__int64)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  v69 = *a5;
  ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                               (CEndpointCharacteristics *)a1,
                                               a2,
                                               &v69,
                                               (struct tWAVEFORMATEX **)&pv);
  v17 = pv;
  if ( ProposedConnectorFormatForProcessingMode >= 0
    && *((_WORD *)pv + 7)
    && *((_DWORD *)pv + 2)
    && *((_WORD *)pv + 6)
    && *((_WORD *)pv + 1) )
  {
    v18 = v60;
    if ( *((_DWORD *)pv + 1) )
    {
      v9 = lambda_54c77e54e42ef152cdcef462696c326e_::operator()(v60, pv, 0LL);
      if ( v9 < 0 )
      {
        v19 = v17;
LABEL_11:
        CoTaskMemFree(v19);
        goto LABEL_85;
      }
    }
  }
  else
  {
    v18 = v60;
  }
  CoTaskMemFree(v17);
  *(_QWORD *)&v69.Data1 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, struct tagPROPVARIANT *))(**(_QWORD **)(a1 + 32) + 40LL))(
         *(_QWORD *)(a1 + 32),
         &PKEY_AudioEngine_DeviceFormat,
         &pvar) >= 0
    && pvar.vt == 65
    && IsValidWfxBlob(&pvar) )
  {
    v9 = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData);
    if ( v9 >= 0 )
    {
      v9 = lambda_54c77e54e42ef152cdcef462696c326e_::operator()(v18, pvar.bstrblobVal.pData, 0LL);
      if ( v9 < 0 )
      {
        v19 = 0LL;
        goto LABEL_11;
      }
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  CoTaskMemFree(0LL);
  v20 = (unsigned int)(3 * v6);
  v68 = v20;
  v10 = (char *)operator new[](v20, (const struct std::nothrow_t *)&std::nothrow);
  v70 = v10;
  if ( !v10 )
  {
    v9 = -2147024882;
    goto LABEL_85;
  }
  v21 = 0;
  v22 = 0LL;
  while ( 1 )
  {
    v23 = 2 * v22;
    v24 = v82[2 * v23];
    if ( v24 )
      break;
LABEL_84:
    v22 = ++v21;
    if ( (unsigned __int64)v21 >= 9 )
      goto LABEL_85;
  }
  memset(v10, 1, v20);
  v25 = v63;
  LODWORD(v26) = 0;
  v27 = 0;
  if ( !(_DWORD)v6 )
    goto LABEL_38;
  v28 = v10;
  v29 = v6;
  do
  {
    v30 = (unsigned int *)((char *)v25 + *v25);
    if ( !*v28 )
      goto LABEL_36;
    v31 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v25 + 2);
    if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v25 + 2) )
      v31 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v25 + 3);
    if ( v31 )
      goto LABEL_34;
    v26 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v25 + 4);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v25 + 4) )
      v26 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v25 + 5);
    if ( v26 )
    {
LABEL_34:
      LODWORD(v26) = 0;
    }
    else if ( v21 <= v25[16] )
    {
      *v28 = 1;
      v27 = 1;
      goto LABEL_36;
    }
    *v28 = 0;
LABEL_36:
    ++v28;
    v25 = v30;
    --v29;
  }
  while ( v29 );
  v20 = v68;
  if ( !v27 )
    goto LABEL_84;
LABEL_38:
  v61 = 0;
  if ( v24 <= 0 )
    goto LABEL_84;
  v32 = v6;
  v33 = &v10[v6];
  *(_QWORD *)&v69.Data1 = &v10[v6];
  pv = 0LL;
LABEL_40:
  v58 = v26;
  v34 = v78;
  v67 = v78;
  while ( 1 )
  {
    memcpy_0(v33, v10, v32);
    v62 = *v34;
    v35 = v63;
    v36 = 0;
    v32 = v6;
    if ( !(_DWORD)v6 )
      break;
    v37 = *(_BYTE **)&v69.Data1;
    v38 = v6;
    do
    {
      v39 = (unsigned int *)((char *)v35 + *v35);
      if ( *v37 )
      {
        v40 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v35 + 2);
        if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v35 + 2) )
          v40 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v35 + 3);
        if ( v40 )
          goto LABEL_53;
        v41 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v35 + 4);
        if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v35 + 4) )
          v41 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v35 + 5);
        if ( v41 || *v34 < v35[19] || *v34 > v35[20] )
        {
LABEL_53:
          *v37 = 0;
        }
        else
        {
          *v37 = 1;
          v36 = 1;
        }
      }
      ++v37;
      v35 = v39;
      --v38;
    }
    while ( v38 );
    v42 = v58;
    LODWORD(v26) = 0;
    if ( v36 )
      break;
LABEL_81:
    v58 = v42 + 1;
    v67 = ++v34;
    v33 = &v10[v32];
    if ( (unsigned __int64)(v42 + 1) >= 0xD )
    {
      ++v61;
      pv = (char *)pv + 4;
      v33 = &v10[v32];
      if ( v61 < v82[2 * v23] )
        goto LABEL_40;
      v20 = v68;
      goto LABEL_84;
    }
  }
  v43 = 0;
  v44 = &v10[(unsigned int)(2 * v6)];
  v66 = v44;
  v45 = (int *)v79 + 1;
LABEL_57:
  memcpy_0(v44, &v10[v32], v32);
  v46 = *(v45 - 1);
  v47 = v63;
  v57 = 0;
  if ( (_DWORD)v6 )
  {
    v48 = v66;
    v49 = v6;
    while ( 1 )
    {
      v50 = (unsigned int *)((char *)v47 + *v47);
      if ( !*v48 )
        goto LABEL_70;
      v51 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v47 + 2);
      if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v47 + 2) )
        v51 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v47 + 3);
      if ( v51 )
        break;
      v52 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v47 + 4);
      if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v47 + 4) )
        v52 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v47 + 5);
      if ( v52 || v46 < v47[17] || v46 > v47[18] )
        break;
      *v48 = 1;
      v53 = 1;
      v57 = 1;
LABEL_71:
      ++v48;
      v47 = v50;
      if ( !--v49 )
      {
        v32 = v6;
        if ( v53 )
          goto LABEL_73;
        LODWORD(v26) = 0;
LABEL_79:
        ++v43;
        v45 += 2;
        v44 = v66;
        if ( (unsigned __int64)v43 >= 5 )
        {
          v42 = v58;
          v34 = v67;
          goto LABEL_81;
        }
        goto LABEL_57;
      }
    }
    *v48 = 0;
LABEL_70:
    v53 = v57;
    goto LABEL_71;
  }
LABEL_73:
  v54 = *(_DWORD *)((char *)pv + *(&v83 + v23));
  v55 = *v45;
  if ( !v54 && v21 <= 2 )
    v54 = 4 - (v21 != 1);
  v75.m256i_i16[1] = v46;
  v75.m256i_i32[1] = v54;
  *(GUID *)&v75.m256i_u64[1] = GUID_00000001_0000_0010_8000_00aa00389b71;
  LOWORD(v74[0]) = -2;
  HIWORD(v74[1]) = v55;
  v75.m256i_i16[0] = 22;
  WORD1(v74[0]) = v21;
  HIDWORD(v74[0]) = v62;
  WORD2(v74[1]) = v21 * ((unsigned __int16)v55 >> 3);
  LODWORD(v74[1]) = v62 * WORD2(v74[1]);
  v9 = lambda_54c77e54e42ef152cdcef462696c326e_::operator()(v60, v74, 0LL);
  LODWORD(v26) = 0;
  if ( v9 >= 0 )
  {
    v32 = v6;
    goto LABEL_79;
  }
LABEL_85:
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( v64 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
  operator delete(v10);
  return (unsigned int)v9;
}
