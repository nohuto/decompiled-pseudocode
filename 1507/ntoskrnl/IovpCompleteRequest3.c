/*
 * XREFs of IovpCompleteRequest3 @ 0x140740824
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x1407358A8 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14074AC7C (VfIrpDatabaseEntryReleaseLock.c)
 */

_UNKNOWN **__fastcall IovpCompleteRequest3(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  char v4; // di
  __int64 v8; // rbp
  volatile signed __int32 *v9; // rcx
  unsigned __int8 CurrentIrql; // r15
  _BYTE *v11; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = 0;
  if ( *(_QWORD *)a3 )
  {
    v8 = *(_QWORD *)(a3 + 8);
    v9 = (volatile signed __int32 *)(v8 + 8);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v9);
    }
    else if ( _interlockedbittestandset64(v9, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v9);
    }
    *(_BYTE *)(v8 + 16) = CurrentIrql;
    v11 = *(_BYTE **)(a1 + 184);
    if ( *(_BYTE *)(a1 + 67) <= *(_BYTE *)(a1 + 66) && *v11 == 27 && v11[1] == 2 )
      v4 = 1;
    *(_BYTE *)(a3 + 16) = v4;
    *(_QWORD *)(a3 + 24) = a2;
    return (_UNKNOWN **)VfIrpDatabaseEntryReleaseLock(v8);
  }
  return result;
}
