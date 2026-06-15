/*
 * XREFs of ??1?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ @ 0x14003386C
 * Callers:
 *     ??_G?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x1400338E0 (--_G-$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComAggObject<CAPOWrapperSrv>::~CComAggObject<CAPOWrapperSrv>(__int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CAPOWrapperSrv>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CAPOWrapperSrv::~CAPOWrapperSrv((CAPOWrapperSrv *)(a1 + 24));
}
