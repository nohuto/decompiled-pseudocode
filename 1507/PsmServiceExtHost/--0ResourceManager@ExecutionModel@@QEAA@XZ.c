/*
 * XREFs of ??0ResourceManager@ExecutionModel@@QEAA@XZ @ 0x180020158
 * Callers:
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@PEAPEAVResourceManager@1@@Z @ 0x180021514 (-CreateResourceManager@ExecutionModel@@YAJPEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PE.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x18002048C (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 */

ExecutionModel::ResourceManager *__fastcall ExecutionModel::ResourceManager::ResourceManager(
        ExecutionModel::ResourceManager *this)
{
  ExecutionModel::ResourceManager *result; // rax

  *((_DWORD *)this + 21) = 16;
  *((_QWORD *)this + 6) = 0LL;
  *(_QWORD *)this = &ExecutionModel::ResourceManager::`vftable'{for `ExecutionModel::IResourceManagerTest'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 1) = &ExecutionModel::ResourceManager::`vftable'{for `ExecutionModel::IResourceManagerTestInternal'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 2) = &ExecutionModel::ResourceManager::`vftable'{for `IResourceEnforcerCallback'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 3) = &ExecutionModel::ResourceManager::`vftable'{for `IModernResourceEnforcerCallback'};
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 4) = &ExecutionModel::ResourceManager::`vftable'{for `ExecutionModel::IRMExecServicesProviderCallback'};
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
    8uLL,
    2,
    ATL::CComPtr<ExecutionModel::BaseResourceSet>::CComPtr<ExecutionModel::BaseResourceSet>);
  *((_DWORD *)this + 48) = 10000;
  *((_DWORD *)this + 49) = 1000;
  *((_QWORD *)this + 25) = (char *)this + 200;
  *((_QWORD *)this + 26) = (char *)this + 200;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_WORD *)this + 116) = 2048;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 34) = (char *)this + 272;
  *((_QWORD *)this + 35) = (char *)this + 272;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_WORD *)this + 152) = 2048;
  result = this;
  *((_DWORD *)this + 66) = 0;
  return result;
}
