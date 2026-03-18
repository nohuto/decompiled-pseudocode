/*
 * XREFs of NtUserQueryDisplayConfig @ 0x1C001E110
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001C70 (PushW32ThreadLock_0.c)
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001D68 (PopAndFreeAlwaysW32ThreadLock_0.c)
 *     UserSessionSwitchEnterCrit @ 0x1C0010820 (UserSessionSwitchEnterCrit.c)
 *     DrvQueryDisplayConfig @ 0x1C001E870 (DrvQueryDisplayConfig.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C00313E0 (Win32AllocPoolWithQuotaZInit.c)
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall NtUserQueryDisplayConfig(
        __int64 a1,
        unsigned int *a2,
        void *a3,
        unsigned int *a4,
        volatile void *Address,
        volatile void *a6)
{
  int v9; // ebx
  const void *v10; // r15
  const void *v11; // r14
  int v12; // ecx
  unsigned int *v13; // rcx
  unsigned int *v14; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v16; // rax
  _DWORD *v17; // r12
  int DisplayConfig; // eax
  int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // edi
  unsigned int v23; // ebx
  __int64 v24; // rcx
  char v25; // dl
  __int64 CurrentThreadWin32Thread; // rbx
  DWORD LowPart; // eax
  int v28; // r8d
  unsigned int v30; // [rsp+30h] [rbp-B8h]
  unsigned int v31; // [rsp+34h] [rbp-B4h] BYREF
  int v32; // [rsp+38h] [rbp-B0h] BYREF
  const void *v33; // [rsp+40h] [rbp-A8h]
  const void *v34; // [rsp+48h] [rbp-A0h]
  int v35; // [rsp+50h] [rbp-98h]
  unsigned int *v36; // [rsp+70h] [rbp-78h]
  unsigned int v37; // [rsp+F0h] [rbp+8h] BYREF
  void *v38; // [rsp+100h] [rbp+18h]

  v38 = a3;
  v36 = a4;
  v9 = a1;
  v10 = 0LL;
  v34 = 0LL;
  v11 = 0LL;
  v33 = 0LL;
  v37 = 0;
  v31 = 0;
  v32 = -1;
  UserSessionSwitchEnterCrit(a1);
  if ( (v9 & 0xFFFFFFE0) != 0 || (v12 = v9 & 7, ((v12 - 1) & 0xFFFFFFFC) != 0) || v12 == 3 )
  {
    v30 = -1073741811;
  }
  else
  {
    v13 = a2;
    if ( a2 >= W32UserProbeAddress )
      v13 = (unsigned int *)W32UserProbeAddress;
    *v13 = *v13;
    v37 = *a2;
    if ( !v37 )
    {
      v30 = -1073741811;
      v10 = v34;
      v11 = v33;
      goto LABEL_36;
    }
    v14 = a4;
    if ( a4 >= W32UserProbeAddress )
      v14 = (unsigned int *)W32UserProbeAddress;
    *v14 = *v14;
    v31 = *a4;
    if ( !v31 )
    {
      v30 = -1073741811;
      v10 = v34;
      v11 = v33;
      goto LABEL_36;
    }
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(a3, 72LL * v37, CurrentProcessWow64Process != 0 ? 1 : 4);
    v10 = (const void *)Win32AllocPoolWithQuotaZInit(72LL * v37);
    v34 = v10;
    if ( !v10 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock_0();
    v16 = PsGetCurrentProcessWow64Process();
    ProbeForWrite(Address, (unsigned __int64)v31 << 6, v16 != 0 ? 1 : 4);
    v11 = (const void *)Win32AllocPoolWithQuotaZInit((unsigned __int64)v31 << 6);
    v33 = v11;
    if ( !v11 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock_0();
    v35 = v9 & 4;
    v17 = a6;
    if ( (v9 & 4) != 0 )
    {
      ProbeForWrite(a6, 4uLL, 4u);
    }
    else if ( a6 )
    {
      v30 = -1073741811;
      goto LABEL_36;
    }
    if ( gProtocolType )
    {
      v30 = -1073741790;
    }
    else
    {
      DisplayConfig = DrvQueryDisplayConfig(
                        v9,
                        (unsigned int)&v37,
                        (_DWORD)v10,
                        (unsigned int)&v31,
                        (__int64)v11,
                        (__int64)&v32);
      v19 = DisplayConfig;
      v30 = DisplayConfig;
      if ( DisplayConfig == -2147483643 )
      {
        v30 = -1073741789;
      }
      else if ( DisplayConfig != -1073741789 )
      {
        if ( DisplayConfig < 0 )
        {
          v20 = DisplayConfig + 1073741811;
          if ( v20 > 0x23 || (v21 = 0x800200401LL, !_bittest64(&v21, (int)v20)) )
          {
            if ( v19 != -1073741637 && (unsigned int)(v19 + 1073741585) > 0xB )
              v19 = -1073741823;
          }
        }
        v30 = v19;
      }
      v22 = v37;
      memmove(v38, v10, 72LL * v37);
      v23 = v31;
      memmove((void *)Address, v11, (unsigned __int64)v31 << 6);
      *a2 = v22;
      *v36 = v23;
      if ( v35 )
        *v17 = v32;
    }
  }
LABEL_36:
  if ( v11 )
    PopAndFreeAlwaysW32ThreadLock_0();
  if ( v10 )
    PopAndFreeAlwaysW32ThreadLock_0();
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
    v25 = 1;
    if ( (unsigned __int8)(byte_1C00FEA58 - 1) <= 2u
      || (qword_1C00FEA40 & 0x200000010000000LL) == 0
      || (qword_1C00FEA48 & 0x200000010000000LL) != qword_1C00FEA48 )
    {
      v25 = 0;
    }
    if ( v25 )
    {
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v24);
      if ( CurrentThreadWin32Thread )
      {
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          Template_xqx(
            *(_QWORD *)(CurrentThreadWin32Thread + 16),
            (unsigned int)&ReleaseUserCritEvent,
            v28,
            LowPart - *(_DWORD *)(CurrentThreadWin32Thread + 8),
            0,
            *(_QWORD *)(CurrentThreadWin32Thread + 16));
      }
    }
  }
  ExReleaseResourceAndLeavePriorityRegion(gpresUser);
  return v30;
}
