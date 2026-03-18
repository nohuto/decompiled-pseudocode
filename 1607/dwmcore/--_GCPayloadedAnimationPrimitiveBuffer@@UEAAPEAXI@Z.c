/*
 * XREFs of ??_GCPayloadedAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x18001F1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPayloadedAnimationPrimitiveBuffer@@UEAA@XZ @ 0x18001F174 (--1CPayloadedAnimationPrimitiveBuffer@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CPayloadedAnimationPrimitiveBuffer *__fastcall CPayloadedAnimationPrimitiveBuffer::`scalar deleting destructor'(
        CPayloadedAnimationPrimitiveBuffer *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl

  v3 = a2;
  CPayloadedAnimationPrimitiveBuffer::~CPayloadedAnimationPrimitiveBuffer(this, a2, a3);
  if ( (v3 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CPayloadedAnimationPrimitiveBuffer *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
