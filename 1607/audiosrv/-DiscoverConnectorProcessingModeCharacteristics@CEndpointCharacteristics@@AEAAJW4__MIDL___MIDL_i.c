/*
 * XREFs of ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1800880D8
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18002DF50 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800038A4 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x18002765C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ?Add@?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAHAEBQEAVCConnectorProcessingModeCharacteristics@@@Z @ 0x1800345A0 (-Add@-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAV.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180036700 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$ForEachCandidateFormatForMode@V_lambda_54c77e54e42ef152cdcef462696c326e_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@U_GUID@@V_lambda_54c77e54e42ef152cdcef462696c326e_@@@Z @ 0x1800854E4 (--$ForEachCandidateFormatForMode@V_lambda_54c77e54e42ef152cdcef462696c326e_@@@CEndpointCharacter.c)
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x1800876EC (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
        __int64 a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        int a3,
        unsigned int *a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9)
{
  __int64 v9; // r14
  int v11; // edi
  _QWORD *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rbx
  int v15; // r13d
  __int64 v16; // r12
  __int64 v17; // rax
  __int128 v18; // xmm6
  CConnectorProcessingModeCharacteristics *v19; // rax
  CConnectorProcessingModeCharacteristics *v20; // r14
  __int64 v21; // rax
  _DWORD Size[3]; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD *v25; // [rsp+40h] [rbp-C0h]
  __int64 v26; // [rsp+48h] [rbp-B8h]
  unsigned int *v27; // [rsp+50h] [rbp-B0h]
  __int64 *v28; // [rsp+58h] [rbp-A8h]
  __int128 v29; // [rsp+60h] [rbp-A0h]
  __m256i v30; // [rsp+70h] [rbp-90h]
  __int128 v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-50h]
  __int64 v34[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v35[2]; // [rsp+D0h] [rbp-30h] BYREF
  __m256i v36; // [rsp+E0h] [rbp-20h]
  __int128 v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+110h] [rbp+10h]
  struct _GUID v39; // [rsp+120h] [rbp+20h] BYREF
  __int128 v40; // [rsp+130h] [rbp+30h]

  v33 = -2LL;
  v27 = a4;
  Size[0] = a3;
  v9 = a2;
  v28 = a8;
  v11 = 0;
  v26 = 0LL;
  v39 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a2 == eHostProcessConnector )
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      (CEndpointCharacteristics *)a1,
      eHostProcessConnector,
      &v39,
      0LL,
      0LL);
  v12 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = (__int64)v12;
  v25 = v12;
  if ( v12 )
  {
    *v12 = 0LL;
    v12[1] = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  v14 = v13;
  v26 = v13;
  if ( v13 )
  {
    v15 = 0;
    v16 = 2 * v9;
    if ( *(int *)(a1 + 16 * v9 + 72) <= 0 )
    {
LABEL_26:
      v14 = 0LL;
      *v28 = v13;
    }
    else
    {
      v17 = a1 + 16 * (v9 + 4);
      v25 = (_QWORD *)v17;
      while ( 1 )
      {
        v18 = *(_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v17, v15);
        v40 = v18;
        v19 = (CConnectorProcessingModeCharacteristics *)operator new(
                                                           0x30uLL,
                                                           (const struct std::nothrow_t *)&std::nothrow);
        v20 = v19;
        *(_QWORD *)&Size[1] = v19;
        if ( v19 )
        {
          *(_OWORD *)v19 = v18;
          *((_QWORD *)v19 + 2) = 0LL;
          *((_QWORD *)v19 + 3) = 0LL;
          *((_QWORD *)v19 + 4) = 0LL;
          *((_QWORD *)v19 + 5) = 0LL;
        }
        else
        {
          v20 = 0LL;
        }
        *(_QWORD *)&Size[1] = v20;
        if ( !v20 )
          break;
        *(_QWORD *)&v29 = v20;
        *((_QWORD *)&v29 + 1) = a1;
        v30.m256i_i32[0] = a2;
        *(_OWORD *)((char *)v30.m256i_i64 + 4) = v18;
        v30.m256i_i64[3] = a5;
        LOBYTE(v31) = a6;
        *((_QWORD *)&v31 + 1) = a7;
        v32 = a9;
        *(_OWORD *)v35 = v29;
        v36 = v30;
        v37 = v31;
        v38 = a9;
        *(_OWORD *)v34 = v18;
        v11 = CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_54c77e54e42ef152cdcef462696c326e_>(
                a1,
                a2,
                Size[0],
                v27,
                (struct _GUID *)v34,
                (__int128 *)v35);
        if ( v11 < 0 )
          goto LABEL_24;
        if ( !*((_DWORD *)v20 + 6) )
        {
          *(_DWORD *)(a1 + 404) = 1;
          v21 = *(_QWORD *)&v39.Data1 - v40;
          if ( *(_QWORD *)&v39.Data1 == (_QWORD)v40 )
            v21 = *(_QWORD *)v39.Data4 - *((_QWORD *)&v40 + 1);
          if ( !v21 )
            *(_QWORD *)(a1 + 376) = 0LL;
        }
        if ( !(unsigned int)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::Add(
                              v13,
                              &Size[1]) )
        {
          v11 = -2147024882;
LABEL_24:
          CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v20);
          goto LABEL_27;
        }
        ++v15;
        v17 = (__int64)v25;
        if ( v15 >= *(_DWORD *)(a1 + 8 * v16 + 72) )
          goto LABEL_26;
      }
      v11 = -2147024882;
    }
  }
  else
  {
    v11 = -2147024882;
  }
LABEL_27:
  if ( v14 )
  {
    if ( *(_QWORD *)v14 )
    {
      free(*(void **)v14);
      *(_QWORD *)v14 = 0LL;
    }
    *(_QWORD *)(v14 + 8) = 0LL;
    operator delete((void *)v14);
  }
  return (unsigned int)v11;
}
