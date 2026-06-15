/*
 * XREFs of ??1?$CComObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x1400012D4
 * Callers:
 *     ??_E?$CComObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z @ 0x1400011C0 (--_E-$CComObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x140008530 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComObject<CVpoContext>::~CComObject<CVpoContext>(CVpoContext *this)
{
  __int64 (__fastcall *v2)(CAudioDGModule *__hidden); // rsi

  *(_QWORD *)this = &ATL::CComObject<CVpoContext>::`vftable';
  *((_DWORD *)this + 2) = -1073741823;
  v2 = *(__int64 (__fastcall **)(CAudioDGModule *__hidden))(*(_QWORD *)ATL::_pAtlModule + 16LL);
  if ( v2 == CAudioDGModule::Unlock )
    CAudioDGModule::Unlock(ATL::_pAtlModule);
  else
    v2(ATL::_pAtlModule);
  CVpoContext::~CVpoContext(this);
}
