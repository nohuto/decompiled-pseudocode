/*
 * XREFs of RawDeleteVcb @ 0x140475114
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1400072F8 (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x1402104BC (RawCheckForDeleteVolume.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  ObfDereferenceObject(*(PVOID *)(a1 + 176));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
