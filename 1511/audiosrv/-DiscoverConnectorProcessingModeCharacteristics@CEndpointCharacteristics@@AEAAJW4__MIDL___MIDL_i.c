/*
 * XREFs of ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x1800A56E8
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x1800409A8 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x18001127C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?Add@?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAHAEBQEAVCConnectorProcessingModeCharacteristics@@@Z @ 0x18003FC04 (-Add@-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAV.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180047938 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$ForEachCandidateFormatForMode@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@U_GUID@@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@Z @ 0x1800A4570 (--$ForEachCandidateFormatForMode@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@CEndpointCharacter.c)
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x1800A5048 (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
        struct IMMDevice **this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        __int64 a3,
        CConnectorProcessingModeCharacteristics *a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 *a8)
{
  __int64 v8; // r14
  int v10; // edi
  CConnectorProcessingModeCharacteristics *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rbx
  int v14; // r13d
  __int64 v15; // r15
  struct IMMDevice **v16; // rax
  __int128 v17; // xmm6
  CConnectorProcessingModeCharacteristics *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  CConnectorProcessingModeCharacteristics *v21; // r14
  struct IMMDevice **v23; // [rsp+38h] [rbp-B9h]
  __m256i v24; // [rsp+48h] [rbp-A9h]
  __int128 v25; // [rsp+68h] [rbp-89h]
  __int128 v26; // [rsp+78h] [rbp-79h]
  __int64 v27[2]; // [rsp+98h] [rbp-59h] BYREF
  __m256i v28; // [rsp+A8h] [rbp-49h] BYREF
  __int128 v29; // [rsp+C8h] [rbp-29h]
  __int128 v30; // [rsp+D8h] [rbp-19h]
  CConnectorProcessingModeCharacteristics *v32; // [rsp+150h] [rbp+5Fh] BYREF

  v32 = a4;
  v8 = a2;
  v10 = 0;
  v11 = (CConnectorProcessingModeCharacteristics *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = (__int64)v11;
  v32 = v11;
  if ( v11 )
  {
    *(_QWORD *)v11 = 0LL;
    *((_QWORD *)v11 + 1) = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  v13 = v12;
  if ( v12 )
  {
    v14 = 0;
    v15 = 2 * v8;
    if ( SLODWORD(this[2 * v8 + 9]) <= 0 )
    {
LABEL_19:
      v13 = 0LL;
      *a8 = v12;
    }
    else
    {
      v16 = &this[2 * v8 + 8];
      v23 = v16;
      while ( 1 )
      {
        v17 = *(_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v16, v14);
        v18 = (CConnectorProcessingModeCharacteristics *)operator new(
                                                           0x30uLL,
                                                           (const struct std::nothrow_t *)&std::nothrow);
        v21 = v18;
        v32 = v18;
        if ( v18 )
        {
          *(_OWORD *)v18 = v17;
          *((_QWORD *)v18 + 2) = 0LL;
          *((_QWORD *)v18 + 3) = 0LL;
          *((_QWORD *)v18 + 4) = 0LL;
          *((_QWORD *)v18 + 5) = 0LL;
        }
        else
        {
          v21 = 0LL;
        }
        v32 = v21;
        if ( !v21 )
          break;
        v24.m256i_i64[0] = (__int64)this;
        v24.m256i_i32[2] = a2;
        *(_OWORD *)((char *)&v24.m256i_u64[1] + 4) = v17;
        *(_QWORD *)&v25 = a5;
        BYTE8(v25) = a6;
        *(_QWORD *)&v26 = a7;
        *((_QWORD *)&v26 + 1) = v21;
        v28 = v24;
        v29 = v25;
        v30 = v26;
        *(_OWORD *)v27 = v17;
        v10 = CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_418c5ae5971ebab8b75617066dde6fa1_>(
                this,
                a2,
                v19,
                v20,
                v27,
                (__int64)&v28);
        if ( v10 < 0 )
          goto LABEL_17;
        if ( !(unsigned int)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::Add(
                              v12,
                              &v32) )
        {
          v10 = -2147024882;
LABEL_17:
          CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v21);
          goto LABEL_20;
        }
        ++v14;
        v16 = v23;
        if ( v14 >= SLODWORD(this[v15 + 9]) )
          goto LABEL_19;
      }
      v10 = -2147024882;
    }
  }
  else
  {
    v10 = -2147024882;
  }
LABEL_20:
  if ( v13 )
  {
    if ( *(_QWORD *)v13 )
    {
      free(*(void **)v13);
      *(_QWORD *)v13 = 0LL;
    }
    *(_QWORD *)(v13 + 8) = 0LL;
    operator delete((void *)v13);
  }
  return (unsigned int)v10;
}
