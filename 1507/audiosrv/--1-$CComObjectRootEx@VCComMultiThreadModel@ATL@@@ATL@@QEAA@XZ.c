/*
 * XREFs of ??1?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAA@XZ @ 0x180066DA0
 * Callers:
 *     _CVADServer::CVADServer_::_1_::dtor$0 @ 0x180046790 (_CVADServer--CVADServer_--_1_--dtor$0.c)
 *     _CSaProvider::CSaProvider_::_1_::dtor$0 @ 0x180048471 (_CSaProvider--CSaProvider_--_1_--dtor$0.c)
 *     _CSaProvider::_CSaProvider_::_1_::dtor$0 @ 0x180073AA1 (_CSaProvider--_CSaProvider_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::~CComObjectRootEx<ATL::CComMultiThreadModel>(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 + 8;
  if ( *(_BYTE *)(v1 + 40) )
  {
    *(_BYTE *)(v1 + 40) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)v1);
  }
}
