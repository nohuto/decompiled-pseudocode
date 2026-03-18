/*
 * XREFs of xxxRestoreCsrssThreadDesktop @ 0x1C007D1D0
 * Callers:
 *     xxxSetInformationThread @ 0x1C007D080 (xxxSetInformationThread.c)
 *     xxxQueryInformationThread @ 0x1C012B334 (xxxQueryInformationThread.c)
 *     xxxHardErrorControl @ 0x1C0226550 (xxxHardErrorControl.c)
 * Callees:
 *     SendMsgCleanup @ 0x1C007B270 (SendMsgCleanup.c)
 *     xxxInternalGetMessage @ 0x1C007C720 (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1C007C9DC (xxxDispatchMessage.c)
 *     CloseProtectedHandle @ 0x1C007D3C0 (CloseProtectedHandle.c)
 *     xxxSetThreadDesktop @ 0x1C007EA90 (xxxSetThreadDesktop.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall xxxRestoreCsrssThreadDesktop(_QWORD *a1, char a2)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  void *v6; // rcx
  _OWORD v8[3]; // [rsp+30h] [rbp-38h] BYREF

  memset(v8, 0, sizeof(v8));
  v4 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( *a1 == v4 )
  {
    v5 = 0;
  }
  else
  {
    if ( v4 )
    {
      while ( (unsigned int)xxxInternalGetMessage(v8, 0LL, 0, 0, 3u, 0) )
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
