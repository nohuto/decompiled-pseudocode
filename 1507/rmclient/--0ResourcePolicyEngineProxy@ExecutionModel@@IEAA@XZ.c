/*
 * XREFs of ??0ResourcePolicyEngineProxy@ExecutionModel@@IEAA@XZ @ 0x180006ED4
 * Callers:
 *     ?CreateResourcePolicyEngineClientProxyWorker@ResourcePolicyEngineProxy@ExecutionModel@@SAJPEBGPEAPEAUIResourcePolicyEngine@2@@Z @ 0x180007218 (-CreateResourcePolicyEngineClientProxyWorker@ResourcePolicyEngineProxy@ExecutionModel@@SAJPEBGPE.c)
 * Callees:
 *     memset_0 @ 0x180008DF8 (memset_0.c)
 */

ExecutionModel::ResourcePolicyEngineProxy *__fastcall ExecutionModel::ResourcePolicyEngineProxy::ResourcePolicyEngineProxy(
        ExecutionModel::ResourcePolicyEngineProxy *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &ExecutionModel::ResourcePolicyEngineProxy::`vftable';
  *((_DWORD *)this + 2) = 1;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 144), 0, 0);
  *((_QWORD *)this + 23) = (char *)this + 184;
  *((_QWORD *)this + 24) = (char *)this + 184;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_WORD *)this + 108) = 2048;
  *((_QWORD *)this + 6) = 0LL;
  memset_0((char *)this + 56, 0, 0x48uLL);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  return this;
}
