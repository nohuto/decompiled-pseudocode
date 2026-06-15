/*
 * XREFs of ??_E?$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z @ 0x140013990
 * Callers:
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140013A50 (-Release@-$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     ??1CStreamGroup@@QEAA@XZ @ 0x140012810 (--1CStreamGroup@@QEAA@XZ.c)
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x140014630 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CStreamGroup *__fastcall ATL::CComObject<CStreamGroup>::`vector deleting destructor'(CStreamGroup *this, char a2)
{
  __int64 (__fastcall *v4)(CAudioDGModule *__hidden); // rsi

  *(_QWORD *)this = &ATL::CComObject<CStreamGroup>::`vftable'{for `IStreamGroup'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CStreamGroup>::`vftable'{for `IStreamGroupInternal'};
  *((_DWORD *)this + 4) = -1073741823;
  v4 = *(__int64 (__fastcall **)(CAudioDGModule *__hidden))(*(_QWORD *)ATL::_pAtlModule + 16LL);
  if ( v4 == CAudioDGModule::Unlock )
    CAudioDGModule::Unlock(ATL::_pAtlModule);
  else
    v4(ATL::_pAtlModule);
  CStreamGroup::~CStreamGroup(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
