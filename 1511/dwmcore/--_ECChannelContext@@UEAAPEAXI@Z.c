/*
 * XREFs of ??_ECChannelContext@@UEAAPEAXI@Z @ 0x1800A43C0
 * Callers:
 *     ?Create@CChannelContext@@SAJIPEAUIMilNotificationTransport@@PEAPEAV1@@Z @ 0x1800A4700 (-Create@CChannelContext@@SAJIPEAUIMilNotificationTransport@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CChannelContext@@UEAA@XZ @ 0x1800A4294 (--1CChannelContext@@UEAA@XZ.c)
 */

CChannelContext *__fastcall CChannelContext::`vector deleting destructor'(CChannelContext *this, char a2)
{
  CChannelContext::~CChannelContext(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CChannelContext *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
