/*
 * XREFs of ??1WnfStateRegistration@ExecutionModel@@UEAA@XZ @ 0x1800195C4
 * Callers:
 *     ??_GWnfStateRegistration@ExecutionModel@@UEAAPEAXI@Z @ 0x180019540 (--_GWnfStateRegistration@ExecutionModel@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::WnfStateRegistration::~WnfStateRegistration(ExecutionModel::WnfStateRegistration *this)
{
  *(_QWORD *)this = &ExecutionModel::WnfStateRegistration::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
