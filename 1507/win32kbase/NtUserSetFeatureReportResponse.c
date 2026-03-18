/*
 * XREFs of NtUserSetFeatureReportResponse @ 0x1C00ADB60
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0032870 (Win32AllocPoolWithQuota.c)
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00766E0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C00C4D1C (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C00C684C (RIMIDEResetPointerDeviceMaxCount.c)
 */

__int64 __fastcall NtUserSetFeatureReportResponse(void *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v6; // rsi
  unsigned int v7; // edi
  int v8; // r14d
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID v14; // rcx
  LONGLONG v15; // rdx
  __int64 v16; // r15
  LARGE_INTEGER v17; // rcx
  LARGE_INTEGER v18; // r8
  LARGE_INTEGER v19; // r14
  bool v20; // al
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rcx
  char *v24; // rax
  char *v25; // r14
  __int64 v26; // rdx
  PVOID v27; // rsi
  char *v28; // r15
  _DWORD *v29; // r15
  unsigned int v30; // r13d
  _DWORD *v31; // r12
  __int16 v32; // cx
  int v33; // r8d
  int v34; // eax
  __int64 v36; // [rsp+20h] [rbp-68h]
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  char *v38; // [rsp+48h] [rbp-40h]

  v3 = a3;
  Object = 0LL;
  v38 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = 0LL;
  v7 = 1;
  do
  {
    v8 = 0;
    v9 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v9 )
      v6 = *v9;
    if ( IsCurrentProcessDwm(v11, v10)
      || (PVOID)PsGetCurrentProcess(v13, v12) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v6 == gptiRit )
        continue;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v14 = gpsemDITHitTestWaiters;
      goto LABEL_15;
    }
    if ( v6 != gptiRit )
    {
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v14 = gpsemRITBlockedOnDITWaiters;
LABEL_15:
      KeWaitForSingleObject(v14, UserRequest, 0, 0, 0LL);
      v8 = 1;
    }
  }
  while ( v8 == 1 );
  v16 = PsGetCurrentThreadWin32Thread(v13);
  if ( v16 )
  {
    v19 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v16 + 8));
    v15 = 0x200000010000000LL;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
    {
      v20 = (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
         && (qword_1C00FEA40 & 0x200000010000000LL) != 0
         && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48;
      if ( v20 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LODWORD(v36) = 0;
        LOBYTE(v17.LowPart) = byte_1C00FEA58 - 1;
        Template_xqx(
          v17.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v18.QuadPart,
          v19.QuadPart,
          v36,
          gullUserCritAcquireToken);
      }
    }
    if ( v19.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      v15 = 1000 * v19.QuadPart % gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        LODWORD(v36) = 1000 * v19.QuadPart / gliQpcFreq.QuadPart;
        Template_xqx(
          gullUserCritAcquireToken,
          &AcquiredExclusiveUserCritTelemetryEvent,
          v18.QuadPart,
          0LL,
          v36,
          gullUserCritAcquireToken);
      }
    }
    *(_QWORD *)(v16 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( (unsigned int)(v3 - 1) > 1 || (v21 = 12 * v3, (unsigned __int64)(12 * v3) > 0xFFFFFFFF) )
  {
    v23 = 87LL;
LABEL_76:
    v7 = 0;
    UserSetLastError(v23, v15);
  }
  else
  {
    if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
    {
      v23 = 5LL;
      goto LABEL_76;
    }
    if ( v21 )
    {
      if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v22) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v21 + a2 > (unsigned __int64)W32UserProbeAddress || v21 + a2 < a2 )
        *(_BYTE *)W32UserProbeAddress = 0;
    }
    v24 = (char *)Win32AllocPoolWithQuota();
    v25 = v24;
    v38 = v24;
    if ( !v24 )
      ExRaiseStatus(-1073741801);
    memmove(v24, (const void *)a2, (unsigned int)v21);
    if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object) < 0 )
    {
      v7 = 0;
      UserSetLastError(87LL, v26);
      v27 = Object;
    }
    else
    {
      v27 = Object;
      if ( Object )
        v28 = (char *)Object + 64;
      else
        v28 = 0LL;
      v29 = (_DWORD *)*((_QWORD *)v28 + 52);
      if ( *(_DWORD *)(*((_QWORD *)Object + 55) + 16LL) || (v29[59] & 0x4000) == 0 )
        goto LABEL_69;
      v30 = 0;
      if ( a3 )
      {
        v31 = v25 + 4;
        while ( *((_WORD *)v31 - 2) == 13 )
        {
          v32 = *((_WORD *)v31 - 1);
          v26 = 65531LL;
          if ( ((v32 - 85) & 0xFFFB) != 0 )
            break;
          if ( v32 == 85 )
          {
            v26 = (unsigned int)*v31;
            if ( (int)v26 > 256 || (v33 = v29[6], (unsigned int)(v33 - 1) > 4) )
            {
              v33 = v29[6];
              if ( v33 != 8 || (int)v26 > 5 )
                break;
            }
            v34 = v29[176];
            if ( v33 == 8 )
              --v34;
            if ( (_DWORD)v26 != v34 && !(unsigned int)RIMIDEResetPointerDeviceMaxCount(v29) )
              break;
          }
          else
          {
            if ( v32 != 89 || v29[6] != 8 || *v31 > 1u )
              break;
            v29[386] = *v31;
          }
          ++v30;
          v31 += 3;
          if ( v30 >= a3 )
            goto LABEL_71;
        }
LABEL_69:
        v7 = 0;
        UserSetLastError(87LL, v26);
      }
    }
LABEL_71:
    if ( v27 )
      ObfDereferenceObject(v27);
    if ( v25 )
      Win32FreePool();
  }
  UserSessionSwitchLeaveCrit();
  return v7;
}
