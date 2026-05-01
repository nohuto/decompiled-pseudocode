/*
 * XREFs of ?Release@RMExecServicesProvider@ExecutionModel@@UEAAKXZ @ 0x180007760
 * Callers:
 *     ?CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x180007D90 (-CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z.c)
 *     ??1ResourceManagerClientProxy@@MEAA@XZ @ 0x1800116E0 (--1ResourceManagerClientProxy@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180008208 (--3@YAXPEAX@Z.c)
 *     ??1RMExecServicesProvider@ExecutionModel@@QEAA@XZ @ 0x18001446C (--1RMExecServicesProvider@ExecutionModel@@QEAA@XZ.c)
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
