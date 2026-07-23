/*
 * XREFs of EtwpStackRundown @ 0x14022AE4C
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1404945E0 (EtwpStopLoggerInstance.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1406A6DB8 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpDereferenceStackEntry @ 0x14022ADF0 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceCachedStack @ 0x14022AF30 (EtwpTraceCachedStack.c)
 */

void __fastcall EtwpStackRundown(__int64 a1, unsigned int a2)
{
  __int64 i; // rdi
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rsi
  KIRQL CurrentIrql; // r15
  volatile signed __int32 *j; // r8
  PSLIST_ENTRY *v9; // r14
  _QWORD v10[4]; // [rsp+20h] [rbp-58h] BYREF

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
  {
    v5 = (volatile signed __int32 *)(a1 + 32 + 24 * i);
    if ( *(volatile signed __int32 **)v5 != v5 )
    {
      v6 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      KxAcquireSpinLock((PKSPIN_LOCK)v5 + 2);
      for ( j = *(volatile signed __int32 **)v5; j != v5; j = *(volatile signed __int32 **)j )
      {
        _InterlockedIncrement(j + 6);
        v10[v6] = j;
        v6 = (unsigned int)(v6 + 1);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v5 + 2, CurrentIrql);
      if ( (_DWORD)v6 )
      {
        v9 = (PSLIST_ENTRY *)v10;
        do
        {
          EtwpTraceCachedStack(a2, 6180LL, *v9);
          EtwpDereferenceStackEntry(*v9++, (_SLIST_HEADER *)a1);
          --v6;
        }
        while ( v6 );
      }
    }
  }
}
