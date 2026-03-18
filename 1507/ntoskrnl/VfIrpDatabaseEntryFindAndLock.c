/*
 * XREFs of VfIrpDatabaseEntryFindAndLock @ 0x14074AAB0
 * Callers:
 *     IovCancelIrp @ 0x14073508C (IovCancelIrp.c)
 *     IovpCallDriver1 @ 0x14073F69C (IovpCallDriver1.c)
 *     IovpCheckIrpForCriticalTracking @ 0x1407402B0 (IovpCheckIrpForCriticalTracking.c)
 *     IovpCompleteRequest1 @ 0x14074031C (IovpCompleteRequest1.c)
 *     VfIoFreeIrp @ 0x140741298 (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x1407414D0 (VfIoInitializeIrp.c)
 *     VfIrpWatermark @ 0x140741814 (VfIrpWatermark.c)
 *     VfSetIoBuildRequest @ 0x140741848 (VfSetIoBuildRequest.c)
 *     VfPendingMoreProcessingRequired @ 0x1407427F8 (VfPendingMoreProcessingRequired.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x14074ABA8 (VfIrpDatabaseEntryInsertAndLock.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x14025B304 (ViIrpDatabaseAcquireLockShared.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x14025B3B4 (ViIrpDatabaseReleaseLockShared.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14074AC7C (VfIrpDatabaseEntryReleaseLock.c)
 *     ViIrpDatabaseFindPointer @ 0x14074ADB4 (ViIrpDatabaseFindPointer.c)
 */

__int64 __fastcall VfIrpDatabaseEntryFindAndLock(unsigned __int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // r8
  __m128i *v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // xmm0_8
  __int64 Pointer; // rax
  volatile signed __int32 *v8; // rcx
  unsigned __int8 v10; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( !VfIrpDatabaseInitialized )
    return v1;
  v3 = a1 + 208;
  v4 = (__m128i *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (a1 >> 12)));
  v5 = v4->m128i_i64[0];
  v6 = _mm_srli_si128(*v4, 8).m128i_u64[0];
  if ( v4->m128i_i64[0] >= v6 )
    return v1;
  if ( a1 <= v5 )
  {
    if ( v3 >= v6 )
      goto LABEL_9;
    if ( a1 < v5 )
    {
LABEL_7:
      if ( v3 <= v5 || v3 > v6 )
        return v1;
      goto LABEL_9;
    }
  }
  if ( a1 >= v6 )
    goto LABEL_7;
LABEL_9:
  ViIrpDatabaseAcquireLockShared(&v10);
  Pointer = ViIrpDatabaseFindPointer(a1);
  v1 = Pointer;
  if ( Pointer )
  {
    _InterlockedIncrement((volatile signed __int32 *)(Pointer + 20));
    ViIrpDatabaseReleaseLockShared(v10);
    v8 = (volatile signed __int32 *)(v1 + 8);
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v8);
    }
    else if ( _interlockedbittestandset64(v8, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v8);
    }
    *(_BYTE *)(v1 + 16) = v10;
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 20));
    if ( !*(_DWORD *)(v1 + 24) )
    {
      VfIrpDatabaseEntryReleaseLock(v1);
      return 0LL;
    }
  }
  else
  {
    ViIrpDatabaseReleaseLockShared(v10);
  }
  return v1;
}
