/*
 * XREFs of WheapApplyThresholdChecks @ 0x1402303DC
 * Callers:
 *     WheaReportHwError @ 0x140230000 (WheaReportHwError.c)
 * Callees:
 *     <none>
 */

char __fastcall WheapApplyThresholdChecks(__int64 a1)
{
  int v2; // eax
  unsigned __int8 *v3; // rcx
  unsigned int v4; // r10d
  unsigned int v5; // r11d
  __int64 v6; // rcx

  ++*(_DWORD *)(a1 + 84);
  v2 = *(_DWORD *)(a1 + 97);
  if ( v2 == 1 )
  {
    v3 = (unsigned __int8 *)(a1 + 137);
  }
  else
  {
    if ( v2 == 2 || v2 == 4 || v2 != 5 && v2 != 8 && (v2 <= 11 || v2 > 13) )
      return 1;
    v3 = (unsigned __int8 *)(a1 + 153);
  }
  if ( v3 && (*v3 == 1 || *v3 == 2 || *v3 == 3 || *v3 == 4 || *v3 == 8 || (unsigned int)*v3 - 9 <= 1) )
  {
    v4 = *((_DWORD *)v3 + 5);
    v5 = *((_DWORD *)v3 + 6);
    if ( v4 > 1 )
    {
      v6 = MEMORY[0xFFFFF78000000320];
      if ( v5
        && KeMaximumIncrement * (MEMORY[0xFFFFF78000000320] - *(_QWORD *)(a1 + 72)) / 10000000LL > (unsigned __int64)v5 )
      {
        *(_DWORD *)(a1 + 80) = 1;
        *(_QWORD *)(a1 + 72) = v6;
        return 0;
      }
      if ( ++*(_DWORD *)(a1 + 80) < v4 )
        return 0;
      *(_DWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 72) = v6;
    }
  }
  return 1;
}
