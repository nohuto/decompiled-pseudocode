/*
 * XREFs of NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00B6890
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     DrvGetDeviceFromName @ 0x1C0053CD0 (DrvGetDeviceFromName.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName(unsigned __int64 a1)
{
  _OWORD *v2; // rdx
  unsigned int v3; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v5; // rdi
  int v6; // esi
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID v12; // rcx
  __int64 v13; // rsi
  LARGE_INTEGER v14; // rcx
  LARGE_INTEGER v15; // rdi
  LARGE_INTEGER v16; // r8
  char v17; // al
  wchar_t *DeviceFromName; // rax
  _DWORD *v19; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-98h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-88h] BYREF
  WCHAR SourceString[8]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v24; // [rsp+50h] [rbp-68h]
  __int128 v25; // [rsp+60h] [rbp-58h]
  __int128 v26; // [rsp+70h] [rbp-48h]
  int v27; // [rsp+80h] [rbp-38h]

  v2 = (_OWORD *)a1;
  if ( a1 >= (unsigned __int64)W32UserProbeAddress )
    v2 = W32UserProbeAddress;
  *(_OWORD *)SourceString = *v2;
  v24 = v2[1];
  v25 = v2[2];
  v26 = v2[3];
  v27 = *((_DWORD *)v2 + 16);
  v3 = 0;
  HIWORD(v26) = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = 0LL;
  do
  {
    v6 = 0;
    v7 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceShared(gpresUser);
    if ( v7 )
      v5 = *v7;
    if ( IsCurrentProcessDwm(v9, v8)
      || (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v5 == gptiRit )
        continue;
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v12 = gpsemDITHitTestWaiters;
      goto LABEL_17;
    }
    if ( v5 != gptiRit )
    {
      _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v12 = gpsemRITBlockedOnDITWaiters;
LABEL_17:
      KeWaitForSingleObject(v12, UserRequest, 0, 0, 0LL);
      v6 = 1;
    }
  }
  while ( v6 == 1 );
  v13 = PsGetCurrentThreadWin32Thread(v11);
  if ( v13 )
  {
    v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C00FEA58 - 1) <= 2u
        || (qword_1C00FEA40 & 0x200000010000000LL) == 0
        || (v17 = 1, (qword_1C00FEA48 & 0x200000010000000LL) != qword_1C00FEA48) )
      {
        v17 = 0;
      }
      if ( v17 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LODWORD(Timeout) = 0;
        Template_xqx(
          v14.QuadPart,
          &AcquiredSharedUserCritEvent,
          v16.QuadPart,
          v15.QuadPart,
          Timeout,
          gullUserCritAcquireToken);
      }
    }
    if ( v15.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(Timeout) = 1000 * v15.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        1000 * v15.QuadPart / gliQpcFreq.QuadPart,
        &AcquiredSharedUserCritTelemetryEvent,
        v16.QuadPart,
        0LL,
        Timeout,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v13 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  DeviceFromName = DrvGetDeviceFromName(&DestinationString, 0);
  if ( DeviceFromName && (*((_DWORD *)DeviceFromName + 40) & 0x4000000) != 0 )
  {
    v19 = (_DWORD *)(a1 + 64);
    if ( a1 + 64 >= (unsigned __int64)W32UserProbeAddress )
      v19 = W32UserProbeAddress;
    *v19 = *((_DWORD *)DeviceFromName + 68);
  }
  else
  {
    v3 = -1073741811;
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
