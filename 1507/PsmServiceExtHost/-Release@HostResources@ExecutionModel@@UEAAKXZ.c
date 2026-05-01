/*
 * XREFs of ?Release@HostResources@ExecutionModel@@UEAAKXZ @ 0x180018220
 * Callers:
 *     ?WorkerThreadThunk@RMExecServicesProvider@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180017AF0 (-WorkerThreadThunk@RMExecServicesProvider@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU.c)
 * Callees:
 *     ??_GHostResources@ExecutionModel@@QEAAPEAXI@Z @ 0x180047850 (--_GHostResources@ExecutionModel@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ExecutionModel::HostResources::Release(ExecutionModel::HostResources *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
    ExecutionModel::HostResources::`scalar deleting destructor'(this, a2);
  return v2;
}
