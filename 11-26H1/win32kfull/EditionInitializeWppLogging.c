/*
 * XREFs of EditionInitializeWppLogging @ 0x140139350
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     IsCurrentSessionHostServiceSession @ 0x140139520 (IsCurrentSessionHostServiceSession.c)
 *     ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x140293F5C (-RtlStringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     WppInitKm @ 0x1403E2574 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1403E2654 (WppLoadTracingSupport.c)
 */

__int64 __fastcall EditionInitializeWppLogging(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  const char *v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  _QWORD v14[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h]
  __int64 CurrentWin32kSessionId; // [rsp+40h] [rbp-30h]
  __int64 v18; // [rsp+48h] [rbp-28h]
  char v19[16]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h]

  if ( (unsigned int)IsCurrentSessionHostServiceSession() )
  {
    *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
    WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_Win32kFullTraceGuid;
    WPP_MAIN_CB.NextDevice = (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Queue;
    WPP_MAIN_CB.Queue.ListEntry.Blink = (struct _LIST_ENTRY *)&WPP_ThisDir_CTLGUID_GreTraceGuid;
    WPP_MAIN_CB.CurrentIrp = 0LL;
    WPP_MAIN_CB.Timer = (PIO_TIMER)1;
    WPP_MAIN_CB.DeviceExtension = 0LL;
    WPP_MAIN_CB.DeviceType = 0;
    WPP_MAIN_CB.Queue.ListEntry.Flink = 0LL;
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
    WPP_MAIN_CB.Queue.Wcb.DeviceContext = 0LL;
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = 1LL;
    WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = 0LL;
    WPP_MAIN_CB.AlignmentRequirement = 0;
    WppLoadTracingSupport();
    WPP_MAIN_CB.CurrentIrp = 0LL;
    WppInitKm(a1, a2);
    v14[0] = 16LL;
    v14[1] = 0x200000002LL;
    imp_WppRecorderConfigure(WPP_GLOBAL_Control, v14);
  }
  v15 = 56LL;
  v16 = 0xC800000400LL;
  *(_OWORD *)v19 = 0LL;
  v19[0] = 0;
  CurrentWin32kSessionId = 0LL;
  v18 = 0x1000000000LL;
  v20 = 0LL;
  RtlStringCchCopyA(v19, v4, v5);
  v20 = 0x200000002LL;
  LODWORD(v16) = 512;
  CurrentWin32kSessionId = (unsigned int)W32GetCurrentWin32kSessionId(v6);
  LOBYTE(v18) = 1;
  UserSessionState = W32GetUserSessionState(v8, v7);
  v12 = imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v15, UserSessionState + 69152);
  if ( v12 < 0 )
    *(_QWORD *)(W32GetUserSessionState(v11, v10) + 69152) = 0LL;
  return (unsigned int)v12;
}
