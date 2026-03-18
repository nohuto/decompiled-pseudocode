/*
 * XREFs of NtHWCursorUpdatePointer @ 0x1C00B6D10
 * Callers:
 *     <none>
 * Callees:
 *     IsHWCursorUpdatePointerSupported_0 @ 0x1C0001638 (IsHWCursorUpdatePointerSupported_0.c)
 *     UserGetHDevFromMonitor @ 0x1C000DA50 (UserGetHDevFromMonitor.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00343E4 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0034460 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall NtHWCursorUpdatePointer(_QWORD *a1, __int128 *a2)
{
  _QWORD *v3; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  int v6; // r14d
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rcx
  _BOOL8 v12; // rdx
  PVOID v13; // rcx
  __int64 v14; // r14
  LARGE_INTEGER v15; // rcx
  LARGE_INTEGER v16; // rbx
  LARGE_INTEGER v17; // r8
  char v18; // al
  unsigned int v19; // edi
  __int64 HDevFromMonitor; // rax
  __int64 v22; // rdi
  int v23; // ebx
  bool v24; // sf
  const void *v25; // rbx
  int v26; // r13d
  int v27; // r15d
  int v28; // r14d
  size_t v29; // r12
  void *v30; // rax
  void *v31; // rsi
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-C8h]
  __int64 v33; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v34; // [rsp+38h] [rbp-B0h]
  __int128 v35; // [rsp+48h] [rbp-A0h]
  void *v36; // [rsp+58h] [rbp-90h]
  __int128 v37; // [rsp+60h] [rbp-88h]
  __int64 v38; // [rsp+70h] [rbp-78h]
  int v39; // [rsp+78h] [rbp-70h]
  int v40; // [rsp+7Ch] [rbp-6Ch]
  int v41; // [rsp+80h] [rbp-68h]
  int v42; // [rsp+84h] [rbp-64h]
  int v43; // [rsp+88h] [rbp-60h]
  void *v44; // [rsp+90h] [rbp-58h]
  __int64 v45; // [rsp+98h] [rbp-50h]
  int v46; // [rsp+A0h] [rbp-48h]
  __int64 v47; // [rsp+A4h] [rbp-44h]
  int v48; // [rsp+ACh] [rbp-3Ch]

  v3 = a1;
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
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8);
    v12 = 0LL;
    if ( CurrentProcess )
      v12 = CurrentProcess == g_pepDwm;
    if ( v12 || (PVOID)PsGetCurrentProcess(v11, v12) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v5 == gptiRit )
        continue;
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v13 = gpsemDITHitTestWaiters;
      goto LABEL_17;
    }
    if ( v5 != gptiRit )
    {
      _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v13 = gpsemRITBlockedOnDITWaiters;
LABEL_17:
      KeWaitForSingleObject(v13, UserRequest, 0, 0, 0LL);
      v6 = 1;
    }
  }
  while ( v6 == 1 );
  v14 = PsGetCurrentThreadWin32Thread(v11);
  if ( v14 )
  {
    v16 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v14 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C00FEA58 - 1) <= 2u
        || (qword_1C00FEA40 & 0x200000010000000LL) == 0
        || (v18 = 1, (qword_1C00FEA48 & 0x200000010000000LL) != qword_1C00FEA48) )
      {
        v18 = 0;
      }
      if ( v18 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LODWORD(Timeout) = 0;
        LOBYTE(v15.LowPart) = byte_1C00FEA58 - 1;
        Template_xqx(
          v15.QuadPart,
          &AcquiredSharedUserCritEvent,
          v17.QuadPart,
          v16.QuadPart,
          Timeout,
          gullUserCritAcquireToken);
      }
    }
    if ( v16.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(Timeout) = 1000 * v16.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredSharedUserCritTelemetryEvent,
        v17.QuadPart,
        0LL,
        Timeout,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v14 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  if ( !(unsigned int)IsHWCursorUpdatePointerSupported_0() )
  {
    v19 = -1073741822;
    goto LABEL_36;
  }
  if ( !v3 )
  {
LABEL_35:
    v19 = -1073741811;
    goto LABEL_36;
  }
  if ( v3 >= W32UserProbeAddress )
    v3 = W32UserProbeAddress;
  v37 = *(_OWORD *)v3;
  v38 = v3[2];
  HDevFromMonitor = UserGetHDevFromMonitor(v37);
  v22 = HDevFromMonitor;
  if ( !HDevFromMonitor )
  {
LABEL_40:
    UserSessionSwitchLeaveCrit();
    return 3221225485LL;
  }
  v33 = HDevFromMonitor;
  if ( (*(_DWORD *)(HDevFromMonitor + 56) & 0x20401) != 1 || !(unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v33) )
  {
    v23 = -1073741811;
LABEL_61:
    UserSessionSwitchLeaveCrit();
    return (unsigned int)v23;
  }
  v47 = *((_QWORD *)&v37 + 1);
  v46 = *(_DWORD *)(*(_QWORD *)(v22 + 2600) + 272LL);
  v48 = v38 & 1;
  if ( !a2 )
  {
    PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v33);
    v23 = _guard_dispatch_icall_fptr();
    v24 = v23 < 0;
    goto LABEL_45;
  }
  if ( a2 >= W32UserProbeAddress )
    a2 = (__int128 *)W32UserProbeAddress;
  v34 = *a2;
  v35 = a2[1];
  if ( (_DWORD)v34 != 1 )
    goto LABEL_40;
  v25 = (const void *)*((_QWORD *)&v35 + 1);
  if ( !*((_QWORD *)&v35 + 1) )
    goto LABEL_40;
  v26 = DWORD1(v34);
  if ( DWORD1(v34) > 0x100 )
    goto LABEL_35;
  v27 = DWORD2(v34);
  if ( DWORD2(v34) > 0x100 )
    goto LABEL_35;
  v28 = HIDWORD(v34);
  if ( HIDWORD(v34) > 0x800 )
    goto LABEL_35;
  v29 = (unsigned int)(DWORD2(v34) * HIDWORD(v34));
  v30 = PALLOCMEM2(v29, 1886221383LL, 1);
  v31 = v30;
  v36 = v30;
  if ( v30 )
  {
    if ( v25 >= W32UserProbeAddress )
      v25 = W32UserProbeAddress;
    memmove(v30, v25, v29);
    v39 = 2;
    v40 = v26;
    v41 = v27;
    v42 = v28;
    v43 = *(_DWORD *)(*(_QWORD *)(v22 + 2600) + 272LL);
    v44 = v31;
    v45 = v35;
    PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v33);
    v23 = _guard_dispatch_icall_fptr();
    Win32FreePool();
    v24 = v23 < 0;
LABEL_45:
    if ( v24 )
      v23 = -1073741823;
    goto LABEL_61;
  }
  v19 = -1073741823;
LABEL_36:
  UserSessionSwitchLeaveCrit();
  return v19;
}
