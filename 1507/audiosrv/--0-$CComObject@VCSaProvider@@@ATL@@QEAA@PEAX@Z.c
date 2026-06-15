/*
 * XREFs of ??0?$CComObject@VCSaProvider@@@ATL@@QEAA@PEAX@Z @ 0x18002E268
 * Callers:
 *     ?CreateInstance@?$CComObject@VCSaProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x18002DF24 (-CreateInstance@-$CComObject@VCSaProvider@@@ATL@@SAJPEAPEAV12@@Z.c)
 * Callees:
 *     ??0CSaProvider@@QEAA@XZ @ 0x18002E2E8 (--0CSaProvider@@QEAA@XZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
CSaProvider *__fastcall ATL::CComObject<CSaProvider>::CComObject<CSaProvider>(CSaProvider *a1)
{
  CSaProvider::CSaProvider(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CSaProvider>::`vftable';
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
