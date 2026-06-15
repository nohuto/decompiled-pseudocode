/*
 * XREFs of ??1?$CComObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x140016864
 * Callers:
 *     ??_E?$CComObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z @ 0x140016750 (--_E-$CComObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x140014630 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComObject<CVpoContext>::~CComObject<CVpoContext>(CVpoContext *this)
{
  __int64 (__fastcall *v2)(CAudioDGModule *); // rsi

  *(_QWORD *)this = &ATL::CComObject<CVpoContext>::`vftable';
  *((_DWORD *)this + 2) = -1073741823;
  v2 = *(__int64 (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL);
  if ( v2 == CAudioDGModule::Unlock )
    CAudioDGModule::Unlock(ATL::_pAtlModule);
  else
    v2(ATL::_pAtlModule);
  CVpoContext::~CVpoContext(this);
}
