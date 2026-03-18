/*
 * XREFs of ProcessSuspendedEventMessage @ 0x1C00E7B3C
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C0071500 (xxxProcessNotifyWinEvent.c)
 *     _ScheduleDispatchNotification @ 0x1C00D4620 (_ScheduleDispatchNotification.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 * Callees:
 *     ?FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z @ 0x1C00E7C18 (-FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z.c)
 *     ?ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z @ 0x1C00E7C4C (-ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z.c)
 */

__int64 __fastcall ProcessSuspendedEventMessage(
        __int64 a1,
        int a2,
        HWND *a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned int v8; // r11d
  int v9; // r10d
  HWND v10; // rsi
  struct tagQMSG *v11; // rbx
  struct tagQMSG *QMsgForCoalesce; // rax
  unsigned int v13; // edx
  unsigned int v14; // r10d

  if ( a2 != 9 )
    return 1LL;
  v8 = 1;
  if ( a4 >= 0x400 )
    v9 = 1;
  else
    v9 = ((unsigned __int16)MessageTable[a4] >> 10) & 7;
  if ( !v9 )
    return 0LL;
  if ( v9 != 1 )
  {
    if ( a3 )
      v10 = *a3;
    else
      v10 = 0LL;
    v11 = 0LL;
    while ( 1 )
    {
      QMsgForCoalesce = FindQMsgForCoalesce(*(struct tagMLIST **)(a1 + 392), a4, v10, v11);
      v11 = QMsgForCoalesce;
      if ( !QMsgForCoalesce )
        break;
      if ( *((_DWORD *)QMsgForCoalesce + 22) == 9
        && *((_QWORD *)QMsgForCoalesce + 12) == a1
        && !(unsigned int)ProcessComplexCoalescence(
                            v14,
                            v13,
                            a5,
                            a6,
                            (unsigned __int64 *)QMsgForCoalesce + 4,
                            (__int64 *)QMsgForCoalesce + 5) )
      {
        return 0LL;
      }
    }
  }
  return v8;
}
