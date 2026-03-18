/*
 * XREFs of NtUserSetDisplayConfig @ 0x1C00AD300
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001C70 (PushW32ThreadLock_0.c)
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001D68 (PopAndFreeAlwaysW32ThreadLock_0.c)
 *     IsAutoRotationUpdateRegistrySupported_0 @ 0x1C0002B68 (IsAutoRotationUpdateRegistrySupported_0.c)
 *     AutoRotationUpdateRegistry_0 @ 0x1C0002B70 (AutoRotationUpdateRegistry_0.c)
 *     Win32AllocPoolWithQuota @ 0x1C0032870 (Win32AllocPoolWithQuota.c)
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     xxxUserSetDisplayConfig @ 0x1C006DFB0 (xxxUserSetDisplayConfig.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall NtUserSetDisplayConfig(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // esi
  int v6; // r15d
  int v7; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // r14
  __int64 v9; // r14
  int v10; // r12d
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID v16; // rcx
  __int64 v17; // r13
  LARGE_INTEGER v18; // rcx
  LARGE_INTEGER v19; // rsi
  LARGE_INTEGER v20; // r8
  char v21; // al
  char *v22; // r13
  void *v23; // r12
  int v24; // eax
  unsigned int v25; // r8d
  __int64 v26; // rsi
  unsigned __int64 v27; // r13
  unsigned int v28; // r14d
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // r15
  unsigned int v32; // r9d
  unsigned __int64 v33; // rsi
  __int64 v34; // rcx
  unsigned int v35; // r10d
  unsigned int v36; // r8d
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // edx
  unsigned int v40; // eax
  __int64 v41; // r8
  int v42; // eax
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // ecx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-108h]
  char *v48; // [rsp+60h] [rbp-C8h]
  int v49; // [rsp+68h] [rbp-C0h]
  unsigned int v51; // [rsp+130h] [rbp+8h]

  v51 = a1;
  v48 = 0LL;
  v5 = 0;
  v6 = 0;
  v7 = -1073741811;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = 0LL;
  do
  {
    v10 = 0;
    v11 = (__int64 *)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v11 )
      v9 = *v11;
    if ( IsCurrentProcessDwm(v13, v12) || (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS && v9 != gptiTSRequest )
      break;
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || (struct tagTHREADINFO *)v9 == gptiRit )
        continue;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v16 = gpsemDITHitTestWaiters;
      goto LABEL_15;
    }
    if ( (struct tagTHREADINFO *)v9 != gptiRit )
    {
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v16 = gpsemRITBlockedOnDITWaiters;
LABEL_15:
      KeWaitForSingleObject(v16, UserRequest, 0, 0, 0LL);
      v10 = 1;
    }
  }
  while ( v10 == 1 );
  v17 = PsGetCurrentThreadWin32Thread(v15);
  if ( v17 )
  {
    v19 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v17 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C00FEA58 - 1) <= 2u
        || (qword_1C00FEA40 & 0x200000010000000LL) == 0
        || (v21 = 1, (qword_1C00FEA48 & 0x200000010000000LL) != qword_1C00FEA48) )
      {
        v21 = 0;
      }
      if ( v21 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LODWORD(Timeout) = 0;
        Template_xqx(
          v18.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v20.QuadPart,
          v19.QuadPart,
          Timeout,
          gullUserCritAcquireToken);
      }
    }
    if ( v19.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(Timeout) = 1000 * v19.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        1000 * v19.QuadPart / gliQpcFreq.QuadPart,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v20.QuadPart,
        0LL,
        Timeout,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v17 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    v22 = 0LL;
    v48 = 0LL;
    v23 = 0LL;
    v5 = 0;
    v6 = 0;
  }
  else
  {
    v23 = 0LL;
    v22 = 0LL;
  }
  gptiCurrent = (struct tagTHREADINFO *)v9;
  gbValidateHandleForIL = 1;
  if ( (*(_DWORD *)(v9 + 448) & 0x20000000) != 0 )
    v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 384) + 728LL) + 24LL) & 0x10;
  else
    v24 = 0;
  if ( v24 || gbEnforceUIPI && (unsigned int)*(_QWORD *)(*(_QWORD *)(v9 + 384) + 832LL) < 0x2000 )
  {
    v7 = -1073741790;
    goto LABEL_135;
  }
  v25 = v51;
  if ( v51 <= 0x400 && a3 <= 0x800 )
  {
    if ( !v51 )
    {
      v35 = 0;
      goto LABEL_116;
    }
    v26 = 72LL * v51;
    if ( v26 )
    {
      v27 = a2;
      if ( (((-(__int64)(PsGetCurrentProcessWow64Process(0x38E38E38E38E38ELL) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v26 + a2 > (unsigned __int64)W32UserProbeAddress || v26 + a2 < a2 )
        *(_BYTE *)W32UserProbeAddress = 0;
      v25 = v51;
    }
    else
    {
      v27 = a2;
    }
    v28 = 0;
    v29 = 0LL;
    v30 = v27;
    while ( (unsigned int)v29 < v25 )
    {
      if ( (*(_DWORD *)(v30 + 68) & 1) != 0 )
        ++v28;
      v29 = (unsigned int)(v29 + 1);
      v30 += 72LL;
    }
    if ( v28 )
    {
      v31 = Win32AllocPoolWithQuota();
      v48 = (char *)v31;
      if ( !v31 )
        ExRaiseStatus(-1073741801);
      PushW32ThreadLock_0();
    }
    else
    {
      v31 = 0LL;
    }
    v32 = a3;
    if ( a3 )
    {
      v33 = (unsigned __int64)a3 << 6;
      if ( v33 )
      {
        if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v29) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a4) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v33 + a4 > (unsigned __int64)W32UserProbeAddress || v33 + a4 < a4 )
          *(_BYTE *)W32UserProbeAddress = 0;
        v32 = a3;
      }
    }
    else if ( a4 )
    {
      v22 = v48;
      goto LABEL_135;
    }
    v34 = v31;
    v35 = 0;
    v49 = 0;
    v5 = 0;
    v6 = 0;
    v36 = 0;
    while ( 2 )
    {
      if ( v36 >= v51 )
      {
        if ( v35 != v28 )
        {
          v22 = v48;
          goto LABEL_135;
        }
        if ( v6 )
        {
          if ( v5 >= v32 )
          {
            v22 = v48;
            goto LABEL_135;
          }
          v23 = (void *)Win32AllocPoolWithQuota();
          if ( !v23 )
            ExRaiseStatus(-1073741801);
          PushW32ThreadLock_0();
          memmove(v23, (const void *)a4, (unsigned __int64)(v5 + 1) << 6);
          v35 = v49;
        }
        v22 = v48;
LABEL_116:
        if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) )
        {
          v7 = -1073741823;
          break;
        }
        if ( gProtocolType )
        {
          v7 = -1073741790;
          break;
        }
        v41 = v5 + 1;
        if ( !v6 )
          v41 = 0LL;
        v42 = xxxUserSetDisplayConfig(v35, v22, v41, (__int64)v23, a5, 0, 0, 0LL, 1, 0LL);
        v7 = v42;
        if ( v42 == -2147483643 )
        {
          v7 = -1073741789;
        }
        else if ( v42 != -1073741789 )
        {
          if ( v42 == -1071774970 )
          {
            v7 = -2147023286;
          }
          else
          {
            if ( v42 < 0 )
            {
              v43 = (unsigned int)(v42 + 1073741811);
              if ( (unsigned int)v43 > 0x23 || (v44 = 0x800200401LL, !_bittest64(&v44, v43)) )
              {
                if ( v7 != -1073741637 )
                {
                  v45 = v7;
                  if ( (unsigned int)(v7 + 1073741585) > 0xB )
                    v45 = -1073741823;
                  v7 = v45;
                }
              }
            }
LABEL_135:
            if ( v7 >= 0 && (int)IsAutoRotationUpdateRegistrySupported_0() >= 0 )
              AutoRotationUpdateRegistry_0();
          }
        }
        break;
      }
      if ( (*(_DWORD *)(v27 + 68) & 1) != 0 )
      {
        if ( v35 >= v28 )
        {
          v22 = v48;
          goto LABEL_135;
        }
        *(_OWORD *)v34 = *(_OWORD *)v27;
        *(_OWORD *)(v34 + 16) = *(_OWORD *)(v27 + 16);
        *(_OWORD *)(v34 + 32) = *(_OWORD *)(v27 + 32);
        *(_OWORD *)(v34 + 48) = *(_OWORD *)(v27 + 48);
        *(_QWORD *)(v34 + 64) = *(_QWORD *)(v27 + 64);
        if ( (*(_DWORD *)(v34 + 68) & 1) == 0 )
        {
          v7 = -1073741790;
          v22 = v48;
          goto LABEL_135;
        }
        if ( (a5 & 0x8000) != 0 )
        {
          v37 = *(unsigned __int16 *)(v34 + 14);
          if ( v37 != 0xFFFF )
          {
            if ( v37 >= v32 )
            {
              v22 = v48;
              goto LABEL_135;
            }
            goto LABEL_82;
          }
        }
        else
        {
          v37 = *(_DWORD *)(v34 + 12);
          if ( v37 != -1 )
          {
            if ( v37 >= v32 )
            {
              v22 = v48;
              goto LABEL_135;
            }
LABEL_82:
            v6 = 1;
            if ( v5 > v37 )
              v37 = v5;
            v5 = v37;
          }
        }
        if ( (a5 & 0xC000) != 0 )
        {
          v38 = *(unsigned __int16 *)(v34 + 34);
          if ( v38 != 0xFFFF )
          {
            if ( v38 >= v32 )
            {
              v22 = v48;
              goto LABEL_135;
            }
            v6 = 1;
            if ( v5 > v38 )
              v38 = v5;
            v5 = v38;
          }
          v39 = (unsigned __int16)*(_DWORD *)(v34 + 32);
          if ( v39 != 0xFFFF )
          {
            if ( v39 >= v32 )
            {
              v22 = v48;
              goto LABEL_135;
            }
            v6 = 1;
            if ( v5 > v39 )
              v39 = v5;
            v5 = v39;
          }
        }
        else
        {
          v40 = *(_DWORD *)(v34 + 32);
          if ( v40 != -1 )
          {
            if ( v40 >= v32 )
            {
              v22 = v48;
              goto LABEL_135;
            }
            v6 = 1;
            if ( v5 > v40 )
              v40 = v5;
            v5 = v40;
          }
        }
        v49 = ++v35;
        v34 += 72LL;
      }
      ++v36;
      v27 += 72LL;
      continue;
    }
  }
  if ( v23 )
    PopAndFreeAlwaysW32ThreadLock_0();
  if ( v22 )
    PopAndFreeAlwaysW32ThreadLock_0();
  UserSessionSwitchLeaveCrit();
  return (unsigned int)v7;
}
