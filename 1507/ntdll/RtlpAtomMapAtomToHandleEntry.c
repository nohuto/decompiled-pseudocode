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

__int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)RtlIsValidIndexHandle(a1 + 16, a2, &v3) )
    return *(_QWORD *)(v3 + 8);
  else
    return 0LL;
}
