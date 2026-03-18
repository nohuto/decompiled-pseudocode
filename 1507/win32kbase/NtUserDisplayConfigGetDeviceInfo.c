/*
 * XREFs of NtUserDisplayConfigGetDeviceInfo @ 0x1C001EA00
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001C70 (PushW32ThreadLock_0.c)
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001D68 (PopAndFreeAlwaysW32ThreadLock_0.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C001EEA0 (DrvDisplayConfigGetDeviceInfo.c)
 *     Win32AllocPoolWithQuota @ 0x1C0032870 (Win32AllocPoolWithQuota.c)
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall NtUserDisplayConfigGetDeviceInfo(unsigned __int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  int v4; // esi
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID v8; // rcx
  __int64 v9; // r14
  int v10; // ecx
  LARGE_INTEGER v11; // rsi
  int v12; // r8d
  char v13; // al
  unsigned int *v14; // rcx
  size_t v15; // rbx
  SIZE_T v16; // r14
  _DWORD *v17; // rsi
  int v18; // ecx
  int DeviceInfo; // ebx
  bool v20; // zf
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  bool v24; // zf
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // ecx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v3 = 0LL;
  do
  {
    v4 = 0;
    v5 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v5 )
      v3 = *v5;
    if ( (unsigned int)IsCurrentProcessDwm()
      || (PVOID)PsGetCurrentProcess(v7, v6) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v3 == gptiRit )
        continue;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v8 = gpsemDITHitTestWaiters;
      goto LABEL_15;
    }
    if ( v3 != gptiRit )
    {
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v8 = gpsemRITBlockedOnDITWaiters;
LABEL_15:
      KeWaitForSingleObject(v8, UserRequest, 0, 0, 0LL);
      v4 = 1;
    }
  }
  while ( v4 == 1 );
  v9 = PsGetCurrentThreadWin32Thread(v7);
  if ( v9 )
  {
    v11 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v9 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C00FEA58 - 1) <= 2u
        || (qword_1C00FEA40 & 0x200000010000000LL) == 0
        || (v13 = 1, (qword_1C00FEA48 & 0x200000010000000LL) != qword_1C00FEA48) )
      {
        v13 = 0;
      }
      if ( v13 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v10) = byte_1C00FEA58 - 1;
        Template_xqx(v10, (unsigned int)&AcquiredExclusiveUserCritEvent, v12, v11.LowPart, 0, gullUserCritAcquireToken);
      }
    }
    if ( v11.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v12,
        0,
        1000 * v11.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v9 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  v14 = (unsigned int *)(a1 + 4);
  if ( a1 + 4 >= (unsigned __int64)W32UserProbeAddress )
    v14 = (unsigned int *)W32UserProbeAddress;
  v15 = *v14;
  if ( (unsigned int)v15 < 0x14 )
    ExRaiseStatus(-1073741811);
  v16 = *v14;
  v17 = (_DWORD *)Win32AllocPoolWithQuota(v15, 1665430357LL);
  if ( !v17 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock_0();
  if ( (((-(__int64)(PsGetCurrentProcessWow64Process() != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v15 + a1 > (unsigned __int64)W32UserProbeAddress || v15 + a1 < a1 )
    *(_BYTE *)W32UserProbeAddress = 0;
  memmove(v17, (const void *)a1, v15);
  v17[1] = v15;
  v18 = *v17;
  if ( *v17 == -2 )
  {
LABEL_45:
    if ( v18 > 2 )
    {
      v21 = v18 - 3;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          if ( (unsigned int)(v22 - 2) > 1 )
            goto LABEL_54;
          v20 = (_DWORD)v15 == 24;
        }
        else
        {
          v20 = (_DWORD)v15 == 276;
        }
      }
      else
      {
        v20 = (_DWORD)v15 == 80;
      }
    }
    else
    {
      switch ( v18 )
      {
        case 2:
          v20 = (_DWORD)v15 == 420;
          break;
        case -7:
          v20 = (_DWORD)v15 == 540;
          break;
        case -5:
          v20 = (_DWORD)v15 == 28;
          break;
        case -3:
          v20 = (_DWORD)v15 == 32;
          break;
        case -2:
          v20 = (_DWORD)v15 == 1972;
          break;
        case 1:
          v20 = (_DWORD)v15 == 84;
          break;
        default:
LABEL_54:
          DeviceInfo = -1073741811;
          goto LABEL_89;
      }
    }
    if ( !v20 )
      goto LABEL_54;
    DeviceInfo = DrvDisplayConfigGetDeviceInfo(v17);
    if ( *v17 == 3 )
      v17[7] = 0;
    if ( DeviceInfo == -2147483643 )
    {
      DeviceInfo = -1073741789;
    }
    else if ( DeviceInfo != -1073741789 )
    {
      if ( (unsigned int)(*v17 - 7) > 1 )
      {
        if ( DeviceInfo < 0 )
        {
          v25 = (unsigned int)(DeviceInfo + 1073741811);
          if ( (unsigned int)v25 > 0x23 || (v26 = 0x800200401LL, !_bittest64(&v26, v25)) )
          {
            v24 = DeviceInfo == -1073741637;
LABEL_82:
            if ( !v24 )
            {
              v27 = DeviceInfo;
              if ( (unsigned int)(DeviceInfo + 1073741585) > 0xB )
                v27 = -1073741823;
              DeviceInfo = v27;
            }
          }
        }
      }
      else if ( DeviceInfo != -1073741811 && DeviceInfo != -1073741790 )
      {
        if ( (unsigned int)(DeviceInfo + 1073741649) > 0x11 || (v23 = 135169, !_bittest(&v23, DeviceInfo + 1073741649)) )
        {
          if ( DeviceInfo < 0 && DeviceInfo != -1073741801 )
          {
            v24 = DeviceInfo == -1073741776;
            goto LABEL_82;
          }
        }
      }
    }
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite((volatile void *)a1, v16, CurrentProcessWow64Process != 0 ? 1 : 4);
    memmove((void *)a1, v17, v16);
    goto LABEL_89;
  }
  if ( !LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) )
  {
    if ( gProtocolType )
    {
      DeviceInfo = -1073741790;
      goto LABEL_89;
    }
    goto LABEL_45;
  }
  DeviceInfo = -1073741823;
LABEL_89:
  PopAndFreeAlwaysW32ThreadLock_0();
  UserSessionSwitchLeaveCrit(v30, v29, v31, v32);
  return (unsigned int)DeviceInfo;
}
