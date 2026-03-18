/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x140171A18
 * Callers:
 *     EtwTiLogAllocExecVm @ 0x1406A5620 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogMapExecView @ 0x1406A5808 (EtwTiLogMapExecView.c)
 *     EtwTiLogProtectExecVm @ 0x1406A59AC (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x1406A5B94 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x1406A5D34 (EtwTiLogSetContextThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1406A5FA4 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x1406A6110 (EtwTiLogSuspendResumeThread.c)
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
