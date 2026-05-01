/*
 * XREFs of ?GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExternalResourceSet@2@@Z @ 0x18000E360
 * Callers:
 *     ?RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z @ 0x18000DC0C (-RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z.c)
 *     ?RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResourceNotification@2@@Z @ 0x18002D214 (-RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResou.c)
 * Callees:
 *     ?AddRef@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800041D0 (-AddRef@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ??$_EqualRangeImpl@PEAUResourceHandle__@ExecutionModel@@@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBQEAUResourceHandle__@ExecutionModel@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180004444 (--$_EqualRangeImpl@PEAUResourceHandle__@ExecutionModel@@@-$_HashTable@PEAUResourceHandle__@Execu.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetResourceSetFromHandle(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceHandle__ *a2,
        struct ExecutionModel::ExternalResourceSet **a3)
{
  unsigned int v3; // edi
  char *v5; // rbx
  struct ExecutionModel::ExternalResourceSet *v6; // rbx
  unsigned int (__fastcall *v7)(ExecutionModel::ExternalResourceSet *); // rax
  ExecutionModel::ExternalResourceSet *v8; // rcx
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF
  struct ExecutionModel::ResourceHandle__ *v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v11 = a2;
  v3 = 0;
  if ( a3
    && (v12 = 0LL,
        v5 = (char *)this + 184,
        utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_EqualRangeImpl<ExecutionModel::ResourceHandle__ *>(
          (__int64)this + 184,
          (__int64)a2,
          (__int64 *)&v11,
          &v12,
          v10,
          &v13),
        (char *)v12 != v5) )
  {
    v6 = *(struct ExecutionModel::ExternalResourceSet **)(v12 + 32);
    if ( v6 )
    {
      v7 = *(unsigned int (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v6 + 8LL);
      v8 = *(ExecutionModel::ExternalResourceSet **)(v12 + 32);
      if ( v7 == ExecutionModel::ExternalResourceSet::AddRef )
        ExecutionModel::ExternalResourceSet::AddRef(v8);
      else
        v7(v8);
      *a3 = v6;
    }
    else
    {
      return (unsigned int)-2147467259;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
