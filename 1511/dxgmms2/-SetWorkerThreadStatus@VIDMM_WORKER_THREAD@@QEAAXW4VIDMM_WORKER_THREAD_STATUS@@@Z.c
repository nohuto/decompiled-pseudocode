/*
 * XREFs of ?SetWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z @ 0x1C0041BA4
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

LONG __fastcall VIDMM_WORKER_THREAD::SetWorkerThreadStatus(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 16) = a2;
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 120) + 48LL), 0, 0);
}
