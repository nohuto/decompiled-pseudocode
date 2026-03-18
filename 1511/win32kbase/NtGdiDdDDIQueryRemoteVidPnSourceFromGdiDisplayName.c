/*
 * XREFs of NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00B8FB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterSharedCritAvoidingDitHitTestHazard @ 0x1C0043380 (EnterSharedCritAvoidingDitHitTestHazard.c)
 *     DrvGetDeviceFromName @ 0x1C0043830 (DrvGetDeviceFromName.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName(unsigned __int64 a1)
{
  _OWORD *v2; // rdx
  unsigned int v3; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int64 v5; // rcx
  __int64 v6; // rsi
  LARGE_INTEGER v7; // rcx
  LARGE_INTEGER v8; // rdi
  LARGE_INTEGER v9; // r8
  char v10; // al
  wchar_t *DeviceFromName; // rax
  __int64 v12; // rdx
  _DWORD *v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-88h]
  int v16; // [rsp+20h] [rbp-88h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-78h] BYREF
  WCHAR SourceString[8]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v19; // [rsp+50h] [rbp-58h]
  __int128 v20; // [rsp+60h] [rbp-48h]
  __int128 v21; // [rsp+70h] [rbp-38h]
  int v22; // [rsp+80h] [rbp-28h]

  v2 = (_OWORD *)a1;
  if ( a1 >= (unsigned __int64)W32UserProbeAddress )
    v2 = W32UserProbeAddress;
  *(_OWORD *)SourceString = *v2;
  v19 = v2[1];
  v20 = v2[2];
  v21 = v2[3];
  v22 = *((_DWORD *)v2 + 16);
  v3 = 0;
  HIWORD(v21) = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  EnterSharedCritAvoidingDitHitTestHazard(0, 1);
  v6 = PsGetCurrentThreadWin32Thread(v5);
  if ( v6 )
  {
    v8 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v6 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C01020C8 - 1) <= 2u
        || (qword_1C01020B0 & 0x200000010000000LL) == 0
        || (v10 = 1, (qword_1C01020B8 & 0x200000010000000LL) != qword_1C01020B8) )
      {
        v10 = 0;
      }
      if ( v10 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        v16 = 0;
        Template_xqx(v7.QuadPart, &AcquiredSharedUserCritEvent, v9.QuadPart, v8.QuadPart, v16, gullUserCritAcquireToken);
      }
    }
    if ( v8.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v15) = 1000 * v8.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        1000 * v8.QuadPart / gliQpcFreq.QuadPart,
        &AcquiredSharedUserCritTelemetryEvent,
        v9.QuadPart,
        0LL,
        v15,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v6 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  DeviceFromName = DrvGetDeviceFromName(&DestinationString, 0);
  if ( DeviceFromName && (*((_DWORD *)DeviceFromName + 40) & 0x4000000) != 0 )
  {
    v13 = (_DWORD *)(a1 + 64);
    if ( a1 + 64 >= (unsigned __int64)W32UserProbeAddress )
      v13 = W32UserProbeAddress;
    *v13 = *((_DWORD *)DeviceFromName + 68);
  }
  else
  {
    v3 = -1073741811;
  }
  UserSessionSwitchLeaveCrit((__int64)v13, v12);
  return v3;
}
