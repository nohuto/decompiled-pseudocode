/*
 * XREFs of ??_ECD3DConstantBuffer@@MEAAPEAXI@Z @ 0x180138B10
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CD3DConstantBuffer@@MEAA@XZ @ 0x180138AD8 (--1CD3DConstantBuffer@@MEAA@XZ.c)
 */

CD3DConstantBuffer *__fastcall CD3DConstantBuffer::`vector deleting destructor'(CD3DConstantBuffer *this, char a2)
{
  CD3DConstantBuffer::~CD3DConstantBuffer(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD3DConstantBuffer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
