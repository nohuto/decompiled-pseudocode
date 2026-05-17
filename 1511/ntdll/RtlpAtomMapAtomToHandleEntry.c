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

__int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)RtlIsValidIndexHandle(a1 + 16, a2, &v3) )
    return *(_QWORD *)(v3 + 8);
  else
    return 0LL;
}
