/*
 * XREFs of CmpLockHashEntrySharedByKcb @ 0x1404E9B30
 * Callers:
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140518418 (CmpPerformCompleteKcbCacheLookup.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     CmpReferenceHive @ 0x14002CDA0 (CmpReferenceHive.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

char __fastcall CmpLockHashEntrySharedByKcb(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 *v3; // rsi
  __int64 v4; // rbx
  char result; // al

  v2 = *(_QWORD *)(BugCheckParameter4 + 24);
  v3 = (unsigned __int64 *)(*(_QWORD *)(v2 + 2800)
                          + 24LL
                          * (((101027
                             * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9))) ^ ((unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9))) >> 9)) & (*(_DWORD *)(v2 + 2808) - 1)));
  v4 = KeAbPreAcquire((ULONG_PTR)v3, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, v4, (ULONG_PTR)v3);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  result = CmpReferenceHive(v2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, v2, 7uLL, BugCheckParameter4);
  return result;
}
