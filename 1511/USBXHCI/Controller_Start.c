/*
 * XREFs of Controller_Start @ 0x1C0006CD8
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0007410 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_InternalReset @ 0x1C001E960 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_I @ 0x1C0006F50 (WPP_RECORDER_SF_I.c)
 *     Controller_IsControllerAccessible @ 0x1C00073DC (Controller_IsControllerAccessible.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_Start(__int64 *a1)
{
  unsigned int v1; // esi
  __int64 v3; // r14
  __int64 v4; // r12
  int v5; // ecx
  int v6; // ebx
  __int16 v7; // di
  ULONGLONG v8; // r15
  ULONGLONG UnbiasedInterruptTime; // r13
  int v10; // edi
  int v11; // r8d
  int v12; // ebx
  int v13; // edi
  int v14; // ebx
  ULONGLONG v15; // rax
  int v16; // r9d
  unsigned __int64 v17; // rdx
  signed __int32 v19[8]; // [rsp+0h] [rbp-78h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-58h]
  unsigned __int64 v21; // [rsp+28h] [rbp-50h]
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF

  v1 = 0;
  v3 = 0LL;
  WPP_RECORDER_SF_(a1[8], 4u, 3u, 0x72u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids);
  if ( (unsigned __int8)Controller_IsControllerAccessible(a1) )
  {
    v4 = *(_QWORD *)(a1[10] + 32);
    if ( (*(_DWORD *)(v4 + 4) & 1) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1[10] + 32) + 20LL) = 2;
      _InterlockedOr(v19, 0);
      v5 = *(_DWORD *)(a1[10] + 108);
      v6 = ((*(_WORD *)v4 | 5) ^ (((v5 & 2) != 0) << 13)) & 0x2000 ^ (*(_DWORD *)v4 | 5);
      v7 = (v5 & 0x50) == 80;
      WPP_RECORDER_SF_(a1[8], 4u, 3u, 0x74u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids);
      v8 = 0LL;
      UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
      *(_DWORD *)v4 = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)(v7 << 14)) & 0x4000;
      _InterlockedOr(v19, 0);
      v10 = 0;
      while ( 1 )
      {
        KeStallExecutionProcessor(0x64u);
        v12 = *(_DWORD *)(v4 + 4);
        if ( (v12 & 1) == 0 )
          break;
        if ( (unsigned int)++v10 >= 0x32 )
          goto LABEL_9;
      }
      v8 = KeQueryUnbiasedInterruptTime();
LABEL_9:
      if ( (v12 & 1) == 0 )
        goto LABEL_19;
      v3 = ExAllocateTimer(Controller_HighResTimerCompletion, &Event, 4LL);
      if ( !v3 )
        return (unsigned int)-1073741670;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v13 = 0;
      while ( 1 )
      {
        ExSetTimer(v3, -50000LL, 0LL, 0LL);
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        v14 = *(_DWORD *)(v4 + 4);
        if ( (v14 & 1) == 0 )
          break;
        if ( (unsigned int)++v13 >= 7 )
          goto LABEL_17;
      }
      v8 = KeQueryUnbiasedInterruptTime();
LABEL_17:
      if ( (v14 & 1) != 0 )
      {
        v15 = KeQueryUnbiasedInterruptTime();
        v16 = 117;
        v17 = (v15 - UnbiasedInterruptTime) / 0x2710;
        v21 = v17;
        LOBYTE(v17) = 2;
      }
      else
      {
LABEL_19:
        v16 = 118;
        v17 = (v8 - UnbiasedInterruptTime) / 0xA;
        v21 = v17;
        LOBYTE(v17) = 4;
      }
      WPP_RECORDER_SF_I(a1[8], v17, v11, v16, (_DWORD)Timeout, v21);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2552))(
        WdfDriverGlobals,
        a1[31],
        -50000000LL);
      if ( v3 )
        ExDeleteTimer(v3, 0LL, 0LL, 0LL);
    }
    else
    {
      WPP_RECORDER_SF_(a1[8], 2u, 3u, 0x73u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids);
      return (unsigned int)-1073741630;
    }
  }
  return v1;
}
