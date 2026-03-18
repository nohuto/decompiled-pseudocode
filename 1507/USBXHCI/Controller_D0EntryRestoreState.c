/*
 * XREFs of Controller_D0EntryRestoreState @ 0x1C0014854
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0004300 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_I @ 0x1C0004134 (WPP_RECORDER_SF_I.c)
 *     Template_p @ 0x1C0016674 (Template_p.c)
 *     Template_pq @ 0x1C0016860 (Template_pq.c)
 */

__int64 __fastcall Controller_D0EntryRestoreState(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  _DWORD *v4; // rbx
  int v5; // eax
  unsigned __int16 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  ULONGLONG UnbiasedInterruptTime; // rbp
  int i; // esi
  int v11; // eax
  ULONGLONG v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // ebx
  ULONGLONG v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  ULONGLONG v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  signed __int32 v23[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v24; // [rsp+20h] [rbp-18h]
  unsigned __int64 v25; // [rsp+28h] [rbp-10h]
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 4u, 3u, 0x68u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 8) != 0 )
    Template_p(v2, &USBXHCI_ETW_EVENT_CONTROLLER_RESTORE_STATE_START, v3, *(_QWORD *)(a1 + 8));
  v4 = *(_DWORD **)(*(_QWORD *)(a1 + 80) + 32LL);
  v5 = v4[1];
  if ( (v5 & 1) == 0 )
  {
    v6 = 105;
    goto LABEL_5;
  }
  if ( (v5 & 0x100) != 0 )
  {
    v6 = 106;
    goto LABEL_5;
  }
  if ( (v5 & 0x200) != 0 )
  {
    v6 = 107;
LABEL_5:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 2u, 3u, v6, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
LABEL_16:
    v15 = -1073741630;
    goto LABEL_17;
  }
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) + 20LL) = 2;
  _InterlockedOr(v23, 0);
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 4u, 3u, 0x6Cu, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  *v4 |= 0x200u;
  _InterlockedOr(v23, 0);
  for ( i = 20; ; --i )
  {
    v11 = v4[1];
    if ( (v11 & 0x400) != 0 )
    {
      v12 = KeQueryUnbiasedInterruptTime();
      v13 = *(_QWORD *)(a1 + 64);
      v25 = (v12 - UnbiasedInterruptTime) / 0x2710;
      WPP_RECORDER_SF_I(v13, 2u, v14, 0x6Du, v24);
      v4[1] = 1024;
      _InterlockedOr(v23, 0);
      goto LABEL_16;
    }
    if ( (v11 & 0x200) == 0 )
      break;
    if ( !i )
    {
      v17 = KeQueryUnbiasedInterruptTime();
      v18 = *(_QWORD *)(a1 + 64);
      v25 = (v17 - UnbiasedInterruptTime) / 0x2710;
      WPP_RECORDER_SF_I(v18, 2u, v19, 0x6Fu, v24);
      goto LABEL_16;
    }
    Interval.QuadPart = -2000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v20 = KeQueryUnbiasedInterruptTime();
  v21 = *(_QWORD *)(a1 + 64);
  v25 = (v20 - UnbiasedInterruptTime) / 0xA;
  WPP_RECORDER_SF_I(v21, 4u, v22, 0x6Eu, v24);
  v15 = 0;
LABEL_17:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 8) != 0 )
    Template_pq(v7, &USBXHCI_ETW_EVENT_CONTROLLER_RESTORE_STATE_COMPLETE, v8, *(_QWORD *)(a1 + 8), v15);
  if ( v15 < 0 )
    ++*(_DWORD *)(a1 + 356);
  return (unsigned int)v15;
}
