/*
 * XREFs of ??1?$CComAggObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x140031B44
 * Callers:
 *     ??_E?$CComAggObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z @ 0x140031C70 (--_E-$CComAggObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComAggObject<CVpoContext>::~CComAggObject<CVpoContext>(__int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CVpoContext>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CVpoContext::~CVpoContext((CVpoContext *)(a1 + 24));
}
