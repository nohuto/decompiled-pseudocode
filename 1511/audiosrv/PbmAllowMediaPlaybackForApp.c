/*
 * XREFs of PbmAllowMediaPlaybackForApp @ 0x18009E058
 * Callers:
 *     s_pbmAllowMediaPlaybackForApp @ 0x180091560 (s_pbmAllowMediaPlaybackForApp.c)
 * Callees:
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18002C620 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBGPEAPEAVIPBMWorkItem@@@Z @ 0x1800A4018 (-CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBGPEAPEAVIPBMWorkItem@@@Z.c)
 */

__int64 __fastcall PbmAllowMediaPlaybackForApp(void *a1, const unsigned __int16 *a2)
{
  int v3; // eax
  signed int v4; // edi
  int v5; // eax
  struct IPBMWorkItem *v6; // rsi
  struct IPBMWorkItem *v8; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0LL;
  v3 = RpcClientProcessSessionId(a1, &v10, &v9);
  v4 = v3;
  if ( v3 )
  {
    if ( v3 > 0 )
      v4 = (unsigned __int16)v3 | 0x80070000;
  }
  else
  {
    v5 = CTransportControlRouterWorkItem::CreateInstance(v9, a2, &v8);
    v6 = v8;
    v4 = v5;
    if ( v5 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(struct IPBMWorkItem *))(*(_QWORD *)v8 + 16LL))(v8);
      if ( v4 >= 0 )
        v6 = 0LL;
    }
    if ( v6 )
      (*(void (__fastcall **)(struct IPBMWorkItem *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1LL);
  }
  if ( v4 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_17b92df939233e863430647977143f3d_Traceguids, v4);
  }
  return (unsigned int)v4;
}
