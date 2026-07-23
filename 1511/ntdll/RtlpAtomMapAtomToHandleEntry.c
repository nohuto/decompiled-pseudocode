/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x180044060
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x1800436F0 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x180043A00 (RtlDeleteAtomFromAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x180043D20 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x180043E60 (RtlpHashStringToAtom.c)
 *     RtlPinAtomInAtomTable @ 0x1800DA250 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x180044090 (RtlIsValidIndexHandle.c)
 */

_RTL_HANDLE_TABLE_ENTRY *__fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, ULONG a2)
{
  PRTL_HANDLE_TABLE_ENTRY Handle; // [rsp+30h] [rbp+8h] BYREF

  if ( RtlIsValidIndexHandle((PRTL_HANDLE_TABLE)(a1 + 16), a2, &Handle) )
    return Handle[1].NextFree;
  else
    return 0LL;
}
