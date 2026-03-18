/*
 * XREFs of CmpLockHashEntryByIndexShared @ 0x14058EA5C
 * Callers:
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     CmpReferenceHive @ 0x1400506B0 (CmpReferenceHive.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

char __fastcall CmpLockHashEntryByIndexShared(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        __int64 a4)
{
  ULONG_PTR v5; // r14
  unsigned __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r9
  char result; // al

  v5 = (unsigned int)BugCheckParameter4;
  v6 = (unsigned __int64 *)(*(_QWORD *)(BugCheckParameter2 + 2800) + 24LL * (unsigned int)BugCheckParameter4);
  v7 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v6, v7, (ULONG_PTR)v6, v8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  result = CmpReferenceHive(BugCheckParameter2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 0xAuLL, v5);
  return result;
}
