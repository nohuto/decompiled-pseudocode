/*
 * XREFs of ?GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExternalResourceSet@2@@Z @ 0x180036200
 * Callers:
 *     ?RmGetNotification@ResourceManager@ExecutionModel@@UEAAJPEAUResourceHandle__@2@PEAUExternalResourceNotification@2@@Z @ 0x1800388D0 (-RmGetNotification@ResourceManager@ExecutionModel@@UEAAJPEAUResourceHandle__@2@PEAUExternalResou.c)
 *     ?RmReleaseResources@ResourceManager@ExecutionModel@@UEAAJPEAUResourceHandle__@2@@Z @ 0x180038A70 (-RmReleaseResources@ResourceManager@ExecutionModel@@UEAAJPEAUResourceHandle__@2@@Z.c)
 * Callees:
 *     ??$_EqualRangeImpl@PEAUResourceHandle__@ExecutionModel@@@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBQEAUResourceHandle__@ExecutionModel@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180033DE8 (--$_EqualRangeImpl@PEAUResourceHandle__@ExecutionModel@@@-$_HashTable@PEAUResourceHandle__@Execu.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetResourceSetFromHandle(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceHandle__ *a2,
        struct ExecutionModel::ExternalResourceSet **a3)
{
  unsigned int v3; // edi
  char *v5; // rbx
  struct ExecutionModel::ExternalResourceSet *v6; // rcx
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF
  struct ExecutionModel::ResourceHandle__ *v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v9 = a2;
  v3 = 0;
  if ( a3
    && (v10 = 0LL,
        v5 = (char *)this + 200,
        utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_EqualRangeImpl<ExecutionModel::ResourceHandle__ *>(
          (__int64)this + 200,
          (__int64)a2,
          (unsigned __int16 *)&v9,
          &v10,
          v8,
          &v11),
        (char *)v10 != v5) )
  {
    v6 = *(struct ExecutionModel::ExternalResourceSet **)(v10 + 32);
    if ( v6 )
      *a3 = v6;
    else
      return (unsigned int)-2147467259;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
