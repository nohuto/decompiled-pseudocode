/*
 * XREFs of ExpWnfEnumerateScopeInstances @ 0x1404C094C
 * Callers:
 *     NtDeleteWnfStateName @ 0x1403E19C4 (NtDeleteWnfStateName.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExpWnfEnumerateScopeInstances(unsigned int a1, struct _EX_RUNDOWN_REF *a2)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v4; // rdi
  __int64 v5; // rdx
  struct _EX_RUNDOWN_REF **v6; // r14
  unsigned __int64 *v7; // rbx
  __int64 v8; // rsi
  struct _EX_RUNDOWN_REF *Count; // rax
  __int64 *v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = a1;
  v4 = 0LL;
  PsGetMonitorContextServerSilo(ExpWnfSiloMonitor, (_QWORD *)-(__int64)(a1 != 4), &v11);
  v5 = *v11;
  if ( *v11 )
  {
    v6 = (struct _EX_RUNDOWN_REF **)(v5 + 32 + 24 * v2);
    v7 = (unsigned __int64 *)(v5 + 8 * (3 * v2 + 3));
    v8 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v7, v8, (ULONG_PTR)v7);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    if ( a2 )
      Count = (struct _EX_RUNDOWN_REF *)a2[4].Count;
    else
      Count = 0LL;
    if ( !Count )
      Count = *v6;
    while ( Count != (struct _EX_RUNDOWN_REF *)v6 )
    {
      v4 = Count - 4;
      if ( ExAcquireRundownProtection(Count - 3) )
        break;
      Count = (struct _EX_RUNDOWN_REF *)v4[4].Count;
      v4 = 0LL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v7);
    KeAbPostRelease((ULONG_PTR)v7);
    if ( a2 )
      ExReleaseRundownProtection_0(a2 + 1);
  }
  PsDereferenceMonitorContextServerSilo((__int64)v11);
  return v4;
}
