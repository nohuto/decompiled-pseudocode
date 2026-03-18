/*
 * XREFs of NtUserDisplayConfigSetDeviceInfo @ 0x1C00AFDD0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001C90 (PushW32ThreadLock_0.c)
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001D88 (PopAndFreeAlwaysW32ThreadLock_0.c)
 *     Win32AllocPoolWithQuota @ 0x1C00211D0 (Win32AllocPoolWithQuota.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00BCAD0 (DrvDisplayConfigSetDeviceInfo.c)
 */

__int64 __fastcall NtUserDisplayConfigSetDeviceInfo(unsigned __int64 Src)
{
  _DWORD *v2; // rsi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rcx
  LONGLONG v6; // rdx
  LONGLONG v7; // rcx
  __int64 v8; // r14
  LARGE_INTEGER v9; // rsi
  LARGE_INTEGER v10; // r8
  char v11; // al
  int v12; // ebx
  int v13; // eax
  size_t v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // eax
  bool v20; // zf
  unsigned __int64 v21; // rax
  __int64 v23; // [rsp+20h] [rbp-68h]

  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Src);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v8 = PsGetCurrentThreadWin32Thread(v5);
  if ( v8 )
  {
    v9 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v8 + 8));
    v6 = 0x200000010000000LL;
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C01020C8 - 1) <= 2u
        || (qword_1C01020B0 & 0x200000010000000LL) == 0
        || (v11 = 1, (qword_1C01020B8 & 0x200000010000000LL) != qword_1C01020B8) )
      {
        v11 = 0;
      }
      if ( v11 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(
          v7,
          &AcquiredExclusiveUserCritEvent,
          v10.QuadPart,
          v9.QuadPart,
          0,
          gullUserCritAcquireToken,
          -1073741823);
    }
    if ( v9.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
    {
      v6 = 1000 * v9.QuadPart % gliQpcFreq.QuadPart;
      v7 = 1000 * v9.QuadPart / gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        LODWORD(v23) = 1000 * v9.QuadPart / gliQpcFreq.QuadPart;
        Template_xqx(v7, &AcquiredExclusiveUserCritTelemetryEvent, v10.QuadPart, 0LL, v23, gullUserCritAcquireToken);
      }
    }
    *(_QWORD *)(v8 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    v2 = 0LL;
  }
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( !gbVideoInitialized )
    goto LABEL_17;
  if ( (*((_DWORD *)v4 + 110) & 0x20000000) != 0 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)v4 + 47) + 728LL);
    v13 = *(_DWORD *)(v7 + 24) & 0x10;
  }
  else
  {
    v13 = 0;
  }
  if ( v13 )
    goto LABEL_56;
  v7 = (unsigned int)gbEnforceUIPI;
  if ( gbEnforceUIPI )
  {
    if ( (unsigned int)*(_QWORD *)(*((_QWORD *)v4 + 47) + 832LL) < 0x2000 )
      goto LABEL_56;
  }
  v7 = Src + 4;
  if ( Src + 4 >= (unsigned __int64)W32UserProbeAddress )
    v7 = (LONGLONG)W32UserProbeAddress;
  v14 = *(unsigned int *)v7;
  if ( *(_DWORD *)v7 < 0x14u )
  {
    v12 = -1073741789;
    v2 = 0LL;
    goto LABEL_57;
  }
  v2 = (_DWORD *)Win32AllocPoolWithQuota();
  if ( !v2 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock_0();
  if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v16, v15, v17) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & Src) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v14 + Src > (unsigned __int64)W32UserProbeAddress || v14 + Src < Src )
    *(_BYTE *)W32UserProbeAddress = 0;
  memmove(v2, (const void *)Src, v14);
  v2[1] = v14;
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
LABEL_17:
    v12 = -1073741823;
    goto LABEL_57;
  }
  if ( gProtocolType )
  {
LABEL_56:
    v12 = -1073741790;
    goto LABEL_57;
  }
  v18 = DrvDisplayConfigSetDeviceInfo(v2);
  v12 = v18;
  if ( v18 == -2147483643 )
  {
    v12 = -1073741789;
    goto LABEL_57;
  }
  if ( v18 == -1073741789 )
    goto LABEL_57;
  v7 = (unsigned int)(*v2 - 7);
  if ( (unsigned int)v7 > 1 )
  {
    if ( v18 >= 0 )
      goto LABEL_57;
    v21 = (unsigned int)(v18 + 1073741811);
    if ( (unsigned int)v21 <= 0x23 )
    {
      v7 = 0x800200401LL;
      if ( _bittest64(&v7, v21) )
        goto LABEL_57;
    }
    v20 = v12 == -1073741637;
  }
  else
  {
    if ( v18 == -1073741811 )
      goto LABEL_57;
    if ( v18 == -1073741790 )
      goto LABEL_57;
    v19 = v18 + 1073741649;
    if ( v19 <= 0x11 )
    {
      v7 = 135169LL;
      if ( _bittest((const int *)&v7, v19) )
        goto LABEL_57;
    }
    if ( v12 >= 0 || v12 == -1073741801 )
      goto LABEL_57;
    v20 = v12 == -1073741776;
  }
  if ( !v20 && (unsigned int)(v12 + 1073741585) > 0xB )
    v12 = -1073741823;
LABEL_57:
  if ( v2 )
    PopAndFreeAlwaysW32ThreadLock_0();
  UserSessionSwitchLeaveCrit(v7, v6);
  return (unsigned int)v12;
}
