/*
 * XREFs of NtHWCursorUpdatePointer @ 0x1C00C4890
 * Callers:
 *     <none>
 * Callees:
 *     IsHWCursorUpdatePointerSupported_0 @ 0x1C0001648 (IsHWCursorUpdatePointerSupported_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0031A08 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0031A80 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     UserGetHDevFromMonitor @ 0x1C0057EA8 (UserGetHDevFromMonitor.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall NtHWCursorUpdatePointer(ULONGLONG a1, __int128 *a2)
{
  ULONGLONG v3; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  int v6; // r14d
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rcx
  BOOL v11; // edx
  PRKSEMAPHORE v12; // rcx
  __int64 v13; // r14
  LARGE_INTEGER v14; // rcx
  LARGE_INTEGER v15; // rbx
  LARGE_INTEGER v16; // r8
  char v17; // al
  unsigned int v18; // edi
  __int64 HDevFromMonitor; // rax
  __int64 v21; // rdi
  int v22; // ebx
  bool v23; // sf
  const void *v24; // rbx
  int v25; // r13d
  int v26; // r15d
  int v27; // r14d
  size_t v28; // r12
  void *v29; // rax
  void *v30; // rsi
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-C8h]
  __int64 v32; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v33; // [rsp+38h] [rbp-B0h]
  __int128 v34; // [rsp+48h] [rbp-A0h]
  void *v35; // [rsp+58h] [rbp-90h]
  __int128 v36; // [rsp+60h] [rbp-88h]
  __int64 v37; // [rsp+70h] [rbp-78h]
  int v38; // [rsp+78h] [rbp-70h]
  int v39; // [rsp+7Ch] [rbp-6Ch]
  int v40; // [rsp+80h] [rbp-68h]
  int v41; // [rsp+84h] [rbp-64h]
  int v42; // [rsp+88h] [rbp-60h]
  void *v43; // [rsp+90h] [rbp-58h]
  __int64 v44; // [rsp+98h] [rbp-50h]
  int v45; // [rsp+A0h] [rbp-48h]
  __int64 v46; // [rsp+A4h] [rbp-44h]
  int v47; // [rsp+ACh] [rbp-3Ch]

  v3 = a1;
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
    v11 = 0;
    if ( CurrentProcess )
      v11 = CurrentProcess == g_pepDwm;
    if ( v11 || (PVOID)PsGetCurrentProcess(v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v5 == gptiRit )
        continue;
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v12 = gpsemDITHitTestWaiters;
      goto LABEL_17;
    }
    if ( v5 != gptiRit )
    {
      _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v12 = (PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters;
LABEL_17:
      KeWaitForSingleObject(v12, UserRequest, 0, 0, 0LL);
      v6 = 1;
    }
  }
  while ( v6 == 1 );
  v13 = PsGetCurrentThreadWin32Thread(v10);
  if ( v13 )
  {
    v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C0118B28 - 1) <= 2u
        || (qword_1C0118B10 & 0x200000010000000LL) == 0
        || (v17 = 1, (qword_1C0118B18 & 0x200000010000000LL) != qword_1C0118B18) )
      {
        v17 = 0;
      }
      if ( v17 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LODWORD(Timeout) = 0;
        LOBYTE(v14.LowPart) = byte_1C0118B28 - 1;
        Template_xqx(
          v14.QuadPart,
          &AcquiredSharedUserCritEvent,
          v16.QuadPart,
          v15.QuadPart,
          Timeout,
          gullUserCritAcquireToken);
      }
    }
    if ( v15.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(Timeout) = 1000 * v15.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredSharedUserCritTelemetryEvent,
        v16.QuadPart,
        0LL,
        Timeout,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v13 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  if ( !(unsigned int)IsHWCursorUpdatePointerSupported_0() && !gbOSTestSigningEnabled )
  {
    v18 = -1073741822;
    goto LABEL_37;
  }
  if ( !v3 )
  {
LABEL_36:
    v18 = -1073741811;
    goto LABEL_37;
  }
  if ( v3 >= W32UserProbeAddress )
    v3 = W32UserProbeAddress;
  v36 = *(_OWORD *)v3;
  v37 = *(_QWORD *)(v3 + 16);
  HDevFromMonitor = UserGetHDevFromMonitor(v36);
  v21 = HDevFromMonitor;
  if ( !HDevFromMonitor )
  {
LABEL_41:
    UserSessionSwitchLeaveCrit();
    return 3221225485LL;
  }
  v32 = HDevFromMonitor;
  if ( (*(_DWORD *)(HDevFromMonitor + 56) & 0x20401) != 1 || !(unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v32) )
  {
    v22 = -1073741811;
LABEL_62:
    UserSessionSwitchLeaveCrit();
    return (unsigned int)v22;
  }
  v46 = *((_QWORD *)&v36 + 1);
  v45 = *(_DWORD *)(*(_QWORD *)(v21 + 2600) + 272LL);
  v47 = v37 & 1;
  if ( !a2 )
  {
    PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v32);
    v22 = _guard_dispatch_icall_fptr();
    v23 = v22 < 0;
    goto LABEL_46;
  }
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (__int128 *)W32UserProbeAddress;
  v33 = *a2;
  v34 = a2[1];
  if ( (_DWORD)v33 != 1 )
    goto LABEL_41;
  v24 = (const void *)*((_QWORD *)&v34 + 1);
  if ( !*((_QWORD *)&v34 + 1) )
    goto LABEL_41;
  v25 = DWORD1(v33);
  if ( DWORD1(v33) > 0x100 )
    goto LABEL_36;
  v26 = DWORD2(v33);
  if ( DWORD2(v33) > 0x100 )
    goto LABEL_36;
  v27 = HIDWORD(v33);
  if ( HIDWORD(v33) > 0x800 )
    goto LABEL_36;
  v28 = (unsigned int)(DWORD2(v33) * HIDWORD(v33));
  v29 = PALLOCMEM2(v28, 1886221383LL, 1);
  v30 = v29;
  v35 = v29;
  if ( v29 )
  {
    if ( (unsigned __int64)v24 >= W32UserProbeAddress )
      v24 = (const void *)W32UserProbeAddress;
    memmove(v29, v24, v28);
    v38 = 2;
    v39 = v25;
    v40 = v26;
    v41 = v27;
    v42 = *(_DWORD *)(*(_QWORD *)(v21 + 2600) + 272LL);
    v43 = v30;
    v44 = v34;
    PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v32);
    v22 = _guard_dispatch_icall_fptr();
    Win32FreePool();
    v23 = v22 < 0;
LABEL_46:
    if ( v23 )
      v22 = -1073741823;
    goto LABEL_62;
  }
  v18 = -1073741823;
LABEL_37:
  UserSessionSwitchLeaveCrit();
  return v18;
}
