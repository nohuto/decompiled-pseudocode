/*
 * XREFs of RtlpQueryPhysicalMemoryPolicy @ 0x18001B120
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18001B0C8 (RtlQueryResourcePolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpQueryPhysicalMemoryPolicy(int *a1)
{
  int v1; // eax
  int v3; // edx

  if ( (_BYTE)RtlpUserPolicies )
  {
    v3 = (unsigned __int8)RtlpUserPolicies;
    goto LABEL_12;
  }
  if ( (MEMORY[0x7FFE02D0] & 0x10000) == 0 )
  {
    if ( MEMORY[0x7FFE0268] != (_BYTE)RtlpUserPolicies && MEMORY[0x7FFE0264] == 1 )
    {
      v1 = 10;
      if ( MEMORY[0x7FFE02E8] > 0x51400u )
        v1 = 20;
      goto LABEL_7;
    }
    v3 = 20;
LABEL_12:
    *a1 = v3;
    return 0LL;
  }
  v1 = 10;
LABEL_7:
  *a1 = v1;
  return 0LL;
}
