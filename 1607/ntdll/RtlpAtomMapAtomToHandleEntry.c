/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x180068258
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x1800678A0 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x180067BF0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x180067F10 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x180068050 (RtlpHashStringToAtom.c)
 *     RtlPinAtomInAtomTable @ 0x1800E2FA0 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x180068290 (RtlIsValidIndexHandle.c)
 */

_RTL_HANDLE_TABLE_ENTRY *__fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, ULONG a2)
{
  PRTL_HANDLE_TABLE_ENTRY Handle; // [rsp+30h] [rbp+8h] BYREF

  if ( RtlIsValidIndexHandle((PRTL_HANDLE_TABLE)(a1 + 16), a2, &Handle) )
    return Handle[1].NextFree;
  else
    return 0LL;
}
