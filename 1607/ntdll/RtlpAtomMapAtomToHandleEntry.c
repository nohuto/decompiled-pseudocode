/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x180068268
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x1800678B0 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x180067C00 (RtlDeleteAtomFromAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x180067F20 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x180068060 (RtlpHashStringToAtom.c)
 *     RtlPinAtomInAtomTable @ 0x1800E2EE0 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x1800682A0 (RtlIsValidIndexHandle.c)
 */

__int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)RtlIsValidIndexHandle(a1 + 16, a2, &v3) )
    return *(_QWORD *)(v3 + 8);
  else
    return 0LL;
}
