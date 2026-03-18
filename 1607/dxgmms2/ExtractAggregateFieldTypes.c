/*
 * XREFs of ExtractAggregateFieldTypes @ 0x1C0028418
 * Callers:
 *     _TlgWriteAgg @ 0x1C0027EB4 (_TlgWriteAgg.c)
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
  char v9; // al
  char v10; // cl
  char v11; // dl
  int v12; // eax

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
      v9 = *v6++;
    while ( v9 );
    v10 = *v6++;
    if ( v10 < 0 )
    {
      v9 = *v6;
      v10 &= ~0x80u;
      ++v6;
    }
    if ( v9 >= 0 )
      break;
    while ( *v6 < 0 )
    {
      if ( *v6 != (char)0x80 )
        return v3;
      ++v6;
    }
    v11 = *v6;
    if ( v10 != 9 || (unsigned __int8)(v11 - 113) > 2u )
      break;
    v12 = v3++ + 2;
    *(_BYTE *)(16LL * v12 + a2 + 13) = v11;
  }
  return v3;
}
