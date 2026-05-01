/*
 * XREFs of ??0ResourceManagerClientProxy@@IEAA@XZ @ 0x1800074D0
 * Callers:
 *     ?CreateResourceManagerClientProxyInternal@@YAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@PEAPEAUIResourceManager@2@@Z @ 0x180007D0C (-CreateResourceManagerClientProxyInternal@@YAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@P.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180002360 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 */

ResourceManagerClientProxy *__fastcall ResourceManagerClientProxy::ResourceManagerClientProxy(
        ResourceManagerClientProxy *this)
{
  ResourceManagerClientProxy *result; // rax

  *(_QWORD *)this = &ResourceManagerClientProxy::`vftable';
  *((_DWORD *)this + 2) = 1;
  `vector constructor iterator'(
    (char *)this + 16,
    352LL,
    57,
    (__int64 (__fastcall *)(ExecutionModel::_ResourceSetInfo *__hidden))ExecutionModel::_ResourceSetInfo::_ResourceSetInfo);
  *((_QWORD *)this + 2510) = 0LL;
  *((_QWORD *)this + 2511) = 0LL;
  *((_QWORD *)this + 2512) = 0LL;
  *((_BYTE *)this + 20720) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 20728), 0, 0);
  *((_QWORD *)this + 2596) = (char *)this + 20768;
  *((_QWORD *)this + 2597) = (char *)this + 20768;
  *((_QWORD *)this + 2598) = 0LL;
  *((_QWORD *)this + 2599) = 0LL;
  *((_WORD *)this + 10400) = 2048;
  result = this;
  *((_WORD *)this + 10100) = 0;
  return result;
}
