/*
 * XREFs of RmpInitializeGlobalModules @ 0x180019718
 * Callers:
 *     PsmInitializeServiceExtension3 @ 0x180022550 (PsmInitializeServiceExtension3.c)
 * Callees:
 *     RmpPolicyScratchResizeIntelligently @ 0x180009D00 (RmpPolicyScratchResizeIntelligently.c)
 *     RmpSystemNotificationContextStart @ 0x180019970 (RmpSystemNotificationContextStart.c)
 *     RmpMemoryMonitorStart @ 0x1800199E8 (RmpMemoryMonitorStart.c)
 *     RmpMemoryMonitorInitialize @ 0x180019AA8 (RmpMemoryMonitorInitialize.c)
 *     RmpTelemetryContextStart @ 0x180019C74 (RmpTelemetryContextStart.c)
 *     RmpInitializeDefaultAccountSid @ 0x180019D50 (RmpInitializeDefaultAccountSid.c)
 *     RmpEnforcerContextInitialize @ 0x180019ED8 (RmpEnforcerContextInitialize.c)
 *     RmpActivityHostInitializeModule @ 0x18001A2B0 (RmpActivityHostInitializeModule.c)
 *     RmpGetResourceManagerRuntimeConfiguration @ 0x18001A574 (RmpGetResourceManagerRuntimeConfiguration.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     RmpActivatorUninitializeModule @ 0x18003B578 (RmpActivatorUninitializeModule.c)
 *     RmpActivityHostUninitializeModule @ 0x18003C060 (RmpActivityHostUninitializeModule.c)
 *     RmpSystemNotificationContextCleanup @ 0x18003C0F0 (RmpSystemNotificationContextCleanup.c)
 *     RmpTelemetryContextCleanup @ 0x18003C344 (RmpTelemetryContextCleanup.c)
 *     RmpMemoryMonitorUninitialize @ 0x18003DCC0 (RmpMemoryMonitorUninitialize.c)
 *     RmpSystemEnableAsyncInSwap @ 0x1800426F4 (RmpSystemEnableAsyncInSwap.c)
 */

__int64 RmpInitializeGlobalModules()
{
  _QWORD *v0; // rbx
  DWORD TickCount; // eax
  _OWORD *v2; // rdi
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int v12; // eax
  int v13; // eax
  char v14; // cl
  int v15; // ebx
  void *v16; // rax
  _DWORD v18[2]; // [rsp+20h] [rbp-118h] BYREF
  __int128 v19; // [rsp+28h] [rbp-110h]
  __int128 v20; // [rsp+38h] [rbp-100h]
  __int128 v21; // [rsp+48h] [rbp-F0h]
  __int128 v22; // [rsp+58h] [rbp-E0h]
  __int128 v23; // [rsp+68h] [rbp-D0h]
  __int128 v24; // [rsp+78h] [rbp-C0h]
  __int128 v25; // [rsp+88h] [rbp-B0h]
  __int128 v26; // [rsp+98h] [rbp-A0h]
  __int128 v27; // [rsp+A8h] [rbp-90h]
  __int128 v28; // [rsp+B8h] [rbp-80h]
  __int128 v29; // [rsp+C8h] [rbp-70h]
  int v30; // [rsp+10Ch] [rbp-2Ch]
  DWORD cbSid; // [rsp+148h] [rbp+10h] BYREF

  RmSvcGlobals = &RmpSvcGlobals;
  memset_0(&RmpSvcGlobals, 0, 0x838uLL);
  RmpGetResourceManagerRuntimeConfiguration(v18);
  v0 = RmSvcGlobals;
  *((_QWORD *)RmSvcGlobals + 225) = 0LL;
  v0[226] = 0LL;
  v0[227] = 0LL;
  v0[222] = 0LL;
  v0[223] = 0LL;
  v0[224] = 0LL;
  TickCount = GetTickCount();
  v2 = RmSvcGlobals;
  *((_DWORD *)v0 + 448) = TickCount;
  memset_0(v2 + 13, 0, 0x5B8uLL);
  v3 = v20;
  v2[13] = v19;
  v4 = v21;
  v2[14] = v3;
  v5 = v22;
  v2[15] = v4;
  v6 = v23;
  v2[16] = v5;
  v7 = v24;
  v2[17] = v6;
  v8 = v25;
  v2[18] = v7;
  v9 = v27;
  v2[19] = v8;
  v2[20] = v26;
  v10 = v28;
  v2[21] = v9;
  v11 = v29;
  v12 = v18[1];
  v2[22] = v10;
  *((_DWORD *)v2 + 415) = v12;
  v13 = v30;
  v2[23] = v11;
  v14 = v18[0];
  *((_DWORD *)v2 + 414) = v18[0];
  *((_DWORD *)v2 + 416) = v13;
  if ( (v14 & 0x20) != 0 )
  {
    RmpSystemEnableAsyncInSwap();
    v2 = RmSvcGlobals;
  }
  *((_QWORD *)v2 + 2) = (char *)v2 + 8;
  *((_QWORD *)v2 + 1) = (char *)v2 + 8;
  v15 = RmpActivityHostInitializeModule();
  if ( v15 >= 0 )
  {
    v15 = RmpEnforcerContextInitialize((char *)RmSvcGlobals + 48);
    if ( v15 >= 0 )
    {
      v15 = RmpPolicyScratchResizeIntelligently((__int64)RmSvcGlobals + 1632, 4u);
      if ( v15 >= 0 )
      {
        cbSid = 68;
        if ( CreateWellKnownSid(WinNullSid, 0LL, (char *)RmSvcGlobals + 1936, &cbSid) )
        {
          *(_QWORD *)RmSvcGlobals = 1LL;
          RmpInitializeDefaultAccountSid();
          v15 = RmpTelemetryContextStart((struct _RM_TELEMETRY_CONTEXT *)((char *)RmSvcGlobals + 1776));
          if ( v15 >= 0 )
          {
            v15 = RmpMemoryMonitorInitialize(v18);
            if ( v15 >= 0 )
            {
              v15 = RmpMemoryMonitorStart();
              if ( v15 >= 0 )
              {
                v15 = RmpSystemNotificationContextStart((PHPOWERNOTIFY)RmSvcGlobals + 225);
                if ( v15 >= 0 )
                {
                  v15 = 0;
                  goto LABEL_12;
                }
              }
            }
            RmpSystemNotificationContextCleanup((char *)RmSvcGlobals + 1800);
            RmpMemoryMonitorUninitialize((char *)RmSvcGlobals + 1672);
          }
          RmpTelemetryContextCleanup((char *)RmSvcGlobals + 1776);
        }
        else
        {
          v15 = -1073741823;
        }
      }
    }
    RmpActivityHostUninitializeModule();
  }
  RmpActivatorUninitializeModule();
LABEL_12:
  v16 = RmSvcGlobals;
  if ( v15 < 0 )
    v16 = 0LL;
  RmSvcGlobals = v16;
  return (unsigned int)v15;
}
