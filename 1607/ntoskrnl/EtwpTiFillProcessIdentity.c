/*
 * XREFs of EtwpTiFillProcessIdentity @ 0x14017196C
 * Callers:
 *     EtwTiLogQueueApcThread @ 0x140228910 (EtwTiLogQueueApcThread.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406A0764 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTiLogAllocExecVm @ 0x1406A5620 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogMapExecView @ 0x1406A5808 (EtwTiLogMapExecView.c)
 *     EtwTiLogProtectExecVm @ 0x1406A59AC (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x1406A5B94 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x1406A5D34 (EtwTiLogSetContextThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1406A5FA4 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x1406A6110 (EtwTiLogSuspendResumeThread.c)
 * Callees:
 *     EtwpGetProcessStartKey @ 0x1404EDE94 (EtwpGetProcessStartKey.c)
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
