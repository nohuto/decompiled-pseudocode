/*
 * XREFs of InitDitIocpSupport @ 0x1C0119758
 * Callers:
 *     ?InitalizeDitInfoObjectArray@@YAJPEAUDIT_INFO@@@Z @ 0x1C011967C (-InitalizeDitInfoObjectArray@@YAJPEAUDIT_INFO@@@Z.c)
 * Callees:
 *     CleanupDitIocpSupport @ 0x1C01192B0 (CleanupDitIocpSupport.c)
 */

__int64 __fastcall InitDitIocpSupport(int a1)
{
  HANDLE v1; // r12
  int v2; // ebx
  HANDLE v4; // r15
  HANDLE v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rsi
  HANDLE KernelIocp; // rax
  void *KernelIocpWcp; // rax
  void *v10; // rax
  void *v12; // rax
  void *v13; // rax
  void *v14; // rax

  v1 = ghDITMouseFlushTimer;
  v2 = 0;
  v4 = ghDITRITEvent;
  v5 = ghDITEvent;
  v6 = ghDITMmcssEvent;
  v7 = ghDITResetEvent;
  if ( !gbDITUseIocp )
    return 0LL;
  if ( a1 )
  {
    KernelIocp = ghDITIocp;
  }
  else
  {
    KernelIocp = (HANDLE)CreateKernelIocp(1LL);
    ghDITIocp = KernelIocp;
  }
  if ( KernelIocp )
  {
    KernelIocpWcp = (void *)CreateKernelIocpWcp();
    ghDITResetEventWcp = KernelIocpWcp;
    if ( KernelIocpWcp )
    {
      v2 = AssociateKernelIocpWcp(KernelIocpWcp, ghDITIocp, v7, KernelIocpWcp, 1LL, 0, &gbDITResetEventAlreadySignaled);
      if ( v2 < 0 )
        goto LABEL_20;
    }
    v10 = (void *)CreateKernelIocpWcp();
    ghDITMmcssEventWcp = v10;
    if ( v10 )
    {
      v2 = AssociateKernelIocpWcp(v10, ghDITIocp, v6, v10, 1LL, 0, &gbDITMmcssEventAlreadySignaled);
      if ( v2 < 0 )
        goto LABEL_20;
    }
    if ( !a1 )
    {
      v12 = (void *)CreateKernelIocpWcp();
      ghDITEventWcp = v12;
      if ( v12 )
      {
        v2 = AssociateKernelIocpWcp(v12, ghDITIocp, v5, v12, 1LL, 0, 0LL);
        if ( v2 < 0 )
          goto LABEL_20;
      }
      if ( (v13 = (void *)CreateKernelIocpWcp(), (ghDITRITEventWcp = v13) != 0LL)
        && (v2 = AssociateKernelIocpWcp(v13, ghDITIocp, v4, v13, 1LL, 0, 0LL), v2 < 0)
        || (v14 = (void *)CreateKernelIocpWcp(), (ghDITMouseFlushTimerWcp = v14) != 0LL)
        && (v2 = AssociateKernelIocpWcp(v14, ghDITIocp, v1, v14, 1LL, 0, 0LL), v2 < 0) )
      {
LABEL_20:
        CleanupDitIocpSupport(0, 0LL);
      }
    }
  }
  return (unsigned int)v2;
}
