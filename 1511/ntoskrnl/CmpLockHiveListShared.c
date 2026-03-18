/*
 * XREFs of CmpLockHiveListShared @ 0x1404C2A40
 * Callers:
 *     CmpGetNextFailedUnloadHive @ 0x1400F24E8 (CmpGetNextFailedUnloadHive.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

signed __int64 CmpLockHiveListShared()
{
  __int64 v0; // rbx
  signed __int64 result; // rax

  v0 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL);
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
