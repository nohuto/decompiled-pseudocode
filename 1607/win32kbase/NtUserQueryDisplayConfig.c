/*
 * XREFs of NtUserQueryDisplayConfig @ 0x1C0049810
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001D98 (PushW32ThreadLock_0.c)
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001F00 (PopAndFreeAlwaysW32ThreadLock_0.c)
 *     EtwTraceReleaseUserCrit @ 0x1C00160F8 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C001F9D0 (UserSessionSwitchEnterCrit.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C003A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     DrvQueryDisplayConfig @ 0x1C0049E20 (DrvQueryDisplayConfig.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

__int64 __fastcall NtUserQueryDisplayConfig(
        __int64 a1,
        unsigned int *a2,
        volatile void *a3,
        unsigned int *a4,
        volatile void *Address,
        int *a6)
{
  int v9; // ebx
  void *v10; // r15
  void *v11; // r14
  int v12; // ecx
  unsigned int *v13; // rcx
  unsigned int *v14; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v16; // rax
  int DisplayConfig; // eax
  unsigned int v18; // edi
  unsigned int v19; // ebx
  __int64 v20; // rcx
  unsigned int v22; // [rsp+30h] [rbp-B8h]
  unsigned int v23; // [rsp+34h] [rbp-B4h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-B0h] BYREF
  int v25; // [rsp+3Ch] [rbp-ACh] BYREF
  void *v26; // [rsp+40h] [rbp-A8h]
  void *v27; // [rsp+48h] [rbp-A0h]
  int v28; // [rsp+50h] [rbp-98h]
  unsigned int *v29; // [rsp+70h] [rbp-78h]

  v29 = a4;
  v9 = a1;
  v10 = 0LL;
  v26 = 0LL;
  v11 = 0LL;
  v27 = 0LL;
  v23 = 0;
  v24 = 0;
  v25 = -1;
  UserSessionSwitchEnterCrit(a1);
  if ( gbVideoInitialized )
  {
    if ( (v9 & 0xEFFFFFE0) != 0 || (v12 = v9 & 7, ((v12 - 1) & 0xFFFFFFFC) != 0) || v12 == 3 )
    {
      v22 = -1073741811;
    }
    else
    {
      v13 = a2;
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        v13 = (unsigned int *)W32UserProbeAddress;
      *v13 = *v13;
      v23 = *a2;
      if ( !v23 )
      {
        v22 = -1073741811;
        v10 = v26;
        v11 = v27;
        goto LABEL_29;
      }
      v14 = a4;
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        v14 = (unsigned int *)W32UserProbeAddress;
      *v14 = *v14;
      v24 = *a4;
      if ( !v24 )
      {
        v22 = -1073741811;
        v10 = v26;
        v11 = v27;
        goto LABEL_29;
      }
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(0x38E38E38E38E38ELL);
      ProbeForWrite(a3, 72LL * v23, CurrentProcessWow64Process != 0 ? 1 : 4);
      v10 = Win32AllocPoolWithQuotaZInit(72LL * v23);
      v26 = v10;
      if ( !v10 )
        ExRaiseStatus(-1073741801);
      PushW32ThreadLock_0();
      v16 = PsGetCurrentProcessWow64Process(v24);
      ProbeForWrite(Address, (unsigned __int64)v24 << 6, v16 != 0 ? 1 : 4);
      v11 = Win32AllocPoolWithQuotaZInit((unsigned __int64)v24 << 6);
      v27 = v11;
      if ( !v11 )
        ExRaiseStatus(-1073741801);
      PushW32ThreadLock_0();
      v28 = v9 & 4;
      if ( (v9 & 4) != 0 )
      {
        ProbeForWrite(a6, 4uLL, 4u);
      }
      else if ( a6 )
      {
        v22 = -1073741811;
        goto LABEL_29;
      }
      if ( gProtocolType )
      {
        v22 = -1073741790;
      }
      else
      {
        DisplayConfig = DrvQueryDisplayConfig(
                          v9,
                          (unsigned int)&v23,
                          (_DWORD)v10,
                          (unsigned int)&v24,
                          (__int64)v11,
                          (__int64)&v25);
        v22 = DisplayConfig;
        if ( DisplayConfig == -2147483643 )
        {
          v22 = -1073741789;
        }
        else if ( DisplayConfig != -1073741789 )
        {
          if ( DisplayConfig < 0
            && DisplayConfig != -1073741811
            && DisplayConfig != -1073741801
            && DisplayConfig != -1073741790
            && DisplayConfig != -1073741776
            && DisplayConfig != -1073741637
            && (DisplayConfig <= -1073741586 || DisplayConfig > -1073741574) )
          {
            DisplayConfig = -1073741823;
          }
          v22 = DisplayConfig;
        }
        v18 = v23;
        memmove((void *)a3, v10, 72LL * v23);
        v19 = v24;
        memmove((void *)Address, v11, (unsigned __int64)v24 << 6);
        *a2 = v18;
        *v29 = v19;
        if ( v28 )
          *a6 = v25;
      }
    }
  }
  else
  {
    v22 = -1073741823;
  }
LABEL_29:
  if ( v11 )
    PopAndFreeAlwaysW32ThreadLock_0();
  if ( v10 )
    PopAndFreeAlwaysW32ThreadLock_0();
  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit
    && !gbRITBlockedOnDIT
    && gcRITBlockedOnDITWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
    gcRITBlockedOnDITWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v20);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v22;
}
