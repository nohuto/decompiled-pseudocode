/*
 * XREFs of ?Release@RMExecServicesProvider@ExecutionModel@@UEAAKXZ @ 0x180042BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     ??1RMExecServicesProvider@ExecutionModel@@QEAA@XZ @ 0x18004299C (--1RMExecServicesProvider@ExecutionModel@@QEAA@XZ.c)
 */

__int64 __fastcall ExecutionModel::RMExecServicesProvider::Release(ExecutionModel::RMExecServicesProvider *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    ExecutionModel::RMExecServicesProvider::~RMExecServicesProvider(this);
    operator delete(this);
  }
  return v2;
}
