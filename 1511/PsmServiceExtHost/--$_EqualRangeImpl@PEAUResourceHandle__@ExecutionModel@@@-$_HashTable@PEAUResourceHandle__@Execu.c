/*
 * XREFs of ??$_EqualRangeImpl@PEAUResourceHandle__@ExecutionModel@@@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBQEAUResourceHandle__@ExecutionModel@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180002BDC
 * Callers:
 *     ?GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExternalResourceSet@2@@Z @ 0x180001A5C (-GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExt.c)
 *     ?RmReleaseResources@ResourceManager@ExecutionModel@@UEAAJPEAUResourceHandle__@2@@Z @ 0x180001AE0 (-RmReleaseResources@ResourceManager@ExecutionModel@@UEAAJPEAUResourceHandle__@2@@Z.c)
 * Callees:
 *     ??$_HashRange@PEBG@utl@@YAIPEBG0I@Z @ 0x18001C480 (--$_HashRange@PEBG@utl@@YAIPEBG0I@Z.c)
 */

_QWORD *__fastcall utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_EqualRangeImpl<ExecutionModel::ResourceHandle__ *>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v8; // r11
  int v9; // eax
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _QWORD *result; // rax

  v8 = a1;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v9 = utl::_HashRange<unsigned short const *>(a3, a3 + 1);
    v10 = 32769 * (((unsigned int)(9 * v9) >> 11) ^ (9 * v9));
    v11 = *(_QWORD *)(v8 + 16) + 16 * (v10 & ((8LL << *(_BYTE *)(v8 + 32)) - 1));
    v12 = *(_QWORD **)v11;
    if ( *(_QWORD *)v11 )
    {
      while ( v12 != **(_QWORD ***)(v11 + 8) )
      {
        if ( v12[2] >= v10 )
        {
          if ( v12[2] > v10 )
            break;
          if ( *a3 == v12[3] )
          {
            *a4 = v12;
            *a5 = *v12;
            result = a6;
            *a6 = 1LL;
            return result;
          }
        }
        v12 = (_QWORD *)*v12;
      }
    }
  }
  *a4 = v8;
  *a5 = v8;
  result = a6;
  *a6 = 0LL;
  return result;
}
