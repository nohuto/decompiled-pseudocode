/*
 * XREFs of VfIrpDatabaseEntryReleaseLock @ 0x14074AC7C
 * Callers:
 *     IovAllocateIrp @ 0x140734804 (IovAllocateIrp.c)
 *     IovCancelIrp @ 0x14073508C (IovCancelIrp.c)
 *     IovpLocalCompletionRoutine @ 0x1407358A8 (IovpLocalCompletionRoutine.c)
 *     IovpCallDriver1 @ 0x14073F69C (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x14073FD1C (IovpCallDriver2.c)
 *     IovpCheckIrpForCriticalTracking @ 0x1407402B0 (IovpCheckIrpForCriticalTracking.c)
 *     IovpCompleteRequest1 @ 0x14074031C (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x1407404B4 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest3 @ 0x140740824 (IovpCompleteRequest3.c)
 *     IovpCompleteRequest4 @ 0x1407408D4 (IovpCompleteRequest4.c)
 *     VfIoAllocateIrp2 @ 0x14074121C (VfIoAllocateIrp2.c)
 *     VfIoFreeIrp @ 0x140741298 (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x1407414D0 (VfIoInitializeIrp.c)
 *     VfIrpWatermark @ 0x140741814 (VfIrpWatermark.c)
 *     VfSetIoBuildRequest @ 0x140741848 (VfSetIoBuildRequest.c)
 *     VfPendingMoreProcessingRequired @ 0x1407427F8 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140742978 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14074AAB0 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x14025B248 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x14025B370 (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140737754 (VfUtilAddressRangeRemoveCheckEmpty.c)
 */

__int64 __fastcall VfIrpDatabaseEntryReleaseLock(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  unsigned __int8 v7; // si
  volatile signed __int64 *v8; // rcx
  BOOL v9; // edi
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int8 v12; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_DWORD *)a1 + 6) )
  {
    ViIrpDatabaseAcquireLockExclusive(&v12);
    v2 = *a1;
    if ( *a1 )
    {
      ((void (__fastcall *)(_QWORD *, _QWORD, __int64))a1[6])(a1, *a1, 1LL);
      *a1 = 0LL;
      VfUtilAddressRangeRemoveCheckEmpty(
        (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v2 >> 12))),
        v2);
    }
    ViIrpDatabaseReleaseLockExclusive(v12);
  }
  if ( !*((_DWORD *)a1 + 5) )
  {
    ViIrpDatabaseAcquireLockExclusive(&v12);
    if ( !*((_DWORD *)a1 + 5) )
    {
      v3 = a1 + 4;
      v4 = (_QWORD *)a1[4];
      v5 = (_QWORD *)a1[5];
      if ( (_QWORD *)v4[1] != a1 + 4 || (_QWORD *)*v5 != v3 )
        __fastfail(3u);
      *v5 = v4;
      v4[1] = v5;
      a1[5] = a1 + 4;
      *v3 = v3;
      if ( (_QWORD *)*v4 == v4 )
      {
        v6 = (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned int)(((__int64)v4 - ViIrpDatabase) >> 4));
        *v6 = 0LL;
        v6[1] = 0LL;
      }
    }
    ViIrpDatabaseReleaseLockExclusive(v12);
  }
  v7 = *((_BYTE *)a1 + 16);
  v8 = a1 + 1;
  v9 = a1[4] == (_QWORD)(a1 + 4);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v8, retaddr);
  else
    _InterlockedAnd64(v8, 0LL);
  result = v7;
  __writecr8(v7);
  if ( v9 )
  {
    *((_DWORD *)a1 + 7) |= 0x80000000;
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64))a1[6])(a1, *a1, 2LL);
  }
  return result;
}
