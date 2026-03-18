/*
 * XREFs of Controller_Start @ 0x1C0005CF0
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0005AD0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_InternalReset @ 0x1C001B1A8 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_I @ 0x1C0005E8C (WPP_RECORDER_SF_I.c)
 *     Controller_IsControllerAccessible @ 0x1C000642C (Controller_IsControllerAccessible.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_Start(__int64 *a1)
{
  __int64 v2; // r12
  unsigned int *v3; // r14
  int v4; // ecx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // ebp
  ULONGLONG v8; // rsi
  ULONGLONG UnbiasedInterruptTime; // r15
  int v10; // ebp
  int v11; // r8d
  unsigned int v12; // ebx
  int v13; // r9d
  unsigned __int64 v14; // rdx
  int v16; // ebp
  unsigned int v17; // ebx
  ULONGLONG v18; // rax
  signed __int32 v19[8]; // [rsp+0h] [rbp-68h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-48h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  v2 = 0LL;
  WPP_RECORDER_SF_(a1[8], 4u, 3u, 0x72u, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids);
  if ( !(unsigned __int8)Controller_IsControllerAccessible(a1) )
    return 0LL;
  v3 = *(unsigned int **)(a1[10] + 32);
  if ( (v3[1] & 1) == 0 )
  {
    WPP_RECORDER_SF_(a1[8], 2u, 3u, 0x73u, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids);
    return 3221225666LL;
  }
  *(_DWORD *)(*(_QWORD *)(a1[10] + 32) + 20LL) = 2;
  _InterlockedOr(v19, 0);
  v4 = *(_DWORD *)(a1[10] + 108);
  if ( (v4 & 2) != 0 )
    v5 = 0x2000;
  else
    v5 = 0;
  v6 = v5 | *v3 & 0xFFFFDFFA | 5;
  v7 = (v4 & 0x50) == 80;
  WPP_RECORDER_SF_(a1[8], 4u, 3u, 0x74u, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids);
  v8 = 0LL;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  *v3 = (v7 << 14) | v6 & 0xFFFFBFFF;
  _InterlockedOr(v19, 0);
  v10 = 0;
  while ( 1 )
  {
    KeStallExecutionProcessor(0x64u);
    v12 = v3[1];
    if ( (v12 & 1) == 0 )
      break;
    if ( (unsigned int)++v10 >= 0x32 )
      goto LABEL_8;
  }
  v8 = KeQueryUnbiasedInterruptTime();
LABEL_8:
  if ( (v12 & 1) == 0 )
    goto LABEL_9;
  v2 = ExAllocateTimer(Controller_HighResTimerCompletion, &Event, 4LL);
  if ( !v2 )
    return 3221225626LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v16 = 0;
  while ( 1 )
  {
    ExSetTimer(v2, -50000LL, 0LL, 0LL);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v17 = v3[1];
    if ( (v17 & 1) == 0 )
      break;
    if ( (unsigned int)++v16 >= 7 )
      goto LABEL_25;
  }
  v8 = KeQueryUnbiasedInterruptTime();
LABEL_25:
  if ( (v17 & 1) != 0 )
  {
    v18 = KeQueryUnbiasedInterruptTime();
    v13 = 117;
    v14 = (v18 - UnbiasedInterruptTime) / 0x2710;
    v21 = v14;
    LOBYTE(v14) = 2;
  }
  else
  {
LABEL_9:
    v13 = 118;
    v14 = (v8 - UnbiasedInterruptTime) / 0xA;
    v21 = v14;
    LOBYTE(v14) = 4;
  }
  WPP_RECORDER_SF_I(a1[8], v14, v11, v13, (_DWORD)Timeout, v21);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2552))(
    WdfDriverGlobals,
    a1[32],
    -50000000LL);
  if ( v2 )
    ExDeleteTimer(v2, 0LL, 0LL, 0LL);
  return 0LL;
}
