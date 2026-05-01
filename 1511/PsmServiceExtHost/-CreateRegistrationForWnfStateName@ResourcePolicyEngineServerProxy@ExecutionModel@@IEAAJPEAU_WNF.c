/*
 * XREFs of ?CreateRegistrationForWnfStateName@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAU_WNF_STATE_NAME@@PEAPEAUIUnknown@@@Z @ 0x1800256A4
 * Callers:
 *     ?Handle_CreatePolicyEngineClientContext@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAU_WNF_STATE_NAME@@PEAPEAX@Z @ 0x1800257FC (-Handle_CreatePolicyEngineClientContext@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEA.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x18000776C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     RmpWnfAllocateAndInitializePendingCallbackList @ 0x18002588C (RmpWnfAllocateAndInitializePendingCallbackList.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::CreateRegistrationForWnfStateName(
        ExecutionModel::ResourcePolicyEngineServerProxy *this,
        struct IUnknownVtbl **a2,
        struct IUnknown **a3)
{
  char *v5; // rax
  struct IUnknown *v6; // rbx
  struct IUnknown *v7; // rdi
  int v8; // ebx
  int v9; // eax
  struct IUnknown *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  if ( a3 )
  {
    *a3 = 0LL;
    v5 = (char *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = (struct IUnknown *)v5;
    if ( v5 )
    {
      *((_QWORD *)v5 + 2) = 0LL;
      *(_QWORD *)v5 = &ExecutionModel::WnfStateRegistration::`vftable';
      v5[24] = 0;
      *((_DWORD *)v5 + 7) = 0;
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v5 + 32), 0, 0);
      v6[1].lpVtbl = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 && (ATL::AtlComPtrAssign(&v11, v6), (v7 = v11) != 0LL) )
    {
      v8 = 0;
      v9 = RmpWnfAllocateAndInitializePendingCallbackList(&v11[2]);
      if ( v9 < 0 )
      {
        v8 = v9 | 0x10000000;
      }
      else
      {
        v7[1].lpVtbl = *a2;
        LOBYTE(v7[3].lpVtbl) = 1;
      }
      if ( v8 >= 0 )
      {
        v11 = 0LL;
        *a3 = v7;
      }
    }
    else
    {
      v8 = -2147024882;
    }
  }
  else
  {
    v8 = -2147024809;
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((ExecutionModel::HostResourceInfo **)&v11);
  return (unsigned int)v8;
}
