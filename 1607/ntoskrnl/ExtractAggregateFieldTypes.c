/*
 * XREFs of ExtractAggregateFieldTypes @ 0x140085560
 * Callers:
 *     _TlgWriteAgg @ 0x14008517C (_TlgWriteAgg.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ExtractAggregateFieldTypes(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int8 v3; // r9
  unsigned __int64 v5; // r10
  char *v6; // r8
  char v7; // al
  char v9; // dl
  int v10; // eax
  char v11; // al
  char v12; // cl

  v2 = *(_QWORD *)(a2 + 16);
  v3 = 0;
  v5 = v2 + *(unsigned int *)(a2 + 24);
  v6 = (char *)(v2 + 2);
  do
    v7 = *v6++;
  while ( v7 < 0 );
  while ( *v6++ )
    ;
  while ( (unsigned __int64)v6 < v5 )
  {
    do
      v11 = *v6++;
    while ( v11 );
    v12 = *v6++;
    if ( v12 < 0 )
    {
      v11 = *v6;
      v12 &= ~0x80u;
      ++v6;
    }
    if ( v11 >= 0 )
      break;
    while ( *v6 < 0 )
    {
      if ( *v6 != (char)0x80 )
        return v3;
      ++v6;
    }
    v9 = *v6;
    if ( v12 != 9 || (unsigned __int8)(v9 - 113) > 2u )
      break;
    v10 = v3++ + 2;
    *(_BYTE *)(16LL * v10 + a2 + 13) = v9;
  }
  return v3;
}
