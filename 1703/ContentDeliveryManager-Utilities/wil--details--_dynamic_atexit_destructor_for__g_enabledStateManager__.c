/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x180075710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

void wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__()
{
  int v0; // eax

  if ( wil::details::g_processShutdownInProgress )
    goto LABEL_6;
  v0 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
  if ( wil::details::g_pfnRtlDllShutdownInProgress )
    v0 = wil::details::g_pfnRtlDllShutdownInProgress();
  if ( v0 )
  {
LABEL_6:
    wil::details::g_enabledStateManager[0] = 0;
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)wil::details::g_enabledStateManager);
  }
  else
  {
    wil::details::EnabledStateManager::`scalar deleting destructor'((wil::details::EnabledStateManager *)wil::details::g_enabledStateManager);
  }
}
