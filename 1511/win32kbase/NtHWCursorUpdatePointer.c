/*
 * XREFs of NtHWCursorUpdatePointer @ 0x1C00B9380
 * Callers:
 *     <none>
 * Callees:
 *     IsHWCursorUpdatePointerSupported_0 @ 0x1C00015D8 (IsHWCursorUpdatePointerSupported_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0037DF4 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0037E70 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     EnterSharedCritAvoidingDitHitTestHazard @ 0x1C0043380 (EnterSharedCritAvoidingDitHitTestHazard.c)
 *     UserGetHDevFromMonitor @ 0x1C0047058 (UserGetHDevFromMonitor.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall NtHWCursorUpdatePointer(_QWORD *a1, __int128 *a2)
{
  _QWORD *v3; // rbx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int64 v5; // rcx
  __int64 v6; // r14
  LARGE_INTEGER v7; // rcx
  LARGE_INTEGER v8; // rdi
  LARGE_INTEGER v9; // r8
  bool v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 HDevFromMonitor; // rax
  __int64 v16; // rdi
  int v17; // ebx
  bool v18; // sf
  const void *v19; // rbx
  int v20; // r13d
  int v21; // r15d
  int v22; // r14d
  size_t v23; // r12
  void *v24; // rax
  void *v25; // rsi
  __int64 v26; // [rsp+20h] [rbp-C8h]
  __int64 v27; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v28; // [rsp+38h] [rbp-B0h]
  __int128 v29; // [rsp+48h] [rbp-A0h]
  void *v30; // [rsp+58h] [rbp-90h]
  __int128 v31; // [rsp+60h] [rbp-88h]
  __int64 v32; // [rsp+70h] [rbp-78h]
  int v33; // [rsp+78h] [rbp-70h]
  int v34; // [rsp+7Ch] [rbp-6Ch]
  int v35; // [rsp+80h] [rbp-68h]
  int v36; // [rsp+84h] [rbp-64h]
  int v37; // [rsp+88h] [rbp-60h]
  void *v38; // [rsp+90h] [rbp-58h]
  __int64 v39; // [rsp+98h] [rbp-50h]
  int v40; // [rsp+A0h] [rbp-48h]
  __int64 v41; // [rsp+A4h] [rbp-44h]
  int v42; // [rsp+ACh] [rbp-3Ch]

  v3 = a1;
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
      v10 = (unsigned __int8)(byte_1C01020C8 - 1) > 2u
         && (qword_1C01020B0 & 0x200000010000000LL) != 0
         && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8;
      if ( v10 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v7.LowPart) = byte_1C01020C8 - 1;
        Template_xqx(v7.QuadPart, &AcquiredSharedUserCritEvent, v9.QuadPart, v8.QuadPart, 0, gullUserCritAcquireToken);
      }
    }
    if ( v8.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v26) = 1000 * v8.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredSharedUserCritTelemetryEvent,
        v9.QuadPart,
        0LL,
        v26,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v6 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  if ( !(unsigned int)IsHWCursorUpdatePointerSupported_0() && !gbOSTestSigningEnabled )
  {
    v13 = -1073741822;
LABEL_22:
    UserSessionSwitchLeaveCrit(v12, v11);
    return v13;
  }
  if ( !v3 )
  {
LABEL_21:
    v13 = -1073741811;
    goto LABEL_22;
  }
  if ( v3 >= W32UserProbeAddress )
    v3 = W32UserProbeAddress;
  v31 = *(_OWORD *)v3;
  v32 = v3[2];
  HDevFromMonitor = UserGetHDevFromMonitor(v31, v11);
  v16 = HDevFromMonitor;
  if ( !HDevFromMonitor )
    goto LABEL_26;
  v27 = HDevFromMonitor;
  if ( (*(_DWORD *)(HDevFromMonitor + 56) & 0x20401) == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v27) )
  {
    v41 = *((_QWORD *)&v31 + 1);
    v12 = *(unsigned int *)(*(_QWORD *)(v16 + 2600) + 272LL);
    v40 = *(_DWORD *)(*(_QWORD *)(v16 + 2600) + 272LL);
    v42 = v32 & 1;
    if ( a2 )
    {
      if ( a2 >= W32UserProbeAddress )
        a2 = (__int128 *)W32UserProbeAddress;
      v28 = *a2;
      v29 = a2[1];
      if ( (_DWORD)v28 != 1 || (v19 = (const void *)*((_QWORD *)&v29 + 1)) == 0LL )
      {
LABEL_26:
        UserSessionSwitchLeaveCrit(v12, v11);
        return 3221225485LL;
      }
      v20 = DWORD1(v28);
      if ( DWORD1(v28) > 0x100 )
        goto LABEL_21;
      v21 = DWORD2(v28);
      if ( DWORD2(v28) > 0x100 )
        goto LABEL_21;
      v22 = HIDWORD(v28);
      if ( HIDWORD(v28) > 0x800 )
        goto LABEL_21;
      v23 = (unsigned int)(DWORD2(v28) * HIDWORD(v28));
      v24 = PALLOCMEM2(v23, 1886221383LL, 1);
      v25 = v24;
      v30 = v24;
      if ( !v24 )
      {
        v13 = -1073741823;
        goto LABEL_22;
      }
      if ( v19 >= W32UserProbeAddress )
        v19 = W32UserProbeAddress;
      memmove(v24, v19, v23);
      v33 = 2;
      v34 = v20;
      v35 = v21;
      v36 = v22;
      v37 = *(_DWORD *)(*(_QWORD *)(v16 + 2600) + 272LL);
      v38 = v25;
      v39 = v29;
      PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v27);
      v17 = _guard_dispatch_icall_fptr();
      Win32FreePool();
      v18 = v17 < 0;
    }
    else
    {
      PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v27);
      v17 = _guard_dispatch_icall_fptr();
      v18 = v17 < 0;
    }
    if ( v18 )
      v17 = -1073741823;
  }
  else
  {
    v17 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  return (unsigned int)v17;
}
