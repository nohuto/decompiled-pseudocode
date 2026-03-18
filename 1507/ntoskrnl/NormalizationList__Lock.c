/*
 * XREFs of NormalizationList__Lock @ 0x14024EE20
 * Callers:
 *     RtlpGetNormalization @ 0x1406D0328 (RtlpGetNormalization.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall NormalizationList__Lock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((ULONG_PTR)&NormalizationListLock, 0LL, 0LL, a4);
  v7 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&NormalizationListLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&NormalizationListLock, result, (ULONG_PTR)&NormalizationListLock, v6);
  if ( v7 )
  {
    result = *(_QWORD *)(v7 + 32);
    *(_BYTE *)(v7 + 26) |= 1u;
  }
  return result;
}
