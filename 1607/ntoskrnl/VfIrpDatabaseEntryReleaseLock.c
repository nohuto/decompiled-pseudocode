/*
 * XREFs of VfIrpDatabaseEntryReleaseLock @ 0x140716B8C
 * Callers:
 *     IovAllocateIrp @ 0x14070066C (IovAllocateIrp.c)
 *     IovCancelIrp @ 0x140700D64 (IovCancelIrp.c)
 *     IovpLocalCompletionRoutine @ 0x140701424 (IovpLocalCompletionRoutine.c)
 *     IovpCallDriver1 @ 0x14070A890 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x14070ADA0 (IovpCallDriver2.c)
 *     IovpCheckIrpForCriticalTracking @ 0x14070B044 (IovpCheckIrpForCriticalTracking.c)
 *     IovpCompleteRequest1 @ 0x14070B0B0 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x14070B1D8 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest3 @ 0x14070B544 (IovpCompleteRequest3.c)
 *     IovpCompleteRequest4 @ 0x14070B5CC (IovpCompleteRequest4.c)
 *     VfIoAllocateIrp2 @ 0x14070BBEC (VfIoAllocateIrp2.c)
 *     VfIoFreeIrp @ 0x14070BC68 (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x14070BE00 (VfIoInitializeIrp.c)
 *     VfIrpWatermark @ 0x14070C078 (VfIrpWatermark.c)
 *     VfSetIoBuildRequest @ 0x14070C0AC (VfSetIoBuildRequest.c)
 *     VfPendingMoreProcessingRequired @ 0x14070D020 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x14070D284 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140716A10 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x140223C80 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x140223CC0 (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140702C1C (VfUtilAddressRangeRemoveCheckEmpty.c)
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
