/*
 * XREFs of ??1?$lock_guard@Vrecursive_mutex@utl@@@utl@@QEAA@XZ @ 0x180005534
 * Callers:
 *     ?RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x1800016D0 (-RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@.c)
 * Callees:
 *     <none>
 */

void __fastcall utl::lock_guard<utl::recursive_mutex>::~lock_guard<utl::recursive_mutex>(LPCRITICAL_SECTION *a1)
{
  LeaveCriticalSection(*a1);
}
