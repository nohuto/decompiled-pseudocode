/*
 * XREFs of ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x1800401D0
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x1800403D0 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x18001127C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     ?GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NPEAVCAudioSignalProcessingModeArray@1@@Z @ 0x180040898 (-GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagproper.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@CEndpointCharacteristics@@QEAAJIPEBU_GUID@@@Z @ 0x180040E48 (-AddMultiple@CAudioSignalProcessingModeArray@CEndpointCharacteristics@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180040EC4 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180040F4C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800A706C (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CEndpointCharacteristics::FixupProcessingModeSupport(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        __int64 a3,
        int a4)
{
  __int64 v4; // rdi
  int APOModesSupportedForStreaming; // ebx
  __int64 v8; // r14
  struct IPropertyStore *v9; // rdx
  unsigned __int64 v10; // rcx
  GUID fmtid; // xmm0
  DWORD pid; // eax
  unsigned __int64 v13; // rcx
  GUID v14; // xmm0
  DWORD v15; // eax
  struct IPropertyStore *v16; // rdx
  CEndpointCharacteristics *v17; // rcx
  GUID v18; // xmm0
  DWORD v19; // eax
  struct IPropertyStore *v20; // rdx
  int v21; // edi
  __int64 v22; // r15
  char *v23; // r13
  char *v24; // r14
  __int64 v25; // rax
  CEndpointCharacteristics::CAudioSignalProcessingModeArray *v27; // rbx
  int v28; // eax
  __int64 v29; // rax
  struct _tagpropertykey v30; // [rsp+30h] [rbp-20h] BYREF

  v4 = a2;
  APOModesSupportedForStreaming = 0;
  v8 = a2;
  if ( !*((_DWORD *)this + a2 + 10) )
  {
    if ( a2 != eKeywordDetectorConnector )
    {
      v27 = (CEndpointCharacteristics *)((char *)this + 16 * a2 + 64);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v27);
      v28 = CEndpointCharacteristics::CAudioSignalProcessingModeArray::AddMultiple(
              v27,
              1u,
              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
      APOModesSupportedForStreaming = v28;
      if ( v28 >= 0 )
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
  if ( (a2 & 0xFFFFFFFC) != 0 || a2 == eLoopbackConnector )
    return (unsigned int)APOModesSupportedForStreaming;
  v9 = (struct IPropertyStore *)*((_QWORD *)this + 7);
  if ( v9 )
  {
    v10 = (unsigned int)v4;
    if ( (_DWORD)v4 )
    {
      v10 = (unsigned int)(v4 - 1);
      if ( (_DWORD)v4 == 1 )
      {
        fmtid = PKEY_MFX_Offload_ProcessingModes_Supported_For_Streaming.fmtid;
        pid = PKEY_MFX_Offload_ProcessingModes_Supported_For_Streaming.pid;
        goto LABEL_8;
      }
      if ( (_DWORD)v4 == 3 )
      {
        fmtid = PKEY_MFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
        pid = PKEY_MFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
        goto LABEL_8;
      }
      pid = v30.pid;
      APOModesSupportedForStreaming = -2147023728;
      fmtid = v30.fmtid;
    }
    else
    {
      fmtid = PKEY_MFX_ProcessingModes_Supported_For_Streaming.fmtid;
      pid = PKEY_MFX_ProcessingModes_Supported_For_Streaming.pid;
    }
    if ( APOModesSupportedForStreaming < 0 )
      return (unsigned int)APOModesSupportedForStreaming;
LABEL_8:
    v30.pid = pid;
    v30.fmtid = fmtid;
    APOModesSupportedForStreaming = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
                                      (CEndpointCharacteristics *)v10,
                                      v9,
                                      &v30,
                                      1,
                                      (CEndpointCharacteristics *)((char *)this + 16 * v4 + 208));
    if ( APOModesSupportedForStreaming < 0 )
      return (unsigned int)APOModesSupportedForStreaming;
    APOModesSupportedForStreaming = 0;
    v13 = (unsigned int)v4;
    if ( (_DWORD)v4 )
    {
      v13 = (unsigned int)(v4 - 1);
      if ( (_DWORD)v4 == 1 )
      {
        v14 = PKEY_SFX_Offload_ProcessingModes_Supported_For_Streaming.fmtid;
        v15 = PKEY_SFX_Offload_ProcessingModes_Supported_For_Streaming.pid;
        goto LABEL_12;
      }
      if ( (_DWORD)v4 == 3 )
      {
        v14 = PKEY_SFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
        v15 = PKEY_SFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
        goto LABEL_12;
      }
      v15 = v30.pid;
      APOModesSupportedForStreaming = -2147023728;
      v14 = v30.fmtid;
    }
    else
    {
      v14 = PKEY_SFX_ProcessingModes_Supported_For_Streaming.fmtid;
      v15 = PKEY_SFX_ProcessingModes_Supported_For_Streaming.pid;
    }
    if ( APOModesSupportedForStreaming < 0 )
      return (unsigned int)APOModesSupportedForStreaming;
LABEL_12:
    v16 = (struct IPropertyStore *)*((_QWORD *)this + 7);
    v30.pid = v15;
    v30.fmtid = v14;
    APOModesSupportedForStreaming = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
                                      (CEndpointCharacteristics *)v13,
                                      v16,
                                      &v30,
                                      0,
                                      (CEndpointCharacteristics *)((char *)this + 16 * v4 + 144));
    if ( APOModesSupportedForStreaming < 0 )
      return (unsigned int)APOModesSupportedForStreaming;
    if ( (int)v4 >= 0 )
    {
      if ( (int)v4 <= 1 )
      {
        v18 = PKEY_EFX_ProcessingModes_Supported_For_Streaming.fmtid;
        v19 = PKEY_EFX_ProcessingModes_Supported_For_Streaming.pid;
        goto LABEL_16;
      }
      if ( (_DWORD)v4 == 3 )
      {
        v18 = PKEY_EFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
        v19 = PKEY_EFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
LABEL_16:
        v20 = (struct IPropertyStore *)*((_QWORD *)this + 7);
        v30.pid = v19;
        v30.fmtid = v18;
        APOModesSupportedForStreaming = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
                                          v17,
                                          v20,
                                          &v30,
                                          0,
                                          (CEndpointCharacteristics *)((char *)this + 16 * v4 + 272));
        if ( APOModesSupportedForStreaming < 0 )
          return (unsigned int)APOModesSupportedForStreaming;
        goto LABEL_17;
      }
    }
    return (unsigned int)-2147023728;
  }
LABEL_17:
  v21 = 0;
  v22 = 2 * v8;
  if ( *((int *)this + 4 * v8 + 38) > 0 )
  {
    v23 = (char *)this + 16 * v8 + 144;
    v24 = (char *)this + 16 * v8 + 208;
    while ( 1 )
    {
      v25 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v23, v21);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v24, v25) == -1 )
      {
        v29 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v23, v21);
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v24, v29) )
          break;
      }
      if ( ++v21 >= *((_DWORD *)this + 2 * v22 + 38) )
        return (unsigned int)APOModesSupportedForStreaming;
    }
    return (unsigned int)-2147024882;
  }
  return (unsigned int)APOModesSupportedForStreaming;
}
