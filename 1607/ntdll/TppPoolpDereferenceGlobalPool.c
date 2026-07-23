/*
 * XREFs of TppPoolpDereferenceGlobalPool @ 0x18003B80C
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 *     TpUnreserveTaskPost @ 0x18003A14C (TpUnreserveTaskPost.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003B5E0 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x18003D82C (TppCleanupGroupMemberInitialize.c)
 *     TpReleasePool @ 0x180083990 (TpReleasePool.c)
 *     TpSetDefaultPoolStackInformation @ 0x180085D90 (TpSetDefaultPoolStackInformation.c)
 *     TpDereferenceGlobalPool @ 0x180086728 (TpDereferenceGlobalPool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800FE070 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     TpReleasePool @ 0x180083990 (TpReleasePool.c)
 */

void __fastcall TppPoolpDereferenceGlobalPool(const void **a1, _RTL_SRWLOCK *a2)
{
  volatile signed __int32 *v4; // r8
  signed __int32 v5; // ecx
  signed __int32 v6; // edx
  bool v7; // zf
  signed __int32 v8; // eax
  signed __int32 v9; // eax
  volatile signed __int32 *v10; // rdx
  signed __int32 v11; // ecx
  signed __int32 v12; // r8d
  signed __int32 v13; // eax
  signed __int32 v14; // eax
  _TP_POOL *Pool; // [rsp+30h] [rbp+8h]

  Pool = 0LL;
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
      v9 = v6 - 1;
      goto LABEL_5;
    }
  }
  v9 = 0;
LABEL_5:
  if ( !v9 )
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
      Pool = (_TP_POOL *)*a1;
      *a1 = 0LL;
    }
    RtlReleaseSRWLockExclusive(a2);
    if ( Pool )
      TpReleasePool(Pool);
  }
}
