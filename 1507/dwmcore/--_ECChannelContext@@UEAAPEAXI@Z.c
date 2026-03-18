/*
 * XREFs of ??_ECChannelContext@@UEAAPEAXI@Z @ 0x180062D30
 * Callers:
 *     ?Create@CChannelContext@@SAJIPEAUIMilNotificationTransport@@PEAPEAV1@@Z @ 0x180062AD8 (-Create@CChannelContext@@SAJIPEAUIMilNotificationTransport@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1CChannelContext@@UEAA@XZ @ 0x180062C04 (--1CChannelContext@@UEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
