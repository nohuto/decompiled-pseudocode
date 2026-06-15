/*
 * XREFs of ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x18003B550
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18003B4FC (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180038138 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     ?GetConnectorProcessingMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@I@Z @ 0x18003817C (-GetConnectorProcessingMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     ?ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x18003B810 (-ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ??A?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAVCConnectorProcessingModeCharacteristics@@H@Z @ 0x180042928 (--A-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAVCC.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore(
        CEndpointCharacteristics *this)
{
  __int64 v2; // rdi
  _DWORD *v3; // rbx
  int (__fastcall *v4)(__int64, const PROPERTYKEY *, PROPVARIANT *); // rsi
  int k; // r12d
  BOOL v6; // r15d
  __int64 v7; // r14
  char *v8; // rax
  BOOL v9; // r15d
  __int64 v10; // r14
  char *v11; // rcx
  int v12; // eax
  GUID v13; // xmm0
  int v14; // ecx
  int v15; // edx
  __int64 m; // r9
  bool v17; // zf
  _QWORD *v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  _DWORD *v21; // rax
  unsigned int i; // esi
  unsigned int j; // r14d
  bool v25; // zf
  _QWORD *v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // rax
  void *v29; // [rsp+28h] [rbp-39h] BYREF
  int v30; // [rsp+30h] [rbp-31h]
  __int64 v31; // [rsp+38h] [rbp-29h] BYREF
  PROPVARIANT v32; // [rsp+40h] [rbp-21h] BYREF
  __int64 v33; // [rsp+48h] [rbp-19h]
  __int64 v34; // [rsp+50h] [rbp-11h]
  PROPVARIANT pvar; // [rsp+58h] [rbp-9h] BYREF
  __int64 v36; // [rsp+60h] [rbp-1h]
  __int64 v37; // [rsp+68h] [rbp+7h]
  __int64 v38; // [rsp+70h] [rbp+Fh]
  struct _GUID v39; // [rsp+78h] [rbp+17h] BYREF

  v38 = -2LL;
  v2 = 0LL;
  v31 = 0LL;
  v3 = 0LL;
  v29 = 0LL;
  if ( *((_DWORD *)this + 101) )
  {
    LODWORD(v4) = CEndpointCharacteristics::ReadProcessingModeCharacteristics(this, 3LL, &v31);
    v2 = v31;
    if ( (int)v4 < 0 )
      goto LABEL_33;
    for ( i = 0;
          i < *((_DWORD *)CEndpointCharacteristics::GetSupportedConnectorModes(this, eKeywordDetectorConnector) + 2);
          ++i )
    {
      CEndpointCharacteristics::GetConnectorProcessingMode(this, &v39, eKeywordDetectorConnector, i);
      for ( j = 0; ; ++j )
      {
        v25 = j == *(_DWORD *)(v2 + 8);
        if ( (signed int)j >= *(_DWORD *)(v2 + 8) )
          break;
        v26 = (_QWORD *)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                          v2,
                          j);
        v27 = (_QWORD *)*v26;
        v28 = *(_QWORD *)*v26 - *(_QWORD *)&v39.Data1;
        if ( !v28 )
          v28 = v27[1] - *(_QWORD *)v39.Data4;
        if ( !v28 )
        {
          v25 = j == *(_DWORD *)(v2 + 8);
          break;
        }
      }
      if ( v25 )
      {
LABEL_48:
        LODWORD(v4) = -2147023728;
        goto LABEL_33;
      }
    }
  }
  LODWORD(v4) = CEndpointCharacteristics::ReadProcessingModeCharacteristics(this, 0LL, &v29);
  v30 = (int)v4;
  v3 = v29;
  if ( (int)v4 >= 0 )
  {
    for ( k = 0; ; ++k )
    {
      v6 = 1;
      v7 = *((_QWORD *)this + 7);
      if ( !v7 )
        goto LABEL_9;
      pvar = 0LL;
      v36 = 0LL;
      v37 = 0LL;
      v4 = *(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v7 + 40LL);
      if ( v4(v7, &PKEY_AudioEndpoint_Disable_SysFx, &pvar) >= 0 && (_WORD)pvar == 19 )
        v6 = v36 == 0;
      PropVariantClear(&pvar);
      if ( !v6 )
        v8 = (char *)this + 128;
      else
LABEL_9:
        v8 = (char *)this + 64;
      if ( (unsigned int)k >= *((_DWORD *)v8 + 2) )
        break;
      v9 = 1;
      v10 = *((_QWORD *)this + 7);
      if ( !v10 )
        goto LABEL_16;
      v32 = 0LL;
      v33 = 0LL;
      v34 = 0LL;
      v4 = *(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v10 + 40LL);
      if ( v4(v10, &PKEY_AudioEndpoint_Disable_SysFx, &v32) >= 0 && (_WORD)v32 == 19 )
        v9 = v33 == 0;
      PropVariantClear(&v32);
      if ( !v9 )
        v11 = (char *)this + 128;
      else
LABEL_16:
        v11 = (char *)this + 64;
      v12 = *((_DWORD *)v11 + 2);
      if ( k >= (unsigned int)v12 )
      {
        v13 = GUID_00000000_0000_0000_0000_000000000000;
      }
      else
      {
        if ( k < 0 || k >= v12 )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x18005B11FLL);
        }
        v13 = *(GUID *)(*(_QWORD *)v11 + 16LL * k);
      }
      v39 = v13;
      v14 = 0;
      v15 = v3[2];
      for ( m = 0LL; ; m += 8LL )
      {
        v17 = v14 == v15;
        if ( v14 >= v15 )
          break;
        if ( m < 0 || v14 >= v15 )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          goto LABEL_54;
        }
        v18 = *(_QWORD **)(m + *(_QWORD *)v3);
        v19 = *v18 - *(_QWORD *)&v13.Data1;
        if ( *v18 == *(_QWORD *)&v13.Data1 )
          v19 = v18[1] - *(_QWORD *)v13.Data4;
        if ( !v19 )
        {
          v17 = v14 == v15;
          break;
        }
        ++v14;
      }
      if ( v17 )
        goto LABEL_48;
    }
    v20 = v2;
    v2 = 0LL;
    *((_QWORD *)this + 53) = v20;
    v21 = v3;
    v3 = 0LL;
    *((_QWORD *)this + 52) = v21;
    LODWORD(v4) = v30;
  }
LABEL_33:
  if ( v3 )
  {
LABEL_54:
    if ( *(_QWORD *)v3 )
    {
      free(*(void **)v3);
      *(_QWORD *)v3 = 0LL;
    }
    *((_QWORD *)v3 + 1) = 0LL;
    operator delete(v3);
  }
  if ( v2 )
  {
    if ( *(_QWORD *)v2 )
    {
      free(*(void **)v2);
      *(_QWORD *)v2 = 0LL;
    }
    *(_QWORD *)(v2 + 8) = 0LL;
    operator delete((void *)v2);
  }
  return (unsigned int)v4;
}
