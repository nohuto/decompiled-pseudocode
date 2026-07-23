/*
 * XREFs of RtlQueryUmsThreadInformation @ 0x1800ECB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlQueryUmsThreadInformation(__int64 a1, int a2, _BYTE *a3, int a4, _DWORD *a5)
{
  unsigned int v5; // r10d
  int v6; // edx
  int v7; // edx
  int v8; // edx
  unsigned int v9; // ecx

  v5 = 0;
  if ( a5 )
    *a5 = 0;
  v6 = a2 - 1;
  if ( v6 )
  {
    v7 = v6 - 3;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
          return (unsigned int)-1073741637;
        if ( a4 == 1 )
        {
          v9 = (*(_DWORD *)(a1 + 1264) & 8u) >> 3;
          goto LABEL_12;
        }
      }
      else if ( a4 == 1 )
      {
        v9 = (*(_DWORD *)(a1 + 1264) & 2u) >> 1;
LABEL_12:
        *a3 = v9;
        if ( a5 )
          *a5 = 1;
        return v5;
      }
      return (unsigned int)-1073741820;
    }
    if ( a4 != 8 )
      return (unsigned int)-1073741820;
    *(_QWORD *)a3 = *(_QWORD *)(a1 + 1248);
  }
  else
  {
    if ( a4 != 8 )
      return (unsigned int)-1073741820;
    *(_QWORD *)a3 = *(_QWORD *)(a1 + 1256);
  }
  if ( a5 )
    *a5 = 8;
  return v5;
}
