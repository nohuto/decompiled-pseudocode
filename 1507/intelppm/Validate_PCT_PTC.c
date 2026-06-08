/*
 * XREFs of Validate_PCT_PTC @ 0x1C001324C
 * Callers:
 *     ValidateAcpi2PStates @ 0x1C00131E0 (ValidateAcpi2PStates.c)
 *     ValidateAcpiThrottleStates @ 0x1C001B2A0 (ValidateAcpiThrottleStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Validate_PCT_PTC(unsigned __int8 *a1)
{
  unsigned int v1; // edx
  int v2; // ecx

  v1 = -1073741637;
  if ( !*((_QWORD *)a1 + 2) || *a1 == a1[12] )
  {
    v2 = *a1 - 1;
    if ( !v2 || v2 == 126 )
      return 0;
  }
  return v1;
}
