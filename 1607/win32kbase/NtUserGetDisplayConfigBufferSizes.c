/*
 * XREFs of NtUserGetDisplayConfigBufferSizes @ 0x1C0049BD0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C00160F8 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C001F9D0 (UserSessionSwitchEnterCrit.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     GreIsDisconnectDeviceAttached @ 0x1C0049CDC (GreIsDisconnectDeviceAttached.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0049DA0 (DrvGetDisplayConfigBufferSizes.c)
 */

__int64 __fastcall NtUserGetDisplayConfigBufferSizes(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v5; // ebx
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  int DisplayConfigBufferSizes; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  _DWORD v12[14]; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v5 = a1;
  v13 = 0;
  v12[0] = 0;
  UserSessionSwitchEnterCrit(a1);
  if ( gbVideoInitialized )
  {
    v6 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v6 = (_DWORD *)W32UserProbeAddress;
    *v6 = *v6;
    v7 = a3;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      v7 = (_DWORD *)W32UserProbeAddress;
    *v7 = *v7;
    if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu || (unsigned int)GreIsDisconnectDeviceAttached() )
    {
      v9 = 0;
    }
    else
    {
      DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(v5, &v13, v12);
      v9 = DisplayConfigBufferSizes;
      if ( DisplayConfigBufferSizes < 0
        && DisplayConfigBufferSizes != -1073741811
        && DisplayConfigBufferSizes != -1073741801
        && DisplayConfigBufferSizes != -1073741790
        && DisplayConfigBufferSizes != -1073741776
        && DisplayConfigBufferSizes != -1073741637
        && (DisplayConfigBufferSizes <= -1073741586 || DisplayConfigBufferSizes > -1073741574) )
      {
        v9 = -1073741823;
      }
    }
    *a2 = v13;
    *a3 = v12[0];
  }
  else
  {
    v9 = -1073741823;
  }
  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit
    && !gbRITBlockedOnDIT
    && gcRITBlockedOnDITWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
    gcRITBlockedOnDITWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v10);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v9;
}
