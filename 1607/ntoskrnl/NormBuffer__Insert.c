/*
 * XREFs of NormBuffer__Insert @ 0x140215128
 * Callers:
 *     NormBuffer__Insert @ 0x140215128 (NormBuffer__Insert.c)
 *     NormBuffer__InsertAtBlockedLocation @ 0x1402151F8 (NormBuffer__InsertAtBlockedLocation.c)
 * Callees:
 *     NormBuffer__Insert @ 0x140215128 (NormBuffer__Insert.c)
 */

bool __fastcall NormBuffer__Insert(_QWORD *a1, int a2, __int16 *a3)
{
  __int16 *v5; // r8
  bool v6; // cl
  int v7; // ebp
  char v8; // bl
  __int16 v10; // ax

  v5 = (__int16 *)a1[5];
  v6 = a1[8] == (_QWORD)(v5 - 1);
  if ( a2 < 0x10000 )
  {
    if ( (unsigned __int64)v5 < a1[4] )
    {
      while ( a3 != v5 )
      {
        v10 = *a3;
        *a3 = a2;
        LOWORD(a2) = v10;
        ++a3;
      }
      *v5 = a2;
      a1[5] = v5 + 1;
      if ( v6 )
        a1[8] = v5;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v7 = (a2 - 0x10000) / 1024;
    v8 = 0;
    if ( (unsigned __int8)NormBuffer__Insert(a1, (unsigned __int16)((a2 - 0x10000) % 1024 - 9216), a3) )
      return (unsigned __int8)NormBuffer__Insert(a1, (unsigned __int16)(v7 - 10240), a3) != 0;
    return v8;
  }
}
