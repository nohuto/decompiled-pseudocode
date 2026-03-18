/*
 * XREFs of EtwpUpdateProcessTracingCallback @ 0x1406E298C
 * Callers:
 *     EtwpUpdatePerProcessTracing @ 0x1406E28A8 (EtwpUpdatePerProcessTracing.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpUpdateProcessTracingCallback(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 v4; // rdi
  struct _EX_RUNDOWN_REF *v5; // rcx
  unsigned __int64 v6; // rtt
  char v7; // dl
  unsigned int v8; // ecx
  __int64 v9; // rax
  unsigned __int64 v10; // rtt
  _BYTE v12[48]; // [rsp+38h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(BugCheckParameter1 + 1016);
  if ( v4 )
  {
    v5 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 736);
    _m_prefetchw(v5);
    v6 = v5->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v6 == _InterlockedCompareExchange64((volatile signed __int64 *)v5, v6 + 2, v6)
      || ExfAcquireRundownProtection(v5) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v12);
      v7 = *(_BYTE *)(a2 + 4);
      v8 = *(_DWORD *)a2;
      if ( v7 )
        _interlockedbittestandset((volatile signed __int32 *)(v4 + 888), v8);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(v4 + 888), v8);
      v9 = *(_QWORD *)(BugCheckParameter1 + 1064);
      if ( v9 )
      {
        if ( v7 )
          _interlockedbittestandset((volatile signed __int32 *)(v9 + 576), v8);
        else
          _interlockedbittestandreset((volatile signed __int32 *)(v9 + 576), v8);
      }
      KiUnstackDetachProcess((struct _KTHREAD *)v12, 0);
      _m_prefetchw((const void *)(BugCheckParameter1 + 736));
      v10 = *(_QWORD *)(BugCheckParameter1 + 736) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter1 + 736), v10 - 2, v10) )
        ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
    }
  }
  return 0LL;
}
