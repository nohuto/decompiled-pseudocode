/*
 * XREFs of EtwpCheckPoolTagFilters @ 0x14025EE80
 * Callers:
 *     EtwTracePool @ 0x14017E810 (EtwTracePool.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwpCheckPoolTagFilters(unsigned int a1, int a2)
{
  unsigned int v2; // r11d
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int16 *v5; // r10
  unsigned int v6; // r9d
  __int64 v7; // rdx
  char v8; // r8
  int v10; // [rsp+8h] [rbp+8h]
  int v11; // [rsp+18h] [rbp+18h]

  v2 = 0;
  v3 = 5LL * a1;
  v4 = (unsigned __int16)EtwpPoolTagFilter[2 * v3];
  if ( EtwpPoolTagFilter[2 * v3] )
  {
    v10 = a2;
    v5 = &EtwpPoolTagFilter[2 * v3 + 2];
    do
    {
      v6 = 0;
      v7 = 0LL;
      v11 = *(_DWORD *)v5;
      while ( 1 )
      {
        v8 = *((_BYTE *)&v11 + v7);
        if ( v8 == 42 )
          return 1;
        if ( v8 != 63 && (v6 != 3 || (*((_BYTE *)&v10 + v7) & 0x7F) != v8) && *((_BYTE *)&v10 + v7) != v8 )
          break;
        ++v6;
        ++v7;
        if ( v6 >= 4 )
          return 1;
      }
      ++v2;
      v5 += 2;
    }
    while ( v2 < v4 );
  }
  return 0;
}
