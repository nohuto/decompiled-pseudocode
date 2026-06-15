/*
 * XREFs of WPP_SF_ddS @ 0x18009124C
 * Callers:
 *     ?OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18002B550 (-OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAu.c)
 *     ?MmeOnDefaultDeviceChanged@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180091080 (-MmeOnDefaultDeviceChanged@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_i.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_ddS(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, char a5, _WORD *a6)
{
  __int64 v7; // rcx
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  if ( a6 && *a6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a6[v7] );
  }
  return EtwTraceMessage(a1, 43LL, a3, a2, &v9);
}
