/*
 * XREFs of NtUserDisplayConfigGetDeviceInfo @ 0x1C0049F30
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001D98 (PushW32ThreadLock_0.c)
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001F00 (PopAndFreeAlwaysW32ThreadLock_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C004A240 (DrvDisplayConfigGetDeviceInfo.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall NtUserDisplayConfigGetDeviceInfo(unsigned __int64 a1)
{
  int *v2; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // r15
  __int64 v5; // rcx
  __int64 v6; // r14
  int v7; // ecx
  LARGE_INTEGER v8; // rbx
  int v9; // r8d
  unsigned int *v10; // rcx
  size_t v11; // rbx
  SIZE_T v12; // r14
  __int64 v13; // rcx
  int v14; // ecx
  bool v15; // zf
  __int64 v16; // rcx
  int DeviceInfo; // ebx
  __int64 CurrentProcessWow64Process; // rax
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  char v24; // al
  bool v25; // zf

  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v6 = PsGetCurrentThreadWin32Thread(v5);
  if ( v6 )
  {
    v8 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v6 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C0118B28 - 1) <= 2u
        || (qword_1C0118B10 & 0x200000010000000LL) == 0
        || (v24 = 1, (qword_1C0118B18 & 0x200000010000000LL) != qword_1C0118B18) )
      {
        v24 = 0;
      }
      if ( v24 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(v7, (unsigned int)&AcquiredExclusiveUserCritEvent, v9, v8.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v8.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        1000 * v8.QuadPart / gliQpcFreq.QuadPart,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v9,
        0,
        1000 * v8.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v6 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    v2 = 0LL;
  }
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( !gbVideoInitialized )
    goto LABEL_47;
  v10 = (unsigned int *)(a1 + 4);
  if ( a1 + 4 >= W32UserProbeAddress )
    v10 = (unsigned int *)W32UserProbeAddress;
  v11 = *v10;
  if ( (unsigned int)v11 < 0x14 )
    ExRaiseStatus(-1073741811);
  v12 = (unsigned int)v11;
  v2 = (int *)Win32AllocPoolWithQuota();
  if ( !v2 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock_0();
  if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v13) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v11 + a1 > W32UserProbeAddress || v11 + a1 < a1 )
    *(_BYTE *)W32UserProbeAddress = 0;
  memmove(v2, (const void *)a1, v11);
  v2[1] = v11;
  v14 = *v2;
  if ( *v2 == -2 )
    goto LABEL_21;
  if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
LABEL_47:
    DeviceInfo = -1073741823;
    goto LABEL_30;
  }
  if ( gProtocolType )
  {
    DeviceInfo = -1073741790;
    goto LABEL_30;
  }
  if ( v14 > -2 )
  {
    v20 = v14 - 1;
    if ( !v20 )
    {
      v15 = (_DWORD)v11 == 84;
      goto LABEL_22;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
      v15 = (_DWORD)v11 == 420;
      goto LABEL_22;
    }
    v22 = v21 - 1;
    if ( !v22 )
    {
      v15 = (_DWORD)v11 == 80;
      goto LABEL_22;
    }
    v23 = v22 - 1;
    if ( !v23 )
    {
      v15 = (_DWORD)v11 == 276;
      goto LABEL_22;
    }
    if ( (unsigned int)(v23 - 2) < 2 )
    {
LABEL_38:
      v15 = (_DWORD)v11 == 24;
      goto LABEL_22;
    }
    goto LABEL_69;
  }
  switch ( v14 )
  {
    case -2:
LABEL_21:
      v15 = (_DWORD)v11 == 1976;
      goto LABEL_22;
    case -9:
      goto LABEL_38;
    case -10:
      goto LABEL_66;
    case -8:
      v15 = (_DWORD)v11 == 536;
LABEL_22:
      if ( v15 )
      {
        DeviceInfo = DrvDisplayConfigGetDeviceInfo(v2);
        if ( *v2 == 3 )
          v2[7] = 0;
        if ( DeviceInfo == -2147483643 )
        {
          DeviceInfo = -1073741789;
        }
        else if ( DeviceInfo != -1073741789 )
        {
          if ( *v2 < 7 || *v2 > 8 )
          {
            if ( DeviceInfo < 0
              && DeviceInfo != -1073741811
              && DeviceInfo != -1073741801
              && DeviceInfo != -1073741790
              && DeviceInfo != -1073741776 )
            {
              v25 = DeviceInfo == -1073741637;
              goto LABEL_84;
            }
          }
          else if ( DeviceInfo != -1073741811
                 && DeviceInfo != -1073741790
                 && DeviceInfo != -1073741649
                 && DeviceInfo != -1073741637
                 && DeviceInfo != -1073741632
                 && DeviceInfo < 0
                 && DeviceInfo != -1073741801 )
          {
            v25 = DeviceInfo == -1073741776;
LABEL_84:
            if ( !v25 && (DeviceInfo <= -1073741586 || DeviceInfo > -1073741574) )
              DeviceInfo = -1073741823;
          }
        }
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v16);
        ProbeForWrite((volatile void *)a1, v12, CurrentProcessWow64Process != 0 ? 1 : 4);
        memmove((void *)a1, v2, v12);
        goto LABEL_30;
      }
      break;
    case -7:
      v15 = (_DWORD)v11 == 540;
      goto LABEL_22;
    case -5:
LABEL_66:
      v15 = (_DWORD)v11 == 28;
      goto LABEL_22;
    case -3:
      v15 = (_DWORD)v11 == 32;
      goto LABEL_22;
  }
LABEL_69:
  DeviceInfo = -1073741811;
LABEL_30:
  if ( v2 )
    PopAndFreeAlwaysW32ThreadLock_0();
  UserSessionSwitchLeaveCrit();
  return (unsigned int)DeviceInfo;
}
