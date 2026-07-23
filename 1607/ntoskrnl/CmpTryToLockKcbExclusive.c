/*
 * XREFs of CmpTryToLockKcbExclusive @ 0x140603DE8
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1404334E0 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400C455C (KeAbPostReleaseEx.c)
 *     CmpLockTableAdd @ 0x1401B50E8 (CmpLockTableAdd.c)
 */

char __fastcall CmpTryToLockKcbExclusive(__int64 a1)
{
  char v2; // bl
  unsigned __int64 v3; // rax

  v2 = 1;
  if ( (*(_DWORD *)(a1 + 4) & 0x100000) != 0 )
    *(_DWORD *)(a1 + 60) = CmpLockTableAdd(a1, 1);
  v3 = KeAbPreAcquire(a1 + 40, 0LL, 1);
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 40), 0LL) )
  {
    if ( v3 )
      KeAbPostReleaseEx(a1 + 40, v3);
    return 0;
  }
  else
  {
    if ( v3 )
      *(_BYTE *)(v3 + 26) |= 1u;
    *(_QWORD *)(a1 + 48) = KeGetCurrentThread();
  }
  return v2;
}
