/*
 * XREFs of SmpKeyedStoreReference @ 0x14011CD78
 * Callers:
 *     SmpPageWrite @ 0x14011A1C8 (SmpPageWrite.c)
 * Callees:
 *     SmKmStoreReference @ 0x140003118 (SmKmStoreReference.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     SmpKeyedStoreEntryGet @ 0x1400C715C (SmpKeyedStoreEntryGet.c)
 */

__int64 __fastcall SmpKeyedStoreReference(unsigned __int64 *BugCheckParameter2, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // esi
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  CurrentThread = KeGetCurrentThread();
  v4 = -1;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(BugCheckParameter2, v7, (ULONG_PTR)BugCheckParameter2);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v8 = SmpKeyedStoreEntryGet((ULONG_PTR)BugCheckParameter2, &v11, 0, 1);
  v9 = v8;
  if ( v8 )
  {
    SmKmStoreReference(a2, *(unsigned __int16 *)(v8 + 16));
    v4 = *(unsigned __int16 *)(v9 + 16);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v4;
}
