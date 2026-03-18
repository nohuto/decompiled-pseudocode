/*
 * XREFs of VfThunkInit @ 0x14074ADA8
 * Callers:
 *     VfInitBootDriversLoaded @ 0x14074AA04 (VfInitBootDriversLoaded.c)
 * Callees:
 *     RtlSetAllBits @ 0x1400F9D20 (RtlSetAllBits.c)
 */

void VfThunkInit()
{
  VfRegularThunksBitMapHeader.SizeOfBitMap = 224;
  VfRegularThunksBitMapHeader.Buffer = (unsigned int *)&VfRegularThunksBitMap;
  RtlSetAllBits(&VfRegularThunksBitMapHeader);
  VfPoolThunksBitMapHeader.SizeOfBitMap = 32;
  VfPoolThunksBitMapHeader.Buffer = (unsigned int *)&VfPoolThunksBitMap;
  RtlSetAllBits(&VfPoolThunksBitMapHeader);
  VfOrderDependentThunksBitMapHeader.SizeOfBitMap = 64;
  VfOrderDependentThunksBitMapHeader.Buffer = (unsigned int *)&VfOrderDependentThunksBitMap;
  RtlSetAllBits(&VfOrderDependentThunksBitMapHeader);
  VfXdvThunksBitMapHeader.SizeOfBitMap = 320;
  VfXdvThunksBitMapHeader.Buffer = (unsigned int *)&VfXdvThunksBitMap;
  RtlSetAllBits(&VfXdvThunksBitMapHeader);
}
