/*
 * XREFs of ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180012B18
 * Callers:
 *     ?SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z @ 0x18000F964 (-SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z.c)
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x180014D80 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x18002A378 (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 *     _CAudioSession::FinishConstruction_::_1_::catch$0 @ 0x18003A6CD (_CAudioSession--FinishConstruction_--_1_--catch$0.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x180051E30 (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x18005DF00 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x18005F2D0 (-SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z.c)
 *     ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x18005F450 (-SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x180065B18 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x180065F20 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800661D4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800664A4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     ?SetAt@?$CAtlMap@KV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@K@2@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@KPEBG@Z @ 0x18006E418 (-SetAt@-$CAtlMap@KV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTrai.c)
 *     ?OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x18007CF00 (-OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4.c)
 *     ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x18007DBC0 (-OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ?QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z @ 0x18007E1C8 (-QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180012BE0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180012C68 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180012CA0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::SetString(_QWORD *a1, char *a2)
{
  char *v2; // rsi
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r14
  char *v7; // rcx

  v2 = a2;
  if ( a2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)&a2[2 * v4] );
    if ( (_DWORD)v4 )
    {
      v5 = (__int64)&a2[-*a1] >> 1;
      v6 = *(unsigned int *)(*a1 - 16LL);
      if ( (int)((*(_DWORD *)(*a1 - 12LL) - v4) | (1 - *(_DWORD *)(*a1 - 8LL))) < 0 )
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, (unsigned int)v4);
      v7 = (char *)*a1;
      if ( v5 <= v6 )
      {
        a2 = &v7[2 * v5];
        if ( !(2LL * (int)v4) )
          return ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, (unsigned int)v4);
        if ( v7 && a2 )
        {
          memmove(v7, a2, 2LL * (int)v4);
          return ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, (unsigned int)v4);
        }
      }
      else
      {
        if ( !(2LL * (int)v4) )
          return ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, (unsigned int)v4);
        if ( v7 )
        {
          memcpy_0(v7, v2, 2LL * (int)v4);
          return ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, (unsigned int)v4);
        }
      }
      *(_DWORD *)_o__errno(v7, a2) = 22;
      invalid_parameter_noinfo();
      return ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, (unsigned int)v4);
    }
  }
  return ATL::CSimpleStringT<unsigned short,0>::Empty(a1);
}
