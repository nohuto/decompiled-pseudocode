/*
 * XREFs of RtlTryAcquireSRWLockShared @ 0x18007B490
 * Callers:
 *     EtwpGetNextRegistration @ 0x180052AFC (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x1800540F8 (EtwpFindRegistration.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800CBC40 (RtlQueryCriticalSectionOwner.c)
 * Callees:
 *     RtlBackoff @ 0x180068D00 (RtlBackoff.c)
 */

BOOLEAN __cdecl RtlTryAcquireSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  BOOLEAN v1; // r10
  PRTL_SRWLOCK v2; // r9
  signed __int64 Value; // rax
  signed __int64 v5; // rcx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = SRWLock;
  v6 = 0;
  Value = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 17LL, 0LL);
  if ( !Value )
    return 1;
  while ( (Value & 1) == 0 || (Value & 2) == 0 && (Value & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v5 = Value | 1;
    if ( (Value & 2) == 0 )
      v5 += 16LL;
    if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)v2, v5, Value) )
      return 1;
    RtlBackoff(&v6);
    _m_prefetchw(v2);
    Value = v2->Value;
  }
  return v1;
}
