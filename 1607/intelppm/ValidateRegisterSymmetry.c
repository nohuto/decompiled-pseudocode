/*
 * XREFs of ValidateRegisterSymmetry @ 0x1C0013C88
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C001328C (ValidatePerfDomainSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x1C0013C2C (ValidatePctPtcSymmetry.c)
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
