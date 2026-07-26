/*
 * XREFs of ndisVerifierGetRoutineAddress @ 0x1C00D6450
 * Callers:
 *     <none>
 * Callees:
 *     NdisGetRoutineAddress @ 0x1C00B1370 (NdisGetRoutineAddress.c)
 */

PVOID __fastcall ndisVerifierGetRoutineAddress(PNDIS_STRING NdisRoutineName)
{
  __int64 v2; // rbx

  v2 = 0LL;
  while ( !RtlEqualUnicodeString(NdisRoutineName, (PCUNICODE_STRING)&asc_1C0076880[12 * v2], 1u) )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= 0x11 )
      return NdisGetRoutineAddress(NdisRoutineName);
  }
  return *(PVOID *)&asc_1C0076880[12 * v2 + 8];
}
