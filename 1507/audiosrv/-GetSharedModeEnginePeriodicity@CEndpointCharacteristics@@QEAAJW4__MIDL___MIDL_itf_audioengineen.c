/*
 * XREFs of ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@PEAI333@Z @ 0x180066460
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180025240 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x18008C790 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetDevicePeriod @ 0x18008D110 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x18008D670 (AudioServerGetSharedModeEnginePeriod.c)
 *     ?RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x180092768 (-RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     ??A?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAVCConnectorProcessingModeCharacteristics@@H@Z @ 0x180042928 (--A-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAVCC.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18008ECDC (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        const struct tWAVEFORMATEX *a3,
        struct _GUID *a4,
        unsigned int *a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  struct _GUID *v8; // rbx
  __int64 *v9; // r15
  int i; // ebp
  int **v11; // rax
  int *v12; // rdi
  __int64 v13; // rax
  int v14; // esi
  __int64 v15; // r14
  __int64 v16; // rbx

  v8 = a4;
  v9 = (__int64 *)((char *)this + 424);
  if ( a2 != eKeywordDetectorConnector )
    v9 = (__int64 *)((char *)this + 416);
  for ( i = 0; ; ++i )
  {
    if ( i >= *(_DWORD *)(*v9 + 8) )
      return 2290679816LL;
    v11 = (int **)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                    *v9,
                    i);
    v12 = *v11;
    v13 = *(_QWORD *)*v11 - *(_QWORD *)&v8->Data1;
    if ( !v13 )
      v13 = *((_QWORD *)v12 + 1) - *(_QWORD *)v8->Data4;
    if ( !v13 )
    {
      v14 = 0;
      if ( v12[6] > 0 )
        break;
    }
LABEL_15:
    ;
  }
  v15 = 0LL;
  while ( 1 )
  {
    if ( v15 < 0 || v14 >= v12[6] )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      __debugbreak();
    }
    v16 = *(_QWORD *)(v15 + *((_QWORD *)v12 + 2));
    if ( (unsigned int)CompareWaveFormat(a3, *(const struct tWAVEFORMATEX **)v16) )
      break;
    ++v14;
    v15 += 8LL;
    if ( v14 >= v12[6] )
    {
      v8 = a4;
      goto LABEL_15;
    }
  }
  if ( a5 )
    *a5 = *(_DWORD *)(v16 + 12);
  if ( a6 )
    *a6 = *(_DWORD *)(v16 + 8);
  if ( a7 )
    *a7 = *(_DWORD *)(v16 + 16);
  if ( a8 )
    *a8 = *(_DWORD *)(v16 + 20);
  return 0LL;
}
