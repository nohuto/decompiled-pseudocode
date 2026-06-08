/*
 * XREFs of ValidateAcpiThrottleStates @ 0x1C001C9F4
 * Callers:
 *     InitAcpiThrottleStates @ 0x1C0015A24 (InitAcpiThrottleStates.c)
 * Callees:
 *     Validate_PCT_PTC @ 0x1C0015994 (Validate_PCT_PTC.c)
 */

__int64 __fastcall ValidateAcpiThrottleStates(unsigned __int8 *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v4; // r9
  _DWORD *v5; // rcx
  __int64 result; // rax
  _DWORD *v7; // r8

  *a3 = 0;
  if ( !a1 || !a2 )
    return 3221225473LL;
  if ( *a2 > 1u )
  {
    v4 = 0LL;
    v5 = a2 + 7;
    while ( *(v5 - 1) < a2[5 * v4 + 1] && *v5 <= a2[5 * v4 + 2] )
    {
      v4 = (unsigned int)(v4 + 1);
      v5 += 5;
      if ( (unsigned int)(v4 + 1) >= *a2 )
        goto LABEL_8;
    }
    goto LABEL_11;
  }
LABEL_8:
  if ( a2[1] != 100 )
  {
LABEL_11:
    *a3 = 2048;
    return 3221225473LL;
  }
  result = Validate_PCT_PTC(a1);
  if ( (int)result < 0 )
    *v7 = 1024;
  return result;
}
