/*
 * XREFs of VfIrpDatabaseEntryReleaseLock @ 0x1406C81E4
 * Callers:
 *     IovAllocateIrp @ 0x1406B4804 (IovAllocateIrp.c)
 *     IovCancelIrp @ 0x1406B4EFC (IovCancelIrp.c)
 *     IovpLocalCompletionRoutine @ 0x1406B55BC (IovpLocalCompletionRoutine.c)
 *     IovpCallDriver1 @ 0x1406BE838 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x1406BED48 (IovpCallDriver2.c)
 *     IovpCheckIrpForCriticalTracking @ 0x1406BEFEC (IovpCheckIrpForCriticalTracking.c)
 *     IovpCompleteRequest1 @ 0x1406BF058 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x1406BF180 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest3 @ 0x1406BF4EC (IovpCompleteRequest3.c)
 *     IovpCompleteRequest4 @ 0x1406BF574 (IovpCompleteRequest4.c)
 *     VfIoAllocateIrp2 @ 0x1406BFB94 (VfIoAllocateIrp2.c)
 *     VfIoFreeIrp @ 0x1406BFC10 (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x1406BFDA8 (VfIoInitializeIrp.c)
 *     VfIrpWatermark @ 0x1406C0020 (VfIrpWatermark.c)
 *     VfSetIoBuildRequest @ 0x1406C0054 (VfSetIoBuildRequest.c)
 *     VfPendingMoreProcessingRequired @ 0x1406C0FB8 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x1406C121C (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x1406C806C (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x14020BED8 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x14020BF28 (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x1406B742C (VfUtilAddressRangeRemoveCheckEmpty.c)
 */

void __fastcall VfIrpDatabaseEntryReleaseLock(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  bool v7; // bl
  KIRQL v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_DWORD *)a1 + 6) )
  {
    ViIrpDatabaseAcquireLockExclusive(&v8);
    v2 = *a1;
    if ( *a1 )
    {
      ((void (__fastcall *)(_QWORD *, _QWORD, __int64))a1[6])(a1, *a1, 1LL);
      *a1 = 0LL;
      VfUtilAddressRangeRemoveCheckEmpty(
        (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v2 >> 12))),
        v2);
    }
    ViIrpDatabaseReleaseLockExclusive(v8);
  }
  if ( !*((_DWORD *)a1 + 5) )
  {
    ViIrpDatabaseAcquireLockExclusive(&v8);
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
    ViIrpDatabaseReleaseLockExclusive(v8);
  }
  v7 = a1[4] == (_QWORD)(a1 + 4);
  KeReleaseSpinLock(a1 + 1, *((_BYTE *)a1 + 16));
  if ( v7 )
  {
    *((_DWORD *)a1 + 7) |= 0x80000000;
    ((void (__fastcall *)(_QWORD *, _QWORD, __int64))a1[6])(a1, *a1, 2LL);
  }
}
