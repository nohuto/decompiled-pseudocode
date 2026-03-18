/*
 * XREFs of RawDeleteVcb @ 0x1404940E4
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1400D0B18 (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x1401F6170 (RawCheckForDeleteVolume.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  ObfDereferenceObject(*(PVOID *)(a1 + 176));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
