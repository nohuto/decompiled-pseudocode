/*
 * XREFs of CmUnlockHiveSecurity @ 0x1403FC47C
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A1E0 (CmpSetKeySecurity.c)
 *     CmpCreateHiveRootCell @ 0x140141494 (CmpCreateHiveRootCell.c)
 *     CmpAssignKeySecurity @ 0x14014AF38 (CmpAssignKeySecurity.c)
 *     CmpCreateTombstone @ 0x1401B6144 (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14060DE14 (CmpUndoDeleteKeyForTransEx.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

unsigned __int64 __fastcall CmUnlockHiveSecurity(__int64 a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  signed __int64 v3; // rcx

  v1 = (volatile signed __int64 *)(a1 + 2952);
  _m_prefetchw((const void *)(a1 + 2952));
  v2 = *(_QWORD *)(a1 + 2952);
  if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v3 = v2 - 16;
  else
    v3 = 0LL;
  if ( (v2 & 2) != 0 || v2 != _InterlockedCompareExchange64(v1, v3, v2) )
    ExfReleasePushLock(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
