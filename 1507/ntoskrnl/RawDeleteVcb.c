/*
 * XREFs of RawDeleteVcb @ 0x14040E054
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1400067CC (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x140244E14 (RawCheckForDeleteVolume.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  ObfDereferenceObject(*(PVOID *)(a1 + 176));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
