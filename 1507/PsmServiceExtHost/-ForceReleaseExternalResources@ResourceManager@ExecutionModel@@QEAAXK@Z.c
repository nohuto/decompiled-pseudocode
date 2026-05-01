/*
 * XREFs of ?ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x1800354E4
 * Callers:
 *     ?RecvCallback@ExternalResourceSet@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x18003FD40 (-RecvCallback@ExternalResourceSet@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PE.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?erase@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@2@0@Z @ 0x180033734 (-erase@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@ExecutionM.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAJXZ @ 0x18003FEAC (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAJXZ.c)
 */

void __fastcall ExecutionModel::ResourceManager::ForceReleaseExternalResources(
        ExecutionModel::ResourceManager *this,
        int a2)
{
  char *v2; // rsi
  char *v4; // rbx
  _DWORD *v5; // r14
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  char *v9; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  char **v11; // [rsp+58h] [rbp-30h]
  int v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+64h] [rbp-24h]

  v2 = (char *)this + 200;
  v4 = (char *)*((_QWORD *)this + 25);
  while ( v2 != v4 )
  {
    v5 = (_DWORD *)*((_QWORD *)v4 + 4);
    if ( v5[2] == a2 )
    {
      ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(*((ExecutionModel::ExternalResourceSet **)v4 + 4));
      utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::erase(
        (__int64)v2,
        &v9,
        v4,
        *(_QWORD **)v4);
      v4 = v9;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    else
    {
      v4 = *(char **)v4;
    }
  }
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(this, 9uLL) )
  {
    v13 = 0;
    v11 = &v9;
    LODWORD(v9) = a2;
    v12 = 4;
    TlgWrite(v6, &unk_18005A619, v7, v8, 3u, &pData);
  }
}
