/*
 * XREFs of ?Release@RMExecServicesProvider@ExecutionModel@@UEAAKXZ @ 0x1800080B0
 * Callers:
 *     ?CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x180008780 (-CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z.c)
 *     ??1ResourceManagerClientProxy@@MEAA@XZ @ 0x180012410 (--1ResourceManagerClientProxy@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800088D8 (--3@YAXPEAX@Z.c)
 *     ??1RMExecServicesProvider@ExecutionModel@@QEAA@XZ @ 0x180015450 (--1RMExecServicesProvider@ExecutionModel@@QEAA@XZ.c)
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
