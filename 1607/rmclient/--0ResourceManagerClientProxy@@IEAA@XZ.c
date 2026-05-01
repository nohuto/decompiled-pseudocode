/*
 * XREFs of ??0ResourceManagerClientProxy@@IEAA@XZ @ 0x180004DEC
 * Callers:
 *     ?CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x180004D5C (-CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800048F0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

ResourceManagerClientProxy *__fastcall ResourceManagerClientProxy::ResourceManagerClientProxy(
        ResourceManagerClientProxy *this)
{
  ResourceManagerClientProxy *result; // rax

  *(_QWORD *)this = &ResourceManagerClientProxy::`vftable';
  *((_DWORD *)this + 2) = 1;
  `vector constructor iterator'((char *)this + 16, 376LL, 57LL, ExecutionModel::_ResourceSetInfo::_ResourceSetInfo);
  *((_QWORD *)this + 2681) = 0LL;
  *((_QWORD *)this + 2682) = 0LL;
  *((_BYTE *)this + 22000) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 22008), 0, 0);
  *((_QWORD *)this + 2756) = (char *)this + 22048;
  *((_QWORD *)this + 2757) = (char *)this + 22048;
  *((_QWORD *)this + 2758) = 0LL;
  *((_QWORD *)this + 2759) = 0LL;
  *((_WORD *)this + 11040) = 2048;
  result = this;
  *((_WORD *)this + 10740) = 0;
  return result;
}
