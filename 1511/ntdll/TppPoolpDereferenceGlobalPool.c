/*
 * XREFs of TppPoolpDereferenceGlobalPool @ 0x18000CCFC
 * Callers:
 *     TpUnreserveTaskPost @ 0x180008A0C (TpUnreserveTaskPost.c)
 *     TppCleanupGroupMemberDestroy @ 0x18000CAAC (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x18000D4C8 (TppCleanupGroupMemberInitialize.c)
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 *     TpTrimPools @ 0x180067D30 (TpTrimPools.c)
 *     TpReleasePool @ 0x18007F4C0 (TpReleasePool.c)
 *     TpSetDefaultPoolStackInformation @ 0x180081320 (TpSetDefaultPoolStackInformation.c)
 *     TpDereferenceGlobalPool @ 0x180082298 (TpDereferenceGlobalPool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800F5080 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     TpReleasePool @ 0x18007F4C0 (TpReleasePool.c)
 */

__int64 __fastcall TppPoolpDereferenceGlobalPool(const void **a1, __int64 a2)
{
  volatile signed __int32 *v4; // r8
  signed __int32 v5; // ecx
  signed __int32 v6; // edx
  bool v7; // zf
  signed __int32 v8; // eax
  __int64 result; // rax
  volatile signed __int32 *v10; // rdx
  signed __int32 v11; // ecx
  signed __int32 v12; // r8d
  signed __int32 v13; // eax
  signed __int32 v14; // eax
  const void *v15; // [rsp+30h] [rbp+8h]

  v15 = 0LL;
  v4 = (volatile signed __int32 *)*a1;
  _m_prefetchw(*a1);
  v5 = *v4;
  while ( v5 > 1 )
  {
    v6 = v5;
    v8 = _InterlockedCompareExchange(v4, v5 - 1, v5);
    v7 = v5 == v8;
    v5 = v8;
    if ( v7 )
    {
      result = (unsigned int)(v6 - 1);
      goto LABEL_5;
    }
  }
  result = 0LL;
LABEL_5:
  if ( !(_DWORD)result )
  {
    RtlAcquireSRWLockExclusive(a2);
    v10 = (volatile signed __int32 *)*a1;
    _m_prefetchw(*a1);
    v11 = *v10;
    while ( v11 > 1 )
    {
      v12 = v11;
      v13 = _InterlockedCompareExchange(v10, v11 - 1, v11);
      v7 = v11 == v13;
      v11 = v13;
      if ( v7 )
      {
        v14 = v12 - 1;
        goto LABEL_13;
      }
    }
    v14 = 0;
LABEL_13:
    if ( !v14 )
    {
      v15 = *a1;
      *a1 = 0LL;
    }
    result = RtlReleaseSRWLockExclusive(a2);
    if ( v15 )
      return TpReleasePool(v15);
  }
  return result;
}
