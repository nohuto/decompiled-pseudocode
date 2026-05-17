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

signed __int64 __fastcall TpReleasePool(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // si
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v12; // rdi
  int i; // r14d
  __int64 j; // r15
  __int64 v15; // rax
  void (__fastcall *v16)(__int64, __int64); // r14
  signed __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  void *v20; // rdx
  __int64 *v21; // rcx
  __int64 v22; // rcx
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  signed __int64 v24; // [rsp+90h] [rbp+18h]

  if ( !a1 || a1 == TppPoolpGlobalPool || a1 == TppPoolpSerializedPool || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    result = (signed __int64)NtCurrentPeb();
    v22 = *(_QWORD *)(result + 24);
    if ( !*(_BYTE *)(v22 + 72) )
      return TppRaiseInvalidParameter(v22, a2, a3, a4);
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
        LODWORD(v24) = v10;
        do
        {
          if ( !HIDWORD(v10) )
            break;
          HIDWORD(v24) = HIDWORD(v10) - 1;
          v11 = v10;
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v24, v10);
          LODWORD(v24) = v10;
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
        if ( *(_QWORD *)v12 )
        {
          v16 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 8LL);
          if ( v16 )
          {
            _guard_check_icall_fptr();
            v16(v12, a1);
          }
        }
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
        v20 = &TppPoolpGlobalPoolLock;
        v21 = &TppPoolpGlobalPool;
        return TppPoolpDereferenceGlobalPool((const void **)v21, (__int64)v20);
      }
      if ( a1 == TppPoolpSerializedPool )
      {
        v20 = &TppPoolpSerializedPoolLock;
        v21 = &TppPoolpSerializedPool;
        return TppPoolpDereferenceGlobalPool((const void **)v21, (__int64)v20);
      }
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return TppPoolpFree(a1, v18, v19);
    }
  }
  return result;
}
