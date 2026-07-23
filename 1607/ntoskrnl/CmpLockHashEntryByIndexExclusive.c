/*
 * XREFs of CmpLockHashEntryByIndexExclusive @ 0x1403E42D4
 * Callers:
 *     CmpSearchKeyControlBlockTreeEx @ 0x1401B4AC0 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpCleanUpKCBCacheTable @ 0x1403E3ED8 (CmpCleanUpKCBCacheTable.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x1403E40D4 (CmpRunDownDelayDerefKCBEngine.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     CmpReferenceHive @ 0x14002CDA0 (CmpReferenceHive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
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
