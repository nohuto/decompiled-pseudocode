/*
 * XREFs of NtUserDisplayConfigSetDeviceInfo @ 0x1C00AB8D0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001C70 (PushW32ThreadLock_0.c)
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001D68 (PopAndFreeAlwaysW32ThreadLock_0.c)
 *     Win32AllocPoolWithQuota @ 0x1C0032870 (Win32AllocPoolWithQuota.c)
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00BB2A0 (DrvDisplayConfigSetDeviceInfo.c)
 */

__int64 __fastcall NtUserDisplayConfigSetDeviceInfo(unsigned __int64 Src)
{
  _DWORD *v2; // rsi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v4; // rbx
  int v5; // r14d
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID v11; // rcx
  __int64 v12; // r14
  LARGE_INTEGER v13; // rcx
  LARGE_INTEGER v14; // rsi
  LARGE_INTEGER v15; // r8
  char v16; // al
  int v17; // eax
  _DWORD *v18; // rcx
  size_t v19; // r14
  int v20; // ebx
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // eax
  int v24; // ecx
  bool v25; // zf
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-68h]

  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Src);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = 0LL;
  do
  {
    v5 = 0;
    v6 = (__int64 *)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v6 )
      v4 = *v6;
    if ( IsCurrentProcessDwm(v8, v7) || (PVOID)PsGetCurrentProcess(v10, v9) == gpepCSRSS && v4 != gptiTSRequest )
      break;
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || (struct tagTHREADINFO *)v4 == gptiRit )
        continue;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v11 = gpsemDITHitTestWaiters;
      goto LABEL_15;
    }
    if ( (struct tagTHREADINFO *)v4 != gptiRit )
    {
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v11 = gpsemRITBlockedOnDITWaiters;
LABEL_15:
      KeWaitForSingleObject(v11, UserRequest, 0, 0, 0LL);
      v5 = 1;
    }
  }
  while ( v5 == 1 );
  v12 = PsGetCurrentThreadWin32Thread(v10);
  if ( v12 )
  {
    v14 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v12 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C00FEA58 - 1) <= 2u
        || (qword_1C00FEA40 & 0x200000010000000LL) == 0
        || (v16 = 1, (qword_1C00FEA48 & 0x200000010000000LL) != qword_1C00FEA48) )
      {
        v16 = 0;
      }
      if ( v16 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LODWORD(Timeout) = 0;
        Template_xqx(
          v13.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v15.QuadPart,
          v14.QuadPart,
          Timeout,
          gullUserCritAcquireToken,
          -1073741823);
      }
    }
    if ( v14.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(Timeout) = 1000 * v14.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        1000 * v14.QuadPart / gliQpcFreq.QuadPart,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v15.QuadPart,
        0LL,
        Timeout,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    v2 = 0LL;
  }
  gptiCurrent = (struct tagTHREADINFO *)v4;
  gbValidateHandleForIL = 1;
  if ( (*(_DWORD *)(v4 + 448) & 0x20000000) != 0 )
    v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 384) + 728LL) + 24LL) & 0x10;
  else
    v17 = 0;
  if ( v17 || gbEnforceUIPI && (unsigned int)*(_QWORD *)(*(_QWORD *)(v4 + 384) + 832LL) < 0x2000 )
    goto LABEL_69;
  v18 = (_DWORD *)(Src + 4);
  if ( Src + 4 >= (unsigned __int64)W32UserProbeAddress )
    v18 = W32UserProbeAddress;
  v19 = (unsigned int)*v18;
  if ( *v18 < 0x14u )
  {
    v20 = -1073741789;
    v2 = 0LL;
    goto LABEL_70;
  }
  v2 = (_DWORD *)Win32AllocPoolWithQuota();
  if ( !v2 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock_0();
  if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v21) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & Src) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v19 + Src > (unsigned __int64)W32UserProbeAddress || v19 + Src < Src )
    *(_BYTE *)W32UserProbeAddress = 0;
  memmove(v2, (const void *)Src, v19);
  v2[1] = v19;
  if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) )
  {
    v20 = -1073741823;
    goto LABEL_70;
  }
  if ( gProtocolType )
  {
LABEL_69:
    v20 = -1073741790;
  }
  else
  {
    v22 = DrvDisplayConfigSetDeviceInfo(v2);
    v20 = v22;
    if ( v22 == -2147483643 )
    {
      v20 = -1073741789;
    }
    else if ( v22 != -1073741789 )
    {
      if ( (unsigned int)(*v2 - 7) > 1 )
      {
        if ( v22 < 0 )
        {
          v26 = (unsigned int)(v22 + 1073741811);
          if ( (unsigned int)v26 > 0x23 || (v27 = 0x800200401LL, !_bittest64(&v27, v26)) )
          {
            v25 = v20 == -1073741637;
            goto LABEL_63;
          }
        }
      }
      else
      {
        if ( v22 == -1073741811 )
          goto LABEL_70;
        if ( v22 == -1073741790 )
          goto LABEL_70;
        v23 = v22 + 1073741649;
        if ( v23 <= 0x11 )
        {
          v24 = 135169;
          if ( _bittest(&v24, v23) )
            goto LABEL_70;
        }
        if ( v20 >= 0 || v20 == -1073741801 )
          goto LABEL_70;
        v25 = v20 == -1073741776;
LABEL_63:
        if ( !v25 && (unsigned int)(v20 + 1073741585) > 0xB )
          v20 = -1073741823;
      }
    }
  }
LABEL_70:
  if ( v2 )
    PopAndFreeAlwaysW32ThreadLock_0();
  UserSessionSwitchLeaveCrit();
  return (unsigned int)v20;
}
