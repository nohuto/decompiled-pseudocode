/*
 * XREFs of ValidateRegisterSymmetry @ 0x1C001593C
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C00150EC (ValidatePerfDomainSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x1C00158E0 (ValidatePctPtcSymmetry.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateRegisterSymmetry(_BYTE *a1, const void *a2)
{
  unsigned int v2; // eax

  v2 = 12;
  if ( *a1 == 10 )
    v2 = 4;
  return RtlCompareMemory(a1, a2, v2) == v2;
}
