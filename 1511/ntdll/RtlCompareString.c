/*
 * XREFs of RtlCompareString @ 0x1800884E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180072780 (RtlUpperChar.c)
 */

__int64 __fastcall RtlCompareString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  int v3; // ebp
  int v4; // r12d
  char *v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  char *v8; // rsi
  __int64 v9; // rdi
  char v10; // r14
  unsigned __int8 v12; // r15
  unsigned __int8 v13; // al
  int v14; // ecx
  __int64 v15; // rdi

  v3 = *a1;
  v4 = *a2;
  v5 = (char *)*((_QWORD *)a1 + 1);
  v6 = *((_QWORD *)a2 + 1);
  v7 = v4;
  if ( v3 <= v4 )
    v7 = *a1;
  v8 = &v5[v7];
  if ( !a3 )
  {
    if ( v5 < v8 )
    {
      v15 = v6 - (_QWORD)v5;
      while ( 1 )
      {
        LOBYTE(v14) = *v5;
        v13 = v5[v15];
        if ( *v5 != v13 )
          break;
        if ( ++v5 >= v8 )
          return (unsigned int)(v3 - v4);
      }
      v14 = (unsigned __int8)v14;
      return v14 - (unsigned int)v13;
    }
    return (unsigned int)(v3 - v4);
  }
  if ( v5 >= v8 )
    return (unsigned int)(v3 - v4);
  v9 = v6 - (_QWORD)v5;
  while ( 1 )
  {
    v10 = v5[v9];
    if ( *v5 != v10 )
    {
      v12 = RtlUpperChar(*v5);
      v13 = RtlUpperChar(v10);
      if ( v12 != v13 )
        break;
    }
    if ( ++v5 >= v8 )
      return (unsigned int)(v3 - v4);
  }
  v14 = v12;
  return v14 - (unsigned int)v13;
}
