/*
 * XREFs of SmKmVirtualLockCtxMemoryUnlocked @ 0x14022119C
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14011E8F4 (SmKmStoreHelperCommandProcess.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140221054 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MmQueryWorkingSetInformation @ 0x14009EE10 (MmQueryWorkingSetInformation.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MmAdjustWorkingSetSize @ 0x1401E296C (MmAdjustWorkingSetSize.c)
 */

void __fastcall SmKmVirtualLockCtxMemoryUnlocked(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v6; // rax
  _BYTE *v7; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-20h] BYREF
  int v14; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp+18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 8), -a2);
  v3 = *(_QWORD *)(BugCheckParameter2 + 8);
  v4 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( v3 < v4 && (!v3 || v4 - v3 >= 0x800000) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = (_BYTE *)KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v6, BugCheckParameter2);
    if ( v7 )
      v7[26] |= 1u;
    v8 = *(_QWORD *)(BugCheckParameter2 + 8);
    v9 = *(_QWORD *)(BugCheckParameter2 + 16) - v8;
    if ( (v9 >= 0x800000 || !v8 && *(_QWORD *)(BugCheckParameter2 + 16))
      && (int)MmQueryWorkingSetInformation(v13, &v12, &v17, &v15, &v16, &v14) >= 0 )
    {
      v10 = v15;
      v11 = v9 & 0xFFFFFFFFFFC00000uLL;
      *(_QWORD *)(BugCheckParameter2 + 16) -= v11;
      if ( v10 >= v11 )
      {
        v15 = v10 - v11;
        MmAdjustWorkingSetSize(v10 - v11, v16, 0, 0);
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
  }
}
