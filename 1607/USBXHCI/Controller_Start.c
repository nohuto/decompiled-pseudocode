/*
 * XREFs of Controller_Start @ 0x1C0005440
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0005230 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_InternalReset @ 0x1C001EDC0 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_I @ 0x1C00055E0 (WPP_RECORDER_SF_I.c)
 *     Controller_IsControllerAccessible @ 0x1C0005C54 (Controller_IsControllerAccessible.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_Start(__int64 *a1)
{
  __int64 v2; // r12
  __int64 v3; // r14
  int v4; // ecx
  int v5; // ebx
  __int16 v6; // bp
  ULONGLONG v7; // rsi
  ULONGLONG UnbiasedInterruptTime; // r15
  int v9; // ebp
  int v10; // r8d
  int v11; // ebx
  int v12; // r9d
  unsigned __int64 v13; // rdx
  int v15; // ebp
  int v16; // ebx
  ULONGLONG v17; // rax
  signed __int32 v18[8]; // [rsp+0h] [rbp-68h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-48h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  v2 = 0LL;
  WPP_RECORDER_SF_(a1[8], 4u, 3u, 0x72u, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
  if ( !(unsigned __int8)Controller_IsControllerAccessible(a1) )
    return 0LL;
  v3 = *(_QWORD *)(a1[10] + 32);
  if ( (*(_DWORD *)(v3 + 4) & 1) == 0 )
  {
    WPP_RECORDER_SF_(a1[8], 2u, 3u, 0x73u, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
    return 3221225666LL;
  }
  *(_DWORD *)(*(_QWORD *)(a1[10] + 32) + 20LL) = 2;
  _InterlockedOr(v18, 0);
  v4 = *(_DWORD *)(a1[10] + 108);
  v5 = ((*(_WORD *)v3 | 5) ^ (((v4 & 2) != 0) << 13)) & 0x2000 ^ (*(_DWORD *)v3 | 5);
  v6 = (v4 & 0x50) == 80;
  WPP_RECORDER_SF_(a1[8], 4u, 3u, 0x74u, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
  v7 = 0LL;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  *(_DWORD *)v3 = v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)(v6 << 14)) & 0x4000;
  _InterlockedOr(v18, 0);
  v9 = 0;
  while ( 1 )
  {
    KeStallExecutionProcessor(0x64u);
    v11 = *(_DWORD *)(v3 + 4);
    if ( (v11 & 1) == 0 )
      break;
    if ( (unsigned int)++v9 >= 0x32 )
      goto LABEL_6;
  }
  v7 = KeQueryUnbiasedInterruptTime();
LABEL_6:
  if ( (v11 & 1) == 0 )
    goto LABEL_7;
  v2 = ExAllocateTimer(Controller_HighResTimerCompletion, &Event, 4LL);
  if ( !v2 )
    return 3221225626LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v15 = 0;
  while ( 1 )
  {
    ExSetTimer(v2, -50000LL, 0LL, 0LL);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v16 = *(_DWORD *)(v3 + 4);
    if ( (v16 & 1) == 0 )
      break;
    if ( (unsigned int)++v15 >= 7 )
      goto LABEL_22;
  }
  v7 = KeQueryUnbiasedInterruptTime();
LABEL_22:
  if ( (v16 & 1) != 0 )
  {
    v17 = KeQueryUnbiasedInterruptTime();
    v12 = 117;
    v13 = (v17 - UnbiasedInterruptTime) / 0x2710;
    v20 = v13;
    LOBYTE(v13) = 2;
  }
  else
  {
LABEL_7:
    v12 = 118;
    v13 = (v7 - UnbiasedInterruptTime) / 0xA;
    v20 = v13;
    LOBYTE(v13) = 4;
  }
  WPP_RECORDER_SF_I(a1[8], v13, v10, v12, (_DWORD)Timeout, v20);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2552))(
    WdfDriverGlobals,
    a1[32],
    -50000000LL);
  if ( v2 )
    ExDeleteTimer(v2, 0LL, 0LL, 0LL);
  return 0LL;
}
