/*
 * XREFs of ??0ResourceManagerServerProxy@@QEAA@XZ @ 0x180025128
 * Callers:
 *     ?InitializeResourceManagerServerProxy@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAUIResourceManager@2@PEAPEAVResourceManagerServerProxy@@@Z @ 0x180024FC8 (-InitializeResourceManagerServerProxy@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAUIResou.c)
 * Callees:
 *     <none>
 */

ResourceManagerServerProxy *__fastcall ResourceManagerServerProxy::ResourceManagerServerProxy(
        ResourceManagerServerProxy *this)
{
  *(_QWORD *)this = &ResourceManagerServerProxy::`vftable';
  *((_DWORD *)this + 2) = 1;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 16), 0, 0);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = (char *)this + 72;
  *((_QWORD *)this + 10) = (char *)this + 72;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_WORD *)this + 52) = 2048;
  return this;
}
