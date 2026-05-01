/*
 * XREFs of ?CancelWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800191BC
 * Callers:
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x180019204 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x180034D00 (-OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::ExternalResourceSet::CancelWatchdogTimer(ExecutionModel::ExternalResourceSet *this)
{
  __int64 v2; // rax

  if ( (unsigned int)TpSetTimerEx(*((_QWORD *)this + 177), 0LL, 0LL, 0LL) )
  {
    v2 = *(_QWORD *)this;
    *((_DWORD *)this + 356) &= ~8u;
    (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(v2 + 16))(this);
  }
}
