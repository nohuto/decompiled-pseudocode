/*
 * XREFs of ??1CVADServer@@QEAA@XZ @ 0x1800650C4
 * Callers:
 *     _ATL::CComObject_CVADServer_::CreateInstance_::_1_::dtor$1 @ 0x18004A9FB (_ATL--CComObject_CVADServer_--CreateInstance_--_1_--dtor$1.c)
 *     _ATL::CComObject_CVADServer_::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x18004B910 (_ATL--CComObject_CVADServer_--_scalar_deleting_destructor__--_1_--dtor$0.c)
 * Callees:
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180014328 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 */

void __fastcall CVADServer::~CVADServer(CVADServer *this)
{
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
