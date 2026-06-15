/*
 * XREFs of MIDL_user_allocate @ 0x180030500
 * Callers:
 *     s_rtgGetDefaultAudioEndpoint @ 0x18002FF30 (s_rtgGetDefaultAudioEndpoint.c)
 *     PolicyConfigGetDeviceFormat @ 0x180037C20 (PolicyConfigGetDeviceFormat.c)
 *     s_sndevtResolveSoundAlias @ 0x18006C6B0 (s_sndevtResolveSoundAlias.c)
 *     ?GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180078610 (-GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180078850 (-GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180078970 (-GetId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180078A90 (-GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180079030 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x18007F590 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     PolicyConfigGetMixFormat @ 0x1800895A0 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x18008C790 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     <none>
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  HANDLE ProcessHeap; // rax

  if ( size > 0x40000 )
    return 0LL;
  ProcessHeap = GetProcessHeap();
  return HeapAlloc(ProcessHeap, 0, size);
}
