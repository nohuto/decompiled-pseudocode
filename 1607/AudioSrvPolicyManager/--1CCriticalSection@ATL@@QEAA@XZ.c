/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x18000A648
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$1 @ 0x180025294 (_CApplication--CApplication_--_1_--dtor$1.c)
 *     _CApplication::CApplication_::_1_::dtor$3 @ 0x1800252B4 (_CApplication--CApplication_--_1_--dtor$3.c)
 *     _CApplication::CApplication_::_1_::dtor$4 @ 0x1800252C7 (_CApplication--CApplication_--_1_--dtor$4.c)
 *     _CApplication::CApplication_::_1_::dtor$5 @ 0x1800252DA (_CApplication--CApplication_--_1_--dtor$5.c)
 *     _CApplication::CApplication_::_1_::dtor$6 @ 0x1800252ED (_CApplication--CApplication_--_1_--dtor$6.c)
 *     _CApplication::CApplication_::_1_::dtor$7 @ 0x180025300 (_CApplication--CApplication_--_1_--dtor$7.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x180025325 (_CApplication--_scalar_deleting_destructor__--_1_--dtor$1.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x180025345 (_CApplication--_scalar_deleting_destructor__--_1_--dtor$3.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$4 @ 0x180025358 (_CApplication--_scalar_deleting_destructor__--_1_--dtor$4.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$5 @ 0x18002536B (_CApplication--_scalar_deleting_destructor__--_1_--dtor$5.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$6 @ 0x18002537E (_CApplication--_scalar_deleting_destructor__--_1_--dtor$6.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$7 @ 0x180025391 (_CApplication--_scalar_deleting_destructor__--_1_--dtor$7.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$8 @ 0x1800253A4 (_CApplication--_scalar_deleting_destructor__--_1_--dtor$8.c)
 *     _CProcess::CProcess_::_1_::dtor$1 @ 0x1800254F7 (_CProcess--CProcess_--_1_--dtor$1.c)
 *     _CProcess::CProcess_::_1_::dtor$3 @ 0x180025517 (_CProcess--CProcess_--_1_--dtor$3.c)
 *     _CProcess::CProcess_::_1_::dtor$8 @ 0x180025573 (_CProcess--CProcess_--_1_--dtor$8.c)
 *     _CProcess::_CProcess_::_1_::dtor$1 @ 0x1800255E3 (_CProcess--_CProcess_--_1_--dtor$1.c)
 *     _CProcess::_CProcess_::_1_::dtor$3 @ 0x180025603 (_CProcess--_CProcess_--_1_--dtor$3.c)
 *     _CProcess::_CProcess_::_1_::dtor$8 @ 0x18002565F (_CProcess--_CProcess_--_1_--dtor$8.c)
 *     _CProcess::_CProcess_::_1_::dtor$9 @ 0x180025672 (_CProcess--_CProcess_--_1_--dtor$9.c)
 *     _CApplicationManager::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x180025771 (_CApplicationManager--_scalar_deleting_destructor__--_1_--dtor$1.c)
 *     _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$5 @ 0x180025B5D (_TSSession--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
