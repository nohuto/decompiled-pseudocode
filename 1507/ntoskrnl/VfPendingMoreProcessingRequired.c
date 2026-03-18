/*
 * XREFs of VfPendingMoreProcessingRequired @ 0x1407427F8
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x1407358A8 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x14025B248 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x14025B370 (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140737754 (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     ViPendingDelayCompletion @ 0x140742AC8 (ViPendingDelayCompletion.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14074AAB0 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14074AC7C (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfPendingMoreProcessingRequired(int a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v8; // esi
  __int64 v9; // rax
  _QWORD *v10; // rdi
  int v11; // eax
  volatile signed __int32 *v12; // rcx
  unsigned __int8 CurrentIrql; // bl
  bool v14; // zf
  unsigned __int64 v15; // rbx
  unsigned __int8 v17[24]; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0;
  v9 = VfIrpDatabaseEntryFindAndLock(a2);
  v10 = (_QWORD *)v9;
  if ( v9 )
  {
    if ( a3 == *(_QWORD *)(v9 + 216) )
    {
      v11 = *(_DWORD *)(v9 + 56);
      if ( v11 >= 0 )
      {
        v8 = 1;
        *((_DWORD *)v10 + 14) = v11 | 0x80000000;
      }
    }
    VfIrpDatabaseEntryReleaseLock(v10);
    if ( v8 )
    {
      v8 = ViPendingDelayCompletion(a1, (_DWORD)v10, a3, a4, a5);
      if ( !v8 )
      {
        v12 = (volatile signed __int32 *)(v10 + 1);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(v12);
        }
        else if ( _interlockedbittestandset64(v12, 0LL) )
        {
          KxWaitForSpinLockAndAcquire(v12);
        }
        v14 = (*((_DWORD *)v10 + 6))-- == 1;
        *((_BYTE *)v10 + 16) = CurrentIrql;
        if ( v14 )
        {
          ViIrpDatabaseAcquireLockExclusive(v17);
          v15 = *v10;
          ((void (__fastcall *)(_QWORD *, _QWORD, __int64))v10[6])(v10, *v10, 1LL);
          *v10 = 0LL;
          VfUtilAddressRangeRemoveCheckEmpty(
            (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v15 >> 12))),
            v15);
          ViIrpDatabaseReleaseLockExclusive(v17[0]);
        }
        _InterlockedDecrement((volatile signed __int32 *)v10 + 5);
        VfIrpDatabaseEntryReleaseLock(v10);
      }
    }
  }
  return v8;
}
