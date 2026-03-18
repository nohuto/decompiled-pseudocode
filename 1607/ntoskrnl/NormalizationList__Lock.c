/*
 * XREFs of NormalizationList__Lock @ 0x14021934C
 * Callers:
 *     RtlpGetNormalization @ 0x14068C59C (RtlpGetNormalization.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 */

_BYTE *NormalizationList__Lock()
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *result; // rax
  _BYTE *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&NormalizationListLock, 0LL, 0);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&NormalizationListLock, 0LL) )
    result = (_BYTE *)ExfAcquirePushLockExclusiveEx(&NormalizationListLock, result, (ULONG_PTR)&NormalizationListLock);
  if ( v2 )
  {
    result = (_BYTE *)*((_QWORD *)v2 + 4);
    v2[26] |= 1u;
  }
  return result;
}
