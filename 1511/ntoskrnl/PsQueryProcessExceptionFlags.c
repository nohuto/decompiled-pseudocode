/*
 * XREFs of PsQueryProcessExceptionFlags @ 0x14063EA7C
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall PsQueryProcessExceptionFlags(ULONG_PTR BugCheckParameter1, int a2, int *a3)
{
  int v6; // r14d
  struct _KTHREAD *CurrentThread; // rsi
  char v8; // bl
  __int64 v9; // rax
  __int64 *v10; // rcx
  int *v11; // rax
  int v12; // r12d
  int v13; // edx
  $D4FCF91253F76F57393CBFE908971F67 v14; // [rsp+48h] [rbp-60h] BYREF

  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  if ( !*(_QWORD *)(BugCheckParameter1 + 1016) )
    return 3221225711LL;
  v6 = a2 & 1;
  if ( (a2 & 1) != 0 && !*(_QWORD *)(BugCheckParameter1 + 1064) )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v8 = 0;
    if ( CurrentThread->Process != (_KPROCESS *)BugCheckParameter1 )
      v8 = 2;
  }
  else
  {
    v8 = 3;
  }
  if ( (v8 & 2) == 0
    || (--CurrentThread->KernelApcDisable, ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736))) )
  {
    if ( (v8 & 1) != 0 )
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)&v14);
    if ( v6 )
    {
      v9 = 0LL;
      v10 = *(__int64 **)(BugCheckParameter1 + 1064);
      if ( v10 )
        v9 = *v10;
      v11 = (int *)(v9 + 40);
    }
    else
    {
      v11 = (int *)(*(_QWORD *)(BugCheckParameter1 + 1016) + 80LL);
    }
    v12 = *v11;
    if ( (v8 & 1) != 0 )
      KiUnstackDetachProcess(&v14, 0LL);
    if ( (v8 & 2) != 0 )
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    }
    *a3 = 0;
    v13 = *a3;
    if ( (v12 & 4) != 0 )
      v13 = 1;
    *a3 = v13;
    if ( (v12 & 8) != 0 )
      *a3 |= 2u;
    return 0LL;
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    return 3221225738LL;
  }
}
