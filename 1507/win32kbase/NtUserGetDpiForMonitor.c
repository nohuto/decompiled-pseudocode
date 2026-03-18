/*
 * XREFs of NtUserGetDpiForMonitor @ 0x1C000DAD0
 * Callers:
 *     <none>
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C000DA00 (DrvGetCurrentDpiInfoFromHDev.c)
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     EngMulDiv @ 0x1C0056650 (EngMulDiv.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 *     UserSetLastStatus @ 0x1C00D3B9C (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserGetDpiForMonitor(unsigned __int64 a1, int a2, INT *a3, INT *a4)
{
  INT v5; // r15d
  INT v6; // r14d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  unsigned int v9; // esi
  int v10; // edi
  struct tagTHREADINFO **v11; // rax
  __int64 v12; // rcx
  PVOID v13; // rcx
  LONGLONG v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r13
  LARGE_INTEGER v17; // rdi
  int v18; // r8d
  bool v19; // al
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned __int64 v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  NTSTATUS CurrentDpiInfoFromHDev; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  INT v34; // edi
  INT v35; // ebx
  INT v36; // eax
  INT v37; // r8d
  INT v38; // edx
  INT v39; // ebx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  INT v45; // edi
  INT v46; // ebx
  INT v47; // eax
  INT v48; // r8d
  INT v49; // edx
  INT v50; // ebx
  INT v51; // eax
  INT *v52; // rcx
  INT *v53; // rdx
  INT *v54; // rcx
  INT *v55; // r8
  __int64 v56; // r9
  __int64 v58; // [rsp+20h] [rbp-C8h]
  __int64 v59; // [rsp+20h] [rbp-C8h]
  __int64 v60; // [rsp+20h] [rbp-C8h]
  __int64 v61; // [rsp+20h] [rbp-C8h]
  __int64 v62; // [rsp+28h] [rbp-C0h]
  __int64 v63; // [rsp+28h] [rbp-C0h]
  __int64 v64; // [rsp+28h] [rbp-C0h]
  __int64 v65; // [rsp+28h] [rbp-C0h]
  char v67[40]; // [rsp+50h] [rbp-98h] BYREF
  INT a; // [rsp+78h] [rbp-70h]
  INT v69; // [rsp+7Ch] [rbp-6Ch]
  INT v70; // [rsp+88h] [rbp-60h]
  INT v71; // [rsp+8Ch] [rbp-5Ch]
  char v72; // [rsp+ACh] [rbp-3Ch]

  v5 = 0;
  v6 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v8 = 0LL;
  v9 = 1;
  do
  {
    v10 = 0;
    v11 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v11 )
      v8 = *v11;
    if ( (unsigned int)IsCurrentProcessDwm()
      || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v8 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v8 == gptiRit )
        continue;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v13 = gpsemDITHitTestWaiters;
      goto LABEL_15;
    }
    if ( v8 != gptiRit )
    {
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v13 = gpsemRITBlockedOnDITWaiters;
LABEL_15:
      KeWaitForSingleObject(v13, UserRequest, 0, 0, 0LL);
      v10 = 1;
    }
  }
  while ( v10 == 1 );
  v16 = PsGetCurrentThreadWin32Thread(v12);
  if ( v16 )
  {
    v17 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v16 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
    {
      v19 = (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
         && (qword_1C00FEA40 & 0x200000010000000LL) != 0
         && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48;
      if ( v19 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(v14, (unsigned int)&AcquiredExclusiveUserCritEvent, v18, v17.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v17.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      v14 = 1000 * v17.QuadPart / gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        Template_xqx(
          v14,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v18,
          0,
          1000 * v17.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
    }
    *(_QWORD *)(v16 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v8;
  gbValidateHandleForIL = 1;
  v20 = 0LL;
  v21 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v22 = qword_1C01003E8 + (unsigned int)(unsigned __int16)a1 * dword_1C01003F0;
    v23 = a1 >> 16;
    if ( ((_WORD)v23 == *(_WORD *)(v22 + 18) || (_WORD)v23 == 0xFFFF || !(_WORD)v23 && PsGetCurrentProcessWow64Process())
      && (*(_BYTE *)(v22 + 17) & 1) == 0
      && *(_BYTE *)(v22 + 16) == 12 )
    {
      v20 = *(_QWORD *)v22;
    }
  }
  if ( !v20 )
  {
    UserSetLastError(1461LL);
    v9 = 0;
    UserSetLastError(6LL);
    goto LABEL_78;
  }
  if ( a2 )
  {
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(*(_OWORD **)(v20 + 160), (__int64)v67);
    if ( CurrentDpiInfoFromHDev < 0 )
    {
      v9 = 0;
      UserSetLastStatus(CurrentDpiInfoFromHDev);
      goto LABEL_78;
    }
    if ( (_DWORD)v30 == 2 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29, v28, v30, v56, v58, v62) + 776) & 0x4000) != 0 )
      {
        v5 = a;
        v6 = v69;
      }
      else
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32, v31, v33, v56, v60, v64) + 776) & 0x2000) != 0 )
        {
          v34 = *(unsigned __int16 *)(v20 + 152);
          v35 = *((unsigned __int16 *)gpsi + 3643);
          v36 = EngMulDiv(a, v35, v34);
          v37 = v34;
          v38 = v35;
        }
        else
        {
          v39 = *(unsigned __int16 *)(v20 + 152);
          v36 = EngMulDiv(a, 96, v39);
          v37 = v39;
          v38 = 96;
        }
        v5 = v36;
        v6 = EngMulDiv(v69, v38, v37);
      }
      if ( (v72 & 1) != 0 || (v72 & 2) != 0 || !v5 )
      {
        v6 = 0;
        v5 = 0;
        UserSetLastError(50LL);
        v9 = 0;
      }
      goto LABEL_70;
    }
    if ( (_DWORD)v30 == 1 )
    {
      v40 = (unsigned int)v70;
      if ( !v70 || (v72 & 2) != 0 )
      {
        v6 = 96;
        v5 = 96;
      }
      else
      {
        v5 = EngMulDiv(v70, 96, 100);
        v6 = EngMulDiv(v71, 96, 100);
      }
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40, v28, v30, v56, v58, v62) + 776) & 0x2000) != 0 )
      {
        v45 = *(unsigned __int16 *)(v20 + 152);
        v46 = *((unsigned __int16 *)gpsi + 3643);
        v47 = EngMulDiv(v5, v46, v45);
        v48 = v45;
        v49 = v46;
      }
      else
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42, v41, v43, v44, v61, v65) + 776) & 0x4000) != 0 )
          goto LABEL_70;
        v50 = *(unsigned __int16 *)(v20 + 152);
        v47 = EngMulDiv(v5, 96, v50);
        v48 = v50;
        v49 = 96;
      }
      v5 = v47;
      v6 = EngMulDiv(v6, v49, v48);
    }
LABEL_70:
    if ( v72 < 0 )
    {
      v51 = v6;
      v6 = v5;
      v5 = v51;
    }
    goto LABEL_72;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14, v21, 0LL, v15, v58, v62) + 776) & 0x4000) != 0 )
  {
    v6 = *(unsigned __int16 *)(v20 + 152);
    goto LABEL_46;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25, v24, v26, v56, v59, v63) + 776) & 0x2000) != 0 )
  {
    v6 = *((unsigned __int16 *)gpsi + 3643);
LABEL_46:
    v5 = v6;
  }
  else
  {
    v6 = 96;
    v5 = 96;
  }
LABEL_72:
  v53 = a3;
  v52 = a3;
  if ( a3 >= W32UserProbeAddress )
    v52 = (INT *)W32UserProbeAddress;
  *v52 = *v52;
  v55 = a4;
  v54 = a4;
  if ( a4 >= W32UserProbeAddress )
    v54 = (INT *)W32UserProbeAddress;
  *v54 = *v54;
  *a3 = v5;
  *a4 = v6;
LABEL_78:
  UserSessionSwitchLeaveCrit(v54, v53, v55, v56);
  return v9;
}
