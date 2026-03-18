/*
 * XREFs of ??1CPayloadedAnimationPrimitiveBuffer@@UEAA@XZ @ 0x18001F174
 * Callers:
 *     ??_GCPayloadedAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x18001F1B0 (--_GCPayloadedAnimationPrimitiveBuffer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CPayloadedAnimationPrimitiveBuffer::~CPayloadedAnimationPrimitiveBuffer(
        CPayloadedAnimationPrimitiveBuffer *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)this = &CPayloadedAnimationPrimitiveBuffer::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 16, a2, a3);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
