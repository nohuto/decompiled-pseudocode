/*
 * XREFs of ?Handle_ClientRundown@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAXPEAX@Z @ 0x180020910
 * Callers:
 *     PRPE_CALLBACK_HANDLE_TYPE_rundown @ 0x1800208C0 (PRPE_CALLBACK_HANDLE_TYPE_rundown.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?RemoveAndDestroyResourceSetProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@utl@@@Z @ 0x180036490 (-RemoveAndDestroyResourceSetProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJAEAV-$_Dl.c)
 */

void __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ClientRundown(struct IUnknown *this, void *a2)
{
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v2; // r15
  unsigned int v4; // edx
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r12
  struct IUnknown *v8; // rdi
  struct _RTL_CRITICAL_SECTION *v9; // rbp
  unsigned int v10; // edx
  struct IUnknown *v11; // [rsp+70h] [rbp+8h] BYREF
  struct IUnknown *v12; // [rsp+78h] [rbp+10h] BYREF
  _QWORD *v13; // [rsp+80h] [rbp+18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp+20h]

  if ( a2 )
  {
    v11 = this;
    v2 = g_pResourcePolicyEngineServerProxy;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_pResourcePolicyEngineServerProxy + 16);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_pResourcePolicyEngineServerProxy + 16));
    v5 = (_QWORD *)*((_QWORD *)v2 + 7);
    while ( v5 != (_QWORD *)((char *)v2 + 56) )
    {
      v6 = v5[4];
      v13 = v5;
      v5 = (_QWORD *)*v5;
      if ( a2 == *(void **)(v6 + 32) )
      {
        v7 = *(_QWORD *)(v6 + 16);
        v8 = 0LL;
        v11 = 0LL;
        if ( v7 )
        {
          v9 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v2 + 12);
          EnterCriticalSection(v9 + 1);
          ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
            &v12,
            v7);
          v10 = (unsigned int)v12;
          if ( v12 )
          {
            ATL::AtlComPtrAssign(&v11, v12);
            v8 = v11;
          }
          ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(
            (ExecutionModel::ResourceSetImpl **)&v12,
            v10);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 120LL))(v7);
          if ( v8[21].lpVtbl )
            ATL::AtlComPtrAssign((struct IUnknown **)&v8[21], 0LL);
          LeaveCriticalSection(v9 + 1);
        }
        ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(
          (ExecutionModel::ResourceSetImpl **)&v11,
          v4);
        ExecutionModel::ResourcePolicyEngineServerProxy::RemoveAndDestroyResourceSetProxy(v2, &v13);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
}
