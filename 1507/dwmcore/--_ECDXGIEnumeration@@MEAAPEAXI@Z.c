/*
 * XREFs of ??_ECDXGIEnumeration@@MEAAPEAXI@Z @ 0x18008E200
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDXGIEnumeration@@MEAA@XZ @ 0x18008E258 (--1CDXGIEnumeration@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CDXGIEnumeration *__fastcall CDXGIEnumeration::`vector deleting destructor'(CDXGIEnumeration *this, char a2)
{
  CDXGIEnumeration::~CDXGIEnumeration(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDXGIEnumeration *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
