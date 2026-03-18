/*
 * XREFs of ObpDereferenceNamedObject @ 0x14000C074
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140405EE0 (ObpInsertOrLocateNamedObject.c)
 *     ObOpenObjectByNameEx @ 0x140419070 (ObOpenObjectByNameEx.c)
 * Callees:
 *     ObpDeleteNameCheck @ 0x140406620 (ObpDeleteNameCheck.c)
 */

LONG_PTR __fastcall ObpDereferenceNamedObject(__int64 a1)
{
  if ( _InterlockedExchangeAdd(
         (volatile signed __int32 *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 3] + 24),
         0xFFFFFFFF) == 1 )
    ObpDeleteNameCheck(a1);
  return ObfDereferenceObjectWithTag((PVOID)(a1 + 48), 0x746C6644u);
}
