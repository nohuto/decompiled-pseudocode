/*
 * XREFs of ?Release@RMExecServicesProvider@ExecutionModel@@UEAAKXZ @ 0x180004680
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     ??1RMExecServicesProvider@ExecutionModel@@QEAA@XZ @ 0x180047948 (--1RMExecServicesProvider@ExecutionModel@@QEAA@XZ.c)
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
