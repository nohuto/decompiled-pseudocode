/*
 * XREFs of EtwpTiFillProcessIdentity @ 0x140171E6C
 * Callers:
 *     EtwTiLogQueueApcThread @ 0x14022873C (EtwTiLogQueueApcThread.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406A089C (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTiLogAllocExecVm @ 0x1406A5758 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogMapExecView @ 0x1406A5940 (EtwTiLogMapExecView.c)
 *     EtwTiLogProtectExecVm @ 0x1406A5AE4 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x1406A5CCC (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x1406A5E6C (EtwTiLogSetContextThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1406A60DC (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x1406A6248 (EtwTiLogSuspendResumeThread.c)
 * Callees:
 *     EtwpGetProcessStartKey @ 0x1404CFF60 (EtwpGetProcessStartKey.c)
 */

__int64 __fastcall EtwpTiFillProcessIdentity(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2 + 744;
  *(_DWORD *)(a1 + 8) = 4;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 16) = a2 + 776;
  *(_DWORD *)(a1 + 24) = 8;
  *a3 = EtwpGetProcessStartKey(a2);
  *(_DWORD *)(a1 + 44) = 0;
  *(_QWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 40) = 8;
  *(_DWORD *)(a1 + 60) = 0;
  *(_QWORD *)(a1 + 48) = a2 + 1736;
  *(_DWORD *)(a1 + 56) = 1;
  *(_DWORD *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 64) = a2 + 1737;
  *(_DWORD *)(a1 + 72) = 1;
  *(_DWORD *)(a1 + 92) = 0;
  *(_QWORD *)(a1 + 80) = a2 + 1738;
  result = 6LL;
  *(_DWORD *)(a1 + 88) = 1;
  return result;
}
