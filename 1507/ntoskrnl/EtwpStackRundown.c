/*
 * XREFs of EtwpStackRundown @ 0x14026091C
 * Callers:
 *     EtwpStopLoggerInstance @ 0x14040F284 (EtwpStopLoggerInstance.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1406E8394 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     EtwpDereferenceStackEntry @ 0x1402608C0 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceCachedStack @ 0x140260A38 (EtwpTraceCachedStack.c)
 */

PSLIST_ENTRY __fastcall EtwpStackRundown(__int64 a1, unsigned int a2)
{
  __int64 i; // rsi
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rbp
  unsigned __int8 CurrentIrql; // r15
  volatile signed __int32 *v8; // rdi
  volatile signed __int32 *j; // rdx
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY *v11; // rdi
  _QWORD v12[4]; // [rsp+20h] [rbp-58h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
  {
    v5 = (volatile signed __int32 *)(a1 + 8 * (i + 2 * (i + 2)));
    if ( *(volatile signed __int32 **)v5 != v5 )
    {
      v6 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v8 = v5 + 4;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v5 + 4);
      }
      else if ( _interlockedbittestandset64(v8, 0LL) )
      {
        KxWaitForSpinLockAndAcquire(v5 + 4);
      }
      for ( j = *(volatile signed __int32 **)v5; j != v5; j = *(volatile signed __int32 **)j )
      {
        _InterlockedIncrement(j + 6);
        v12[v6] = j;
        v6 = (unsigned int)(v6 + 1);
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)v5 + 2, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
      result = (PSLIST_ENTRY)CurrentIrql;
      __writecr8(CurrentIrql);
      if ( (_DWORD)v6 )
      {
        v11 = (PSLIST_ENTRY *)v12;
        do
        {
          EtwpTraceCachedStack(a2, 6180LL, *v11);
          result = EtwpDereferenceStackEntry(*v11++, (_SLIST_HEADER *)a1);
          --v6;
        }
        while ( v6 );
      }
    }
  }
  return result;
}
