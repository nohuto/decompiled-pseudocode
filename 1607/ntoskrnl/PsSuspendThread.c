/*
 * XREFs of PsSuspendThread @ 0x1404EAC24
 * Callers:
 *     NtSuspendThread @ 0x1404EAB70 (NtSuspendThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140618800 (DbgkpPostFakeThreadMessages.c)
 *     PsSuspendProcess @ 0x140682110 (PsSuspendProcess.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSuspendThread @ 0x1400C7748 (KeSuspendThread.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     EtwTiLogSuspendResumeThread @ 0x1406A6248 (EtwTiLogSuspendResumeThread.c)
 */

__int64 __fastcall PsSuspendThread(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  int v9; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 1704)) )
  {
    if ( (*(_DWORD *)(a1 + 1728) & 1) != 0 )
    {
      v8 = -1073741749;
      v9 = 0;
    }
    else
    {
      v9 = KeSuspendThread(a1);
      v8 = 0;
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 1704));
  }
  else
  {
    v8 = -1073741749;
    v9 = 0;
  }
  if ( a2 )
  {
    *a2 = v9;
    if ( !v9 && (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 1740LL) & 0x20000000) != 0 )
    {
      LOBYTE(v7) = 1;
      EtwTiLogSuspendResumeThread(v8, CurrentThread, a1, v7);
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v5, v6, v7);
  if ( a2 )
    *a2 = v9;
  return v8;
}
