/*
 * XREFs of ??_G?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x140010E80
 * Callers:
 *     ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x140010F20 (-Release@-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     ??1CAPOWrapperSrv@@QEAA@XZ @ 0x14000FEE4 (--1CAPOWrapperSrv@@QEAA@XZ.c)
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x140011DC0 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CAPOWrapperSrv *__fastcall ATL::CComObject<CAPOWrapperSrv>::`scalar deleting destructor'(CAPOWrapperSrv *this, char a2)
{
  __int64 (__fastcall *v4)(CAudioDGModule *__hidden); // rax

  *(_QWORD *)this = &ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAPOWrapperSrv'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioSystemEffects2'};
  *((_DWORD *)this + 6) = -1073741823;
  v4 = *(__int64 (__fastcall **)(CAudioDGModule *__hidden))(*(_QWORD *)ATL::_pAtlModule + 16LL);
  if ( v4 == CAudioDGModule::Unlock )
    CAudioDGModule::Unlock(ATL::_pAtlModule);
  else
    v4(ATL::_pAtlModule);
  CAPOWrapperSrv::~CAPOWrapperSrv(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
