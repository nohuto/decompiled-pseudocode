/*
 * XREFs of Validate_PCT_PTC @ 0x1C0015994
 * Callers:
 *     ValidateAcpi2PStates @ 0x1C0015928 (ValidateAcpi2PStates.c)
 *     ValidateAcpiThrottleStates @ 0x1C001C9F4 (ValidateAcpiThrottleStates.c)
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
