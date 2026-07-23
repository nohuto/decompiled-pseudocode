/*
 * XREFs of SepIsParentOfChildAppContainer @ 0x1404C9740
 * Callers:
 *     SeIsParentOfChildAppContainer @ 0x1404C9738 (SeIsParentOfChildAppContainer.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     SepGetTokenSessionMapEntry @ 0x14021B124 (SepGetTokenSessionMapEntry.c)
 *     RtlIsParentOfChildAppContainer @ 0x1403E1C94 (RtlIsParentOfChildAppContainer.c)
 *     SepFindMatchingLowBoxNumberEntries @ 0x1403E1E40 (SepFindMatchingLowBoxNumberEntries.c)
 */

BOOLEAN __fastcall SepIsParentOfChildAppContainer(unsigned int a1, int a2, int a3)
{
  BOOLEAN result; // al
  BOOLEAN IsParentOfChildAppContainer; // r13
  char v8; // r14
  struct _KTHREAD *v9; // rax
  volatile signed __int32 *v10; // rdi
  _BYTE *v11; // rax
  signed __int8 v12; // cf
  ULONG_PTR v13; // rdi
  _BYTE *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // [rsp+30h] [rbp-20h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v24; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+48h] BYREF

  result = 0;
  BugCheckParameter2 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  IsParentOfChildAppContainer = 0;
  v8 = 0;
  if ( a2 && a3 )
  {
    if ( a1 >= 5 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v19 = KeAbPreAcquire((ULONG_PTR)&LowboxSessionMapLock, 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(&LowboxSessionMapLock, v19, (ULONG_PTR)&LowboxSessionMapLock);
      if ( v19 )
        *(_BYTE *)(v19 + 26) |= 1u;
      v8 = 1;
      if ( (int)SepGetTokenSessionMapEntry(a1, 0, &BugCheckParameter2) < 0 )
      {
LABEL_21:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
        KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v20, v21, v22);
        return IsParentOfChildAppContainer;
      }
    }
    else
    {
      BugCheckParameter2 = (ULONG_PTR)&g_SessionLowboxArray + 40 * a1;
    }
    v9 = KeGetCurrentThread();
    --v9->KernelApcDisable;
    v10 = (volatile signed __int32 *)BugCheckParameter2;
    v11 = (_BYTE *)KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
    v12 = _interlockedbittestandset64(v10, 0LL);
    v13 = BugCheckParameter2;
    v14 = v11;
    if ( v12 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v11, BugCheckParameter2);
    if ( v14 )
    {
      v14[26] |= 1u;
      v13 = BugCheckParameter2;
    }
    if ( (int)SepFindMatchingLowBoxNumberEntries(
                *(PRTL_DYNAMIC_HASH_TABLE *)(v13 + 24),
                a2,
                a3,
                &v24,
                (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)&v23) >= 0 )
      IsParentOfChildAppContainer = RtlIsParentOfChildAppContainer(v24[1].Linkage.Blink, *(PSID *)(v23 + 32));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
    if ( !v8 )
      return IsParentOfChildAppContainer;
    goto LABEL_21;
  }
  return result;
}
