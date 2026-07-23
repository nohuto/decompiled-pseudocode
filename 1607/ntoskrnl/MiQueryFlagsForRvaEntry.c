/*
 * XREFs of MiQueryFlagsForRvaEntry @ 0x1404BB4F0
 * Callers:
 *     MiCompressRvaList @ 0x14042E730 (MiCompressRvaList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiQueryFlagsForRvaEntry(
        unsigned int *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        bool *a8)
{
  unsigned int v8; // r10d
  char v9; // al

  v8 = *a1;
  if ( *a1 <= a4 || v8 >= a5 )
    return 3221225595LL;
  v9 = 1;
  if ( a6 )
  {
    v9 = (a6 & 1) == 0;
    if ( (a6 & 4) != 0 )
      v9 |= 2u;
  }
  *a3 = v8;
  *a8 = a2 > 4 && ((unsigned __int8)v9 & (_BYTE)a1[1]) != 0;
  return 0LL;
}
