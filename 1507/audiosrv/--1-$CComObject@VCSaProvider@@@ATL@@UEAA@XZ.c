/*
 * XREFs of ??1?$CComObject@VCSaProvider@@@ATL@@UEAA@XZ @ 0x180073798
 * Callers:
 *     ??_E?$CComObject@VCSaProvider@@@ATL@@UEAAPEAXI@Z @ 0x180073AF0 (--_E-$CComObject@VCSaProvider@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComObject<CSaProvider>::~CComObject<CSaProvider>(CSaProvider *this)
{
  *(_QWORD *)this = &ATL::CComObject<CSaProvider>::`vftable';
  *((_DWORD *)this + 2) = -1073741823;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSaProvider::~CSaProvider(this);
}
