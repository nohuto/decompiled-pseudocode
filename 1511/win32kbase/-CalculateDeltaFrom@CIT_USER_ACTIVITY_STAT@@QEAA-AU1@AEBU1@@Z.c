/*
 * XREFs of ?CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEAA?AU1@AEBU1@@Z @ 0x1C0047A38
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0049518 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(unsigned int *a1, unsigned int *a2, _DWORD *a3)
{
  unsigned int v3; // r9d
  unsigned int v5; // r11d
  unsigned int v7; // edx
  unsigned int v9; // eax
  unsigned int v10; // ecx

  v3 = *a1;
  *a2 = 0;
  v5 = v3 - *a3;
  a2[1] = 0;
  if ( v3 < *a3 )
  {
    v9 = *a2;
    v10 = -1;
    if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                          - qword_1C01071C0) <= 0xFFFFFFFF )
      v10 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
          - qword_1C01071C0;
    if ( v5 <= v10 )
      v9 = v5;
    *a2 = v9;
  }
  else
  {
    *a2 = v5;
  }
  v7 = a3[1] & 0x7FFFFFFF;
  if ( (a1[1] & 0x7FFFFFFF) > v7 )
    a2[1] = (a1[1] - v7) & 0x7FFFFFFF;
  return a2;
}
