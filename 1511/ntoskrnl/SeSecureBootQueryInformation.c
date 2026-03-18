/*
 * XREFs of SeSecureBootQueryInformation @ 0x1404C039C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 */

__int64 __fastcall SeSecureBootQueryInformation(int a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  char *v6; // rdi

  v4 = 0LL;
  v5 = 0;
  if ( a1 != 143 )
  {
    if ( a1 == 145 )
    {
      *a4 = 2;
      if ( a3 >= 2 )
      {
        *(_BYTE *)a2 = dword_140306884 & 1;
        *(_BYTE *)(a2 + 1) = (dword_140306884 & 8) != 0;
        return v5;
      }
      return (unsigned int)-1073741820;
    }
    if ( a1 != 171 )
      return (unsigned int)-1073741821;
  }
  v6 = (char *)qword_14031C950;
  if ( !qword_14031C950 )
    return (unsigned int)-2143092730;
  if ( a1 == 171 )
  {
    *a4 = 28;
    *a4 = *((_DWORD *)v6 + 14) + 28;
    v4 = a2;
  }
  else
  {
    *a4 = 24;
  }
  if ( a3 < *a4 )
    return (unsigned int)-1073741820;
  *(_OWORD *)a2 = *(_OWORD *)(v6 + 4);
  *(_DWORD *)(a2 + 16) = *((_DWORD *)v6 + 5);
  *(_DWORD *)(a2 + 20) = *((_DWORD *)v6 + 8);
  if ( a1 == 171 )
  {
    memmove((void *)(v4 + 28), v6 + 60, *((unsigned int *)v6 + 14));
    *(_DWORD *)(v4 + 24) = *((_DWORD *)v6 + 14);
  }
  return v5;
}
