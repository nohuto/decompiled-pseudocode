/*
 * XREFs of ??1CAPOWrapperSrv@@QEAA@XZ @ 0x18008B198
 * Callers:
 *     _ATL::CComObject_CAPOWrapperSrv_::CComObject_CAPOWrapperSrv__::_1_::dtor$0 @ 0x180084030 (_ATL--CComObject_CAPOWrapperSrv_--CComObject_CAPOWrapperSrv__--_1_--dtor$0.c)
 *     ??1?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ @ 0x180084044 (--1-$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@QEAA@XZ @ 0x1800840A4 (--1-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ @ 0x1800840B0 (--1-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CAPOWrapperSrv_::_CComObject_CAPOWrapperSrv__::_1_::dtor$0 @ 0x18008410F (_ATL--CComObject_CAPOWrapperSrv_--_CComObject_CAPOWrapperSrv__--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAPOWrapperSrv::~CAPOWrapperSrv(CAPOWrapperSrv *this)
{
  char *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = (char *)*((_QWORD *)this + 12);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 12) = 0LL;
  }
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( *((_BYTE *)this + 72) )
  {
    *((_BYTE *)this + 72) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
}
