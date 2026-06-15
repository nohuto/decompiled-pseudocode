/*
 * XREFs of ??$ForEachCandidateFormatForMode@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@U_GUID@@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@Z @ 0x1800A4570
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x1800A56E8 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800110D0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180013340 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@QEAA@XZ @ 0x180039564 (--1-$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004796C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18007F8A0 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180083EAC (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x1800A4F3C (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     _lambda_418c5ae5971ebab8b75617066dde6fa1_::operator() @ 0x1800A4F74 (_lambda_418c5ae5971ebab8b75617066dde6fa1_--operator().c)
 *     ?AddUniqueFormatToList@@YAJAEAV?$CSimpleArray@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V?$CSimpleArrayEqualHelper@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@2@@ATL@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@2@@Z @ 0x1800A5214 (-AddUniqueFormatToList@@YAJAEAV-$CSimpleArray@V-$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V-$CSimpleArr.c)
 *     ?FormatPassesBasicValidation@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x1800A5D00 (-FormatPassesBasicValidation@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetComputedDefaultFormat@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800A6000 (-GetComputedDefaultFormat@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?IsFormatInList@@YAHAEAV?$CSimpleArray@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V?$CSimpleArrayEqualHelper@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@2@@ATL@@PEAUtWAVEFORMATEX@@@Z @ 0x1800A6D40 (-IsFormatInList@@YAHAEAV-$CSimpleArray@V-$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V-$CSimpleArrayEqual.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_418c5ae5971ebab8b75617066dde6fa1_>(
        struct IMMDevice **this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        __int64 a6)
{
  int v8; // r13d
  int v9; // r14d
  void *v10; // rbx
  unsigned int v11; // edi
  _QWORD *v12; // rax
  int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // r12d
  int v17; // r15d
  int *v18; // rax
  int *v19; // rcx
  int v20; // r8d
  int *v21; // rsi
  int v22; // eax
  int v23; // ecx
  LPVOID *v24; // rbx
  __int64 v25; // rdi
  struct tWAVEFORMATEX *v27; // [rsp+28h] [rbp-E0h] BYREF
  void *Block; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v29; // [rsp+38h] [rbp-D0h]
  __int64 v30; // [rsp+40h] [rbp-C8h]
  struct tagPROPVARIANT pvar; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v32[3]; // [rsp+60h] [rbp-A8h] BYREF
  void *v33; // [rsp+78h] [rbp-90h]
  __int64 v34; // [rsp+80h] [rbp-88h]
  __int64 v35; // [rsp+88h] [rbp-80h]
  _WORD v36[2]; // [rsp+90h] [rbp-78h] BYREF
  int v37; // [rsp+94h] [rbp-74h]
  int v38; // [rsp+98h] [rbp-70h]
  unsigned __int16 v39; // [rsp+9Ch] [rbp-6Ch]
  __int16 v40; // [rsp+9Eh] [rbp-6Ah]
  __int16 v41; // [rsp+A0h] [rbp-68h]
  __int16 v42; // [rsp+A2h] [rbp-66h]
  int v43; // [rsp+A4h] [rbp-64h]
  GUID v44; // [rsp+A8h] [rbp-60h]
  _DWORD v45[14]; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v46[2]; // [rsp+F0h] [rbp-18h] BYREF
  int v47; // [rsp+110h] [rbp+8h]
  int v48; // [rsp+114h] [rbp+Ch]
  _DWORD v49[2]; // [rsp+118h] [rbp+10h]
  __int64 v50; // [rsp+120h] [rbp+18h]
  __int128 v51; // [rsp+128h] [rbp+20h]
  __int128 v52; // [rsp+138h] [rbp+30h]
  int v53; // [rsp+148h] [rbp+40h]
  __int64 v54; // [rsp+150h] [rbp+48h]
  __int128 v55; // [rsp+158h] [rbp+50h]
  int v56; // [rsp+168h] [rbp+60h]
  __int64 v57; // [rsp+170h] [rbp+68h]
  __int128 v58; // [rsp+178h] [rbp+70h]
  int v59; // [rsp+188h] [rbp+80h]
  __int64 v60; // [rsp+190h] [rbp+88h]
  __int128 v61; // [rsp+198h] [rbp+90h]

  v35 = -2LL;
  v34 = a6;
  v8 = 0;
  Block = 0LL;
  v29 = 0LL;
  v9 = 0;
  memset(&pvar, 0, sizeof(pvar));
  v45[0] = 8000;
  v45[1] = 11025;
  v45[2] = 16000;
  v45[3] = 22050;
  v45[4] = 24000;
  v45[5] = 32000;
  v45[6] = 44100;
  v45[7] = 48000;
  v45[8] = 88200;
  v45[9] = 96000;
  v45[10] = 176400;
  v45[11] = 192000;
  v45[12] = 384000;
  v46[0] = _mm_load_si128((const __m128i *)&_xmm);
  v46[1] = _mm_load_si128((const __m128i *)&_xmm);
  v47 = 32;
  v48 = 32;
  v49[0] = 0;
  v50 = 0LL;
  v51 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_418c5ae5971ebab8b75617066dde6fa1_>'::`2'::s_ChannelMaskEntry_1;
  v52 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_418c5ae5971ebab8b75617066dde6fa1_>'::`2'::s_ChannelMaskEntry_2;
  v53 = 0;
  v54 = 0LL;
  v55 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_418c5ae5971ebab8b75617066dde6fa1_>'::`2'::s_ChannelMaskEntry_4;
  v56 = 0;
  v57 = 0LL;
  v58 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_418c5ae5971ebab8b75617066dde6fa1_>'::`2'::s_ChannelMaskEntry_6;
  v59 = 0;
  v60 = 0LL;
  v61 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_418c5ae5971ebab8b75617066dde6fa1_>'::`2'::s_ChannelMaskEntry_8;
  v10 = 0LL;
  v33 = 0LL;
  v27 = 0LL;
  *(_OWORD *)&v32[1] = *a5;
  if ( (int)CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
              (CEndpointCharacteristics *)this,
              a2,
              (struct _GUID *)&v32[1],
              &v27) >= 0
    && FormatPassesBasicValidation(v27) )
  {
    v9 = AddUniqueFormatToList(&Block, &v27);
    if ( v9 < 0 )
      goto LABEL_4;
  }
  ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>((LPVOID *)&v27);
  v27 = 0LL;
  if ( GetComputedDefaultFormat(this[2], a2, &v27) >= 0 && FormatPassesBasicValidation(v27) )
  {
    v9 = AddUniqueFormatToList(&Block, &v27);
    if ( v9 < 0 )
      goto LABEL_4;
  }
  ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>((LPVOID *)&v27);
  v27 = 0LL;
  if ( ((int (__fastcall *)(struct IMMDevice *, const PROPERTYKEY *, struct tagPROPVARIANT *))this[4]->lpVtbl->GetId)(
         this[4],
         &PKEY_AudioEngine_OEMFormat,
         &pvar) >= 0
    && pvar.vt == 65
    && IsValidWfxBlob(&pvar) )
  {
    v9 = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData);
    if ( v9 >= 0 )
    {
      v9 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, &v27);
      if ( v9 < 0 )
        goto LABEL_4;
      v9 = AddUniqueFormatToList(&Block, &v27);
      if ( v9 < 0 )
        goto LABEL_4;
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>((LPVOID *)&v27);
  v27 = 0LL;
  if ( ((int (__fastcall *)(struct IMMDevice *, const PROPERTYKEY *, struct tagPROPVARIANT *))this[4]->lpVtbl->GetId)(
         this[4],
         &PKEY_AudioEngine_DeviceFormat,
         &pvar) >= 0
    && pvar.vt == 65
    && IsValidWfxBlob(&pvar)
    && (v9 = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData), v9 >= 0)
    && ((v9 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, &v27), v9 < 0)
     || (v9 = AddUniqueFormatToList(&Block, &v27), v9 < 0)) )
  {
LABEL_4:
    ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>((LPVOID *)&v27);
  }
  else
  {
    PropVariantClear((PROPVARIANT *)&pvar);
    ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>((LPVOID *)&v27);
    v11 = 0;
    if ( (int)v29 <= 0 )
    {
LABEL_25:
      v10 = operator new[](0LL, (const struct std::nothrow_t *)&std::nothrow);
      v33 = v10;
      if ( v10 )
      {
        v13 = 0;
        v14 = 0LL;
        while ( 1 )
        {
          v15 = 2 * v14;
          v16 = v49[2 * v15];
          if ( v16 )
          {
            v17 = 0;
            if ( v16 > 0 )
              break;
          }
LABEL_41:
          v14 = ++v13;
          if ( (unsigned __int64)v13 >= 9 )
            goto LABEL_42;
        }
        v18 = (int *)*(&v50 + v15);
        v32[0] = v18;
LABEL_31:
        v19 = v45;
        v32[1] = v45;
LABEL_32:
        LODWORD(v30) = 0;
        v20 = *v19;
        LODWORD(v27) = *v19;
        v21 = (int *)v46 + 1;
        while ( 1 )
        {
          v22 = *v18;
          v23 = *v21;
          if ( !v22 && v13 <= 2 )
            v22 = 4 - (v13 != 1);
          v42 = *(v21 - 1);
          v43 = v22;
          v44 = GUID_00000001_0000_0010_8000_00aa00389b71;
          v36[0] = -2;
          v40 = v23;
          v41 = 22;
          v36[1] = v13;
          v37 = v20;
          v39 = v13 * ((unsigned __int16)v23 >> 3);
          v38 = v20 * v39;
          if ( !(unsigned int)IsFormatInList(&Block, v36) )
          {
            v9 = lambda_418c5ae5971ebab8b75617066dde6fa1_::operator()(v34, v36);
            if ( v9 < 0 )
              break;
          }
          LODWORD(v30) = v30 + 1;
          v21 += 2;
          v18 = (int *)v32[0];
          v20 = (int)v27;
          if ( (unsigned __int64)(int)v30 >= 5 )
          {
            ++v8;
            v19 = (int *)(v32[1] + 4LL);
            v32[1] += 4LL;
            v18 = (int *)v32[0];
            if ( (unsigned __int64)v8 < 0xD )
              goto LABEL_32;
            ++v17;
            v18 = (int *)(v32[0] + 4LL);
            v32[0] += 4LL;
            v8 = 0;
            if ( v17 < v16 )
              goto LABEL_31;
            goto LABEL_41;
          }
        }
      }
      else
      {
        v9 = -2147024882;
      }
    }
    else
    {
      while ( 1 )
      {
        v12 = (_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                          &Block,
                          v11);
        v9 = lambda_418c5ae5971ebab8b75617066dde6fa1_::operator()(a6, *v12);
        if ( v9 < 0 )
          break;
        if ( (int)++v11 >= (int)v29 )
          goto LABEL_25;
      }
    }
  }
LABEL_42:
  PropVariantClear((PROPVARIANT *)&pvar);
  operator delete(v10);
  v24 = (LPVOID *)Block;
  if ( Block )
  {
    if ( (int)v29 > 0 )
    {
      v25 = (unsigned int)v29;
      do
      {
        ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>(v24++);
        --v25;
      }
      while ( v25 );
    }
    free(Block);
  }
  return (unsigned int)v9;
}
