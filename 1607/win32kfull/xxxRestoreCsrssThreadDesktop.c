/*
 * XREFs of xxxRestoreCsrssThreadDesktop @ 0x1C00DD140
 * Callers:
 *     xxxQueryInformationThread @ 0x1C0096AA8 (xxxQueryInformationThread.c)
 *     xxxSetInformationThread @ 0x1C00DCC90 (xxxSetInformationThread.c)
 *     xxxHardErrorControl @ 0x1C0226628 (xxxHardErrorControl.c)
 * Callees:
 *     xxxDispatchMessage @ 0x1C0078FD0 (xxxDispatchMessage.c)
 *     xxxSetThreadDesktop @ 0x1C0099B20 (xxxSetThreadDesktop.c)
 *     CloseProtectedHandle @ 0x1C00DCB44 (CloseProtectedHandle.c)
 *     xxxInternalGetMessage @ 0x1C00DF5A8 (xxxInternalGetMessage.c)
 *     SendMsgCleanup @ 0x1C0106750 (SendMsgCleanup.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall xxxRestoreCsrssThreadDesktop(__int64 *a1, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edi
  void *v9; // rcx
  _QWORD v11[7]; // [rsp+30h] [rbp-38h] BYREF

  memset(v11, 0, 0x30uLL);
  v4 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( *a1 == v4 )
  {
    v8 = 0;
  }
  else
  {
    if ( v4 )
    {
      while ( (unsigned int)xxxInternalGetMessage((unsigned int)v11, 0, 0, 0, 3, 0) )
        xxxDispatchMessage(v11, v5, v6, v7);
      if ( (a2 & 1) != 0 )
        SendMsgCleanup(gptiCurrent);
    }
    v8 = xxxSetThreadDesktop(0LL, *a1);
  }
  if ( *a1 )
  {
    ObfDereferenceObject((PVOID)*a1);
    *a1 = 0LL;
  }
  v9 = (void *)a1[1];
  if ( v9 )
  {
    CloseProtectedHandle(v9, 0);
    a1[1] = 0LL;
  }
  return v8;
}
