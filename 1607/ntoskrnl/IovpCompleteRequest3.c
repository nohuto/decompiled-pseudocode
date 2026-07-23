/*
 * XREFs of IovpCompleteRequest3 @ 0x14070B574
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x140701424 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140716B8C (VfIrpDatabaseEntryReleaseLock.c)
 */

_UNKNOWN **__fastcall IovpCompleteRequest3(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  bool v4; // di
  __int64 v8; // rbp
  _BYTE *v9; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = 0;
  if ( *(_QWORD *)a3 )
  {
    v8 = *(_QWORD *)(a3 + 8);
    *(_BYTE *)(v8 + 16) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 8));
    v9 = *(_BYTE **)(a1 + 184);
    if ( *(_BYTE *)(a1 + 67) <= *(_BYTE *)(a1 + 66) && *v9 == 27 )
      v4 = v9[1] == 2;
    *(_BYTE *)(a3 + 16) = v4;
    *(_QWORD *)(a3 + 24) = a2;
    return (_UNKNOWN **)VfIrpDatabaseEntryReleaseLock(v8);
  }
  return result;
}
