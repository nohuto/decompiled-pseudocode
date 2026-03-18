/*
 * XREFs of ??_ECD3DBuffer@@MEAAPEAXI@Z @ 0x180134F20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DBuffer@@MEAA@XZ @ 0x18008D470 (--1CD3DBuffer@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CD3DBuffer *__fastcall CD3DBuffer::`vector deleting destructor'(CD3DBuffer *this, char a2)
{
  CD3DBuffer::~CD3DBuffer(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD3DBuffer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
