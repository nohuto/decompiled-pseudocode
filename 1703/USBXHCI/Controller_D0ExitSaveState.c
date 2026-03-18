/*
 * XREFs of Controller_D0ExitSaveState @ 0x1C001A8C0
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0003E90 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_I @ 0x1C0005E8C (WPP_RECORDER_SF_I.c)
 *     Template_p @ 0x1C001C618 (Template_p.c)
 *     Template_pq @ 0x1C001C818 (Template_pq.c)
 */

__int64 __fastcall Controller_D0ExitSaveState(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  _DWORD *v4; // rsi
  int v5; // eax
  unsigned __int16 v6; // r9
  __int64 v7; // r8
  ULONGLONG UnbiasedInterruptTime; // r14
  unsigned int v9; // ebx
  int i; // ebp
  int v11; // eax
  ULONGLONG v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  ULONGLONG v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  ULONGLONG v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  signed __int32 v22[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v23; // [rsp+20h] [rbp-28h]
  unsigned __int64 v24; // [rsp+28h] [rbp-20h]
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  WPP_RECORDER_SF_(a1[8], 4u, 3u, 0x7Au, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    Template_p(v2, &USBXHCI_ETW_EVENT_CONTROLLER_SAVE_STATE_START, v3, a1[1]);
  v4 = *(_DWORD **)(a1[10] + 32LL);
  v5 = v4[1];
  if ( (v5 & 1) == 0 )
  {
    v6 = 123;
    goto LABEL_5;
  }
  if ( (v5 & 0x100) != 0 )
  {
    v6 = 124;
    goto LABEL_5;
  }
  if ( (v5 & 0x200) != 0 )
  {
    v6 = 125;
LABEL_5:
    WPP_RECORDER_SF_(a1[8], 2u, 3u, v6, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids);
LABEL_16:
    v9 = -1073741630;
    goto LABEL_17;
  }
  WPP_RECORDER_SF_(a1[8], 4u, 3u, 0x7Eu, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  *v4 |= 0x100u;
  v9 = 0;
  _InterlockedOr(v22, 0);
  for ( i = 20; ; --i )
  {
    v11 = v4[1];
    if ( (v11 & 0x400) != 0 )
    {
      v12 = KeQueryUnbiasedInterruptTime();
      v13 = a1[8];
      v24 = (v12 - UnbiasedInterruptTime) / 0x2710;
      WPP_RECORDER_SF_I(v13, 2u, v14, 0x7Fu, v23);
      v4[1] = 1024;
      _InterlockedOr(v22, 0);
      goto LABEL_16;
    }
    if ( (v11 & 0x100) == 0 )
      break;
    if ( !i )
    {
      v16 = KeQueryUnbiasedInterruptTime();
      v17 = a1[8];
      v24 = (v16 - UnbiasedInterruptTime) / 0x2710;
      WPP_RECORDER_SF_I(v17, 2u, v18, 0x81u, v23);
      goto LABEL_16;
    }
    Interval.QuadPart = -2000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v19 = KeQueryUnbiasedInterruptTime();
  v20 = a1[8];
  v24 = (v19 - UnbiasedInterruptTime) / 0xA;
  WPP_RECORDER_SF_I(v20, 4u, v21, 0x80u, v23);
LABEL_17:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    Template_pq(
      LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc),
      &USBXHCI_ETW_EVENT_CONTROLLER_SAVE_STATE_COMPLETE,
      v7,
      a1[1],
      v9);
  return v9;
}
