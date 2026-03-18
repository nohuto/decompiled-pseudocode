/*
 * XREFs of Controller_Start @ 0x1C0003FB0
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0003DA0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_InternalReset @ 0x1C0015420 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_I @ 0x1C0004134 (WPP_RECORDER_SF_I.c)
 *     Controller_IsControllerAccessible @ 0x1C00042C8 (Controller_IsControllerAccessible.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_Start(__int64 *a1)
{
  __int64 v2; // r14
  int v3; // ecx
  int v4; // ebx
  __int16 v5; // bp
  ULONGLONG v6; // rsi
  ULONGLONG UnbiasedInterruptTime; // r15
  int v8; // ebp
  int v9; // r8d
  int v10; // ebx
  int v11; // r9d
  unsigned __int64 v12; // rdx
  ULONGLONG v14; // rax
  signed __int32 v15[10]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-20h]

  WPP_RECORDER_SF_(a1[8], 4u, 3u, 0x70u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
  if ( !(unsigned __int8)Controller_IsControllerAccessible(a1) )
    return 0LL;
  v2 = *(_QWORD *)(a1[10] + 32);
  if ( (*(_DWORD *)(v2 + 4) & 1) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1[10] + 32) + 20LL) = 2;
    _InterlockedOr(v15, 0);
    v3 = *(_DWORD *)(a1[10] + 108);
    v4 = ((*(_WORD *)v2 | 5) ^ (((v3 & 2) != 0) << 13)) & 0x2000 ^ (*(_DWORD *)v2 | 5);
    v5 = (v3 & 0x50) == 80;
    WPP_RECORDER_SF_(a1[8], 4u, 3u, 0x72u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
    v6 = 0LL;
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    *(_DWORD *)v2 = v4 ^ ((unsigned __int16)v4 ^ (unsigned __int16)(v5 << 14)) & 0x4000;
    _InterlockedOr(v15, 0);
    v8 = 0;
    while ( 1 )
    {
      KeStallExecutionProcessor(0x64u);
      v10 = *(_DWORD *)(v2 + 4);
      if ( (v10 & 1) == 0 )
        break;
      if ( (unsigned int)++v8 >= 0x32 )
        goto LABEL_6;
    }
    v6 = KeQueryUnbiasedInterruptTime();
LABEL_6:
    if ( (v10 & 1) != 0 )
    {
      v14 = KeQueryUnbiasedInterruptTime();
      v11 = 115;
      v12 = (v14 - UnbiasedInterruptTime) / 0x2710;
      v16 = v12;
      LOBYTE(v12) = 2;
    }
    else
    {
      v11 = 116;
      v12 = (v6 - UnbiasedInterruptTime) / 0xA;
      v16 = v12;
      LOBYTE(v12) = 4;
    }
    WPP_RECORDER_SF_I(a1[8], v12, v9, v11, v15[8], v16);
    (*(void (__fastcall **)(_LIST_ENTRY *, __int64, __int64))(WdfFunctions_01015 + 2552))(
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
      a1[31],
      -50000000LL);
    return 0LL;
  }
  else
  {
    WPP_RECORDER_SF_(a1[8], 2u, 3u, 0x71u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
    return 3221225666LL;
  }
}
