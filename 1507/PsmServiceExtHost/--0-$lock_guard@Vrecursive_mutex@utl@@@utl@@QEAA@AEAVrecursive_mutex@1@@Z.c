/*
 * XREFs of ??0?$lock_guard@Vrecursive_mutex@utl@@@utl@@QEAA@AEAVrecursive_mutex@1@@Z @ 0x18002E460
 * Callers:
 *     ?RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x1800016D0 (-RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION **__fastcall utl::lock_guard<utl::recursive_mutex>::lock_guard<utl::recursive_mutex>(
        struct _RTL_CRITICAL_SECTION **a1,
        struct _RTL_CRITICAL_SECTION *a2)
{
  *a1 = a2;
  EnterCriticalSection(a2);
  return a1;
}
