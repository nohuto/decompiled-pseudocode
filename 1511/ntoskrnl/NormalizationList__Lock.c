/*
 * XREFs of NormalizationList__Lock @ 0x1401FFF90
 * Callers:
 *     RtlpGetNormalization @ 0x14064D1C8 (RtlpGetNormalization.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 NormalizationList__Lock()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((ULONG_PTR)&NormalizationListLock, 0LL, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&NormalizationListLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&NormalizationListLock, result, (ULONG_PTR)&NormalizationListLock);
  if ( v2 )
  {
    result = *(_QWORD *)(v2 + 32);
    *(_BYTE *)(v2 + 26) |= 1u;
  }
  return result;
}
