/*
 * XREFs of ??_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z @ 0x18003F1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     ??1ExternalResourceSet@ExecutionModel@@EEAA@XZ @ 0x18003F11C (--1ExternalResourceSet@ExecutionModel@@EEAA@XZ.c)
 */

ExecutionModel::ExternalResourceSet *__fastcall ExecutionModel::ExternalResourceSet::`scalar deleting destructor'(
        ExecutionModel::ExternalResourceSet *this,
        char a2)
{
  ExecutionModel::ExternalResourceSet::~ExternalResourceSet(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
