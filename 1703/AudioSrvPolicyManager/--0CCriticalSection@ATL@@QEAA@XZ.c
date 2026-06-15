/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18000A3F4
 * Callers:
 *     PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__ @ 0x180001140 (PickerHostContextManager--_dynamic_initializer_for__s_csPickerHostContextList__.c)
 *     _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001160 (_dynamic_initializer_for__s_HostedAppInteractivityManager__.c)
 *     ??0CDuckingManager@@AEAA@XZ @ 0x180005F9C (--0CDuckingManager@@AEAA@XZ.c)
 *     ??0CApplication@@IEAA@K@Z @ 0x18000A7B8 (--0CApplication@@IEAA@K@Z.c)
 *     ??0CProcess@@IEAA@XZ @ 0x18000D518 (--0CProcess@@IEAA@XZ.c)
 *     ?CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z @ 0x180010E64 (-CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x180018DFC (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A3D0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
