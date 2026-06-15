/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x18000A3C0
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$1 @ 0x18002210D (_CApplication--CApplication_--_1_--dtor$1.c)
 *     _CApplication::CApplication_::_1_::dtor$4 @ 0x18002213D (_CApplication--CApplication_--_1_--dtor$4.c)
 *     _CApplication::CApplication_::_1_::dtor$5 @ 0x180022150 (_CApplication--CApplication_--_1_--dtor$5.c)
 *     _CApplication::CApplication_::_1_::dtor$6 @ 0x180022163 (_CApplication--CApplication_--_1_--dtor$6.c)
 *     _CApplication::CApplication_::_1_::dtor$7 @ 0x180022176 (_CApplication--CApplication_--_1_--dtor$7.c)
 *     _CApplication::CApplication_::_1_::dtor$8 @ 0x180022189 (_CApplication--CApplication_--_1_--dtor$8.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x1800221A8 (_CApplication--_scalar_deleting_destructor__--_1_--dtor$1.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$4 @ 0x1800221D8 (_CApplication--_scalar_deleting_destructor__--_1_--dtor$4.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$5 @ 0x1800221EB (_CApplication--_scalar_deleting_destructor__--_1_--dtor$5.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$6 @ 0x1800221FE (_CApplication--_scalar_deleting_destructor__--_1_--dtor$6.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$7 @ 0x180022211 (_CApplication--_scalar_deleting_destructor__--_1_--dtor$7.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$8 @ 0x180022224 (_CApplication--_scalar_deleting_destructor__--_1_--dtor$8.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$9 @ 0x180022237 (_CApplication--_scalar_deleting_destructor__--_1_--dtor$9.c)
 *     _CProcess::CProcess_::_1_::dtor$1 @ 0x1800223AB (_CProcess--CProcess_--_1_--dtor$1.c)
 *     _CProcess::CProcess_::_1_::dtor$3 @ 0x1800223CB (_CProcess--CProcess_--_1_--dtor$3.c)
 *     _CProcess::CProcess_::_1_::dtor$8 @ 0x180022427 (_CProcess--CProcess_--_1_--dtor$8.c)
 *     _CProcess::CProcess_::_1_::dtor$9 @ 0x18002243A (_CProcess--CProcess_--_1_--dtor$9.c)
 *     _CProcess::_CProcess_::_1_::dtor$1 @ 0x18002249E (_CProcess--_CProcess_--_1_--dtor$1.c)
 *     _CProcess::_CProcess_::_1_::dtor$3 @ 0x1800224BE (_CProcess--_CProcess_--_1_--dtor$3.c)
 *     _CProcess::_CProcess_::_1_::dtor$8 @ 0x18002251A (_CProcess--_CProcess_--_1_--dtor$8.c)
 *     _CProcess::_CProcess_::_1_::dtor$9 @ 0x18002252D (_CProcess--_CProcess_--_1_--dtor$9.c)
 *     _CProcess::_CProcess_::_1_::dtor$10 @ 0x180022540 (_CProcess--_CProcess_--_1_--dtor$10.c)
 *     _CApplicationManager::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x18002262C (_CApplicationManager--_scalar_deleting_destructor__--_1_--dtor$1.c)
 *     _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$5 @ 0x1800229CF (_TSSession--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
