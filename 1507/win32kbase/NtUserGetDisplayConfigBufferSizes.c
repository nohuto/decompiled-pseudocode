/*
 * XREFs of NtUserGetDisplayConfigBufferSizes @ 0x1C001E670
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchEnterCrit @ 0x1C0010820 (UserSessionSwitchEnterCrit.c)
 *     GreIsDisconnectDeviceAttached @ 0x1C001E5A8 (GreIsDisconnectDeviceAttached.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C001E980 (DrvGetDisplayConfigBufferSizes.c)
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall NtUserGetDisplayConfigBufferSizes(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v5; // edi
  _DWORD *v6; // r8
  _DWORD *v7; // rcx
  char v8; // si
  unsigned int v9; // edi
  int DisplayConfigBufferSizes; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 CurrentThreadWin32Thread; // rsi
  DWORD LowPart; // eax
  int v16; // r8d
  _DWORD v18[12]; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+88h] [rbp+20h] BYREF

  v5 = a1;
  v19 = 0;
  v18[0] = 0;
  UserSessionSwitchEnterCrit(a1);
  v6 = a2;
  if ( a2 >= W32UserProbeAddress )
    v6 = W32UserProbeAddress;
  *v6 = *v6;
  v7 = a3;
  if ( a3 >= W32UserProbeAddress )
    v7 = W32UserProbeAddress;
  *v7 = *v7;
  v8 = 1;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu || (unsigned int)GreIsDisconnectDeviceAttached() )
  {
    v9 = 0;
  }
  else
  {
    DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(v5, &v19, v18);
    v9 = DisplayConfigBufferSizes;
    if ( DisplayConfigBufferSizes < 0 )
    {
      v11 = (unsigned int)(DisplayConfigBufferSizes + 1073741811);
      if ( (unsigned int)v11 > 0x23 || (v12 = 0x800200401LL, !_bittest64(&v12, v11)) )
      {
        if ( v9 != -1073741637 && v9 + 1073741585 > 0xB )
          v9 = -1073741823;
      }
    }
  }
  *a2 = v19;
  *a3 = v18[0];
  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread(KeGetCurrentThread()) == gptiRit
    && !gbRITBlockedOnDIT
    && gcRITBlockedOnDITWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
    gcRITBlockedOnDITWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
  {
    if ( (unsigned __int8)(byte_1C00FEA58 - 1) <= 2u
      || (qword_1C00FEA40 & 0x200000010000000LL) == 0
      || (qword_1C00FEA48 & 0x200000010000000LL) != qword_1C00FEA48 )
    {
      v8 = 0;
    }
    if ( v8 )
    {
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v13);
      if ( CurrentThreadWin32Thread )
      {
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          Template_xqx(
            *(_QWORD *)(CurrentThreadWin32Thread + 16),
            (unsigned int)&ReleaseUserCritEvent,
            v16,
            LowPart - *(_DWORD *)(CurrentThreadWin32Thread + 8),
            0,
            *(_QWORD *)(CurrentThreadWin32Thread + 16));
      }
    }
  }
  ExReleaseResourceAndLeavePriorityRegion(gpresUser);
  return v9;
}
