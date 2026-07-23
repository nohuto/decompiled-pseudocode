/*
 * XREFs of IopInsertPassiveInterruptBlock @ 0x1401CD948
 * Callers:
 *     IopAllocatePassiveInterruptBlock @ 0x14062D0F8 (IopAllocatePassiveInterruptBlock.c)
 * Callees:
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x1401CD82C (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopFindPassiveInterruptBlockLocked @ 0x1401CD918 (IopFindPassiveInterruptBlockLocked.c)
 *     IopReleaseGlobalPassiveInterruptListLock @ 0x1401CDAF0 (IopReleaseGlobalPassiveInterruptListLock.c)
 */

__int64 __fastcall IopInsertPassiveInterruptBlock(__int64 a1, _BYTE *a2)
{
  __int64 *v4; // rcx
  __int64 PassiveInterruptBlockLocked; // rsi
  unsigned __int8 v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 1;
  IopAcquireGlobalPassiveInterruptListLock(&v7);
  PassiveInterruptBlockLocked = IopFindPassiveInterruptBlockLocked(*(_DWORD *)(a1 + 20));
  if ( !PassiveInterruptBlockLocked )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 192));
    v4 = (__int64 *)qword_140320268;
    if ( *(__int64 **)qword_140320268 != &PassiveInterruptList )
      __fastfail(3u);
    *(_QWORD *)a1 = &PassiveInterruptList;
    *(_QWORD *)(a1 + 8) = v4;
    *v4 = a1;
    qword_140320268 = a1;
  }
  LOBYTE(v4) = v7;
  IopReleaseGlobalPassiveInterruptListLock(v4);
  if ( PassiveInterruptBlockLocked )
    *a2 = 0;
  return 0LL;
}
