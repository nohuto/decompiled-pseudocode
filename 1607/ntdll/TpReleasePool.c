/*
 * XREFs of TpReleasePool @ 0x180083990
 * Callers:
 *     TppPoolpDereferenceGlobalPool @ 0x18003B80C (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpReferenceGlobalPool @ 0x18003EF8C (TppPoolpReferenceGlobalPool.c)
 *     LdrpDetectDetour @ 0x180073554 (LdrpDetectDetour.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003B80C (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpFree @ 0x180083BA8 (TppPoolpFree.c)
 *     TppQueueRemoveHead @ 0x18008EC14 (TppQueueRemoveHead.c)
 *     ZwShutdownWorkerFactory @ 0x1800A9850 (ZwShutdownWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 *     TppETWPoolClose @ 0x1800FE700 (TppETWPoolClose.c)
 */

void __cdecl TpReleasePool(PTP_POOL Pool)
{
  __int64 v2; // rcx
  char v3; // di
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  __int64 v6; // rcx
  int i; // esi
  __int64 j; // r14
  __int64 v9; // rax
  _RTL_SRWLOCK *v10; // rdx
  const void **v11; // rcx
  _PEB_LDR_DATA *Ldr; // rcx
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  signed __int64 v14; // [rsp+90h] [rbp+18h]

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
      TppRaiseInvalidParameter(v2);
      v3 = 0;
    }
    else
    {
      v3 = 1;
      if ( !*((_BYTE *)Pool + 376) )
      {
        *((_BYTE *)Pool + 376) = 1;
        ZwShutdownWorkerFactory(*((HANDLE *)Pool + 7), (LONG *)Pool);
      }
      while ( 1 )
      {
        _m_prefetchw((char *)Pool + 8);
        v4 = *((_QWORD *)Pool + 1);
        LODWORD(v14) = v4;
        do
        {
          if ( !HIDWORD(v4) )
            break;
          HIDWORD(v14) = HIDWORD(v4) - 1;
          v5 = v4;
          v4 = _InterlockedCompareExchange64((volatile signed __int64 *)Pool + 1, v14, v4);
          LODWORD(v14) = v4;
        }
        while ( v5 != v4 );
        if ( !HIDWORD(v4) )
          break;
        v6 = 0LL;
        for ( i = 0; i < 3; ++i )
        {
          if ( v6 )
            goto LABEL_27;
          for ( j = 0LL; (unsigned int)j < TppNumberNodes && !v6; j = (unsigned int)(j + 1) )
          {
            v9 = TppQueueRemoveHead(*((_QWORD *)Pool + i + 2) + 24 * j, i);
            if ( v9 )
              v6 = v9 - 16;
            else
              v6 = 0LL;
          }
        }
        if ( !v6 )
          continue;
LABEL_27:
        if ( *(_QWORD *)v6 && *(_QWORD *)(*(_QWORD *)v6 + 8LL) )
          _guard_dispatch_icall_fptr();
      }
      *((_QWORD *)Pool + 51) = retaddr;
      *((_BYTE *)Pool + 377) = 1;
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Pool + 46);
    if ( MEMORY[0x7FFE0386] )
      TppETWPoolClose(Pool);
    if ( v3 )
    {
      if ( Pool == TppPoolpGlobalPool )
      {
        v10 = &TppPoolpGlobalPoolLock;
        v11 = (const void **)&TppPoolpGlobalPool;
LABEL_36:
        TppPoolpDereferenceGlobalPool(v11, v10);
        return;
      }
      if ( Pool == (PTP_POOL)TppPoolpSerializedPool )
      {
        v10 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
        v11 = (const void **)&TppPoolpSerializedPool;
        goto LABEL_36;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Pool, 0xFFFFFFFF) == 1 )
        TppPoolpFree(Pool);
    }
  }
}
