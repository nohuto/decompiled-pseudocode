/*
 * XREFs of CmpLockDeletedHashEntryExclusiveByKcb @ 0x1403DB1AC
 * Callers:
 *     CmpMarkKcbDeletedAndCache @ 0x1403DB284 (CmpMarkKcbDeletedAndCache.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1403F99D0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1403F9D0C (CmpDelayDerefKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1404036E0 (CmpDeleteKeyObject.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     CmpReferenceHive @ 0x140041E80 (CmpReferenceHive.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

char __fastcall CmpLockDeletedHashEntryExclusiveByKcb(ULONG_PTR BugCheckParameter4)
{
  unsigned int v1; // r8d
  ULONG_PTR v3; // rdi
  unsigned int v4; // edx
  __int64 v5; // r15
  __int64 v6; // r14
  unsigned __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  char result; // al

  v1 = *(_DWORD *)(BugCheckParameter4 + 16);
  v3 = *(_QWORD *)(BugCheckParameter4 + 32);
  v4 = 101027 * (v1 ^ (v1 >> 9));
  v5 = *(_QWORD *)(v3 + 2816);
  v6 = 3LL * ((v4 ^ (v4 >> 9)) & (*(_DWORD *)(v3 + 2824) - 1));
  v7 = (unsigned __int64 *)(v5 + 24LL * ((v4 ^ (v4 >> 9)) & (*(_DWORD *)(v3 + 2824) - 1)));
  v8 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  *(_QWORD *)(v5 + 8 * v6 + 8) = KeGetCurrentThread();
  result = CmpReferenceHive(v3);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, v3, 8uLL, BugCheckParameter4);
  return result;
}
