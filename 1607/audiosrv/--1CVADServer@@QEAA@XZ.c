/*
 * XREFs of ??1CVADServer@@QEAA@XZ @ 0x18004F858
 * Callers:
 *     _ATL::CComObject_CVADServer_::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x180039EB0 (_ATL--CComObject_CVADServer_--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _ATL::CComObject_CVADServer_::CreateInstance_::_1_::dtor$1 @ 0x18003A54C (_ATL--CComObject_CVADServer_--CreateInstance_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180004D1C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000D410 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180011770 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 */

void __fastcall CVADServer::~CVADServer(CVADServer *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 43);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 28) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 27) - 24LL));
  CoTaskMemFree(*((LPVOID *)this + 24));
  *((_QWORD *)this + 24) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 23));
  *((_QWORD *)this + 23) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 22));
  *((_QWORD *)this + 22) = 0LL;
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CVADServer *)((char *)this + 72));
  if ( *((_BYTE *)this + 56) )
  {
    *((_BYTE *)this + 56) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  }
}
