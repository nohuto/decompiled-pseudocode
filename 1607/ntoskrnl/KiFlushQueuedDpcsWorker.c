/*
 * XREFs of KiFlushQueuedDpcsWorker @ 0x1400C7D7C
 * Callers:
 *     <none>
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400D60D0 (KiRequestSoftwareInterrupt.c)
 */

__int64 __fastcall KiFlushQueuedDpcsWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl

  v4 = *(unsigned int *)(a1 + 11672);
  result = (unsigned int)v4 | *(_DWORD *)(a1 + 11712);
  if ( (unsigned int)v4 | *(_DWORD *)(a1 + 11712) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(v4) = 2;
    KiRequestSoftwareInterrupt(a1, v4, a3, a4);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
