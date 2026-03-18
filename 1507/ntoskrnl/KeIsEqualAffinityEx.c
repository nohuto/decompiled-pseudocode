/*
 * XREFs of KeIsEqualAffinityEx @ 0x1402013B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEqualAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r8
  unsigned __int16 *v4; // r9
  unsigned __int16 v5; // dx

  v2 = *a1;
  if ( *a1 >= *a2 )
  {
    v4 = a1;
    v2 = *a2;
  }
  else
  {
    v4 = a2;
  }
  v5 = 0;
  if ( v2 )
  {
    while ( *(_QWORD *)&a1[4 * v5 + 4] == *(_QWORD *)&a2[4 * v5 + 4] )
    {
      if ( ++v5 >= v2 )
        goto LABEL_11;
    }
    return 0LL;
  }
  else
  {
LABEL_11:
    while ( v5 < *v4 )
    {
      if ( *(_QWORD *)&v4[4 * v5 + 4] )
        return 0LL;
      ++v5;
    }
    return 1LL;
  }
}
