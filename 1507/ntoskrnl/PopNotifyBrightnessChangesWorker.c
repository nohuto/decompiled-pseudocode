/*
 * XREFs of PopNotifyBrightnessChangesWorker @ 0x14016DA60
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PopBroadcastSessionInfo @ 0x1405BC948 (PopBroadcastSessionInfo.c)
 */

void __fastcall PopNotifyBrightnessChangesWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // di
  signed __int8 v7; // cf
  _QWORD *v8; // rbx
  __int64 v9; // rax
  unsigned __int8 v10; // di
  signed __int32 v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned __int8 v18; // bl
  signed __int32 v19; // eax
  __int128 v20; // [rsp+20h] [rbp-28h] BYREF
  int v21; // [rsp+30h] [rbp-18h]

  v4 = KeAbPreAcquire((ULONG_PTR)&PopBrightnessNotifyMutex, 0LL, 0LL, a4);
  v5 = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v7 = _interlockedbittestandreset((volatile signed __int32 *)&PopBrightnessNotifyMutex, 0);
  if ( !v7 )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopBrightnessNotifyMutex, v4);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  while ( 1 )
  {
    v8 = PopBrightnessChangeWorkList;
    qword_14032D4C8 = (__int64)KeGetCurrentThread();
    dword_14032D4F0 = CurrentIrql;
    if ( PopBrightnessChangeWorkList == &PopBrightnessChangeWorkList )
      break;
    v9 = *(_QWORD *)PopBrightnessChangeWorkList;
    if ( *((PVOID **)PopBrightnessChangeWorkList + 1) != &PopBrightnessChangeWorkList
      || *(PVOID *)(v9 + 8) != PopBrightnessChangeWorkList )
    {
      __fastfail(3u);
    }
    PopBrightnessChangeWorkList = *(PVOID *)PopBrightnessChangeWorkList;
    *(_QWORD *)(v9 + 8) = &PopBrightnessChangeWorkList;
    qword_14032D4C8 = 0LL;
    v10 = dword_14032D4F0;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)&PopBrightnessNotifyMutex, 1, 0);
    if ( v11 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PopBrightnessNotifyMutex, v11);
    __writecr8(v10);
    KeAbPostRelease((ULONG_PTR)&PopBrightnessNotifyMutex);
    v13 = v8[2];
    v14 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 - v13;
    if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == v13 )
      v14 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 - v8[3];
    if ( v14 )
    {
      v14 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 - v13;
      if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == v13 )
        v14 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 - v8[3];
      if ( v14 )
      {
        v14 = *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 - v13;
        if ( *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 == v13 )
          v14 = *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4 - v8[3];
        if ( v14 )
        {
          v14 = *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 - v13;
          if ( *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 == v13 )
            v14 = *(_QWORD *)GUID_VIDEO_ALS_OFFSET.Data4 - v8[3];
          if ( v14 )
          {
            v14 = *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 - v13;
            if ( *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 == v13 )
              v14 = *(_QWORD *)GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data4 - v8[3];
            if ( !v14 )
              HIDWORD(qword_14032E878) = *((_DWORD *)v8 + 8);
          }
          else
          {
            LODWORD(qword_14032E878) = *((_DWORD *)v8 + 8);
          }
        }
        else
        {
          dword_14032E86C = *((_DWORD *)v8 + 8);
        }
      }
      else
      {
        HIDWORD(qword_14032E870) = *((_DWORD *)v8 + 8);
      }
    }
    else
    {
      LODWORD(qword_14032E870) = *((_DWORD *)v8 + 8);
    }
    v20 = *((_OWORD *)v8 + 1);
    v21 = *((_DWORD *)v8 + 8);
    PopBroadcastSessionInfo(v14, v12, &v20);
    ExFreePoolWithTag(v8, 0x6F706D55u);
    v16 = KeAbPreAcquire((ULONG_PTR)&PopBrightnessNotifyMutex, 0LL, 0LL, v15);
    v17 = v16;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    v7 = _interlockedbittestandreset((volatile signed __int32 *)&PopBrightnessNotifyMutex, 0);
    if ( !v7 )
      ExpAcquireFastMutexContended((ULONG_PTR)&PopBrightnessNotifyMutex, v16);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
  }
  qword_14032D4C8 = 0LL;
  v18 = dword_14032D4F0;
  PopBrightnessWorkItemQueued = 0;
  v19 = _InterlockedCompareExchange((volatile signed __int32 *)&PopBrightnessNotifyMutex, 1, 0);
  if ( v19 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PopBrightnessNotifyMutex, v19);
  __writecr8(v18);
  KeAbPostRelease((ULONG_PTR)&PopBrightnessNotifyMutex);
}
