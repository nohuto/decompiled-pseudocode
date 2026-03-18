/*
 * XREFs of NtUserQueryDisplayConfig @ 0x1C004B650
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001C90 (PushW32ThreadLock_0.c)
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001D88 (PopAndFreeAlwaysW32ThreadLock_0.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 *     EtwTraceReleaseUserCrit @ 0x1C001F2D0 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C0021860 (UserSessionSwitchEnterCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     DrvQueryDisplayConfig @ 0x1C004C1B0 (DrvQueryDisplayConfig.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // ecx
  unsigned int *v15; // rcx
  unsigned int *v16; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  int DisplayConfig; // eax
  int v22; // ecx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // edi
  unsigned int v26; // ebx
  __int64 v27; // rcx
  unsigned int v29; // [rsp+30h] [rbp-B8h]
  unsigned int v30; // [rsp+34h] [rbp-B4h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-B0h] BYREF
  int v32; // [rsp+3Ch] [rbp-ACh] BYREF
  void *v33; // [rsp+40h] [rbp-A8h]
  void *v34; // [rsp+48h] [rbp-A0h]
  int v35; // [rsp+50h] [rbp-98h]
  unsigned int *v36; // [rsp+70h] [rbp-78h]

  v36 = a4;
  v9 = a1;
  v10 = 0LL;
  v34 = 0LL;
  v11 = 0LL;
  v33 = 0LL;
  v31 = 0;
  v30 = 0;
  v32 = -1;
  UserSessionSwitchEnterCrit(a1);
  if ( !gbVideoInitialized )
  {
    v12 = 3221225473LL;
    v29 = -1073741823;
    goto LABEL_38;
  }
  if ( (v9 & 0xFFFFFFE0) != 0 || (v14 = v9 & 7, ((v14 - 1) & 0xFFFFFFFC) != 0) || v14 == 3 )
  {
    v29 = -1073741811;
  }
  else
  {
    v15 = a2;
    if ( a2 >= W32UserProbeAddress )
      v15 = (unsigned int *)W32UserProbeAddress;
    *v15 = *v15;
    v31 = *a2;
    if ( !v31 )
    {
      v29 = -1073741811;
      v10 = v34;
      v11 = v33;
      goto LABEL_38;
    }
    v16 = a4;
    if ( a4 >= W32UserProbeAddress )
      v16 = (unsigned int *)W32UserProbeAddress;
    *v16 = *v16;
    v30 = *a4;
    if ( !v30 )
    {
      v29 = -1073741811;
      v10 = v34;
      v11 = v33;
      goto LABEL_38;
    }
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(0x38E38E38E38E38ELL, v12, v13);
    ProbeForWrite(a3, 72LL * v31, CurrentProcessWow64Process != 0 ? 1 : 4);
    v10 = Win32AllocPoolWithQuotaZInit(72LL * v31);
    v34 = v10;
    if ( !v10 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock_0();
    v20 = PsGetCurrentProcessWow64Process(v30, v18, v19);
    ProbeForWrite(Address, (unsigned __int64)v30 << 6, v20 != 0 ? 1 : 4);
    v11 = Win32AllocPoolWithQuotaZInit((unsigned __int64)v30 << 6);
    v33 = v11;
    if ( !v11 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock_0();
    v35 = v9 & 4;
    if ( (v9 & 4) != 0 )
    {
      ProbeForWrite(a6, 4uLL, 4u);
    }
    else if ( a6 )
    {
      v29 = -1073741811;
      goto LABEL_38;
    }
    if ( gProtocolType )
    {
      v29 = -1073741790;
    }
    else
    {
      DisplayConfig = DrvQueryDisplayConfig(
                        v9,
                        (unsigned int)&v31,
                        (_DWORD)v10,
                        (unsigned int)&v30,
                        (__int64)v11,
                        (__int64)&v32);
      v22 = DisplayConfig;
      v29 = DisplayConfig;
      if ( DisplayConfig == -2147483643 )
      {
        v29 = -1073741789;
      }
      else if ( DisplayConfig != -1073741789 )
      {
        if ( DisplayConfig < 0 )
        {
          v23 = (unsigned int)(DisplayConfig + 1073741811);
          if ( (unsigned int)v23 > 0x23 || (v24 = 0x800200401LL, !_bittest64(&v24, v23)) )
          {
            if ( v22 != -1073741637 && (unsigned int)(v22 + 1073741585) > 0xB )
              v22 = -1073741823;
          }
        }
        v29 = v22;
      }
      v25 = v31;
      memmove((void *)a3, v10, 72LL * v31);
      v26 = v30;
      memmove((void *)Address, v11, (unsigned __int64)v30 << 6);
      *a2 = v25;
      *v36 = v26;
      if ( v35 )
        *a6 = v32;
    }
  }
LABEL_38:
  if ( v11 )
    PopAndFreeAlwaysW32ThreadLock_0();
  if ( v10 )
    PopAndFreeAlwaysW32ThreadLock_0();
  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13) == gptiRit
    && !gbRITBlockedOnDIT
    && gcRITBlockedOnDITWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
    gcRITBlockedOnDITWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v27);
  ExReleaseResourceAndLeavePriorityRegion(gpresUser);
  return v29;
}
