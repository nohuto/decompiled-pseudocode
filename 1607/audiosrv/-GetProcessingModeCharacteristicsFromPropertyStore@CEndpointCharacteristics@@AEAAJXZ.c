/*
 * XREFs of ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x18002DFF4
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18002DF50 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18001C9C4 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ?GetConnectorProcessingMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@I@Z @ 0x18002DF04 (-GetConnectorProcessingMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     ?ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x18002E11C (-ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ??A?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAVCConnectorProcessingModeCharacteristics@@H@Z @ 0x18003462C (--A-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAVCC.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore(
        CEndpointCharacteristics *this)
{
  __int64 v2; // rbx
  _DWORD *v3; // rdi
  int ProcessingModeCharacteristics; // esi
  unsigned int k; // r12d
  unsigned int m; // r15d
  bool v7; // zf
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  _DWORD *v12; // rax
  unsigned int i; // r15d
  unsigned int j; // esi
  bool v16; // zf
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // [rsp+20h] [rbp-30h] BYREF
  void *v21[2]; // [rsp+28h] [rbp-28h] BYREF
  struct _GUID v22; // [rsp+38h] [rbp-18h] BYREF

  v21[1] = (void *)-2LL;
  v2 = 0LL;
  v20 = 0LL;
  v3 = 0LL;
  v21[0] = 0LL;
  if ( *((_DWORD *)this + 100) )
  {
    ProcessingModeCharacteristics = CEndpointCharacteristics::ReadProcessingModeCharacteristics(this, 3LL, &v20);
    v2 = v20;
    if ( ProcessingModeCharacteristics < 0 )
      goto LABEL_14;
    for ( i = 0;
          i < *((_DWORD *)CEndpointCharacteristics::GetSupportedConnectorModes(this, eKeywordDetectorConnector) + 2);
          ++i )
    {
      CEndpointCharacteristics::GetConnectorProcessingMode(this, &v22, eKeywordDetectorConnector, i);
      for ( j = 0; ; ++j )
      {
        v16 = j == *(_DWORD *)(v2 + 8);
        if ( (signed int)j >= *(_DWORD *)(v2 + 8) )
          break;
        v17 = (_QWORD *)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                          v2,
                          j);
        v18 = (_QWORD *)*v17;
        v19 = *(_QWORD *)*v17 - *(_QWORD *)&v22.Data1;
        if ( !v19 )
          v19 = v18[1] - *(_QWORD *)v22.Data4;
        if ( !v19 )
        {
          v16 = j == *(_DWORD *)(v2 + 8);
          break;
        }
      }
      if ( v16 )
      {
LABEL_18:
        ProcessingModeCharacteristics = -2147023728;
        goto LABEL_14;
      }
    }
  }
  ProcessingModeCharacteristics = CEndpointCharacteristics::ReadProcessingModeCharacteristics(this, 0LL, v21);
  v3 = v21[0];
  if ( ProcessingModeCharacteristics >= 0 )
  {
    for ( k = 0; k < *((_DWORD *)CEndpointCharacteristics::GetSupportedConnectorModes(this, eHostProcessConnector) + 2); ++k )
    {
      CEndpointCharacteristics::GetConnectorProcessingMode(this, &v22, eHostProcessConnector, k);
      for ( m = 0; ; ++m )
      {
        v7 = m == v3[2];
        if ( (signed int)m >= v3[2] )
          break;
        v8 = (_QWORD *)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                         v3,
                         m);
        v9 = (_QWORD *)*v8;
        v10 = *(_QWORD *)*v8 - *(_QWORD *)&v22.Data1;
        if ( !v10 )
          v10 = v9[1] - *(_QWORD *)v22.Data4;
        if ( !v10 )
        {
          v7 = m == v3[2];
          break;
        }
      }
      if ( v7 )
        goto LABEL_18;
    }
    v11 = v2;
    v2 = 0LL;
    *((_QWORD *)this + 52) = v11;
    v12 = v3;
    v3 = 0LL;
    *((_QWORD *)this + 51) = v12;
  }
LABEL_14:
  if ( v3 )
  {
    if ( *(_QWORD *)v3 )
    {
      free(*(void **)v3);
      *(_QWORD *)v3 = 0LL;
    }
    v3[2] = 0;
    v3[3] = 0;
    operator delete(v3);
  }
  if ( v2 )
  {
    if ( *(_QWORD *)v2 )
    {
      free(*(void **)v2);
      *(_QWORD *)v2 = 0LL;
    }
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 12) = 0;
    operator delete((void *)v2);
  }
  return (unsigned int)ProcessingModeCharacteristics;
}
