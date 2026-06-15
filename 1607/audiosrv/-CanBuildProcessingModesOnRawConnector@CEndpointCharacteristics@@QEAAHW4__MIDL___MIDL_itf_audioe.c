/*
 * XREFs of ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18001BD38
 * Callers:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18002AAA0 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180068DB0 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 * Callees:
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18001B214 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x18002765C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rbp
  char *v5; // rax
  int v6; // r8d
  int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // rax
  CEndpointCharacteristics *v10; // rdi
  unsigned int v11; // r14d
  char *v12; // rax
  int v13; // r8d
  int v14; // ecx
  __int64 v15; // r9
  __int64 v16; // rax
  __int128 v18; // [rsp+20h] [rbp-18h]

  v2 = 0;
  v3 = a2;
  if ( a2 || CEndpointCharacteristics::AreEnhancementsEnabled(this) )
    v5 = (char *)this + 16 * v3 + 64;
  else
    v5 = (char *)this + 128;
  v6 = *((_DWORD *)v5 + 2);
  v7 = 0;
  if ( v6 <= 0 )
  {
LABEL_28:
    v7 = -1;
  }
  else
  {
    v8 = *(_QWORD *)v5;
    while ( 1 )
    {
      v9 = *(_QWORD *)(v8 + 16LL * v7) - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      if ( !v9 )
        v9 = *(_QWORD *)(v8 + 16LL * v7 + 8) - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      if ( !v9 )
        break;
      if ( ++v7 >= v6 )
        goto LABEL_28;
    }
  }
  if ( v7 != -1 )
  {
    v10 = CEndpointCharacteristics::AreEnhancementsEnabled(this) || (_DWORD)v3 == 3
        ? (CEndpointCharacteristics *)((char *)this + 16 * v3 + 208)
        : (CEndpointCharacteristics *)((char *)this + 336);
    v11 = 0;
    if ( *((int *)v10 + 2) > 0 )
    {
      while ( 1 )
      {
        v18 = *(_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v10, v11);
        if ( (_DWORD)v3 || CEndpointCharacteristics::AreEnhancementsEnabled(this) )
          v12 = (char *)this + 16 * v3 + 64;
        else
          v12 = (char *)this + 128;
        v13 = *((_DWORD *)v12 + 2);
        v14 = 0;
        if ( v13 <= 0 )
        {
LABEL_22:
          v14 = -1;
        }
        else
        {
          v15 = *(_QWORD *)v12;
          while ( 1 )
          {
            v16 = *(_QWORD *)(v15 + 16LL * v14) - v18;
            if ( !v16 )
              v16 = *(_QWORD *)(v15 + 16LL * v14 + 8) - *((_QWORD *)&v18 + 1);
            if ( !v16 )
              break;
            if ( ++v14 >= v13 )
              goto LABEL_22;
          }
        }
        if ( v14 == -1 )
          return 1;
        if ( (signed int)++v11 >= *((_DWORD *)v10 + 2) )
          return v2;
      }
    }
  }
  return v2;
}
