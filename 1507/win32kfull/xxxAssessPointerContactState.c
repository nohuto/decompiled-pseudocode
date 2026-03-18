/*
 * XREFs of xxxAssessPointerContactState @ 0x1C01CD534
 * Callers:
 *     UserProcessDwmInput @ 0x1C00F1FE0 (UserProcessDwmInput.c)
 *     ?xxxSeekAndAbortLowerRankedActivity@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01C7128 (-xxxSeekAndAbortLowerRankedActivity@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     GetPointerDeviceContactState @ 0x1C01CB070 (GetPointerDeviceContactState.c)
 *     xxxAssessPointerContactStateTimerCallback @ 0x1C01CD7C0 (xxxAssessPointerContactStateTimerCallback.c)
 *     xxxProcessPointerDeviceInput @ 0x1C01CD7D8 (xxxProcessPointerDeviceInput.c)
 *     xxxProcessPTPDeviceInput @ 0x1C01CFE54 (xxxProcessPTPDeviceInput.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C007E714 (HMValidateHandleNoRip.c)
 *     ?EndDeferActiveListRemovals@@YAXXZ @ 0x1C01C470C (-EndDeferActiveListRemovals@@YAXXZ.c)
 *     ?xxxEndPointerMessageDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KK_KKH@Z @ 0x1C01C6E14 (-xxxEndPointerMessageDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KK_KKH@Z.c)
 *     RemoveContactFromActiveList @ 0x1C01CC48C (RemoveContactFromActiveList.c)
 *     xxxUpdateDeviceFrameState @ 0x1C01CDE84 (xxxUpdateDeviceFrameState.c)
 *     FreeDeviceInfo @ 0x1C01D9AE0 (FreeDeviceInfo.c)
 *     ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F1114 (-CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?SendEndInertia@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01F202C (-SendEndInertia@@YAXPEAUtagTPSTATE@@@Z.c)
 *     ?FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F1E8 (-FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 */

LARGE_INTEGER xxxAssessPointerContactState()
{
  LARGE_INTEGER result; // rax
  struct _LIST_ENTRY *Flink; // r14
  unsigned __int64 v2; // rbp
  void *QuadPart; // rbx
  __int64 v4; // rdx
  struct _LIST_ENTRY *v5; // r8
  __int64 v6; // r9
  struct _LIST_ENTRY *Blink; // rdi
  unsigned int v8; // esi
  struct _LIST_ENTRY *v9; // rax
  int v10; // ecx
  struct _LIST_ENTRY *v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rsi
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx

  result = (LARGE_INTEGER)aDeviceTemplate[0];
  if ( !LODWORD(aDeviceTemplate[154]) )
  {
    Flink = gActivePointerDeviceList.Flink;
    v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    result = KeQueryPerformanceCounter(0LL);
    QuadPart = (void *)result.QuadPart;
    if ( !gbAssessingPointerContactState )
    {
      gbAssessingPointerContactState = 1;
      EtwTracePointerDeviceContactTimerStart();
      dword_1C0324798 |= 1u;
      gbPointerSendLastPending = 0;
      while ( 1 )
      {
        if ( Flink == &gActivePointerDeviceList )
        {
          EndDeferActiveListRemovals();
          gbAssessingPointerContactState = 0;
          return (LARGE_INTEGER)EtwTracePointerDeviceContactTimerStop();
        }
        Blink = Flink[-1].Blink;
        v8 = 0;
        Flink = Flink->Flink;
        if ( !LODWORD(Blink[44].Flink) )
          goto LABEL_27;
        while ( 1 )
        {
          v5 = Blink[42].Blink;
          v4 = 150LL * v8;
          if ( !LODWORD(v5[v4 + 146].Flink) )
            goto LABEL_24;
          if ( (unsigned int)(v2 - LODWORD(v5[v4 + 140].Blink)) <= LODWORD(Blink[54].Flink)
            && ((__int64)v5[v4 + 149].Blink & 0x40) == 0 )
          {
            v9 = Blink[43].Blink;
            if ( !v9 || (HIDWORD(v9->Flink) & 2) == 0 )
              goto LABEL_24;
          }
          if ( (unsigned int)(LODWORD(Blink[1].Blink) - 6) > 1 || !LOWORD(Blink[92].Blink) )
          {
            v10 = (int)v5[v4 + 149].Blink;
            if ( !__CFSHR__(v10, 6) )
              goto LABEL_17;
            if ( (v10 & 0x40) != 0 )
              break;
          }
          RemoveContactFromActiveList(Blink, v8, 0LL);
LABEL_24:
          if ( ++v8 >= LODWORD(Blink[44].Flink) )
            goto LABEL_27;
        }
        if ( __CFSHR__(v5[v4 + 149].Blink, 6) && (v10 & 0x40) == 0 )
          goto LABEL_24;
LABEL_17:
        v11 = Blink[43].Blink;
        if ( !v11 || !LODWORD(v11->Flink) )
        {
          if ( (v10 & 0x400) == 0 )
          {
            if ( gfCancelOnTimeout || (v12 = 0, (v10 & 0x40) != 0) )
              v12 = 1;
            xxxEndPointerMessageDelivery(
              (struct tagHID_POINTER_DEVICE_INFO *)Blink,
              v8,
              v2,
              QuadPart,
              HIDWORD(v5[v4 + 145].Blink),
              v12);
          }
          goto LABEL_24;
        }
        xxxUpdateDeviceFrameState((struct tagHID_POINTER_DEVICE_INFO *)Blink);
LABEL_27:
        if ( (HIDWORD(Blink[14].Blink) & 0x40) != 0
          && (gptiCurrent == gptiRit || (unsigned int)IsDwmInputThread(gptiRit, v4 * 16, v5, v6)) )
        {
          v14 = HMValidateHandleNoRip((__int64)Blink[45].Flink, 19);
          if ( LODWORD(Blink[1].Blink) == 8 )
          {
            HoldingFrameForDevice = FindHoldingFrameForDevice(Blink[45].Flink);
            if ( HoldingFrameForDevice )
            {
              v16 = *((_QWORD *)HoldingFrameForDevice + 11);
              if ( v16 )
              {
                CleanupGestureCache(*((struct tagTPSTATE **)HoldingFrameForDevice + 11), 0);
                if ( (*(_DWORD *)(v16 + 1264) & 0x400000) != 0 )
                {
                  SendEndInertia((struct tagTPSTATE *)v16);
                  *(_DWORD *)(v16 + 1264) &= ~0x400000u;
                }
              }
            }
          }
          EnterDeviceInfoListCrit_(v13);
          FreeDeviceInfo(v14);
          LeaveDeviceInfoListCrit_(v17);
        }
      }
    }
  }
  return result;
}
