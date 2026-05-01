/*
 * XREFs of ??$_EqualRangeImpl@PEAUResourceHandle__@ExecutionModel@@@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBQEAUResourceHandle__@ExecutionModel@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180004444
 * Callers:
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x1800041DC (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExternalResourceSet@2@@Z @ 0x18000E360 (-GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExt.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_EqualRangeImpl<ExecutionModel::ResourceHandle__ *>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v7; // r11
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  _QWORD *v10; // rcx
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 16) )
  {
    v7 = *a3;
    v8 = (0xC4CEB9FE1A85EC53uLL
        * ((0xFF51AFD7ED558CCDuLL * (*a3 ^ ((unsigned __int64)*a3 >> 33))) ^ ((0xFF51AFD7ED558CCDuLL
                                                                             * (*a3 ^ ((unsigned __int64)*a3 >> 33))) >> 33))) ^ ((0xC4CEB9FE1A85EC53uLL * ((0xFF51AFD7ED558CCDuLL * (*a3 ^ ((unsigned __int64)*a3 >> 33))) ^ ((0xFF51AFD7ED558CCDuLL * (*a3 ^ ((unsigned __int64)*a3 >> 33))) >> 33))) >> 33);
    v9 = *(_QWORD *)(a1 + 16) + 16 * (v8 & ((8LL << *(_BYTE *)(a1 + 32)) - 1));
    v10 = *(_QWORD **)v9;
    if ( *(_QWORD *)v9 )
    {
      while ( v10 != **(_QWORD ***)(v9 + 8) )
      {
        if ( v10[2] >= v8 )
        {
          if ( v10[2] > v8 )
            break;
          if ( v7 == v10[3] )
          {
            *a4 = v10;
            *a5 = *v10;
            result = a6;
            *a6 = 1LL;
            return result;
          }
        }
        v10 = (_QWORD *)*v10;
      }
    }
  }
  *a4 = a1;
  *a5 = a1;
  result = a6;
  *a6 = 0LL;
  return result;
}
