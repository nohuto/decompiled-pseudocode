/*
 * XREFs of PsQueryProcessExceptionFlags @ 0x1406BF504
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall PsQueryProcessExceptionFlags(ULONG_PTR BugCheckParameter1, int a2, _DWORD *a3)
{
  int v6; // r13d
  struct _KTHREAD *CurrentThread; // rsi
  char v8; // bl
  unsigned __int64 v9; // rtt
  __int16 v10; // ax
  int *v11; // rax
  unsigned __int64 v12; // rtt
  __int16 v13; // ax
  int v14; // [rsp+24h] [rbp-94h]
  _BYTE v15[48]; // [rsp+50h] [rbp-68h] BYREF

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
    || (--CurrentThread->KernelApcDisable,
        _m_prefetchw((const void *)(BugCheckParameter1 + 736)),
        v9 = *(_QWORD *)(BugCheckParameter1 + 736) & 0xFFFFFFFFFFFFFFFEuLL,
        v9 == _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter1 + 736), v9 + 2, v9))
    || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736)) )
  {
    if ( (v8 & 1) != 0 )
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v15);
    if ( v6 )
      v11 = (int *)(*(_QWORD *)(BugCheckParameter1 + 1064) + 40LL);
    else
      v11 = (int *)(*(_QWORD *)(BugCheckParameter1 + 1016) + 80LL);
    v14 = *v11;
    if ( (v8 & 1) != 0 )
      KiUnstackDetachProcess((struct _KTHREAD *)v15, 0);
    if ( (v8 & 2) != 0 )
    {
      _m_prefetchw((const void *)(BugCheckParameter1 + 736));
      v12 = *(_QWORD *)(BugCheckParameter1 + 736) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v12 != _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter1 + 736), v12 - 2, v12) )
        ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
      v13 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v13;
      if ( !v13
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    *a3 = (v14 & 4) != 0;
    if ( (v14 & 8) != 0 )
      *a3 |= 2u;
    return 0LL;
  }
  else
  {
    v10 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v10;
    if ( !v10
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221225738LL;
  }
}
