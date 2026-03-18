/*
 * XREFs of xxxUpdateInputHangInfo @ 0x1C006B110
 * Callers:
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxDesktopThreadWaiter @ 0x1C00679D0 (xxxDesktopThreadWaiter.c)
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     xxxInterSendMsgEx @ 0x1C006E0C0 (xxxInterSendMsgEx.c)
 * Callees:
 *     IsWindowGhosted @ 0x1C0088AC8 (IsWindowGhosted.c)
 *     xxxHandleHealthyThread @ 0x1C0117490 (xxxHandleHealthyThread.c)
 *     xxxHandleHealthyWindow @ 0x1C0117524 (xxxHandleHealthyWindow.c)
 */

__int64 __fastcall xxxUpdateInputHangInfo(__int64 a1, int a2)
{
  unsigned int v3; // edi
  unsigned __int64 v4; // r8
  int v5; // esi
  __int64 *v7; // rcx
  __int64 v8; // rcx
  int v9; // r9d

  v3 = 0;
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a2 )
  {
    v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !(_DWORD)v4 )
      v5 = -1;
  }
  else
  {
    v5 = 0;
  }
  if ( !a1 )
  {
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1024LL) = v5;
    v3 = 1;
    if ( *(int *)(gptiCurrent + 448LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    goto LABEL_7;
  }
  v7 = *(__int64 **)(gptiCurrent + 1008LL);
  if ( v7 )
  {
    while ( v7[1] != a1 )
    {
      v9 = *((_DWORD *)v7 + 4);
      if ( v9 )
      {
        if ( (unsigned int)(v4 - v9) > gdwHungAppTimeout )
          break;
      }
      v7 = (__int64 *)*v7;
      if ( !v7 )
        goto LABEL_15;
    }
    v7[1] = a1;
    *((_DWORD *)v7 + 4) = v5;
    goto LABEL_12;
  }
LABEL_15:
  v8 = Win32AllocPoolZInit(48LL, 1952936789LL);
  if ( v8 )
  {
    *(_QWORD *)v8 = *(_QWORD *)(gptiCurrent + 1008LL);
    *(_QWORD *)(v8 + 8) = a1;
    *(_DWORD *)(v8 + 16) = v5;
    *(_QWORD *)(gptiCurrent + 1008LL) = v8;
LABEL_12:
    v3 = 1;
  }
  if ( (unsigned int)IsWindowGhosted(a1) )
    xxxHandleHealthyWindow();
LABEL_7:
  *(_DWORD *)(gptiCurrent + 1080LL) &= ~0x80000000;
  return v3;
}
