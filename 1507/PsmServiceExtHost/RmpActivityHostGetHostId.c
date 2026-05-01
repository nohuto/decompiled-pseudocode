/*
 * XREFs of RmpActivityHostGetHostId @ 0x18003BCD0
 * Callers:
 *     RmpEnforcementWorkerSynchronize @ 0x180005104 (RmpEnforcementWorkerSynchronize.c)
 *     ?Apply@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180010790 (-Apply@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostGetHostId(__int64 a1)
{
  return *(_QWORD *)(a1 + 24);
}
