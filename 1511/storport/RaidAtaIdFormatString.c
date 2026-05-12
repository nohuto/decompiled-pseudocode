/*
 * XREFs of RaidAtaIdFormatString @ 0x1C0009824
 * Callers:
 *     RaidBusEnumeratorProcessAtaInformation @ 0x1C0009780 (RaidBusEnumeratorProcessAtaInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAtaIdFormatString(_BYTE *a1, char *a2, unsigned int a3)
{
  __int64 v3; // r9
  char v6; // bl
  unsigned int v7; // r8d
  __int64 v8; // rcx
  __int64 i; // rdi
  char v10; // al
  char v11; // dl
  __int64 v12; // rcx

  v3 = 0LL;
  *a1 = 0;
  v6 = 0;
  v7 = 0;
  if ( a3 )
  {
    v8 = a1 - a2;
    v7 = a3;
    for ( i = a3; i; --i )
    {
      if ( !v6 )
      {
        v10 = *a2;
        if ( *a2 )
        {
          if ( v10 > 32 && v10 != 44 )
          {
            a2[v8] = v10;
            goto LABEL_9;
          }
        }
        else
        {
          v6 = 1;
        }
      }
      a2[v8] = 32;
LABEL_9:
      ++a2;
    }
  }
  a1[v7] = 0;
  if ( a3 && (a3 & 1) == 0 && a3 != 1 )
  {
    do
    {
      v11 = a1[v3];
      v12 = (unsigned int)(v3 + 1);
      a1[v3] = a1[v12];
      v3 = (unsigned int)(v3 + 2);
      a1[v12] = v11;
    }
    while ( (unsigned int)v3 < a3 - 1 );
  }
  RaidRemoveTrailingBlanks((__int64)a1, a3 + 1);
}
