/*
 * XREFs of ??_ECMediaControl@@UEAAPEAXI@Z @ 0x1800FF620
 * Callers:
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x1800FF7E0 (-Disconnect@CConnection@@QEAAXXZ.c)
 *     ?Create@CMediaControl@@SAJPEBGPEAPEAV1@@Z @ 0x18013EA9C (-Create@CMediaControl@@SAJPEBGPEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CMediaControl@@UEAA@XZ @ 0x18013EA5C (--1CMediaControl@@UEAA@XZ.c)
 */

CMediaControl *__fastcall CMediaControl::`vector deleting destructor'(CMediaControl *this, char a2)
{
  CMediaControl::~CMediaControl(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMediaControl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
