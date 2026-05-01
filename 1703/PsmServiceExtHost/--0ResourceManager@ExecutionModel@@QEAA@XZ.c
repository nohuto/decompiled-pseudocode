/*
 * XREFs of ??0ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18001DFDC
 * Callers:
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x18001D4F4 (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@P.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18001B154 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

ExecutionModel::ResourceManager *__fastcall ExecutionModel::ResourceManager::ResourceManager(
        ExecutionModel::ResourceManager *this)
{
  ExecutionModel::ResourceManager *result; // rax

  *((_DWORD *)this + 17) = 16;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &ExecutionModel::ResourceManager::`vftable'{for `ExecutionModel::IExternalResourceRegister'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 1) = &ExecutionModel::ResourceManager::`vftable'{for `IModernResourceEnforcerCallback'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 20) = 4;
  *((_DWORD *)this + 21) = 1;
  *((_DWORD *)this + 22) = 0;
  `vector constructor iterator'(
    (ExecutionModel::ResourceManager *)((char *)this + 96),
    8LL,
    2LL,
    (ExecutionModel::_ResourceInfo *(__fastcall *)(ExecutionModel::_ResourceInfo *))ATL::CComPtr<ExecutionModel::BaseResourceSet>::CComPtr<ExecutionModel::BaseResourceSet>);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 10000;
  *((_DWORD *)this + 41) = 1000;
  *((_QWORD *)this + 21) = (char *)this + 168;
  *((_QWORD *)this + 22) = (char *)this + 168;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_WORD *)this + 100) = 2048;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 31) = (char *)this + 248;
  *((_QWORD *)this + 32) = (char *)this + 248;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_WORD *)this + 140) = 2048;
  result = this;
  *((_DWORD *)this + 60) = 0;
  return result;
}
