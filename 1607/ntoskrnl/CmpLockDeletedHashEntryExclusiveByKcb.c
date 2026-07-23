/*
 * XREFs of CmpLockDeletedHashEntryExclusiveByKcb @ 0x1403FA840
 * Callers:
 *     CmpDiscardKcb @ 0x14000A96C (CmpDiscardKcb.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140435C00 (CmpCleanUpKcbCacheWithLock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     CmpReferenceHive @ 0x14002CDA0 (CmpReferenceHive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

char __fastcall CmpLockDeletedHashEntryExclusiveByKcb(ULONG_PTR BugCheckParameter4)
{
  unsigned int v1; // r8d
  ULONG_PTR v3; // rdi
  __int64 v4; // r15
  __int64 v5; // r14
  unsigned __int64 *v6; // rsi
  _BYTE *v7; // rax
  _BYTE *v8; // rbx
  char result; // al

  v1 = *(_DWORD *)(BugCheckParameter4 + 8);
  v3 = *(_QWORD *)(BugCheckParameter4 + 24);
  v4 = *(_QWORD *)(v3 + 2816);
  v5 = 3LL * (((101027 * (v1 ^ (v1 >> 9))) ^ ((101027 * (v1 ^ (v1 >> 9))) >> 9)) & (*(_DWORD *)(v3 + 2824) - 1));
  v6 = (unsigned __int64 *)(v4
                          + 24LL
                          * ((((101027 * (v1 ^ (v1 >> 9))) >> 9) ^ (101027 * (v1 ^ (v1 >> 9)))) & (*(_DWORD *)(v3 + 2824)
                                                                                                 - 1)));
  v7 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6);
  if ( v8 )
    v8[26] |= 1u;
  *(_QWORD *)(v4 + 8 * v5 + 8) = KeGetCurrentThread();
  result = CmpReferenceHive(v3);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, v3, 8uLL, BugCheckParameter4);
  return result;
}
