/*
 * XREFs of KiFlushQueuedDpcsWorker @ 0x1400FF5CC
 * Callers:
 *     <none>
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400205A0 (KiRequestSoftwareInterrupt.c)
 */

__int64 __fastcall KiFlushQueuedDpcsWorker(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl

  v1 = *(_DWORD *)(a1 + 11672);
  result = v1 | *(_DWORD *)(a1 + 11712);
  if ( v1 | *(_DWORD *)(a1 + 11712) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2u);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
