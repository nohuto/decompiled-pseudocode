/*
 * XREFs of ??0ResourceManagerClientProxy@@IEAA@XZ @ 0x180007DDC
 * Callers:
 *     ?CreateResourceManagerClientProxyInternal@@YAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@PEAPEAUIResourceManager@2@@Z @ 0x1800086FC (-CreateResourceManagerClientProxyInternal@@YAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@P.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1800038C0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 */

ResourceManagerClientProxy *__fastcall ResourceManagerClientProxy::ResourceManagerClientProxy(
        ResourceManagerClientProxy *this)
{
  ResourceManagerClientProxy *result; // rax

  *(_QWORD *)this = &ResourceManagerClientProxy::`vftable';
  *((_DWORD *)this + 2) = 1;
  `vector constructor iterator'(
    (ResourceManagerClientProxy *)((char *)this + 16),
    360LL,
    57,
    (void (__fastcall *)(ExecutionModel::_ResourceSetInfo *))ExecutionModel::_ResourceSetInfo::_ResourceSetInfo);
  *((_QWORD *)this + 2567) = 0LL;
  *((_QWORD *)this + 2568) = 0LL;
  *((_QWORD *)this + 2569) = 0LL;
  *((_BYTE *)this + 21176) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 21184), 0, 0);
  *((_QWORD *)this + 2653) = (char *)this + 21224;
  *((_QWORD *)this + 2654) = (char *)this + 21224;
  *((_QWORD *)this + 2655) = 0LL;
  *((_QWORD *)this + 2656) = 0LL;
  *((_WORD *)this + 10628) = 2048;
  result = this;
  *((_WORD *)this + 10328) = 0;
  return result;
}
