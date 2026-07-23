/*
 * XREFs of CmpQueryKeySecurity @ 0x14000AEB8
 * Callers:
 *     CmpSecurityMethod @ 0x140403170 (CmpSecurityMethod.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1403FBA4C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x14040336C (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1404036E0 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1404037F4 (CmpCleanupKcbStack.c)
 *     CmpInitializeKcbStack @ 0x140403804 (CmpInitializeKcbStack.c)
 *     CmpQuerySecurityDescriptorInfo @ 0x140403860 (CmpQuerySecurityDescriptorInfo.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140403EA8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackShared @ 0x140431E30 (CmpLockKcbStackShared.c)
 */

__int64 __fastcall CmpQueryKeySecurity(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v6; // bp
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v11; // r14
  int started; // ebx
  _BYTE v14[32]; // [rsp+30h] [rbp-48h] BYREF

  a5 = 0LL;
  v6 = 0;
  CmpInitializeKcbStack(v14);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = ExAcquireRundownProtection(&CmpShutdownRundown);
  if ( v11 )
  {
    CmpLockRegistry();
    v6 = 1;
    started = CmpStartKcbStackForTopLayerKcb(v14, a1[1]);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared(v14);
      started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( started >= 0 )
      {
        if ( !a1[7] && !a1[8]
          || (started = CmpTransSearchAddTransFromKeyBody(a1, &a5), started >= 0)
          && (started = CmpPerformKeyBodyDeletionCheck(a1, a5), started >= 0) )
        {
          started = CmpQuerySecurityDescriptorInfo(v14, a2, a3, a4);
          if ( started >= 0 )
            started = 0;
        }
      }
      CmpUnlockKcbStack(v14);
    }
  }
  else
  {
    KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
    started = -1073741431;
  }
  CmpCleanupKcbStack(v14);
  if ( v6 )
    CmpUnlockRegistry();
  if ( v11 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
  }
  return (unsigned int)started;
}
