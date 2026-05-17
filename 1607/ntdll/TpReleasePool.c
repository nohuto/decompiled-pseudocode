/*
 * XREFs of TpReleasePool @ 0x1800839A0
 * Callers:
 *     TppPoolpDereferenceGlobalPool @ 0x18003B81C (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpReferenceGlobalPool @ 0x18003EF9C (TppPoolpReferenceGlobalPool.c)
 *     LdrpDetectDetour @ 0x180073564 (LdrpDetectDetour.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003B81C (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpFree @ 0x180083BB8 (TppPoolpFree.c)
 *     TppQueueRemoveHead @ 0x18008EC24 (TppQueueRemoveHead.c)
 *     ZwShutdownWorkerFactory @ 0x1800A9850 (ZwShutdownWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 *     TppETWPoolClose @ 0x1800FE700 (TppETWPoolClose.c)
 */

__int64 __fastcall TpReleasePool(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // di
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v12; // rcx
  int i; // esi
  __int64 j; // r14
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rdx
  __int64 *v20; // rcx
  __int64 v21; // rcx
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  signed __int64 v23; // [rsp+90h] [rbp+18h]

  if ( !a1 || a1 == TppPoolpGlobalPool || a1 == TppPoolpSerializedPool || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    result = (__int64)NtCurrentPeb();
    v21 = *(_QWORD *)(result + 24);
    if ( !*(_BYTE *)(v21 + 72) )
      return TppRaiseInvalidParameter(v21, a2, a3, a4);
  }
  else
  {
    RtlAcquireSRWLockExclusive(a1 + 368, a2, a3, a4);
    if ( *(_BYTE *)(a1 + 377) )
    {
      TppRaiseInvalidParameter(v6, v5, v7, v8);
      v9 = 0;
    }
    else
    {
      v9 = 1;
      if ( !*(_BYTE *)(a1 + 376) )
      {
        *(_BYTE *)(a1 + 376) = 1;
        ZwShutdownWorkerFactory(*(_QWORD *)(a1 + 56), a1);
      }
      while ( 1 )
      {
        _m_prefetchw((const void *)(a1 + 8));
        v10 = *(_QWORD *)(a1 + 8);
        LODWORD(v23) = v10;
        do
        {
          if ( !HIDWORD(v10) )
            break;
          HIDWORD(v23) = HIDWORD(v10) - 1;
          v11 = v10;
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v23, v10);
          LODWORD(v23) = v10;
        }
        while ( v11 != v10 );
        if ( !HIDWORD(v10) )
          break;
        v12 = 0LL;
        for ( i = 0; i < 3; ++i )
        {
          if ( v12 )
            goto LABEL_27;
          for ( j = 0LL; (unsigned int)j < TppNumberNodes && !v12; j = (unsigned int)(j + 1) )
          {
            v15 = TppQueueRemoveHead(*(_QWORD *)(a1 + 8LL * i + 16) + 24 * j, i);
            if ( v15 )
              v12 = v15 - 16;
            else
              v12 = 0LL;
          }
        }
        if ( !v12 )
          continue;
LABEL_27:
        if ( *(_QWORD *)v12 && *(_QWORD *)(*(_QWORD *)v12 + 8LL) )
          _guard_dispatch_icall_fptr();
      }
      *(_QWORD *)(a1 + 408) = retaddr;
      *(_BYTE *)(a1 + 377) = 1;
    }
    result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 368));
    if ( MEMORY[0x7FFE0386] )
      result = TppETWPoolClose(a1);
    if ( v9 )
    {
      if ( a1 == TppPoolpGlobalPool )
      {
        v19 = (char *)&TppPoolpGlobalPoolLock;
        v20 = &TppPoolpGlobalPool;
        return TppPoolpDereferenceGlobalPool((const void **)v20, v19, v17, v18);
      }
      if ( a1 == TppPoolpSerializedPool )
      {
        v19 = (char *)&TppPoolpSerializedPoolLock;
        v20 = &TppPoolpSerializedPool;
        return TppPoolpDereferenceGlobalPool((const void **)v20, v19, v17, v18);
      }
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return TppPoolpFree(a1);
    }
  }
  return result;
}
