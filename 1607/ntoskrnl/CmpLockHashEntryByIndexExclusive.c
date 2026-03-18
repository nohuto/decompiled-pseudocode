/*
 * XREFs of CmpLockHashEntryByIndexExclusive @ 0x14049B3B4
 * Callers:
 *     CmpSearchKeyControlBlockTreeEx @ 0x1401B4BDC (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpCleanUpKCBCacheTable @ 0x14049AFB8 (CmpCleanUpKCBCacheTable.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x14049B1B4 (CmpRunDownDelayDerefKCBEngine.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     CmpReferenceHive @ 0x14002D220 (CmpReferenceHive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

char __fastcall CmpLockHashEntryByIndexExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v3; // r14
  unsigned __int64 *v4; // rdi
  _BYTE *v5; // rax
  _BYTE *v6; // rbx
  char result; // al

  v3 = (unsigned int)BugCheckParameter4;
  v4 = (unsigned __int64 *)(*(_QWORD *)(BugCheckParameter2 + 2800) + 24LL * (unsigned int)BugCheckParameter4);
  v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (ULONG_PTR)v4);
  if ( v6 )
    v6[26] |= 1u;
  v4[1] = (unsigned __int64)KeGetCurrentThread();
  result = CmpReferenceHive(BugCheckParameter2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 0xBuLL, v3);
  return result;
}
