/*
 * XREFs of NtUserDisplayConfigSetDeviceInfo @ 0x1C00B9A80
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001D98 (PushW32ThreadLock_0.c)
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001F00 (PopAndFreeAlwaysW32ThreadLock_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00C87A0 (DrvDisplayConfigSetDeviceInfo.c)
 */

__int64 __fastcall NtUserDisplayConfigSetDeviceInfo(unsigned __int64 Src)
{
  _DWORD *v2; // rsi
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r14
  LARGE_INTEGER v8; // rcx
  LARGE_INTEGER v9; // rsi
  LARGE_INTEGER v10; // r8
  char v11; // al
  unsigned int v12; // ebx
  int v13; // eax
  _DWORD *v14; // rcx
  size_t v15; // r14
  __int64 v16; // rcx
  int v17; // eax
  bool v18; // zf
  __int64 v20; // [rsp+20h] [rbp-C8h]
  _QWORD v21[8]; // [rsp+80h] [rbp-68h] BYREF

  memset(v21, 0, sizeof(v21));
  EtwActivityIdControl(3u, (LPGUID)&v21[1]);
  v21[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v21[3]) = 30;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v7 = PsGetCurrentThreadWin32Thread(v6);
  if ( v7 )
  {
    v9 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v7 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C0118B28 - 1) <= 2u
        || (qword_1C0118B10 & 0x200000010000000LL) == 0
        || (v11 = 1, (qword_1C0118B18 & 0x200000010000000LL) != qword_1C0118B18) )
      {
        v11 = 0;
      }
      if ( v11 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(
          v8.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v10.QuadPart,
          v9.QuadPart,
          0,
          gullUserCritAcquireToken,
          -1073741823);
    }
    if ( v9.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v20) = 1000 * v9.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        1000 * v9.QuadPart / gliQpcFreq.QuadPart,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v10.QuadPart,
        0LL,
        v20,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v7 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    v2 = 0LL;
  }
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( !gbVideoInitialized )
    goto LABEL_17;
  if ( (*((_DWORD *)v5 + 110) & 0x20000000) != 0 )
    v13 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 47) + 720LL) + 24LL) & 0x10;
  else
    v13 = 0;
  if ( v13 || gbEnforceUIPI && (unsigned int)*(_QWORD *)(*((_QWORD *)v5 + 47) + 824LL) < 0x2000 )
    goto LABEL_59;
  v14 = (_DWORD *)(Src + 4);
  if ( Src + 4 >= W32UserProbeAddress )
    v14 = (_DWORD *)W32UserProbeAddress;
  v15 = (unsigned int)*v14;
  if ( *v14 < 0x14u )
  {
    v12 = -1073741789;
    v2 = 0LL;
    goto LABEL_60;
  }
  v2 = (_DWORD *)Win32AllocPoolWithQuota();
  if ( !v2 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock_0();
  if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v16) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & Src) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v15 + Src > W32UserProbeAddress || v15 + Src < Src )
    *(_BYTE *)W32UserProbeAddress = 0;
  memmove(v2, (const void *)Src, v15);
  v2[1] = v15;
  if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
LABEL_17:
    v12 = -1073741823;
    goto LABEL_60;
  }
  if ( gProtocolType )
  {
LABEL_59:
    v12 = -1073741790;
    goto LABEL_60;
  }
  v17 = DrvDisplayConfigSetDeviceInfo(v2, v21);
  v12 = v17;
  if ( v17 == -2147483643 )
  {
    v12 = -1073741789;
    goto LABEL_60;
  }
  if ( v17 == -1073741789 )
    goto LABEL_60;
  if ( (unsigned int)(*v2 - 7) > 1 )
  {
    if ( v17 >= 0 || v17 == -1073741811 || v17 == -1073741801 || v17 == -1073741790 || v17 == -1073741776 )
      goto LABEL_60;
    v18 = v17 == -1073741637;
  }
  else
  {
    if ( v17 == -1073741811
      || v17 == -1073741790
      || v17 == -1073741649
      || v17 == -1073741637
      || v17 == -1073741632
      || v17 >= 0
      || v17 == -1073741801 )
    {
      goto LABEL_60;
    }
    v18 = v17 == -1073741776;
  }
  if ( !v18 && (v17 <= -1073741586 || v17 > -1073741574) )
    goto LABEL_17;
LABEL_60:
  if ( v2 )
    PopAndFreeAlwaysW32ThreadLock_0();
  UserSessionSwitchLeaveCrit();
  return v12;
}
