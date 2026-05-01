/*
 * XREFs of ??0ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18002390C
 * Callers:
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@PEAPEAVResourceManager@1@@Z @ 0x180022E94 (-CreateResourceManager@ExecutionModel@@YAJPEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PE.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1800200F0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 */

ExecutionModel::ResourceManager *__fastcall ExecutionModel::ResourceManager::ResourceManager(
        ExecutionModel::ResourceManager *this)
{
  ExecutionModel::ResourceManager *result; // rax

  *((_DWORD *)this + 21) = 16;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &ExecutionModel::ResourceManager::`vftable'{for `ExecutionModel::IResourceManagerTest'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 1) = &ExecutionModel::ResourceManager::`vftable'{for `ExecutionModel::IResourceManagerTestInternal'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 2) = &ExecutionModel::ResourceManager::`vftable'{for `IResourceEnforcerCallback'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 3) = &ExecutionModel::ResourceManager::`vftable'{for `IModernResourceEnforcerCallback'};
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 24) = 4;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = (char *)this + 136;
  *((_QWORD *)this + 18) = (char *)this + 136;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  `vector constructor iterator'(
    (ExecutionModel::ResourceManager *)((char *)this + 176),
    8LL,
    2,
    (ExecutionModel::_ResourceInfo *(__fastcall *)(ExecutionModel::_ResourceInfo *))ATL::CComPtr<ExecutionModel::BaseResourceSet>::CComPtr<ExecutionModel::BaseResourceSet>);
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 10000;
  *((_DWORD *)this + 53) = 1000;
  *((_QWORD *)this + 27) = (char *)this + 216;
  *((_QWORD *)this + 28) = (char *)this + 216;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_WORD *)this + 124) = 2048;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 36) = (char *)this + 288;
  *((_QWORD *)this + 37) = (char *)this + 288;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_WORD *)this + 160) = 2048;
  result = this;
  *((_DWORD *)this + 70) = 0;
  return result;
}
