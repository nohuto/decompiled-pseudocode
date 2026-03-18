/*
 * XREFs of ViPendingCompleteAfterWait @ 0x140742978
 * Callers:
 *     ViPendingCompleteAtDPC @ 0x140742AC0 (ViPendingCompleteAtDPC.c)
 *     ViPendingWorkerThread @ 0x140742D8C (ViPendingWorkerThread.c)
 * Callees:
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x14025B248 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x14025B370 (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140737754 (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14074AC7C (VfIrpDatabaseEntryReleaseLock.c)
 */

void __fastcall ViPendingCompleteAfterWait(char *a1)
{
  _QWORD *v2; // rdi
  volatile signed __int32 *v3; // rcx
  unsigned __int8 CurrentIrql; // bl
  IRP *v5; // r15
  __int64 v6; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  void *v8; // rbp
  unsigned __int64 v10; // rbx
  unsigned int (__fastcall *CompletionRoutine)(_QWORD, _QWORD, _QWORD); // rax
  unsigned __int8 v12; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)a1 + 42) == 1 )
    KeWaitForSingleObject(a1 + 104, Executive, 0, 0, 0LL);
  v2 = *(_QWORD **)a1;
  v3 = (volatile signed __int32 *)(*(_QWORD *)a1 + 8LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v3);
  }
  else if ( _interlockedbittestandset64(v3, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v3);
  }
  v5 = (IRP *)*v2;
  v6 = v2[27];
  *((_BYTE *)v2 + 16) = CurrentIrql;
  CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
  *((_DWORD *)v2 + 14) &= ~0x10u;
  if ( !v6 || (v8 = *(void **)(v6 + 40)) == 0LL )
    v8 = 0LL;
  if ( (*((_DWORD *)v2 + 6))-- == 1 )
  {
    ViIrpDatabaseAcquireLockExclusive(&v12);
    v10 = *v2;
    ((void (__fastcall *)(_QWORD *, _QWORD, __int64))v2[6])(v2, *v2, 1LL);
    *v2 = 0LL;
    VfUtilAddressRangeRemoveCheckEmpty(
      (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v10 >> 12))),
      v10);
    ViIrpDatabaseReleaseLockExclusive(v12);
  }
  _InterlockedDecrement((volatile signed __int32 *)v2 + 5);
  VfIrpDatabaseEntryReleaseLock(v2);
  CompletionRoutine = (unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD))CurrentStackLocation[-1].CompletionRoutine;
  if ( !CompletionRoutine || CompletionRoutine(*((_QWORD *)a1 + 1), v5, CurrentStackLocation[-1].Context) != -1073741802 )
    IofCompleteRequest(v5, a1[172]);
  if ( v8 )
    ObfDereferenceObject(v8);
  ExFreePoolWithTag(a1, 0);
}
