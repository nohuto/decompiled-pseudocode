/*
 * XREFs of ??0SimpleLock@Shared@DevPlat@@QEAA@PEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180022748
 * Callers:
 *     InitializeGameConfigRpcServer @ 0x18002269C (InitializeGameConfigRpcServer.c)
 *     ShutdownGameConfigRpcServer @ 0x1800438BC (ShutdownGameConfigRpcServer.c)
 * Callees:
 *     <none>
 */

DevPlat::Shared::SimpleLock *__fastcall DevPlat::Shared::SimpleLock::SimpleLock(
        DevPlat::Shared::SimpleLock *this,
        struct _RTL_CRITICAL_SECTION *a2)
{
  *(_QWORD *)this = &ExecutionModel::Internal::_lock;
  *((_BYTE *)this + 8) = 0;
  EnterCriticalSection(&ExecutionModel::Internal::_lock);
  return this;
}
