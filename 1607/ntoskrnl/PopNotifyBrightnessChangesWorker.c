/*
 * XREFs of PopNotifyBrightnessChangesWorker @ 0x14014A990
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PopBroadcastSessionInfo @ 0x14057C174 (PopBroadcastSessionInfo.c)
 */

void PopNotifyBrightnessChangesWorker()
{
  _QWORD *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  ExAcquireFastMutex(&PopBrightnessNotifyMutex);
  while ( 1 )
  {
    v0 = PopBrightnessChangeWorkList;
    if ( PopBrightnessChangeWorkList == &PopBrightnessChangeWorkList )
      break;
    v1 = *(_QWORD *)PopBrightnessChangeWorkList;
    if ( *((PVOID **)PopBrightnessChangeWorkList + 1) != &PopBrightnessChangeWorkList
      || *(PVOID *)(v1 + 8) != PopBrightnessChangeWorkList )
    {
      __fastfail(3u);
    }
    PopBrightnessChangeWorkList = *(PVOID *)PopBrightnessChangeWorkList;
    *(_QWORD *)(v1 + 8) = &PopBrightnessChangeWorkList;
    KeReleaseGuardedMutex(&PopBrightnessNotifyMutex);
    v2 = v0[2];
    v3 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 - v2;
    if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == v2 )
      v3 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 - v0[3];
    if ( v3 )
    {
      v4 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 - v2;
      if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == v2 )
        v4 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 - v0[3];
      if ( v4 )
      {
        v5 = *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 - v2;
        if ( *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 == v2 )
          v5 = *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4 - v0[3];
        if ( v5 )
        {
          v6 = *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 - v2;
          if ( *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 == v2 )
            v6 = *(_QWORD *)GUID_VIDEO_ALS_OFFSET.Data4 - v0[3];
          if ( v6 )
          {
            v7 = *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 - v2;
            if ( *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 == v2 )
              v7 = *(_QWORD *)GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data4 - v0[3];
            if ( v7 )
            {
              v8 = *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 - v2;
              if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == v2 )
                v8 = *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 - v0[3];
              if ( !v8 )
                dword_140303D80 = *((_DWORD *)v0 + 8);
            }
            else
            {
              HIDWORD(qword_140303D78) = *((_DWORD *)v0 + 8);
            }
          }
          else
          {
            LODWORD(qword_140303D78) = *((_DWORD *)v0 + 8);
          }
        }
        else
        {
          dword_140303D6C = *((_DWORD *)v0 + 8);
        }
      }
      else
      {
        HIDWORD(qword_140303D70) = *((_DWORD *)v0 + 8);
      }
    }
    else
    {
      LODWORD(qword_140303D70) = *((_DWORD *)v0 + 8);
    }
    v9 = *((_OWORD *)v0 + 1);
    v10 = *((_DWORD *)v0 + 8);
    PopBroadcastSessionInfo(0LL, 20LL, &v9);
    ExFreePoolWithTag(v0, 0x6F706D55u);
    ExAcquireFastMutex(&PopBrightnessNotifyMutex);
  }
  PopBrightnessWorkItemQueued = 0;
  KeReleaseGuardedMutex(&PopBrightnessNotifyMutex);
}
