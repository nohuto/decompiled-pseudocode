/*
 * XREFs of RmpInitializeGlobalModules @ 0x180020C08
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x1800229E0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     RmpPolicyScratchResizeIntelligently @ 0x180007B1C (RmpPolicyScratchResizeIntelligently.c)
 *     RmpSystemNotificationContextStart @ 0x180020E44 (RmpSystemNotificationContextStart.c)
 *     RmpMemoryMonitorStart @ 0x180020EBC (RmpMemoryMonitorStart.c)
 *     RmpMemoryMonitorInitialize @ 0x180020F7C (RmpMemoryMonitorInitialize.c)
 *     RmpTelemetryContextStart @ 0x180021138 (RmpTelemetryContextStart.c)
 *     RmpInitializeDefaultAccountSid @ 0x180021214 (RmpInitializeDefaultAccountSid.c)
 *     RmpEnforcerContextInitialize @ 0x18002139C (RmpEnforcerContextInitialize.c)
 *     RmpActivityHostInitializeModule @ 0x180021654 (RmpActivityHostInitializeModule.c)
 *     RmpGetResourceManagerRuntimeConfiguration @ 0x180021AD8 (RmpGetResourceManagerRuntimeConfiguration.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     RmpActivatorUninitializeModule @ 0x180040948 (RmpActivatorUninitializeModule.c)
 *     RmpActivityHostUninitializeModule @ 0x1800413E4 (RmpActivityHostUninitializeModule.c)
 *     RmpSystemNotificationContextCleanup @ 0x1800414B4 (RmpSystemNotificationContextCleanup.c)
 *     RmpTelemetryContextCleanup @ 0x18004177C (RmpTelemetryContextCleanup.c)
 *     RmpMemoryMonitorUninitialize @ 0x18004329C (RmpMemoryMonitorUninitialize.c)
 *     RmpSystemEnableAsyncInSwap @ 0x1800475B4 (RmpSystemEnableAsyncInSwap.c)
 */

__int64 RmpInitializeGlobalModules()
{
  _QWORD *v0; // rbx
  DWORD TickCount; // eax
  char *v2; // rdi
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  int v5; // ecx
  int v6; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  int v10; // ebx
  void *v11; // rax
  _DWORD v13[2]; // [rsp+28h] [rbp-39h] BYREF
  __int128 v14; // [rsp+30h] [rbp-31h]
  __int128 v15; // [rsp+40h] [rbp-21h]
  __int128 v16; // [rsp+50h] [rbp-11h]
  __int64 v17; // [rsp+60h] [rbp-1h]
  __int128 v18; // [rsp+68h] [rbp+7h]
  __int128 v19; // [rsp+78h] [rbp+17h]
  __int64 v20; // [rsp+88h] [rbp+27h]
  int v21; // [rsp+90h] [rbp+2Fh]
  int v22; // [rsp+94h] [rbp+33h]
  int v23; // [rsp+9Ch] [rbp+3Bh]
  DWORD cbSid; // [rsp+D0h] [rbp+6Fh] BYREF

  RmSvcGlobals = &RmpSvcGlobals;
  memset_0(&RmpSvcGlobals, 0, 0x848uLL);
  RmpGetResourceManagerRuntimeConfiguration(v13);
  v0 = RmSvcGlobals;
  *((_QWORD *)RmSvcGlobals + 216) = 0LL;
  v0[217] = 0LL;
  v0[218] = 0LL;
  v0[213] = 0LL;
  v0[214] = 0LL;
  v0[215] = 0LL;
  TickCount = GetTickCount();
  v2 = (char *)RmSvcGlobals;
  *((_DWORD *)v0 + 430) = TickCount;
  memset_0(v2 + 208, 0, 0x570uLL);
  v3 = v14;
  v4 = v15;
  v5 = v13[0];
  *((_DWORD *)v2 + 395) = v13[1];
  *((_DWORD *)v2 + 398) = v22;
  *((_DWORD *)v2 + 397) = v23;
  v6 = v21;
  *((_DWORD *)v2 + 394) = v5;
  *((_DWORD *)v2 + 396) = v6;
  *((_OWORD *)v2 + 13) = v3;
  v7 = v16;
  *((_OWORD *)v2 + 14) = v4;
  *(_QWORD *)&v4 = v17;
  *((_OWORD *)v2 + 15) = v7;
  v8 = v18;
  *((_QWORD *)v2 + 32) = v4;
  v9 = v19;
  *(_OWORD *)(v2 + 264) = v8;
  *(_QWORD *)&v8 = v20;
  *(_OWORD *)(v2 + 280) = v9;
  *((_QWORD *)v2 + 37) = v8;
  if ( (v5 & 0x20) != 0 )
  {
    RmpSystemEnableAsyncInSwap();
    v2 = (char *)RmSvcGlobals;
  }
  *((_QWORD *)v2 + 2) = v2 + 8;
  *((_QWORD *)v2 + 1) = v2 + 8;
  v10 = RmpActivityHostInitializeModule();
  if ( v10 >= 0 )
  {
    v10 = RmpEnforcerContextInitialize((char *)RmSvcGlobals + 48);
    if ( v10 >= 0 )
    {
      v10 = RmpPolicyScratchResizeIntelligently((__int64)RmSvcGlobals + 1552, 4u);
      if ( v10 >= 0 )
      {
        cbSid = 68;
        if ( CreateWellKnownSid(WinNullSid, 0LL, (char *)RmSvcGlobals + 1952, &cbSid) )
        {
          *(_QWORD *)RmSvcGlobals = 1LL;
          RmpInitializeDefaultAccountSid();
          v10 = RmpTelemetryContextStart((struct _RM_TELEMETRY_CONTEXT *)((char *)RmSvcGlobals + 1704));
          if ( v10 >= 0 )
          {
            v10 = RmpMemoryMonitorInitialize(v13);
            if ( v10 >= 0 )
            {
              v10 = RmpMemoryMonitorStart();
              if ( v10 >= 0 )
              {
                v10 = RmpSystemNotificationContextStart((PHPOWERNOTIFY)RmSvcGlobals + 216);
                if ( v10 >= 0 )
                {
                  v10 = 0;
                  goto LABEL_12;
                }
              }
            }
            RmpSystemNotificationContextCleanup((char *)RmSvcGlobals + 1728);
            RmpMemoryMonitorUninitialize((char *)RmSvcGlobals + 1600);
          }
          RmpTelemetryContextCleanup((char *)RmSvcGlobals + 1704);
        }
        else
        {
          v10 = -1073741823;
        }
      }
    }
    RmpActivityHostUninitializeModule();
  }
  RmpActivatorUninitializeModule();
LABEL_12:
  v11 = RmSvcGlobals;
  if ( v10 < 0 )
    v11 = 0LL;
  RmSvcGlobals = v11;
  return (unsigned int)v10;
}
