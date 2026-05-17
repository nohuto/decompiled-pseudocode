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

__int64 __fastcall TpReleasePool(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  char v8; // si
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 v11; // rdi
  int i; // r14d
  __int64 j; // r15
  __int64 v14; // rax
  void (__fastcall *v15)(__int64, __int64); // r14
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
      return TppRaiseInvalidParameter(v21, a2, a3);
  }
  else
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 368), a2, a3, a4);
    if ( *(_BYTE *)(a1 + 377) )
    {
      TppRaiseInvalidParameter(v6, v5, v7);
      v8 = 0;
    }
    else
    {
      v8 = 1;
      if ( !*(_BYTE *)(a1 + 376) )
      {
        *(_BYTE *)(a1 + 376) = 1;
        ZwShutdownWorkerFactory(*(_QWORD *)(a1 + 56), a1);
      }
      while ( 1 )
      {
        _m_prefetchw((const void *)(a1 + 8));
        v9 = *(_QWORD *)(a1 + 8);
        LODWORD(v23) = v9;
        do
        {
          if ( !HIDWORD(v9) )
            break;
          HIDWORD(v23) = HIDWORD(v9) - 1;
          v10 = v9;
          v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v23, v9);
          LODWORD(v23) = v9;
        }
        while ( v10 != v9 );
        if ( !HIDWORD(v9) )
          break;
        v11 = 0LL;
        for ( i = 0; i < 3; ++i )
        {
          if ( v11 )
            goto LABEL_27;
          for ( j = 0LL; (unsigned int)j < TppNumberNodes && !v11; j = (unsigned int)(j + 1) )
          {
            v14 = TppQueueRemoveHead(*(_QWORD *)(a1 + 8LL * i + 16) + 24 * j, i);
            if ( v14 )
              v11 = v14 - 16;
            else
              v11 = 0LL;
          }
        }
        if ( !v11 )
          continue;
LABEL_27:
        if ( *(_QWORD *)v11 )
        {
          v15 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 8LL);
          if ( v15 )
          {
            _guard_check_icall_fptr();
            v15(v11, a1);
          }
        }
      }
      *(_QWORD *)(a1 + 408) = retaddr;
      *(_BYTE *)(a1 + 377) = 1;
    }
    result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 368));
    if ( MEMORY[0x7FFE0386] )
      result = TppETWPoolClose(a1);
    if ( v8 )
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
