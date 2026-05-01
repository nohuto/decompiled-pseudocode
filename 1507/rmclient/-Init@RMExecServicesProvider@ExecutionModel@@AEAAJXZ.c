/*
 * XREFs of ?Init@RMExecServicesProvider@ExecutionModel@@AEAAJXZ @ 0x180007794
 * Callers:
 *     ?CreateRMExecServicesProvider@ExecutionModel@@YAJPEAPEAUIRMExecServicesProvider@1@@Z @ 0x1800076A0 (-CreateRMExecServicesProvider@ExecutionModel@@YAJPEAPEAUIRMExecServicesProvider@1@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall ExecutionModel::RMExecServicesProvider::Init(ExecutionModel::RMExecServicesProvider *this)
{
  int v2; // eax
  int result; // eax
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = TpAllocWork(&v4, ExecutionModel::RMExecServicesProvider::WorkerThreadThunk, this, 0LL);
  if ( v2 < 0 )
    return v2 | 0x10000000;
  RtlInitializeCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 32));
  *((_QWORD *)this + 2) = v4;
  result = 0;
  *((_BYTE *)this + 24) = 1;
  return result;
}
