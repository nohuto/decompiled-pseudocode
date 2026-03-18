/*
 * XREFs of ??_GCPayloadedAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x18000E9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPayloadedAnimationPrimitiveBuffer@@UEAA@XZ @ 0x18000E994 (--1CPayloadedAnimationPrimitiveBuffer@@UEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CPayloadedAnimationPrimitiveBuffer *__fastcall CPayloadedAnimationPrimitiveBuffer::`scalar deleting destructor'(
        CPayloadedAnimationPrimitiveBuffer *this,
        char a2)
{
  CPayloadedAnimationPrimitiveBuffer::~CPayloadedAnimationPrimitiveBuffer(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CPayloadedAnimationPrimitiveBuffer *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
