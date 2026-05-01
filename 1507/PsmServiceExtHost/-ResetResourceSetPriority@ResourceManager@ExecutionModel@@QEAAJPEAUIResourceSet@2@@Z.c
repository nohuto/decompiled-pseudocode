/*
 * XREFs of ?ResetResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x180037D0C
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180004E9C (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?erase@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x180004F64 (-erase@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ??$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@tlx@@YAPEAPEAU_ResourceSetInfo@ExecutionModel@@AEAV?$auto_xxx@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@0@@Z @ 0x18000509C (--$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1--$_delete@U_ResourceSetInfo@Exec.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE20 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ResetResourceSetPriority(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::IResourceSet *a2)
{
  ExecutionModel::ResourceSet *v2; // rbx
  int v3; // r14d
  char *v4; // rbp
  struct IUnknown *v5; // rdx
  __int64 v6; // rsi
  void **v7; // rdi
  _DWORD *v8; // rcx
  ExecutionModel::ResourceSet *v9; // rsi
  __int64 *v10; // rdi
  __int64 *v11; // r8
  __int64 (__fastcall *v12)(ExecutionModel::BaseResourceSet *); // rdi
  __int64 (__fastcall *v13)(ExecutionModel::BaseResourceSet *); // rdi
  void *Block; // [rsp+68h] [rbp+10h] BYREF
  struct IUnknown *v16; // [rsp+70h] [rbp+18h] BYREF

  Block = 0LL;
  v2 = 0LL;
  v16 = 0LL;
  if ( a2 )
  {
    v4 = (char *)a2 - 1368;
    v5 = (struct IUnknown *)*((_QWORD *)this + 23);
    if ( v5 )
    {
      ATL::AtlComPtrAssign(&v16, v5);
      v2 = (ExecutionModel::ResourceSet *)v16;
    }
    if ( *((_DWORD *)v4 + 338) )
    {
      v6 = *((_QWORD *)v4 + 171);
      v7 = tlx::replace<ExecutionModel::_ResourceSetInfo *,void (*)(ExecutionModel::_ResourceSetInfo *),&void tlx::_delete<ExecutionModel::_ResourceSetInfo>(ExecutionModel::_ResourceSetInfo *),0>(&Block);
      v3 = (*(__int64 (__fastcall **)(char *, void **))(v6 + 56))(v4 + 1368, v7);
      if ( v3 >= 0 )
      {
        v8 = Block;
        *((_DWORD *)v4 + 340) = *((_DWORD *)Block + 3);
        *((_DWORD *)v4 + 52) = v8[3];
        *((_DWORD *)v4 + 58) = v8[3];
        *((_DWORD *)v4 + 64) = v8[3];
        ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
          &v16,
          (__int64)v4);
        v9 = (ExecutionModel::ResourceSet *)v16;
        v10 = (__int64 *)*((_QWORD *)v2 + 20);
        while ( v10 != (__int64 *)((char *)v2 + 160) )
        {
          if ( (ExecutionModel::ResourceSet *)v10[2] == v9 )
          {
            v11 = v10;
            v10 = (__int64 *)*v10;
            utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::erase(
              (__int64)v2 + 160,
              &v16,
              v11);
          }
          else
          {
            v10 = (__int64 *)*v10;
          }
        }
        if ( v9 )
        {
          v12 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v9 + 16LL);
          if ( v12 == ExecutionModel::ResourceSet::Release )
          {
            ExecutionModel::ResourceSet::Release(v9);
          }
          else if ( v12 == ExecutionModel::BaseResourceSet::Release )
          {
            ExecutionModel::BaseResourceSet::Release(v9);
          }
          else
          {
            v12(v9);
          }
        }
        ExecutionModel::BaseResourceSet::AddToListPrioritized((__int64)v2 + 160, (__int64)v4);
      }
    }
    else
    {
      v3 = 0;
    }
  }
  else
  {
    v3 = -2147024809;
  }
  if ( v2 )
  {
    v13 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v2 + 16LL);
    if ( v13 == ExecutionModel::ResourceSet::Release )
    {
      ExecutionModel::ResourceSet::Release(v2);
    }
    else if ( v13 == ExecutionModel::BaseResourceSet::Release )
    {
      ExecutionModel::BaseResourceSet::Release(v2);
    }
    else
    {
      v13(v2);
    }
  }
  if ( Block )
    operator delete(Block);
  return (unsigned int)v3;
}
