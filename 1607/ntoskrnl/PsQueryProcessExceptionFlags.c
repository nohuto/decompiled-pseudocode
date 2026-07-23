/*
 * XREFs of PsQueryProcessExceptionFlags @ 0x14067D130
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall PsQueryProcessExceptionFlags(ULONG_PTR BugCheckParameter1, int a2, int *a3)
{
  int v6; // r14d
  struct _KTHREAD *CurrentThread; // rsi
  char v8; // bl
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 *v13; // rcx
  int *v14; // rax
  int v15; // r12d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  _BYTE v20[48]; // [rsp+48h] [rbp-60h] BYREF

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
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v20);
    if ( v6 )
    {
      v12 = 0LL;
      v13 = *(__int64 **)(BugCheckParameter1 + 1064);
      if ( v13 )
        v12 = *v13;
      v14 = (int *)(v12 + 40);
    }
    else
    {
      v14 = (int *)(*(_QWORD *)(BugCheckParameter1 + 1016) + 80LL);
    }
    v15 = *v14;
    if ( (v8 & 1) != 0 )
      KiUnstackDetachProcess((struct _KTHREAD *)v20, 0);
    if ( (v8 & 2) != 0 )
    {
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v16, v17, v18);
    }
    *a3 = 0;
    v19 = *a3;
    if ( (v15 & 4) != 0 )
      v19 = 1;
    *a3 = v19;
    if ( (v15 & 8) != 0 )
      *a3 |= 2u;
    return 0LL;
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v9, v10, v11);
    return 3221225738LL;
  }
}
