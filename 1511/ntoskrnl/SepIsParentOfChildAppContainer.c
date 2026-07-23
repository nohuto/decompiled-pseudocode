/*
 * XREFs of SepIsParentOfChildAppContainer @ 0x1403B4520
 * Callers:
 *     SeIsParentOfChildAppContainer @ 0x1403B4518 (SeIsParentOfChildAppContainer.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     SepGetTokenSessionMapEntry @ 0x1402017AC (SepGetTokenSessionMapEntry.c)
 *     RtlIsParentOfChildAppContainer @ 0x1403B4660 (RtlIsParentOfChildAppContainer.c)
 *     SepFindMatchingLowBoxNumberEntries @ 0x1403B46EC (SepFindMatchingLowBoxNumberEntries.c)
 */

BOOLEAN __fastcall SepIsParentOfChildAppContainer(unsigned int a1, int a2, int a3)
{
  BOOLEAN result; // al
  BOOLEAN IsParentOfChildAppContainer; // r13
  char v6; // r14
  struct _KTHREAD *v7; // rax
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rax
  signed __int8 v10; // cf
  ULONG_PTR v11; // rdi
  __int64 v12; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdi
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+48h] BYREF

  result = 0;
  BugCheckParameter2 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  IsParentOfChildAppContainer = 0;
  v6 = 0;
  if ( a2 && a3 )
  {
    if ( a1 >= 5 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v14 = KeAbPreAcquire((ULONG_PTR)&LowboxSessionMapLock, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(&LowboxSessionMapLock, v14, (ULONG_PTR)&LowboxSessionMapLock);
      if ( v14 )
        *(_BYTE *)(v14 + 26) |= 1u;
      v6 = 1;
      if ( (int)SepGetTokenSessionMapEntry(a1, 0, &BugCheckParameter2) < 0 )
      {
LABEL_21:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
        KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        return IsParentOfChildAppContainer;
      }
    }
    else
    {
      BugCheckParameter2 = (ULONG_PTR)&g_SessionLowboxArray + 40 * a1;
    }
    v7 = KeGetCurrentThread();
    --v7->KernelApcDisable;
    v8 = (volatile signed __int32 *)BugCheckParameter2;
    v9 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
    v10 = _interlockedbittestandset64(v8, 0LL);
    v11 = BugCheckParameter2;
    v12 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v9, BugCheckParameter2);
    if ( v12 )
    {
      *(_BYTE *)(v12 + 26) |= 1u;
      v11 = BugCheckParameter2;
    }
    if ( (int)SepFindMatchingLowBoxNumberEntries(*(PRTL_DYNAMIC_HASH_TABLE *)(v11 + 24), (__int64)&v15) >= 0 )
      IsParentOfChildAppContainer = RtlIsParentOfChildAppContainer(*(PSID *)(v16 + 32), *(PSID *)(v15 + 32));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !v6 )
      return IsParentOfChildAppContainer;
    goto LABEL_21;
  }
  return result;
}
