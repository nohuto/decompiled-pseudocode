/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x140171F18
 * Callers:
 *     EtwTiLogAllocExecVm @ 0x1406A5758 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogMapExecView @ 0x1406A5940 (EtwTiLogMapExecView.c)
 *     EtwTiLogProtectExecVm @ 0x1406A5AE4 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x1406A5CCC (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x1406A5E6C (EtwTiLogSetContextThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1406A60DC (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x1406A6248 (EtwTiLogSuspendResumeThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpTiFillThreadIdentity(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2 + 1592;
  *(_DWORD *)(a1 + 8) = 4;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 16) = a2 + 1504;
  result = 2LL;
  *(_DWORD *)(a1 + 24) = 8;
  return result;
}
