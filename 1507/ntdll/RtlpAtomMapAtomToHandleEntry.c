/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x180052590
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x180051F30 (RtlDeleteAtomFromAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x180052250 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x180052390 (RtlpHashStringToAtom.c)
 *     RtlQueryAtomInAtomTable @ 0x180052A30 (RtlQueryAtomInAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1800D1D30 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x1800525C0 (RtlIsValidIndexHandle.c)
 */

_RTL_HANDLE_TABLE_ENTRY *__fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, ULONG a2)
{
  PRTL_HANDLE_TABLE_ENTRY Handle; // [rsp+30h] [rbp+8h] BYREF

  if ( RtlIsValidIndexHandle((PRTL_HANDLE_TABLE)(a1 + 16), a2, &Handle) )
    return Handle[1].NextFree;
  else
    return 0LL;
}
