/*
 * XREFs of HvpReadHiveDataFromFile @ 0x1403D59E8
 * Callers:
 *     HvpMapHiveImage @ 0x1403D8C44 (HvpMapHiveImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpReadHiveDataFromFile(_QWORD *a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned int v7; // esi
  __int64 v9; // rcx

  v3 = 0;
  *a2 = 0LL;
  *a3 = 0;
  v7 = *((_DWORD *)a1 + 8) - *((_DWORD *)a1 + 7);
  if ( v7 > *((_DWORD *)a1 + 6) )
    v7 = *((_DWORD *)a1 + 6);
  if ( v7 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, unsigned int))(*a1 + 48LL))(
           *a1,
           *((unsigned int *)a1 + 2),
           (__int64)a1 + 12,
           a1[2],
           v7) )
    {
      v9 = a1[2];
      *((_DWORD *)a1 + 7) += v7;
      *a2 = v9;
      *a3 = v7;
    }
    else
    {
      return (unsigned int)-1073741491;
    }
  }
  else
  {
    return (unsigned int)-1073741807;
  }
  return v3;
}
