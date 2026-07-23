/*
 * XREFs of CmpTryToLockHashEntryExclusive @ 0x1404C9290
 * Callers:
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     CmpReferenceHive @ 0x14002CDA0 (CmpReferenceHive.c)
 *     KeAbPostReleaseEx @ 0x1400C455C (KeAbPostReleaseEx.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

char __fastcall CmpTryToLockHashEntryExclusive(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  char v3; // bl
  ULONG_PTR v4; // rdi
  unsigned __int64 v5; // rax

  v3 = 1;
  v4 = *(_QWORD *)(BugCheckParameter2 + 2800)
     + 24LL
     * (((101027 * (a2 ^ (a2 >> 9))) ^ ((101027 * (a2 ^ (a2 >> 9))) >> 9)) & (*(_DWORD *)(BugCheckParameter2 + 2808) - 1));
  v5 = KeAbPreAcquire(v4, 0LL, 1);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
  {
    if ( v5 )
      KeAbPostReleaseEx(v4, v5);
    return 0;
  }
  else
  {
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
    if ( !CmpReferenceHive(BugCheckParameter2) )
      KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 0xDuLL, a2);
  }
  return v3;
}
