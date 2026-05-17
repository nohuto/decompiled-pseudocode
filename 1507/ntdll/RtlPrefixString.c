/*
 * XREFs of RtlPrefixString @ 0x180065200
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180065330 (RtlUpperChar.c)
 */

char __fastcall RtlPrefixString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  __int64 v3; // r9
  _BYTE *v4; // rdi
  __int64 v5; // r14
  _BYTE *v6; // rsi
  __int64 v7; // r14
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // r14

  v3 = *a1;
  v4 = (_BYTE *)*((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a2 + 1);
  if ( *a2 >= (unsigned int)v3 )
  {
    v6 = &v4[v3];
    if ( a3 )
    {
      if ( v4 < v6 )
      {
        v7 = v5 - (_QWORD)v4;
        while ( 1 )
        {
          if ( *v4 != v4[v7] )
          {
            v9 = ((__int64 (*)(void))RtlUpperChar)();
            LOBYTE(v10) = *v4;
            if ( (unsigned __int8)RtlUpperChar(v10) != v9 )
              break;
          }
          if ( ++v4 >= v6 )
            return 1;
        }
        return 0;
      }
    }
    else if ( v4 < v6 )
    {
      v11 = v5 - (_QWORD)v4;
      while ( *v4 == v4[v11] )
      {
        if ( ++v4 >= v6 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}
