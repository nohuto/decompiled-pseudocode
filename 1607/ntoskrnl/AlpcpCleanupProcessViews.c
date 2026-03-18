/*
 * XREFs of AlpcpCleanupProcessViews @ 0x140460F60
 * Callers:
 *     LpcExitProcess @ 0x140460F24 (LpcExitProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     AlpcpReferenceBlob @ 0x14040BD4C (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14040C274 (AlpcpDereferenceBlobEx.c)
 *     AlpcpForceUnlinkSecureView @ 0x14054C698 (AlpcpForceUnlinkSecureView.c)
 */

void __fastcall AlpcpCleanupProcessViews(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rsi
  _BYTE *v4; // rax
  _BYTE *v5; // rdi
  _QWORD *v6; // r14
  ULONG_PTR v7; // rdi
  ULONG_PTR v8; // rbp
  _BYTE *v9; // rax
  _BYTE *v10; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (unsigned __int64 *)(a1 + 1616);
  v4 = (_BYTE *)KeAbPreAcquire(a1 + 1616, 0LL, 0);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v4, (ULONG_PTR)v3);
  if ( v5 )
    v5[26] |= 1u;
  v6 = (_QWORD *)(a1 + 1624);
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
      AlpcpDereferenceBlobEx(v8, 1);
    }
    v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v3, 0LL, 0);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx(v3, v9, (ULONG_PTR)v3);
    if ( v10 )
      v10[26] |= 1u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
}
