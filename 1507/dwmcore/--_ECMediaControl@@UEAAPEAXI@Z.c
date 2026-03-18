/*
 * XREFs of ??_ECMediaControl@@UEAAPEAXI@Z @ 0x1800E0F00
 * Callers:
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x1800E10C0 (-Disconnect@CConnection@@QEAAXXZ.c)
 *     ?Create@CMediaControl@@SAJPEBGPEAPEAV1@@Z @ 0x18012898C (-Create@CMediaControl@@SAJPEBGPEAPEAV1@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CMediaControl@@UEAA@XZ @ 0x18012894C (--1CMediaControl@@UEAA@XZ.c)
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
