/*
 * XREFs of CmpLockHiveListShared @ 0x1404EB500
 * Callers:
 *     CmpGetNextFailedUnloadHive @ 0x1400D26EC (CmpGetNextFailedUnloadHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall CmpLockHiveListShared(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r9
  signed __int64 result; // rax

  v4 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL, a4);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(&CmpHiveListHeadLock, v4, (ULONG_PTR)&CmpHiveListHeadLock, v5);
  if ( v4 )
  {
    result = *(_QWORD *)(v4 + 32);
    *(_BYTE *)(v4 + 26) |= 1u;
  }
  return result;
}
