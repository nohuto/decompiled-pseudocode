/*
 * XREFs of ?Release@HostResources@ExecutionModel@@UEAAKXZ @ 0x18001A070
 * Callers:
 *     ?WorkerThreadThunk@RMExecServicesProvider@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009A90 (-WorkerThreadThunk@RMExecServicesProvider@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU.c)
 * Callees:
 *     ??_GHostResources@ExecutionModel@@QEAAPEAXI@Z @ 0x18004D488 (--_GHostResources@ExecutionModel@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ExecutionModel::HostResources::Release(ExecutionModel::HostResources *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
    ExecutionModel::HostResources::`scalar deleting destructor'(this, a2);
  return v2;
}
