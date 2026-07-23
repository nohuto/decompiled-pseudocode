/*
 * XREFs of CmpLockHiveListShared @ 0x14047C1D8
 * Callers:
 *     CmpGetNextFailedUnloadHive @ 0x140081E5C (CmpGetNextFailedUnloadHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 CmpLockHiveListShared()
{
  __int64 v0; // rbx
  signed __int64 result; // rax

  v0 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(&CmpHiveListHeadLock, v0, (ULONG_PTR)&CmpHiveListHeadLock);
  if ( v0 )
  {
    result = *(_QWORD *)(v0 + 32);
    *(_BYTE *)(v0 + 26) |= 1u;
  }
  return result;
}
