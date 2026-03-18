/*
 * XREFs of ??1CPayloadedAnimationPrimitiveBuffer@@UEAA@XZ @ 0x18000E994
 * Callers:
 *     ??_GCPayloadedAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x18000E9D0 (--_GCPayloadedAnimationPrimitiveBuffer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CPayloadedAnimationPrimitiveBuffer::~CPayloadedAnimationPrimitiveBuffer(
        CPayloadedAnimationPrimitiveBuffer *this)
{
  *(_QWORD *)this = &CPayloadedAnimationPrimitiveBuffer::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 16);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
