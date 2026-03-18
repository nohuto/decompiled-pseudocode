/*
 * XREFs of xxxRestoreCsrssThreadDesktop @ 0x140057630
 * Callers:
 *     xxxSetInformationThread @ 0x1400569F0 (xxxSetInformationThread.c)
 *     xxxQueryInformationThread @ 0x1401535CC (xxxQueryInformationThread.c)
 *     xxxHardErrorControl @ 0x140244D3C (xxxHardErrorControl.c)
 * Callees:
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SendMsgCleanup @ 0x140056310 (SendMsgCleanup.c)
 *     xxxInternalGetMessage @ 0x140057C40 (xxxInternalGetMessage.c)
 *     xxxSetThreadDesktop @ 0x1400595D4 (xxxSetThreadDesktop.c)
 */

__int64 __fastcall xxxRestoreCsrssThreadDesktop(_QWORD *a1, char a2)
{
  struct tagTHREADINFO *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // edi
  void *v8; // rsi
  unsigned __int64 v10; // [rsp+20h] [rbp-48h]
  _OWORD v11[3]; // [rsp+30h] [rbp-38h] BYREF

  v4 = PtiCurrent((__int64)a1);
  memset(v11, 0, sizeof(v11));
  v5 = *((_QWORD *)v4 + 61);
  if ( *a1 == v5 )
  {
    v7 = 0;
  }
  else
  {
    if ( v5 )
    {
      while ( 1 )
      {
        LODWORD(v10) = 3;
        if ( !(unsigned int)xxxInternalGetMessage((__int64)v11, v10, 0) )
          break;
        xxxDispatchMessage((struct tagMSG *)v11);
      }
      if ( (a2 & 1) != 0 )
        SendMsgCleanup((__int64)v4, v6);
    }
    v7 = xxxSetThreadDesktop(0LL, *a1);
  }
  if ( *a1 )
  {
    ObfDereferenceObject((PVOID)*a1);
    *a1 = 0LL;
  }
  v8 = (void *)a1[1];
  if ( v8 )
  {
    SetHandleFlag(a1[1], 1LL);
    ObCloseHandle(v8, 0);
    a1[1] = 0LL;
  }
  return v7;
}
