/*
 * XREFs of EtwProviderEnabled @ 0x1400B54FC
 * Callers:
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     EtwTraceMemoryAcg @ 0x1400B54B0 (EtwTraceMemoryAcg.c)
 *     KeInsertQueueApc @ 0x1400C7E70 (KeInsertQueueApc.c)
 *     EtwTiLogQueueApcThread @ 0x14022873C (EtwTiLogQueueApcThread.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1404D3A48 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTraceWorkingSetSwap @ 0x1404D56A8 (EtwTraceWorkingSetSwap.c)
 *     EtwpCrimsonProvEnableCallback @ 0x14054B3D8 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTiLogAllocExecVm @ 0x1406A5758 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogMapExecView @ 0x1406A5940 (EtwTiLogMapExecView.c)
 *     EtwTiLogProtectExecVm @ 0x1406A5AE4 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x1406A5CCC (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x1406A5E6C (EtwTiLogSetContextThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1406A60DC (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x1406A6248 (EtwTiLogSuspendResumeThread.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1406A6654 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1400D6090 (EtwpLevelKeywordEnabled.c)
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
