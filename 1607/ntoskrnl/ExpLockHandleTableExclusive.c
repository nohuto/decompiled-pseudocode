/*
 * XREFs of ExpLockHandleTableExclusive @ 0x1400A8A84
 * Callers:
 *     ExDisableHandleTracing @ 0x14022C9EC (ExDisableHandleTracing.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14022CB34 (ExQueryHandleExceptionsPermanency.c)
 *     ExReferenceHandleDebugInfo @ 0x1404D4164 (ExReferenceHandleDebugInfo.c)
 *     ExEnableHandleExceptions @ 0x1404D41B4 (ExEnableHandleExceptions.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1404D4250 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     ExEnableHandleTracing @ 0x1406AD3A4 (ExEnableHandleTracing.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall ExpLockHandleTableExclusive(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rbx

  --*(_WORD *)(a2 + 484);
  v2 = (volatile signed __int32 *)(a1 + 56);
  result = KeAbPreAcquire(a1 + 56, 0LL, 0);
  v4 = result;
  if ( _interlockedbittestandset64(v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v2, result, v2);
  if ( v4 )
  {
    result = *(_QWORD *)(v4 + 32);
    *(_BYTE *)(v4 + 26) |= 1u;
  }
  return result;
}
