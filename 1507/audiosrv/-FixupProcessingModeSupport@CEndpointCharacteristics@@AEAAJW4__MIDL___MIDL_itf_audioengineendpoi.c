/*
 * XREFs of ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x18003B8D8
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x18003BB10 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x180037EA0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     ?GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NPEAVCAudioSignalProcessingModeArray@1@@Z @ 0x18003C0A0 (-GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagproper.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@CEndpointCharacteristics@@QEAAJIPEBU_GUID@@@Z @ 0x18003D0B4 (-AddMultiple@CAudioSignalProcessingModeArray@CEndpointCharacteristics@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18003D134 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800A9F68 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CEndpointCharacteristics::FixupProcessingModeSupport(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        __int64 a3,
        int a4)
{
  __int64 v4; // rdi
  int APOModesSupportedForStreaming; // ebx
  __int64 v8; // r15
  struct IPropertyStore *v10; // rdx
  GUID fmtid; // xmm0
  DWORD pid; // eax
  CEndpointCharacteristics *v13; // rcx
  GUID v14; // xmm0
  DWORD v15; // eax
  struct IPropertyStore *v16; // rdx
  CEndpointCharacteristics *v17; // rcx
  GUID v18; // xmm0
  DWORD v19; // eax
  struct IPropertyStore *v20; // rdx
  int v21; // edi
  char *v22; // r13
  int v23; // eax
  char *v24; // rcx
  _QWORD *v25; // rdx
  int v26; // r9d
  __int64 v27; // r10
  __int64 v28; // rcx
  CEndpointCharacteristics::CAudioSignalProcessingModeArray *v29; // rbx
  int v30; // eax
  __int64 v31; // rax
  struct _tagpropertykey v32; // [rsp+30h] [rbp-20h] BYREF
  char *v33; // [rsp+80h] [rbp+30h]

  v4 = a2;
  APOModesSupportedForStreaming = 0;
  v8 = a2;
  if ( !*((_DWORD *)this + a2 + 10) )
  {
    if ( a2 != eKeywordDetectorConnector )
    {
      v29 = (CEndpointCharacteristics *)((char *)this + 16 * a2 + 64);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v29);
      v30 = CEndpointCharacteristics::CAudioSignalProcessingModeArray::AddMultiple(
              v29,
              1u,
              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
      APOModesSupportedForStreaming = v30;
      if ( v30 >= 0 )
      {
        if ( a4 )
        {
          if ( !(_DWORD)v4 )
          {
            APOModesSupportedForStreaming = CEndpointCharacteristics::CAudioSignalProcessingModeArray::AddMultiple(
                                              (CEndpointCharacteristics *)((char *)this + 16 * v4 + 144),
                                              1u,
                                              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
            if ( APOModesSupportedForStreaming >= 0 )
              return (unsigned int)CEndpointCharacteristics::CAudioSignalProcessingModeArray::AddMultiple(
                                     (CEndpointCharacteristics *)((char *)this + 16 * v4 + 208),
                                     1u,
                                     &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
          }
        }
      }
    }
    return (unsigned int)APOModesSupportedForStreaming;
  }
  if ( a2 && a2 != eKeywordDetectorConnector )
    return (unsigned int)APOModesSupportedForStreaming;
  v10 = (struct IPropertyStore *)*((_QWORD *)this + 7);
  if ( v10 )
  {
    if ( (int)v4 >= 0 )
    {
      if ( (int)v4 <= 1 )
      {
        fmtid = PKEY_MFX_ProcessingModes_Supported_For_Streaming.fmtid;
        pid = PKEY_MFX_ProcessingModes_Supported_For_Streaming.pid;
LABEL_9:
        v32.pid = pid;
        v32.fmtid = fmtid;
        APOModesSupportedForStreaming = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
                                          this,
                                          v10,
                                          &v32,
                                          1,
                                          (CEndpointCharacteristics *)((char *)this + 16 * v4 + 208));
        if ( APOModesSupportedForStreaming < 0 )
          return (unsigned int)APOModesSupportedForStreaming;
        if ( (int)v4 > 1 )
        {
          v14 = PKEY_SFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
          v15 = PKEY_SFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
        }
        else
        {
          v14 = PKEY_SFX_ProcessingModes_Supported_For_Streaming.fmtid;
          v15 = PKEY_SFX_ProcessingModes_Supported_For_Streaming.pid;
        }
        v16 = (struct IPropertyStore *)*((_QWORD *)this + 7);
        v32.pid = v15;
        v32.fmtid = v14;
        APOModesSupportedForStreaming = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
                                          v13,
                                          v16,
                                          &v32,
                                          0,
                                          (CEndpointCharacteristics *)((char *)this + 16 * v4 + 144));
        if ( APOModesSupportedForStreaming < 0 )
          return (unsigned int)APOModesSupportedForStreaming;
        if ( (int)v4 > 1 )
        {
          v18 = PKEY_EFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
          v19 = PKEY_EFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
        }
        else
        {
          v18 = PKEY_EFX_ProcessingModes_Supported_For_Streaming.fmtid;
          v19 = PKEY_EFX_ProcessingModes_Supported_For_Streaming.pid;
        }
        v20 = (struct IPropertyStore *)*((_QWORD *)this + 7);
        v32.pid = v19;
        v32.fmtid = v18;
        APOModesSupportedForStreaming = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
                                          v17,
                                          v20,
                                          &v32,
                                          0,
                                          (CEndpointCharacteristics *)((char *)this + 16 * v4 + 272));
        if ( APOModesSupportedForStreaming < 0 )
          return (unsigned int)APOModesSupportedForStreaming;
        goto LABEL_16;
      }
      if ( (_DWORD)v4 == 3 )
      {
        fmtid = PKEY_MFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
        pid = PKEY_MFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
        goto LABEL_9;
      }
    }
    return (unsigned int)-2147023728;
  }
LABEL_16:
  v21 = 0;
  if ( *((int *)this + 4 * v8 + 38) > 0 )
  {
    v22 = (char *)this + 16 * v8 + 144;
    while ( 1 )
    {
      if ( v21 < 0 || v21 >= *((_DWORD *)v22 + 2) )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x18005B24BLL);
      }
      v23 = 0;
      v24 = (char *)this + 16 * v8 + 208;
      v25 = (_QWORD *)(*(_QWORD *)v22 + 16LL * v21);
      v33 = v24;
      v26 = *((_DWORD *)v24 + 2);
      if ( v26 <= 0 )
      {
LABEL_29:
        v23 = -1;
      }
      else
      {
        v27 = *(_QWORD *)v24;
        while ( 1 )
        {
          v28 = *(_QWORD *)(v27 + 16LL * v23) - *v25;
          if ( !v28 )
            v28 = *(_QWORD *)(v27 + 16LL * v23 + 8) - v25[1];
          if ( !v28 )
            break;
          if ( ++v23 >= v26 )
            goto LABEL_29;
        }
      }
      if ( v23 == -1 )
      {
        v31 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v22, v21);
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v33, v31) )
          break;
      }
      if ( ++v21 >= *((_DWORD *)this + 4 * v8 + 38) )
        return (unsigned int)APOModesSupportedForStreaming;
    }
    return (unsigned int)-2147024882;
  }
  return (unsigned int)APOModesSupportedForStreaming;
}
