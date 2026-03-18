/*
 * XREFs of IopInsertPassiveInterruptBlock @ 0x1401BF574
 * Callers:
 *     IopAllocatePassiveInterruptBlock @ 0x140602CC8 (IopAllocatePassiveInterruptBlock.c)
 * Callees:
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x1401BF458 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopFindPassiveInterruptBlockLocked @ 0x1401BF544 (IopFindPassiveInterruptBlockLocked.c)
 *     IopReleaseGlobalPassiveInterruptListLock @ 0x1401BF71C (IopReleaseGlobalPassiveInterruptListLock.c)
 */

__int64 __fastcall IopInsertPassiveInterruptBlock(__int64 a1, _BYTE *a2)
{
  __int64 **v4; // rcx
  __int64 PassiveInterruptBlockLocked; // rsi
  unsigned __int8 v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 1;
  IopAcquireGlobalPassiveInterruptListLock(&v7);
  PassiveInterruptBlockLocked = IopFindPassiveInterruptBlockLocked(*(_DWORD *)(a1 + 16));
  if ( !PassiveInterruptBlockLocked )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 184));
    v4 = (__int64 **)qword_1402FAD28;
    *(_QWORD *)a1 = &PassiveInterruptList;
    *(_QWORD *)(a1 + 8) = v4;
    if ( *v4 != &PassiveInterruptList )
      __fastfail(3u);
    *v4 = (__int64 *)a1;
    qword_1402FAD28 = a1;
  }
  LOBYTE(v4) = v7;
  IopReleaseGlobalPassiveInterruptListLock(v4);
  if ( PassiveInterruptBlockLocked )
    *a2 = 0;
  return 0LL;
}
