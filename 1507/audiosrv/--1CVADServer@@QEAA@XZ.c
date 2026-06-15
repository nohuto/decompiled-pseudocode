/*
 * XREFs of ??1CVADServer@@QEAA@XZ @ 0x180066C78
 * Callers:
 *     _ATL::CComObject_CVADServer_::CreateInstance_::_1_::dtor$1 @ 0x180045A42 (_ATL--CComObject_CVADServer_--CreateInstance_--_1_--dtor$1.c)
 *     _ATL::CComObject_CVADServer_::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x180045B30 (_ATL--CComObject_CVADServer_--_scalar_deleting_destructor__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18000BB2C (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 */

void __fastcall CVADServer::~CVADServer(CVADServer *this)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 30) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 29) - 24LL));
  CoTaskMemFree(*((LPVOID *)this + 26));
  *((_QWORD *)this + 26) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 25));
  *((_QWORD *)this + 25) = 0LL;
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
