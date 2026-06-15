/*
 * XREFs of ??1?$CComObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x140031BB8
 * Callers:
 *     ??_E?$CComObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z @ 0x140031CB0 (--_E-$CComObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComObject<CVpoContext>::~CComObject<CVpoContext>(CVpoContext *this)
{
  *(_QWORD *)this = &ATL::CComObject<CVpoContext>::`vftable';
  *((_DWORD *)this + 2) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CVpoContext::~CVpoContext(this);
}
