/*
 * XREFs of StorEtwEnableCallback @ 0x1C0034F74
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0025EA0 (McGenControlCallbackV2.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C0003AD8 (RaidAcquireAdapterRemoveLock.c)
 *     RaidGetPortData @ 0x1C0007AFC (RaidGetPortData.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 *     RaidReleasePortData @ 0x1C0026958 (RaidReleasePortData.c)
 */

void __fastcall StorEtwEnableCallback(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  char v6; // r12
  KSPIN_LOCK *PortData; // rax
  KSPIN_LOCK *v8; // rbp
  KSPIN_LOCK *v9; // r14
  KSPIN_LOCK *i; // rbx
  KSPIN_LOCK *j; // rdi
  KSPIN_LOCK *v12; // rsi
  __int64 v13; // rdx
  KSPIN_LOCK *k; // rdi
  KSPIN_LOCK *v15; // rax
  void (__fastcall *v16)(KSPIN_LOCK, __int64); // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v6 = a2;
  StorEtwLoggingEnabled = a2 != 0;
  StorRequestThresholdTime = 0LL;
  if ( (*(_QWORD *)&a4 & 0x100000LL) != 0 && a6 && *(_DWORD *)(a6 + 8) == 8 )
    StorRequestThresholdTime = **(_QWORD **)a6;
  PortData = RaidGetPortData();
  v8 = PortData;
  if ( PortData )
  {
    v9 = PortData + 1;
    for ( i = (KSPIN_LOCK *)PortData[1]; i != v9; i = (KSPIN_LOCK *)*i )
    {
      KeAcquireInStackQueuedSpinLock(i + 7, &LockHandle);
      for ( j = (KSPIN_LOCK *)i[4]; ; j = (KSPIN_LOCK *)*j )
      {
        v12 = 0LL;
        if ( j == i + 4 )
          break;
        v12 = j - 8;
        if ( (int)RaidAcquireAdapterRemoveLock((__int64)(j - 8)) >= 0 )
          break;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v12 )
      {
        for ( k = (KSPIN_LOCK *)i[9]; k != i + 9; k = (KSPIN_LOCK *)*k )
        {
          v15 = k - 26;
          if ( k != (KSPIN_LOCK *)208 && *(_DWORD *)v15 == 208 )
          {
            v16 = (void (__fastcall *)(KSPIN_LOCK, __int64))v15[22];
            if ( v16 )
            {
              LOBYTE(v13) = v6;
              v16(v12[67] + 16, v13);
            }
          }
        }
        ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v12[32]);
      }
    }
    RaidReleasePortData(v8);
  }
}
