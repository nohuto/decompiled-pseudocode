/*
 * XREFs of EtwProviderEnabled @ 0x1400B7664
 * Callers:
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     EtwTraceMemoryAcg @ 0x1400B7618 (EtwTraceMemoryAcg.c)
 *     KeInsertQueueApc @ 0x1400C9FD0 (KeInsertQueueApc.c)
 *     EtwTiLogQueueApcThread @ 0x140228910 (EtwTiLogQueueApcThread.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1404F1954 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTraceWorkingSetSwap @ 0x1404F271C (EtwTraceWorkingSetSwap.c)
 *     EtwpCrimsonProvEnableCallback @ 0x14054AE98 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTiLogAllocExecVm @ 0x1406A5620 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogMapExecView @ 0x1406A5808 (EtwTiLogMapExecView.c)
 *     EtwTiLogProtectExecVm @ 0x1406A59AC (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x1406A5B94 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x1406A5D34 (EtwTiLogSetContextThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1406A5FA4 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x1406A6110 (EtwTiLogSuspendResumeThread.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1406A651C (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1400D81F0 (EtwpLevelKeywordEnabled.c)
 */

BOOLEAN __stdcall EtwProviderEnabled(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  BOOLEAN v5; // r9
  __int64 v6; // r10

  if ( !RegHandle )
    return 0;
  if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 32) + 80LL, Level, Keyword)
    || *(_BYTE *)(v6 + 101) != v5 && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v6 + 40) + 80LL, v3, v4) )
  {
    return 1;
  }
  return v5;
}
