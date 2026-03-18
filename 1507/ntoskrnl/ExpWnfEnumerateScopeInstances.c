/*
 * XREFs of ExpWnfEnumerateScopeInstances @ 0x14053F768
 * Callers:
 *     NtDeleteWnfStateName @ 0x14053EEF0 (NtDeleteWnfStateName.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall ExpWnfEnumerateScopeInstances(unsigned int a1, struct _EX_RUNDOWN_REF *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r9
  _QWORD *v8; // rbp
  _QWORD *v9; // r14
  unsigned __int64 *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // r9
  _QWORD *Count; // rax
  struct _EX_RUNDOWN_REF *v14; // rcx
  unsigned __int64 v15; // rtt
  unsigned __int64 v16; // rtt
  __int64 *v18; // [rsp+60h] [rbp+18h] BYREF

  v5 = a1;
  PsGetMonitorContextServerSilo(ExpWnfSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v18, a4);
  v6 = *v18;
  PsDereferenceMonitorContextServerSilo((__int64)v18);
  if ( !v6 )
    return 0LL;
  v8 = 0LL;
  v9 = (_QWORD *)(v6 + 24 + 24 * v5);
  v10 = (unsigned __int64 *)(v6 + 24 * v5 + 16);
  v11 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0LL, v7);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v10, v11, (ULONG_PTR)v10, v12);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( a2 )
    Count = (_QWORD *)a2[4].Count;
  else
    Count = 0LL;
  if ( !Count )
    Count = (_QWORD *)*v9;
  while ( Count != v9 )
  {
    v8 = Count - 4;
    v14 = (struct _EX_RUNDOWN_REF *)(Count - 3);
    _m_prefetchw(v14);
    v15 = v14->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v15 == _InterlockedCompareExchange64((volatile signed __int64 *)v14, v15 + 2, v15)
      || ExfAcquireRundownProtection(v14) )
    {
      break;
    }
    Count = (_QWORD *)v8[4];
    v8 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v10);
  KeAbPostRelease((ULONG_PTR)v10);
  if ( a2 )
  {
    _m_prefetchw(&a2[1]);
    v16 = a2[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v16 != _InterlockedCompareExchange64((volatile signed __int64 *)&a2[1], v16 - 2, v16) )
      ExfReleaseRundownProtection(a2 + 1);
  }
  return v8;
}
