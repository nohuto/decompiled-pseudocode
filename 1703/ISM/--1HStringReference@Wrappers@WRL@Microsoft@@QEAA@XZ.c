/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180043930
 * Callers:
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$2 @ 0x1800A1D32 (_SpectrumListener--SpectrumListener_--_1_--dtor$2.c)
 *     _WGIRawInputProvider::_WGIRawInputProvider_::_1_::dtor$7 @ 0x1800A218C (_WGIRawInputProvider--_WGIRawInputProvider_--_1_--dtor$7.c)
 *     _WGIRawInputProvider::StartUINavigationControllerWatcher_::_1_::dtor$5 @ 0x1800A22BF (_WGIRawInputProvider--StartUINavigationControllerWatcher_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
