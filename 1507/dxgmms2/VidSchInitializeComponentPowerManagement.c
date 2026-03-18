/*
 * XREFs of VidSchInitializeComponentPowerManagement @ 0x1C00786B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchInitializeComponentPowerManagement(__int64 a1, int a2, unsigned int a3, int a4, _BYTE *a5)
{
  __int64 v6; // rcx
  char v7; // al

  *a5 = 0;
  if ( a2 )
  {
    if ( a2 == 2 )
    {
      if ( a3 >= *(_DWORD *)(a1 + 40) )
        return 3221225485LL;
      *(_DWORD *)(*(_QWORD *)(a1 + 8LL * a3 + 2640) + 14736LL) = a4;
    }
  }
  else
  {
    if ( a3 >= *(_DWORD *)(a1 + 56) )
      return 3221225485LL;
    _mm_lfence();
    v6 = *(_QWORD *)(a1 + 8LL * a3 + 368);
    v7 = *(_BYTE *)(v6 + 12) & 1;
    *(_DWORD *)(v6 + 3080) = a4;
    *(_BYTE *)(v6 + 3084) = 1;
    *a5 = v7;
  }
  return 0LL;
}
