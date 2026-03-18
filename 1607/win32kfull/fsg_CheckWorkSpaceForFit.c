/*
 * XREFs of fsg_CheckWorkSpaceForFit @ 0x1C00C4D60
 * Callers:
 *     fs_FindBitMapSize @ 0x1C00C408C (fs_FindBitMapSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsg_CheckWorkSpaceForFit(_DWORD *a1, int a2, int a3, int *a4, _DWORD *a5)
{
  int v5; // edx
  int v6; // r10d
  int v7; // r10d
  int v8; // r11d
  __int64 result; // rax

  a1[18] = 0;
  v5 = a2 - a3;
  a1[19] = 0;
  v6 = a1[17];
  a1[20] = *a4;
  v7 = a3 + v6;
  a1[21] = *a5;
  v8 = *a4;
  result = (unsigned int)*a5;
  if ( *a4 > (int)result )
  {
    if ( v8 <= v5 )
    {
      a1[18] = v7;
      result = (unsigned int)*a5;
      if ( (int)result <= v5 - *a4 && (int)result > 0 )
      {
        result = (unsigned int)(*a4 + v7);
        a1[19] = result;
        *a5 = 0;
      }
      goto LABEL_13;
    }
    if ( (int)result <= v5 && (int)result > 0 )
    {
      a1[19] = v7;
LABEL_7:
      *a5 = 0;
    }
  }
  else
  {
    if ( (int)result <= v5 && (int)result > 0 )
    {
      a1[19] = v7;
      result = (unsigned int)*a4;
      if ( (int)result <= v5 - *a5 && (int)result > 0 )
      {
        result = (unsigned int)(*a5 + v7);
        a1[18] = result;
        *a4 = 0;
      }
      goto LABEL_7;
    }
    if ( v8 <= v5 && v8 > 0 )
    {
      a1[18] = v7;
LABEL_13:
      *a4 = 0;
    }
  }
  return result;
}
