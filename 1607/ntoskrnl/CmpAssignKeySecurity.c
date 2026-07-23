/*
 * XREFs of CmpAssignKeySecurity @ 0x14014AF38
 * Callers:
 *     CmpSecurityMethod @ 0x140403170 (CmpSecurityMethod.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     CmpLockKcbStackExclusive @ 0x1403FAE14 (CmpLockKcbStackExclusive.c)
 *     CmpAssignSecurityDescriptor @ 0x1403FBC3C (CmpAssignSecurityDescriptor.c)
 *     CmpLockHiveFlusherShared @ 0x1403FC424 (CmpLockHiveFlusherShared.c)
 *     CmLockHiveSecurityExclusive @ 0x1403FC434 (CmLockHiveSecurityExclusive.c)
 *     CmUnlockHiveSecurity @ 0x1403FC47C (CmUnlockHiveSecurity.c)
 *     CmpUnlockHiveFlusher @ 0x1403FC4C8 (CmpUnlockHiveFlusher.c)
 *     CmpAssignSecurityToKcb @ 0x1403FCCF8 (CmpAssignSecurityToKcb.c)
 *     CmpGetKeyNodeForKcb @ 0x1404017F0 (CmpGetKeyNodeForKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x14040336C (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1404036E0 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1404037F4 (CmpCleanupKcbStack.c)
 *     CmpInitializeKcbStack @ 0x140403804 (CmpInitializeKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140403EA8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReleaseKeyNodeForKcb @ 0x1404A9170 (CmpReleaseKeyNodeForKcb.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1404C5464 (ObAssignObjectSecurityDescriptor.c)
 */

__int64 __fastcall CmpAssignKeySecurity(__int64 a1, __int64 a2)
{
  char v4; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  BOOLEAN v9; // r12
  ULONG_PTR v10; // rsi
  __int64 v11; // rdi
  int started; // ebx
  __int64 v13; // r8
  __int64 KeyNodeForKcb; // r15
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _BYTE v19[32]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+90h] [rbp+18h] BYREF

  v20 = 0xFFFFFFFFLL;
  v4 = 0;
  CmpInitializeKcbStack(v19);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection(&CmpShutdownRundown);
  if ( v9 )
  {
    CmpLockRegistry();
    v10 = *(_QWORD *)(a1 + 8);
    v4 = 1;
    v11 = *(_QWORD *)(v10 + 24);
    started = CmpStartKcbStackForTopLayerKcb(v19, v10);
    if ( started >= 0 )
    {
      CmpLockKcbStackExclusive(v19);
      started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( started >= 0 )
      {
        CmpLockHiveFlusherShared(v11);
        CmLockHiveSecurityExclusive(v11);
        LOBYTE(v13) = 1;
        KeyNodeForKcb = CmpGetKeyNodeForKcb(v10, &v20, v13);
        ObAssignObjectSecurityDescriptor(a1, 0LL);
        if ( !KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(v11 + 5360) & 0x20) != 0 && *(_DWORD *)(v11 + 3040) )
          a2 = *(_QWORD *)(*(_QWORD *)(v11 + 3056) + 8LL) + 32LL;
        started = CmpAssignSecurityDescriptor(*(_QWORD *)(v10 + 24), *(unsigned int *)(v10 + 32), KeyNodeForKcb, a2);
        if ( started >= 0 )
        {
          CmpAssignSecurityToKcb(v10, *(unsigned int *)(KeyNodeForKcb + 44), 0);
          started = 0;
        }
        if ( KeyNodeForKcb )
          CmpReleaseKeyNodeForKcb(v10, &v20);
        CmUnlockHiveSecurity(v11);
        CmpUnlockHiveFlusher(v11);
      }
      CmpUnlockKcbStack(v19);
    }
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
    started = -1073741431;
  }
  CmpCleanupKcbStack(v19);
  if ( v4 )
    CmpUnlockRegistry();
  if ( v9 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
  }
  return (unsigned int)started;
}
