/*
 * XREFs of NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00C4390
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     DrvGetDeviceFromName @ 0x1C0063110 (DrvGetDeviceFromName.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName(ULONGLONG a1)
{
  ULONGLONG v2; // rdx
  unsigned int v3; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v5; // rdi
  int v6; // esi
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  _BOOL8 v10; // rcx
  PRKSEMAPHORE v11; // rcx
  __int64 v12; // rsi
  LARGE_INTEGER v13; // rcx
  LARGE_INTEGER v14; // rdi
  LARGE_INTEGER v15; // r8
  char v16; // al
  wchar_t *DeviceFromName; // rax
  _DWORD *v18; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-98h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-88h] BYREF
  WCHAR SourceString[8]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v23; // [rsp+50h] [rbp-68h]
  __int128 v24; // [rsp+60h] [rbp-58h]
  __int128 v25; // [rsp+70h] [rbp-48h]
  int v26; // [rsp+80h] [rbp-38h]

  v2 = a1;
  if ( a1 >= W32UserProbeAddress )
    v2 = W32UserProbeAddress;
  *(_OWORD *)SourceString = *(_OWORD *)v2;
  v23 = *(_OWORD *)(v2 + 16);
  v24 = *(_OWORD *)(v2 + 32);
  v25 = *(_OWORD *)(v2 + 48);
  v26 = *(_DWORD *)(v2 + 64);
  v3 = 0;
  HIWORD(v25) = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = 0LL;
  do
  {
    v6 = 0;
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v7 )
      v5 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8);
    v10 = 0LL;
    if ( CurrentProcess )
      v10 = CurrentProcess == g_pepDwm;
    if ( v10 || (PVOID)PsGetCurrentProcess(v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v5 == gptiRit )
        continue;
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v11 = gpsemDITHitTestWaiters;
      goto LABEL_19;
    }
    if ( v5 != gptiRit )
    {
      _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v11 = (PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters;
LABEL_19:
      KeWaitForSingleObject(v11, UserRequest, 0, 0, 0LL);
      v6 = 1;
    }
  }
  while ( v6 == 1 );
  v12 = PsGetCurrentThreadWin32Thread(v10);
  if ( v12 )
  {
    v14 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v12 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C0118B28 - 1) <= 2u
        || (qword_1C0118B10 & 0x200000010000000LL) == 0
        || (v16 = 1, (qword_1C0118B18 & 0x200000010000000LL) != qword_1C0118B18) )
      {
        v16 = 0;
      }
      if ( v16 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LODWORD(Timeout) = 0;
        Template_xqx(
          v13.QuadPart,
          &AcquiredSharedUserCritEvent,
          v15.QuadPart,
          v14.QuadPart,
          Timeout,
          gullUserCritAcquireToken);
      }
    }
    if ( v14.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(Timeout) = 1000 * v14.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        1000 * v14.QuadPart / gliQpcFreq.QuadPart,
        &AcquiredSharedUserCritTelemetryEvent,
        v15.QuadPart,
        0LL,
        Timeout,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  DeviceFromName = DrvGetDeviceFromName(&DestinationString, 0);
  if ( DeviceFromName && (*((_DWORD *)DeviceFromName + 40) & 0x4000000) != 0 )
  {
    v18 = (_DWORD *)(a1 + 64);
    if ( a1 + 64 >= W32UserProbeAddress )
      v18 = (_DWORD *)W32UserProbeAddress;
    *v18 = *((_DWORD *)DeviceFromName + 68);
  }
  else
  {
    v3 = -1073741811;
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
