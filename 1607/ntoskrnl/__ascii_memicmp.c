/*
 * XREFs of __ascii_memicmp @ 0x140159804
 * Callers:
 *     _memicmp @ 0x140159858 (_memicmp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _ascii_memicmp(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  int v3; // r9d
  int v4; // eax
  __int64 v5; // r10
  __int64 v6; // r11
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // r8

  v3 = 0;
  v4 = 0;
  v5 = a3;
  if ( a3 )
  {
    v6 = a1 - (_QWORD)a2;
    do
    {
      v7 = a2[v6];
      --v5;
      v8 = *a2;
      if ( v7 != *a2 )
      {
        v3 = v7;
        if ( (unsigned __int8)(v7 - 65) <= 0x19u )
          v3 = v7 + 32;
        v4 = v8;
        if ( (unsigned __int8)(v8 - 65) <= 0x19u )
          v4 = v8 + 32;
        if ( v3 != v4 )
          break;
      }
      ++a2;
    }
    while ( v5 );
  }
  return (unsigned int)(v3 - v4);
}
