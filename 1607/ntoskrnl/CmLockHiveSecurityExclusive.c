/*
 * XREFs of CmLockHiveSecurityExclusive @ 0x1403FC434
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A1E0 (CmpSetKeySecurity.c)
 *     CmpCreateHiveRootCell @ 0x140141494 (CmpCreateHiveRootCell.c)
 *     CmpAssignKeySecurity @ 0x14014AF38 (CmpAssignKeySecurity.c)
 *     CmpCreateTombstone @ 0x1401B6144 (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14060DE14 (CmpUndoDeleteKeyForTransEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 */

_BYTE *__fastcall CmLockHiveSecurityExclusive(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  _BYTE *result; // rax
  _BYTE *v3; // rbx

  v1 = (unsigned __int64 *)(a1 + 2952);
  result = (_BYTE *)KeAbPreAcquire(a1 + 2952, 0LL, 0);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = (_BYTE *)ExfAcquirePushLockExclusiveEx(v1, result, (ULONG_PTR)v1);
  if ( v3 )
  {
    result = (_BYTE *)*((_QWORD *)v3 + 4);
    v3[26] |= 1u;
  }
  return result;
}
