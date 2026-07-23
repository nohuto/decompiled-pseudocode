/*
 * XREFs of MiCheckDosCalls @ 0x140659160
 * Callers:
 *     MiVerifyImageHeader @ 0x140507040 (MiVerifyImageHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckDosCalls(_WORD *a1, unsigned __int64 a2)
{
  unsigned __int16 v2; // r9
  __int64 v5; // rcx
  unsigned __int16 *v6; // r10
  unsigned __int16 v7; // dx
  int v8; // ebp
  int v9; // ebx
  char *v10; // rbx
  unsigned __int8 v11; // cl

  v2 = a1[15];
  if ( v2 )
  {
    v5 = (unsigned __int16)a1[20];
    v6 = (_WORD *)((char *)a1 + v5);
    if ( v5 + 2 * (unsigned __int64)v2 <= a2 )
    {
      v7 = 0;
      v8 = (unsigned __int16)a1[21];
      do
      {
        v9 = *v6;
        if ( (unsigned int)(v9 + v8) >= a2 )
          break;
        v10 = (char *)a1 + (unsigned __int16)a1[21] + (unsigned __int16)v9;
        v11 = *v10;
        if ( !*v10 || v8 + *v6 + (unsigned int)v11 >= a2 )
          break;
        if ( v11 == 8 && *(_QWORD *)(v10 + 1) == *(_QWORD *)"DOSCALLS" )
          return 1LL;
        ++v6;
        ++v7;
      }
      while ( v7 < v2 );
    }
  }
  return 0LL;
}
