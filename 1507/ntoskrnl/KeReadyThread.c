/*
 * XREFs of KeReadyThread @ 0x14000FB8C
 * Callers:
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 * Callees:
 *     KiFastReadyThread @ 0x14000DBF8 (KiFastReadyThread.c)
 *     KiInSwapSingleProcess @ 0x14010C694 (KiInSwapSingleProcess.c)
 */

__int64 __fastcall KeReadyThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 CurrentIrql; // r8

  v3 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v3 + 572) & 7) == 0 )
    return KiFastReadyThread(a1, v3, a3);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  result = KiInSwapSingleProcess(a1, v3, CurrentIrql);
  if ( !(_BYTE)result )
    return KiFastReadyThread(a1, v3, a3);
  return result;
}
