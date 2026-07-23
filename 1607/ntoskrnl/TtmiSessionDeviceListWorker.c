/*
 * XREFs of TtmiSessionDeviceListWorker @ 0x1406771AC
 * Callers:
 *     TtmpSessionWorker @ 0x140679130 (TtmpSessionWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmpApplyDeviceAutoAssignment @ 0x140677380 (TtmpApplyDeviceAutoAssignment.c)
 *     TtmpPublishDeviceEvent @ 0x140677528 (TtmpPublishDeviceEvent.c)
 *     TtmpPushTerminalState @ 0x14067760C (TtmpPushTerminalState.c)
 *     TtmpStartCallout @ 0x140677730 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1406777A0 (TtmpStopCallout.c)
 */

void __fastcall TtmiSessionDeviceListWorker(__int64 a1)
{
  unsigned int *v1; // rsi
  unsigned int *i; // rbx
  unsigned int v4; // eax
  void *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r9
  unsigned int v8; // eax
  unsigned int (__fastcall *v9)(_QWORD, _QWORD); // rbp
  __int64 v10; // rbp
  unsigned int v11; // eax
  void (__fastcall *v12)(_QWORD); // rbp
  __int64 v13; // r8
  _BYTE v14[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = (unsigned int *)(a1 + 96);
  for ( i = *(unsigned int **)(a1 + 96); i != v1; i = *(unsigned int **)i )
  {
    v4 = i[150];
    v5 = i;
    if ( (v4 & 4) != 0 )
      goto LABEL_12;
    if ( (v4 & 1) != 0 )
    {
      i[150] = v4 & 0xFFFFFFFC | 2;
      TtmpApplyDeviceAutoAssignment(a1, i);
      v7 = 3LL;
LABEL_7:
      TtmpPublishDeviceEvent(v6, 0LL, i, v7);
      goto LABEL_8;
    }
    if ( (v4 & 0x10) != 0 )
    {
      i[150] = v4 & 0xFFFFFFEF;
      TtmpApplyDeviceAutoAssignment(a1, i);
      v7 = 4LL;
      goto LABEL_7;
    }
LABEL_8:
    v8 = i[150];
    if ( (v8 & 0x20) != 0 )
    {
      v9 = (unsigned int (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)i + 6);
      i[150] = v8 & 0xFFFFFFDF;
      if ( v9 )
      {
        TtmpStartCallout((unsigned int)v14, a1, (_DWORD)i, 1836213588, i[149]);
        v10 = v9(*((_QWORD *)i + 3), i[149]);
        TtmpStopCallout(v14, v10);
        if ( (int)v10 < 0 )
          TtmiLogError("TtmpCallAssignedToTerminal", 1409, v10, -1);
      }
    }
LABEL_12:
    if ( (i[150] & 0x44) == 0x40 )
    {
      i[150] &= ~0x40u;
      if ( (unsigned __int8)TtmpPushTerminalState(a1, i) )
      {
        i[150] |= 0x40u;
        *(_DWORD *)(a1 + 4) |= 0x1000u;
      }
    }
    v11 = i[150];
    if ( (v11 & 4) != 0 )
    {
      if ( (v11 & 2) != 0 )
        TtmpPublishDeviceEvent(a1, 0LL, i, 5LL);
      v12 = (void (__fastcall *)(_QWORD))*((_QWORD *)i + 5);
      if ( v12 )
      {
        TtmpStartCallout((unsigned int)v14, a1, (_DWORD)i, 1936682051, 0);
        v12(*((_QWORD *)i + 3));
        TtmpStopCallout(v14, 0LL);
      }
      v13 = *(_QWORD *)i;
      i = (unsigned int *)*((_QWORD *)i + 1);
      if ( *(void **)(*(_QWORD *)v5 + 8LL) != v5 || *(void **)i != v5 )
        __fastfail(3u);
      *(_QWORD *)i = v13;
      *(_QWORD *)(v13 + 8) = i;
      ExFreePoolWithTag(v5, 0x446D7454u);
    }
  }
}
