/*
 * XREFs of WheapApplyThresholdChecks @ 0x140266AA4
 * Callers:
 *     WheaReportHwError @ 0x1402666C8 (WheaReportHwError.c)
 * Callees:
 *     <none>
 */

char __fastcall WheapApplyThresholdChecks(__int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  unsigned __int8 *v6; // rcx
  unsigned int v7; // r10d
  unsigned int v8; // r11d
  __int64 v9; // rcx

  ++*(_DWORD *)(a1 + 84);
  v2 = *(_DWORD *)(a1 + 97) - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
      return 1;
    v4 = v3 - 2;
    if ( !v4 )
      return 1;
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 3 )
        return 1;
    }
    v6 = (unsigned __int8 *)(a1 + 153);
  }
  else
  {
    v6 = (unsigned __int8 *)(a1 + 137);
  }
  if ( v6 && (*v6 == 1 || *v6 == 2 || (unsigned int)*v6 - 3 <= 1) )
  {
    v7 = *((_DWORD *)v6 + 5);
    v8 = *((_DWORD *)v6 + 6);
    if ( v7 > 1 )
    {
      v9 = MEMORY[0xFFFFF78000000320];
      if ( v8
        && KeMaximumIncrement * (MEMORY[0xFFFFF78000000320] - *(_QWORD *)(a1 + 72)) / 10000000LL > (unsigned __int64)v8 )
      {
        *(_DWORD *)(a1 + 80) = 1;
        *(_QWORD *)(a1 + 72) = v9;
        return 0;
      }
      if ( ++*(_DWORD *)(a1 + 80) < v7 )
        return 0;
      *(_DWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 72) = v9;
    }
  }
  return 1;
}
