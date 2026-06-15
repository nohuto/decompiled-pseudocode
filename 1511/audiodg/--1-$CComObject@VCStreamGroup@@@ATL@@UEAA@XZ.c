/*
 * XREFs of ??1?$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140008E84
 * Callers:
 *     ??_E?$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z @ 0x140008D70 (--_E-$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x140008530 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComObject<CStreamGroup>::~CComObject<CStreamGroup>(CStreamGroup *this)
{
  __int64 (__fastcall *v2)(CAudioDGModule *); // rsi

  *(_QWORD *)this = &ATL::CComObject<CStreamGroup>::`vftable'{for `IStreamGroup'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CStreamGroup>::`vftable'{for `IStreamGroupInternal'};
  *((_DWORD *)this + 4) = -1073741823;
  v2 = *(__int64 (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL);
  if ( v2 == CAudioDGModule::Unlock )
    CAudioDGModule::Unlock(ATL::_pAtlModule);
  else
    v2(ATL::_pAtlModule);
  CStreamGroup::~CStreamGroup(this);
}
