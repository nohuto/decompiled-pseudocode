/*
 * XREFs of IsValidAcpiGenericAddress @ 0x1C0013424
 * Callers:
 *     InitAcpi1ThrottleStates @ 0x1C001339C (InitAcpi1ThrottleStates.c)
 *     ValidateAcpiCStates @ 0x1C00135BC (ValidateAcpiCStates.c)
 *     DecodeMWaitCState @ 0x1C0016660 (DecodeMWaitCState.c)
 *     InitAcpi1CStates @ 0x1C00207EC (InitAcpi1CStates.c)
 * Callees:
 *     <none>
 */

char __fastcall IsValidAcpiGenericAddress(unsigned __int8 *a1)
{
  unsigned __int8 v1; // al
  char v2; // r8
  int v3; // eax
  unsigned __int8 v4; // al

  v1 = *a1;
  v2 = 1;
  if ( !*a1 )
  {
LABEL_6:
    v4 = a1[1];
    if ( v4 && v4 + a1[2] <= a1[3] )
      return v2;
    return 0;
  }
  if ( v1 == 1 )
  {
    if ( *((_DWORD *)a1 + 2) )
      return 0;
    v3 = *((_DWORD *)a1 + 1);
    if ( (v3 & 0xFFFF0000) != 0 || !v3 )
      return 0;
    goto LABEL_6;
  }
  if ( v1 <= 1u || v1 > 4u && v1 != 10 && v1 != 127 )
    return 0;
  return v2;
}
