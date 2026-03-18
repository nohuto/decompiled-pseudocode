/*
 * XREFs of SmpKeyedStoreReference @ 0x14010F104
 * Callers:
 *     SmpPageWrite @ 0x14010B7A4 (SmpPageWrite.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     SmpKeyedStoreEntryGet @ 0x1400926A8 (SmpKeyedStoreEntryGet.c)
 */

__int64 __fastcall SmpKeyedStoreReference(unsigned __int64 *BugCheckParameter2, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // esi
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbp
  unsigned int v11; // edi
  __int64 v12; // rsi
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  CurrentThread = KeGetCurrentThread();
  v4 = -1;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(BugCheckParameter2, v7, (ULONG_PTR)BugCheckParameter2);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v8 = SmpKeyedStoreEntryGet((__int64)BugCheckParameter2, &v13, 0, 1);
  v9 = v8;
  if ( v8 )
  {
    v11 = *(unsigned __int16 *)(v8 + 16);
    v12 = 176LL * (*(_WORD *)(v8 + 16) & 0x1F);
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v12 + a2 + 8)) && (*(_WORD *)(v12 + a2 + 24) & 0x7FF) != v11 >> 5 )
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v12 + a2 + 8));
    v4 = *(unsigned __int16 *)(v9 + 16);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v4;
}
