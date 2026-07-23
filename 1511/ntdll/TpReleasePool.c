/*
 * XREFs of TpReleasePool @ 0x18007F4C0
 * Callers:
 *     LdrpDetectDetour @ 0x1800049B8 (LdrpDetectDetour.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18000CCFC (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpReferenceGlobalPool @ 0x18000DE5C (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18000CCFC (TppPoolpDereferenceGlobalPool.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     TppPoolpFree @ 0x18007F6E8 (TppPoolpFree.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     TppQueueRemoveHead @ 0x18008A524 (TppQueueRemoveHead.c)
 *     ZwShutdownWorkerFactory @ 0x1800A8430 (ZwShutdownWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 *     TppETWPoolClose @ 0x1800F5794 (TppETWPoolClose.c)
 */

void __cdecl TpReleasePool(PTP_POOL Pool)
{
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *v2; // rdx
  __int64 v3; // rcx
  char v4; // si
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v7; // rdi
  int i; // r14d
  __int64 j; // r15
  __int64 v10; // rax
  void (__fastcall *v11)(__int64, PTP_POOL); // r14
  _RTL_SRWLOCK *v12; // rdx
  const void **v13; // rcx
  _PEB_LDR_DATA *Ldr; // rcx
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  signed __int64 v16; // [rsp+90h] [rbp+18h]

  if ( !Pool
    || Pool == TppPoolpGlobalPool
    || Pool == (PTP_POOL)TppPoolpSerializedPool
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter(Ldr);
  }
  else
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Pool + 46);
    if ( *((_BYTE *)Pool + 377) )
    {
      TppRaiseInvalidParameter(v3);
      v4 = 0;
    }
    else
    {
      v4 = 1;
      if ( !*((_BYTE *)Pool + 376) )
      {
        *((_BYTE *)Pool + 376) = 1;
        ZwShutdownWorkerFactory(*((HANDLE *)Pool + 7), (LONG *)Pool);
      }
      while ( 1 )
      {
        _m_prefetchw((char *)Pool + 8);
        v5 = *((_QWORD *)Pool + 1);
        LODWORD(v16) = v5;
        do
        {
          if ( !HIDWORD(v5) )
            break;
          HIDWORD(v16) = HIDWORD(v5) - 1;
          v6 = v5;
          v5 = _InterlockedCompareExchange64((volatile signed __int64 *)Pool + 1, v16, v5);
          LODWORD(v16) = v5;
        }
        while ( v6 != v5 );
        if ( !HIDWORD(v5) )
          break;
        v7 = 0LL;
        for ( i = 0; i < 3; ++i )
        {
          if ( v7 )
            goto LABEL_27;
          for ( j = 0LL; (unsigned int)j < TppNumberNodes && !v7; j = (unsigned int)(j + 1) )
          {
            v10 = TppQueueRemoveHead(*((_QWORD *)Pool + i + 2) + 24 * j, i);
            if ( v10 )
              v7 = v10 - 16;
            else
              v7 = 0LL;
          }
        }
        if ( !v7 )
          continue;
LABEL_27:
        if ( *(_QWORD *)v7 )
        {
          v11 = *(void (__fastcall **)(__int64, PTP_POOL))(*(_QWORD *)v7 + 8LL);
          if ( v11 )
          {
            ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
              *(PRTL_DYNAMIC_HASH_TABLE *)(*(_QWORD *)v7 + 8LL),
              v2);
            v11(v7, Pool);
          }
        }
      }
      *((_QWORD *)Pool + 51) = retaddr;
      *((_BYTE *)Pool + 377) = 1;
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Pool + 46);
    if ( MEMORY[0x7FFE0386] )
      TppETWPoolClose(Pool);
    if ( v4 )
    {
      if ( Pool == TppPoolpGlobalPool )
      {
        v12 = &TppPoolpGlobalPoolLock;
        v13 = (const void **)&TppPoolpGlobalPool;
LABEL_36:
        TppPoolpDereferenceGlobalPool(v13, v12);
        return;
      }
      if ( Pool == (PTP_POOL)TppPoolpSerializedPool )
      {
        v12 = &TppPoolpSerializedPoolLock;
        v13 = (const void **)&TppPoolpSerializedPool;
        goto LABEL_36;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Pool, 0xFFFFFFFF) == 1 )
        TppPoolpFree(Pool);
    }
  }
}
