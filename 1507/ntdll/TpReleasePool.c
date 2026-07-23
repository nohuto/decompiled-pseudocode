/*
 * XREFs of TpReleasePool @ 0x180073F00
 * Callers:
 *     TppPoolpDereferenceGlobalPool @ 0x18003DA5C (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpReferenceGlobalPool @ 0x18003E8AC (TppPoolpReferenceGlobalPool.c)
 *     LdrpDetectDetour @ 0x18007D6B8 (LdrpDetectDetour.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003DA5C (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpFree @ 0x180074128 (TppPoolpFree.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     TppQueueRemoveHead @ 0x18007F0C0 (TppQueueRemoveHead.c)
 *     ZwShutdownWorkerFactory @ 0x180095290 (ZwShutdownWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 *     TppETWPoolClose @ 0x1800F5D94 (TppETWPoolClose.c)
 */

void __cdecl TpReleasePool(PTP_POOL Pool)
{
  __int64 v1; // rdx
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *v3; // rdx
  __int64 v4; // rcx
  char v5; // si
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  __int64 v8; // rdi
  int i; // r14d
  __int64 j; // r15
  __int64 v11; // rax
  void (__fastcall *v12)(__int64, PTP_POOL); // r14
  _RTL_SRWLOCK *v13; // rdx
  const void **v14; // rcx
  _PEB_LDR_DATA *Ldr; // rcx
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  signed __int64 v17; // [rsp+90h] [rbp+18h]

  if ( !Pool
    || Pool == TppPoolpGlobalPool
    || Pool == (PTP_POOL)TppPoolpSerializedPool
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter(Ldr, v1);
  }
  else
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Pool + 46);
    if ( *((_BYTE *)Pool + 377) )
    {
      TppRaiseInvalidParameter(v4, v3);
      v5 = 0;
    }
    else
    {
      v5 = 1;
      if ( !*((_BYTE *)Pool + 376) )
      {
        *((_BYTE *)Pool + 376) = 1;
        ZwShutdownWorkerFactory(*((HANDLE *)Pool + 7), (LONG *)Pool);
      }
      while ( 1 )
      {
        _m_prefetchw((char *)Pool + 8);
        v6 = *((_QWORD *)Pool + 1);
        LODWORD(v17) = v6;
        do
        {
          if ( !HIDWORD(v6) )
            break;
          HIDWORD(v17) = HIDWORD(v6) - 1;
          v7 = v6;
          v6 = _InterlockedCompareExchange64((volatile signed __int64 *)Pool + 1, v17, v6);
          LODWORD(v17) = v6;
        }
        while ( v7 != v6 );
        if ( !HIDWORD(v6) )
          break;
        v8 = 0LL;
        for ( i = 0; i < 3; ++i )
        {
          if ( v8 )
            goto LABEL_27;
          for ( j = 0LL; (unsigned int)j < TppNumberNodes && !v8; j = (unsigned int)(j + 1) )
          {
            v11 = TppQueueRemoveHead(*((_QWORD *)Pool + i + 2) + 24 * j, i);
            if ( v11 )
              v8 = v11 - 16;
            else
              v8 = 0LL;
          }
        }
        if ( !v8 )
          continue;
LABEL_27:
        if ( *(_QWORD *)v8 )
        {
          v12 = *(void (__fastcall **)(__int64, PTP_POOL))(*(_QWORD *)v8 + 8LL);
          if ( v12 )
          {
            ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
              *(PRTL_DYNAMIC_HASH_TABLE *)(*(_QWORD *)v8 + 8LL),
              v3);
            v12(v8, Pool);
          }
        }
      }
      *((_QWORD *)Pool + 51) = retaddr;
      *((_BYTE *)Pool + 377) = 1;
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Pool + 46);
    if ( MEMORY[0x7FFE0386] )
      TppETWPoolClose(Pool);
    if ( v5 )
    {
      if ( Pool == TppPoolpGlobalPool )
      {
        v13 = &TppPoolpGlobalPoolLock;
        v14 = (const void **)&TppPoolpGlobalPool;
LABEL_36:
        TppPoolpDereferenceGlobalPool(v14, v13);
        return;
      }
      if ( Pool == (PTP_POOL)TppPoolpSerializedPool )
      {
        v13 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
        v14 = (const void **)&TppPoolpSerializedPool;
        goto LABEL_36;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Pool, 0xFFFFFFFF) == 1 )
        TppPoolpFree(Pool);
    }
  }
}
