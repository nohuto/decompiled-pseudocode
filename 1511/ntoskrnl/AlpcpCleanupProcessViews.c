/*
 * XREFs of AlpcpCleanupProcessViews @ 0x1403E6C8C
 * Callers:
 *     LpcExitProcess @ 0x1403E6C50 (LpcExitProcess.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x14047CD18 (AlpcpReferenceBlob.c)
 *     AlpcpForceUnlinkSecureView @ 0x14051A418 (AlpcpForceUnlinkSecureView.c)
 */

void __fastcall AlpcpCleanupProcessViews(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  _QWORD *v6; // r14
  ULONG_PTR v7; // rdi
  ULONG_PTR v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (unsigned __int64 *)(a1 + 1600);
  v4 = KeAbPreAcquire(a1 + 1600, 0LL, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v4, (ULONG_PTR)v3);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v6 = (_QWORD *)(a1 + 1608);
  while ( (_QWORD *)*v6 != v6 )
  {
    v7 = *v6 - 80LL;
    v8 = v7 & -(__int64)(AlpcpReferenceBlob(v7) != 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease((ULONG_PTR)v3);
    if ( v8 )
    {
      AlpcpForceUnlinkSecureView(v8);
      AlpcpDereferenceBlobEx(v8);
    }
    v9 = KeAbPreAcquire((ULONG_PTR)v3, 0LL, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx(v3, v9, (ULONG_PTR)v3);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
}
