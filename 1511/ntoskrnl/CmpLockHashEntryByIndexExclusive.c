/*
 * XREFs of CmpLockHashEntryByIndexExclusive @ 0x140499A7C
 * Callers:
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpCleanUpKCBCacheTable @ 0x14049979C (CmpCleanUpKCBCacheTable.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x140499880 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpSearchKeyControlBlockTree @ 0x1405E1248 (CmpSearchKeyControlBlockTree.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     CmpReferenceHive @ 0x140041E80 (CmpReferenceHive.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

char __fastcall CmpLockHashEntryByIndexExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v3; // r14
  unsigned __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  char result; // al

  v3 = (unsigned int)BugCheckParameter4;
  v4 = (unsigned __int64 *)(*(_QWORD *)(BugCheckParameter2 + 2800) + 24LL * (unsigned int)BugCheckParameter4);
  v5 = KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (ULONG_PTR)v4);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v4[1] = (unsigned __int64)KeGetCurrentThread();
  result = CmpReferenceHive(BugCheckParameter2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 0xBuLL, v3);
  return result;
}
