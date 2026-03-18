/*
 * XREFs of ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x1800A6104
 * Callers:
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x1800A538C (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x18016C9A4 (--_GInteractionConfigurationGroup@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall InteractionConfigurationGroup::~InteractionConfigurationGroup(InteractionConfigurationGroup *this)
{
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 40);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 8);
}
