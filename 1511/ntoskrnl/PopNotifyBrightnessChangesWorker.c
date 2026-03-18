/*
 * XREFs of PopNotifyBrightnessChangesWorker @ 0x140140F3C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PopBroadcastSessionInfo @ 0x140547F2C (PopBroadcastSessionInfo.c)
 */

void PopNotifyBrightnessChangesWorker()
{
  _QWORD *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+30h] [rbp-18h]

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
    v3 = v0[2];
    v4 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 - v3;
    if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == v3 )
      v4 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 - v0[3];
    if ( v4 )
    {
      v4 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 - v3;
      if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == v3 )
        v4 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 - v0[3];
      if ( v4 )
      {
        v4 = *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 - v3;
        if ( *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 == v3 )
          v4 = *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4 - v0[3];
        if ( v4 )
        {
          v4 = *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 - v3;
          if ( *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 == v3 )
            v4 = *(_QWORD *)GUID_VIDEO_ALS_OFFSET.Data4 - v0[3];
          if ( v4 )
          {
            v4 = *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 - v3;
            if ( *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 == v3 )
              v4 = *(_QWORD *)GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data4 - v0[3];
            if ( v4 )
            {
              v4 = *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 - v3;
              if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == v3 )
                v4 = *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 - v0[3];
              if ( !v4 )
                dword_1402DE2C0 = *((_DWORD *)v0 + 8);
            }
            else
            {
              HIDWORD(qword_1402DE2B8) = *((_DWORD *)v0 + 8);
            }
          }
          else
          {
            LODWORD(qword_1402DE2B8) = *((_DWORD *)v0 + 8);
          }
        }
        else
        {
          dword_1402DE2AC = *((_DWORD *)v0 + 8);
        }
      }
      else
      {
        HIDWORD(qword_1402DE2B0) = *((_DWORD *)v0 + 8);
      }
    }
    else
    {
      LODWORD(qword_1402DE2B0) = *((_DWORD *)v0 + 8);
    }
    v5 = *((_OWORD *)v0 + 1);
    v6 = *((_DWORD *)v0 + 8);
    PopBroadcastSessionInfo(v4, v2, &v5);
    ExFreePoolWithTag(v0, 0x6F706D55u);
    ExAcquireFastMutex(&PopBrightnessNotifyMutex);
  }
  PopBrightnessWorkItemQueued = 0;
  KeReleaseGuardedMutex(&PopBrightnessNotifyMutex);
}
