/*
 * XREFs of ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x18003FECC
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x1800409A8 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??A?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAVCConnectorProcessingModeCharacteristics@@H@Z @ 0x18003FC90 (--A-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAVCC.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003FE88 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     ?ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x180040108 (-ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?GetConnectorProcessingMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@I@Z @ 0x180040DFC (-GetConnectorProcessingMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore(
        CEndpointCharacteristics *this)
{
  CEndpointCharacteristics *v1; // r14
  _DWORD *v2; // rbx
  __int64 v3; // rdi
  int v4; // esi
  unsigned int v5; // r15d
  struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *SupportedConnectorModes; // rax
  int v7; // esi
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  unsigned int v11; // r12d
  struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *v12; // rax
  int v13; // r15d
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rax
  _DWORD *v17; // rax
  __int64 v18; // rax
  void *v20; // [rsp+20h] [rbp-40h] BYREF
  __int64 v21; // [rsp+28h] [rbp-38h] BYREF
  CEndpointCharacteristics *v22; // [rsp+30h] [rbp-30h]
  __int64 v23; // [rsp+38h] [rbp-28h]
  struct _GUID v24; // [rsp+40h] [rbp-20h] BYREF

  v23 = -2LL;
  v1 = this;
  v22 = this;
  v2 = 0LL;
  v20 = 0LL;
  v3 = 0LL;
  v21 = 0LL;
  if ( *((_DWORD *)this + 101) )
  {
    v4 = CEndpointCharacteristics::ReadProcessingModeCharacteristics(this, 3LL, &v20);
    if ( v4 < 0 )
    {
      v2 = v20;
      goto LABEL_26;
    }
    v5 = 0;
    SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(v1, eKeywordDetectorConnector);
    v2 = v20;
    if ( *((_DWORD *)SupportedConnectorModes + 2) )
    {
      do
      {
        CEndpointCharacteristics::GetConnectorProcessingMode(v1, &v24, eKeywordDetectorConnector, v5);
        v7 = 0;
        if ( (int)v2[2] > 0 )
        {
          v8 = *(_QWORD *)v24.Data4;
          v9 = *(_QWORD *)&v24.Data1;
          do
          {
            v10 = ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                    (__int64)v2,
                    v7);
            if ( **(_QWORD **)v10 == v9 && *(_QWORD *)(*(_QWORD *)v10 + 8LL) == v8 )
              break;
            ++v7;
          }
          while ( v7 < v2[2] );
        }
        if ( v7 == v2[2] )
          goto LABEL_12;
      }
      while ( ++v5 < *((_DWORD *)CEndpointCharacteristics::GetSupportedConnectorModes(v1, eKeywordDetectorConnector) + 2) );
    }
  }
  v4 = CEndpointCharacteristics::ReadProcessingModeCharacteristics(v1, 0LL, &v21);
  if ( v4 < 0 )
  {
    v3 = v21;
  }
  else
  {
    v11 = 0;
    v12 = CEndpointCharacteristics::GetSupportedConnectorModes(v1, eHostProcessConnector);
    v3 = v21;
    if ( *((_DWORD *)v12 + 2) )
    {
      while ( 1 )
      {
        CEndpointCharacteristics::GetConnectorProcessingMode(v1, &v24, eHostProcessConnector, v11);
        v13 = 0;
        if ( *(int *)(v3 + 8) > 0 )
        {
          v14 = *(_QWORD *)v24.Data4;
          v15 = *(_QWORD *)&v24.Data1;
          do
          {
            v16 = ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                    v3,
                    v13);
            if ( **(_QWORD **)v16 == v15 && *(_QWORD *)(*(_QWORD *)v16 + 8LL) == v14 )
              break;
            ++v13;
          }
          while ( v13 < *(_DWORD *)(v3 + 8) );
          v1 = v22;
        }
        if ( v13 == *(_DWORD *)(v3 + 8) )
          break;
        if ( ++v11 >= *((_DWORD *)CEndpointCharacteristics::GetSupportedConnectorModes(v1, eHostProcessConnector) + 2) )
          goto LABEL_24;
      }
LABEL_12:
      v4 = -2147023728;
      goto LABEL_26;
    }
LABEL_24:
    v17 = v2;
    v2 = 0LL;
    *((_QWORD *)v1 + 53) = v17;
    v18 = v3;
    v3 = 0LL;
    *((_QWORD *)v1 + 52) = v18;
  }
LABEL_26:
  if ( v3 )
  {
    if ( *(_QWORD *)v3 )
    {
      free(*(void **)v3);
      *(_QWORD *)v3 = 0LL;
    }
    *(_QWORD *)(v3 + 8) = 0LL;
    operator delete((void *)v3);
  }
  if ( v2 )
  {
    if ( *(_QWORD *)v2 )
    {
      free(*(void **)v2);
      *(_QWORD *)v2 = 0LL;
    }
    *((_QWORD *)v2 + 1) = 0LL;
    operator delete(v2);
  }
  return (unsigned int)v4;
}
