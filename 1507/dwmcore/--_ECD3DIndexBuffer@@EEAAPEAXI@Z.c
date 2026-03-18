/*
 * XREFs of ??_ECD3DIndexBuffer@@EEAAPEAXI@Z @ 0x18008D410
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DBuffer@@MEAA@XZ @ 0x18008D470 (--1CD3DBuffer@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CD3DIndexBuffer *__fastcall CD3DIndexBuffer::`vector deleting destructor'(CD3DIndexBuffer *this, char a2)
{
  *(_QWORD *)this = &CD3DIndexBuffer::`vftable';
  CD3DBuffer::~CD3DBuffer(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD3DIndexBuffer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
