/*
 * XREFs of ??_GWnfStateRegistration@ExecutionModel@@UEAAPEAXI@Z @ 0x180019540
 * Callers:
 *     <none>
 * Callees:
 *     ??1WnfStateRegistration@ExecutionModel@@UEAA@XZ @ 0x1800195C4 (--1WnfStateRegistration@ExecutionModel@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 */

ExecutionModel::WnfStateRegistration *__fastcall ExecutionModel::WnfStateRegistration::`scalar deleting destructor'(
        ExecutionModel::WnfStateRegistration *this,
        char a2)
{
  ExecutionModel::WnfStateRegistration::~WnfStateRegistration(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
