/*
 * XREFs of EtwpUpdateProcessTracingCallback @ 0x1406600BC
 * Callers:
 *     EtwpUpdatePerProcessTracing @ 0x14065FFB0 (EtwpUpdatePerProcessTracing.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpUpdateProcessTracingCallback(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 v4; // rdi
  char v5; // r8
  unsigned int v6; // edx
  __int64 v7; // rax
  __int64 *v8; // rcx
  $D4FCF91253F76F57393CBFE908971F67 v10; // [rsp+28h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(BugCheckParameter1 + 1016);
  if ( v4 && ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736)) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)&v10);
    v5 = *(_BYTE *)(a2 + 4);
    v6 = *(_DWORD *)a2;
    if ( v5 )
      _interlockedbittestandset((volatile signed __int32 *)(v4 + 888), v6);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(v4 + 888), v6);
    v7 = 0LL;
    v8 = *(__int64 **)(BugCheckParameter1 + 1064);
    if ( v8 )
      v7 = *v8;
    if ( v7 )
    {
      if ( v5 )
        _interlockedbittestandset((volatile signed __int32 *)(v7 + 576), v6);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(v7 + 576), v6);
    }
    KiUnstackDetachProcess(&v10, 0LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
  }
  return 0LL;
}
