/*
 * XREFs of xxxRestoreCsrssThreadDesktop @ 0x1C00CEA50
 * Callers:
 *     xxxQueryInformationThread @ 0x1C00CE3F8 (xxxQueryInformationThread.c)
 *     xxxSetInformationThread @ 0x1C00CE900 (xxxSetInformationThread.c)
 *     xxxHardErrorControl @ 0x1C02268E8 (xxxHardErrorControl.c)
 * Callees:
 *     xxxDispatchMessage @ 0x1C0054E2C (xxxDispatchMessage.c)
 *     CloseProtectedHandle @ 0x1C00CEC44 (CloseProtectedHandle.c)
 *     xxxSetThreadDesktop @ 0x1C00CEE94 (xxxSetThreadDesktop.c)
 *     xxxInternalGetMessage @ 0x1C00D0420 (xxxInternalGetMessage.c)
 *     SendMsgCleanup @ 0x1C00D0790 (SendMsgCleanup.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall xxxRestoreCsrssThreadDesktop(_QWORD *a1, char a2)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  void *v6; // rcx
  _QWORD v8[7]; // [rsp+30h] [rbp-38h] BYREF

  memset(v8, 0, 0x30uLL);
  v4 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( *a1 == v4 )
  {
    v5 = 0;
  }
  else
  {
    if ( v4 )
    {
      while ( (unsigned int)xxxInternalGetMessage((unsigned int)v8, 0, 0, 0, 3, 0) )
        xxxDispatchMessage(v8);
      if ( (a2 & 1) != 0 )
        SendMsgCleanup(gptiCurrent);
    }
    v5 = xxxSetThreadDesktop(0LL, *a1);
  }
  if ( *a1 )
  {
    ObfDereferenceObject((PVOID)*a1);
    *a1 = 0LL;
  }
  v6 = (void *)a1[1];
  if ( v6 )
  {
    CloseProtectedHandle(v6);
    a1[1] = 0LL;
  }
  return v5;
}
