/*
 * XREFs of NtUserDisplayConfigGetDeviceInfo @ 0x1C004C340
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001C90 (PushW32ThreadLock_0.c)
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001D88 (PopAndFreeAlwaysW32ThreadLock_0.c)
 *     Win32AllocPoolWithQuota @ 0x1C00211D0 (Win32AllocPoolWithQuota.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C004C750 (DrvDisplayConfigGetDeviceInfo.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall NtUserDisplayConfigGetDeviceInfo(unsigned __int64 a1)
{
  _DWORD *v2; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // r15
  __int64 v5; // rcx
  LONGLONG v6; // rdx
  LONGLONG v7; // rcx
  __int64 v8; // r14
  LARGE_INTEGER v9; // rbx
  int v10; // r8d
  char v11; // al
  int DeviceInfo; // ebx
  unsigned int *v13; // rcx
  size_t v14; // rbx
  SIZE_T v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  bool v19; // zf
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  bool v23; // zf
  unsigned __int64 v24; // rax
  __int64 CurrentProcessWow64Process; // rax

  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
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
        Template_xqx(v7, (unsigned int)&AcquiredExclusiveUserCritEvent, v10, v9.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v9.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
    {
      v6 = 1000 * v9.QuadPart % gliQpcFreq.QuadPart;
      v7 = 1000 * v9.QuadPart / gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        Template_xqx(
          v7,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v10,
          0,
          1000 * v9.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
    }
    *(_QWORD *)(v8 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    v2 = 0LL;
  }
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( !gbVideoInitialized )
    goto LABEL_17;
  v13 = (unsigned int *)(a1 + 4);
  if ( a1 + 4 >= (unsigned __int64)W32UserProbeAddress )
    v13 = (unsigned int *)W32UserProbeAddress;
  v14 = *v13;
  if ( (unsigned int)v14 < 0x14 )
    ExRaiseStatus(-1073741811);
  v15 = *v13;
  v2 = (_DWORD *)Win32AllocPoolWithQuota();
  if ( !v2 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock_0();
  if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v17, v16, v18) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v14 + a1 > (unsigned __int64)W32UserProbeAddress || v14 + a1 < a1 )
    *(_BYTE *)W32UserProbeAddress = 0;
  memmove(v2, (const void *)a1, v14);
  v2[1] = v14;
  v7 = (unsigned int)*v2;
  if ( (_DWORD)v7 != -2 && (_DWORD)v7 != -8 )
  {
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
LABEL_17:
      DeviceInfo = -1073741823;
      goto LABEL_79;
    }
    if ( gProtocolType )
    {
      DeviceInfo = -1073741790;
      goto LABEL_79;
    }
  }
  if ( (int)v7 > 1 )
  {
    v7 = (unsigned int)(v7 - 2);
    if ( (_DWORD)v7 )
    {
      v7 = (unsigned int)(v7 - 1);
      if ( (_DWORD)v7 )
      {
        v7 = (unsigned int)(v7 - 1);
        if ( (_DWORD)v7 )
        {
          v7 = (unsigned int)(v7 - 2);
          if ( (unsigned int)v7 > 1 )
            goto LABEL_47;
          v19 = (_DWORD)v14 == 24;
        }
        else
        {
          v19 = (_DWORD)v14 == 276;
        }
      }
      else
      {
        v19 = (_DWORD)v14 == 80;
      }
    }
    else
    {
      v19 = (_DWORD)v14 == 420;
    }
  }
  else if ( (_DWORD)v7 == 1 )
  {
    v19 = (_DWORD)v14 == 84;
  }
  else
  {
    if ( (_DWORD)v7 != -8 )
    {
      switch ( (_DWORD)v7 )
      {
        case 0xFFFFFFF9:
          v19 = (_DWORD)v14 == 540;
          goto LABEL_46;
        case 0xFFFFFFFB:
          v19 = (_DWORD)v14 == 28;
          goto LABEL_46;
        case 0xFFFFFFFD:
          v19 = (_DWORD)v14 == 32;
          goto LABEL_46;
      }
      if ( (_DWORD)v7 != -2 )
        goto LABEL_47;
    }
    v19 = (_DWORD)v14 == 1972;
  }
LABEL_46:
  if ( !v19 )
  {
LABEL_47:
    DeviceInfo = -1073741811;
    goto LABEL_79;
  }
  DeviceInfo = DrvDisplayConfigGetDeviceInfo(v2);
  if ( *v2 == 3 )
    v2[7] = 0;
  if ( DeviceInfo == -2147483643 )
  {
    DeviceInfo = -1073741789;
  }
  else if ( DeviceInfo != -1073741789 )
  {
    if ( (unsigned int)(*v2 - 7) > 1 )
    {
      if ( DeviceInfo < 0 )
      {
        v24 = (unsigned int)(DeviceInfo + 1073741811);
        if ( (unsigned int)v24 > 0x23 || (v21 = 0x800200401LL, !_bittest64(&v21, v24)) )
        {
          v23 = DeviceInfo == -1073741637;
LABEL_72:
          if ( !v23 )
          {
            v21 = (unsigned int)DeviceInfo;
            if ( (unsigned int)(DeviceInfo + 1073741585) > 0xB )
              v21 = 3221225473LL;
            DeviceInfo = v21;
          }
        }
      }
    }
    else if ( DeviceInfo != -1073741811 && DeviceInfo != -1073741790 )
    {
      if ( (unsigned int)(DeviceInfo + 1073741649) > 0x11
        || (v21 = 135169LL, !_bittest((const int *)&v21, DeviceInfo + 1073741649)) )
      {
        if ( DeviceInfo < 0 && DeviceInfo != -1073741801 )
        {
          v23 = DeviceInfo == -1073741776;
          goto LABEL_72;
        }
      }
    }
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v21, v20, v22);
  ProbeForWrite((volatile void *)a1, v15, CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a1, v2, v15);
LABEL_79:
  if ( v2 )
    PopAndFreeAlwaysW32ThreadLock_0();
  UserSessionSwitchLeaveCrit(v7, v6);
  return (unsigned int)DeviceInfo;
}
