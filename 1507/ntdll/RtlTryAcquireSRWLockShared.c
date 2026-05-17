/*
 * XREFs of RtlTryAcquireSRWLockShared @ 0x180070C50
 * Callers:
 *     EtwpGetNextRegistration @ 0x18000C2FC (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x18000C3E8 (EtwpFindRegistration.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800C1F20 (RtlQueryCriticalSectionOwner.c)
 * Callees:
 *     RtlBackoff @ 0x18005D560 (RtlBackoff.c)
 */

char __fastcall RtlTryAcquireSRWLockShared(volatile signed __int64 *a1)
{
  char v1; // r10
  volatile signed __int64 *v2; // r9
  signed __int64 v3; // rax
  signed __int64 v5; // rcx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = a1;
  v6 = 0;
  v3 = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( !v3 )
    return 1;
  while ( (v3 & 1) == 0 || (v3 & 2) == 0 && (v3 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v5 = v3 | 1;
    if ( (v3 & 2) == 0 )
      v5 += 16LL;
    if ( v3 == _InterlockedCompareExchange64(v2, v5, v3) )
      return 1;
    RtlBackoff(&v6);
    _m_prefetchw((const void *)v2);
    v3 = *v2;
  }
  return v1;
}
