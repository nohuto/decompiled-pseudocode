/*
 * XREFs of ??_GCDXGIAdapterLimited@@EEAAPEAXI@Z @ 0x18006AFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CDXGIAdapterLimited@@EEAA@XZ @ 0x18006B570 (--1CDXGIAdapterLimited@@EEAA@XZ.c)
 */

CDXGIAdapterLimited *__fastcall CDXGIAdapterLimited::`scalar deleting destructor'(CDXGIAdapterLimited *this, char a2)
{
  CDXGIAdapterLimited::~CDXGIAdapterLimited(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDXGIAdapterLimited *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
