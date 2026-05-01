/*
 * XREFs of ?ResetResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x180020B18
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 * Callees:
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x180003050 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ??$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@tlx@@YAPEAPEAU_ResourceSetInfo@ExecutionModel@@AEAV?$auto_xxx@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@0@@Z @ 0x18000456C (--$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1--$_delete@U_ResourceSetInfo@Exec.c)
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000B3D0 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE10 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x18001FC64 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?erase@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18001FD2C (-erase@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ResetResourceSetPriority(
        ExecutionModel::ResourceManager *this,
        struct IUnknown *a2)
{
  ExecutionModel::BaseResourceSet *v2; // rbx
  struct IUnknown *v3; // rbp
  int v4; // r14d
  __int64 (__fastcall *v5)(ExecutionModel::BaseResourceSet *); // rdi
  struct IUnknownVtbl *lpVtbl; // rsi
  void **v8; // rdi
  _DWORD *v9; // rcx
  ExecutionModel::BaseResourceSet *v10; // rdi
  _QWORD *v11; // rsi
  __int64 v12; // r8
  __int64 (__fastcall *v13)(ExecutionModel::BaseResourceSet *); // rsi
  void *Block; // [rsp+68h] [rbp+10h] BYREF
  ExecutionModel::BaseResourceSet *v15; // [rsp+70h] [rbp+18h] BYREF

  Block = 0LL;
  v2 = 0LL;
  v15 = 0LL;
  if ( a2 )
  {
    v3 = a2 - 171;
    a2 = (struct IUnknown *)*((_QWORD *)this + 23);
    if ( a2 )
    {
      ATL::AtlComPtrAssign((struct IUnknown **)&v15, a2);
      v2 = v15;
    }
    if ( LODWORD(v3[169].lpVtbl) )
    {
      lpVtbl = v3[171].lpVtbl;
      v8 = tlx::replace<ExecutionModel::_ResourceSetInfo *,void (*)(ExecutionModel::_ResourceSetInfo *),&void tlx::_delete<ExecutionModel::_ResourceSetInfo>(ExecutionModel::_ResourceSetInfo *),0>(&Block);
      v4 = ((__int64 (__fastcall *)(struct IUnknown *, void **))lpVtbl[2].AddRef)(v3 + 171, v8);
      if ( v4 >= 0 )
      {
        v9 = Block;
        LODWORD(v3[170].lpVtbl) = *((_DWORD *)Block + 3);
        LODWORD(v3[26].lpVtbl) = v9[3];
        LODWORD(v3[29].lpVtbl) = v9[3];
        LODWORD(v3[32].lpVtbl) = v9[3];
        ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
          &v15,
          (__int64)v3);
        v10 = v15;
        v11 = (_QWORD *)*((_QWORD *)v2 + 20);
        while ( v11 != (_QWORD *)((char *)v2 + 160) )
        {
          if ( (ExecutionModel::BaseResourceSet *)v11[2] == v10 )
          {
            v12 = (__int64)v11;
            v11 = (_QWORD *)*v11;
            utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::erase(
              (__int64)v2 + 160,
              &v15,
              v12);
          }
          else
          {
            v11 = (_QWORD *)*v11;
          }
        }
        if ( v10 )
        {
          v13 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v10 + 16LL);
          if ( v13 == ExecutionModel::ResourceSet::Release )
          {
            ExecutionModel::ResourceSet::Release(v10);
          }
          else if ( v13 == ExecutionModel::BaseResourceSet::Release )
          {
            ExecutionModel::BaseResourceSet::Release(v10);
          }
          else if ( (char *)v13 == (char *)ExecutionModel::ExternalResourceSet::Release )
          {
            ExecutionModel::ExternalResourceSet::Release(v10);
          }
          else
          {
            v13(v10);
          }
        }
        ExecutionModel::BaseResourceSet::AddToListPrioritized((__int64)v2 + 160, (__int64)v3);
      }
    }
    else
    {
      v4 = 0;
    }
  }
  else
  {
    v4 = -2147024809;
  }
  if ( v2 )
  {
    v5 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v2 + 16LL);
    if ( v5 == ExecutionModel::ResourceSet::Release )
    {
      ExecutionModel::ResourceSet::Release(v2);
    }
    else if ( v5 == ExecutionModel::BaseResourceSet::Release )
    {
      ExecutionModel::BaseResourceSet::Release(v2);
    }
    else if ( (char *)v5 == (char *)ExecutionModel::ExternalResourceSet::Release )
    {
      ExecutionModel::ExternalResourceSet::Release(v2);
    }
    else
    {
      ((void (__fastcall *)(ExecutionModel::BaseResourceSet *, struct IUnknown *, __int64 (__fastcall *)(ExecutionModel::ResourceSet *)))v5)(
        v2,
        a2,
        ExecutionModel::ResourceSet::Release);
    }
  }
  if ( Block )
    operator delete(Block);
  return (unsigned int)v4;
}
