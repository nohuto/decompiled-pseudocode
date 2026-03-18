/*
 * XREFs of PsSuspendThread @ 0x1404F399C
 * Callers:
 *     PsSuspendProcess @ 0x1404098CC (PsSuspendProcess.c)
 *     NtSuspendThread @ 0x1404F38E8 (NtSuspendThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140667284 (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     KeSuspendThread @ 0x14000C978 (KeSuspendThread.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall PsSuspendThread(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _EX_RUNDOWN_REF *v5; // rcx
  unsigned __int64 v6; // rtt
  unsigned __int64 v7; // rtt
  __int16 v8; // ax
  unsigned int v10; // [rsp+20h] [rbp-48h]
  int v11; // [rsp+24h] [rbp-44h]

  v11 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (struct _EX_RUNDOWN_REF *)(a1 + 1696);
  _m_prefetchw(v5);
  v6 = v5->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v6 == _InterlockedCompareExchange64((volatile signed __int64 *)v5, v6 + 2, v6) || ExfAcquireRundownProtection(v5) )
  {
    if ( (*(_DWORD *)(a1 + 1724) & 1) != 0 )
    {
      v10 = -1073741749;
    }
    else
    {
      v11 = KeSuspendThread(a1);
      v10 = 0;
    }
    _m_prefetchw((const void *)(a1 + 1696));
    v7 = *(_QWORD *)(a1 + 1696) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v7 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1696), v7 - 2, v7) )
      ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 1696));
  }
  else
  {
    v10 = -1073741749;
  }
  v8 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v8;
  if ( !v8
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( a2 )
    *a2 = v11;
  return v10;
}
