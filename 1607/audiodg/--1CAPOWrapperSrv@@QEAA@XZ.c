/*
 * XREFs of ??1CAPOWrapperSrv@@QEAA@XZ @ 0x14000FEE4
 * Callers:
 *     ??_G?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x140010E80 (--_G-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z.c)
 *     _ATL::CComObject_CAPOWrapperSrv_::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x14001B657 (_ATL--CComObject_CAPOWrapperSrv_--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _ATL::CComCreator_ATL::CComObject_CAPOWrapperSrv___::CreateInstance_::_1_::dtor$1 @ 0x14001B77C (_ATL--CComCreator_ATL--CComObject_CAPOWrapperSrv___--CreateInstance_--_1_--dtor$1.c)
 *     ??1?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ @ 0x14003386C (--1-$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@QEAA@XZ @ 0x1400338CC (--1-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ?Release@CAPOExceptionWrapper@@UEAAKXZ @ 0x140010470 (-Release@CAPOExceptionWrapper@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAPOWrapperSrv::~CAPOWrapperSrv(CAPOWrapperSrv *this)
{
  char *v2; // rcx
  __int64 v3; // rcx
  CAPOExceptionWrapper *v4; // rcx
  void (*v5)(void); // rax

  v2 = (char *)*((_QWORD *)this + 12);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 12) = 0LL;
  }
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = (CAPOExceptionWrapper *)*((_QWORD *)this + 10);
  if ( v4 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 16LL);
    if ( (char *)v5 == (char *)CAPOExceptionWrapper::Release )
      CAPOExceptionWrapper::Release(v4);
    else
      v5();
  }
  if ( *((_BYTE *)this + 72) )
  {
    *((_BYTE *)this + 72) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
}
