/*
 * XREFs of ?Cleanup@WnfStateRegistration@ExecutionModel@@QEAAXXZ @ 0x180020A48
 * Callers:
 *     ?Handle_ClosePolicyEngineClientContext@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAPEAX@Z @ 0x180020994 (-Handle_ClosePolicyEngineClientContext@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAP.c)
 * Callees:
 *     RmpWnfCleanupPendingCallbackList @ 0x180020AB0 (RmpWnfCleanupPendingCallbackList.c)
 */

void __fastcall ExecutionModel::WnfStateRegistration::Cleanup(ExecutionModel::WnfStateRegistration *this)
{
  void *v2; // rcx

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    RmpWnfCleanupPendingCallbackList(v2);
  *((_BYTE *)this + 24) = 0;
  *((_QWORD *)this + 1) = 0LL;
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
