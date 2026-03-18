/*
 * XREFs of NtUserGetDisplayConfigBufferSizes @ 0x1C004BF80
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C001F2D0 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C0021860 (UserSessionSwitchEnterCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     GreIsDisconnectDeviceAttached @ 0x1C004C0EC (GreIsDisconnectDeviceAttached.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C004C2C0 (DrvGetDisplayConfigBufferSizes.c)
 */

__int64 __fastcall NtUserGetDisplayConfigBufferSizes(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // edi
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  int DisplayConfigBufferSizes; // eax
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rcx
  _DWORD v17[14]; // [rsp+20h] [rbp-38h] BYREF
  int v18; // [rsp+78h] [rbp+20h] BYREF

  v5 = a1;
  v18 = 0;
  v17[0] = 0;
  UserSessionSwitchEnterCrit(a1);
  if ( gbVideoInitialized )
  {
    v9 = a2;
    if ( a2 >= W32UserProbeAddress )
      v9 = W32UserProbeAddress;
    *v9 = *v9;
    v10 = a3;
    if ( a3 >= W32UserProbeAddress )
      v10 = W32UserProbeAddress;
    *v10 = *v10;
    if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu || (unsigned int)GreIsDisconnectDeviceAttached() )
    {
      v8 = 0;
    }
    else
    {
      DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(v5, &v18, v17);
      v8 = DisplayConfigBufferSizes;
      if ( DisplayConfigBufferSizes < 0 )
      {
        v12 = (unsigned int)(DisplayConfigBufferSizes + 1073741811);
        if ( (unsigned int)v12 > 0x23 || (v13 = 0x800200401LL, !_bittest64(&v13, v12)) )
        {
          if ( v8 != -1073741637 )
          {
            v14 = v8;
            if ( v8 + 1073741585 > 0xB )
              v14 = -1073741823;
            v8 = v14;
          }
        }
      }
    }
    *a2 = v18;
    *a3 = v17[0];
  }
  else
  {
    v8 = -1073741823;
  }
  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7) == gptiRit
    && !gbRITBlockedOnDIT
    && gcRITBlockedOnDITWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
    gcRITBlockedOnDITWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v15);
  ExReleaseResourceAndLeavePriorityRegion(gpresUser);
  return v8;
}
