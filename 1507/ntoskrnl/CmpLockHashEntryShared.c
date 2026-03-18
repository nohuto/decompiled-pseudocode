/*
 * XREFs of CmpLockHashEntryShared @ 0x140541620
 * Callers:
 *     CmpFindSubkeyInHashByChildCell @ 0x1405414B8 (CmpFindSubkeyInHashByChildCell.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     CmpReferenceHive @ 0x1400506B0 (CmpReferenceHive.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

char __fastcall CmpLockHashEntryShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v3; // rbp
  __int64 v4; // r9
  unsigned __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r9
  char result; // al

  v3 = (unsigned int)BugCheckParameter4;
  v4 = 101027 * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9));
  v5 = (unsigned __int64 *)(*(_QWORD *)(BugCheckParameter2 + 2800)
                          + 24LL
                          * (((unsigned int)v4 ^ ((unsigned int)v4 >> 9)) & (*(_DWORD *)(BugCheckParameter2 + 2808) - 1)));
  v6 = KeAbPreAcquire((ULONG_PTR)v5, 0LL, 0LL, v4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, v6, (ULONG_PTR)v5, v7);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  result = CmpReferenceHive(BugCheckParameter2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 9uLL, v3);
  return result;
}
