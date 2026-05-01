/*
 * XREFs of ??0ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18001BF6C
 * Callers:
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x18001B2FC (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAUIResourceEnforcer@@PEAUIM.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18001C988 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

ExecutionModel::ResourceManager *__fastcall ExecutionModel::ResourceManager::ResourceManager(
        ExecutionModel::ResourceManager *this)
{
  ExecutionModel::ResourceManager *result; // rax

  *(_QWORD *)this = &ExecutionModel::ResourceManager::`vftable'{for `ExecutionModel::IExternalResourceRegister'};
  *((_QWORD *)this + 1) = &ExecutionModel::ResourceManager::`vftable'{for `IResourceEnforcerCallback'};
  *((_QWORD *)this + 2) = &ExecutionModel::ResourceManager::`vftable'{for `IModernResourceEnforcerCallback'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 16;
  *((_DWORD *)this + 24) = 4;
  *((_DWORD *)this + 25) = 1;
  *((_DWORD *)this + 26) = 0;
  `vector constructor iterator'(
    (ExecutionModel::ResourceManager *)((char *)this + 112),
    8uLL,
    2uLL,
    ATL::CComPtr<ExecutionModel::BaseResourceSet>::CComPtr<ExecutionModel::BaseResourceSet>);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 10000;
  *((_DWORD *)this + 45) = 1000;
  *((_QWORD *)this + 23) = (char *)this + 184;
  *((_QWORD *)this + 24) = (char *)this + 184;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_WORD *)this + 108) = 2048;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 33) = (char *)this + 264;
  *((_QWORD *)this + 34) = (char *)this + 264;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_WORD *)this + 148) = 2048;
  result = this;
  *((_DWORD *)this + 64) = 0;
  return result;
}
