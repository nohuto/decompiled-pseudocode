/*
 * XREFs of CmpLockDeletedHashEntryExclusiveByKcb @ 0x140447D3C
 * Callers:
 *     CmpMarkKcbDeletedAndCache @ 0x1404470AC (CmpMarkKcbDeletedAndCache.c)
 *     CmpDeleteKeyObject @ 0x1404C1BA0 (CmpDeleteKeyObject.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404CB304 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1404CC960 (CmpDelayDerefKeyControlBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     CmpReferenceHive @ 0x1400506B0 (CmpReferenceHive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

char __fastcall CmpLockDeletedHashEntryExclusiveByKcb(ULONG_PTR BugCheckParameter4, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r8d
  ULONG_PTR v6; // rdi
  unsigned int v7; // edx
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int64 *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  char result; // al

  v4 = *(_DWORD *)(BugCheckParameter4 + 16);
  v6 = *(_QWORD *)(BugCheckParameter4 + 32);
  v7 = 101027 * (v4 ^ (v4 >> 9));
  v8 = *(_QWORD *)(v6 + 2816);
  v9 = 3LL * ((v7 ^ (v7 >> 9)) & (*(_DWORD *)(v6 + 2824) - 1));
  v10 = (unsigned __int64 *)(v8 + 24LL * ((v7 ^ (v7 >> 9)) & (*(_DWORD *)(v6 + 2824) - 1)));
  v11 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0LL, a4);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    ExfAcquirePushLockExclusiveEx(v10, v11, (ULONG_PTR)v10, v12);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  *(_QWORD *)(v8 + 8 * v9 + 8) = KeGetCurrentThread();
  result = CmpReferenceHive(v6);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, v6, 8uLL, BugCheckParameter4);
  return result;
}
