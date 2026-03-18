/*
 * XREFs of RtlpIsDuplicateAce @ 0x140434790
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x140434DD0 (RtlpGenerateInheritedAce.c)
 * Callees:
 *     RtlpCompareKnownAces @ 0x1404348C0 (RtlpCompareKnownAces.c)
 *     RtlpCompareKnownObjectAces @ 0x1406C9EC0 (RtlpCompareKnownObjectAces.c)
 */

char __fastcall RtlpIsDuplicateAce(__int64 a1, __int64 a2)
{
  char v4; // cl
  unsigned __int8 *v5; // rbx
  int v6; // edi
  int v7; // r12d
  int v8; // r14d
  int v9; // r15d
  unsigned __int8 v10; // cl
  unsigned __int8 v11; // al
  char v12; // al
  unsigned __int8 v14; // dl
  int v15; // ecx

  if ( *(_BYTE *)a2 > 8u )
    return 0;
  if ( *(_BYTE *)a2 == 4 )
    return 0;
  v4 = *(_BYTE *)(a2 + 1);
  if ( (v4 & 0x10) == 0 )
    return 0;
  v5 = (unsigned __int8 *)(a1 + 8);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( (v4 & 2) != 0 )
    v9 = *(_DWORD *)(a2 + 4);
  if ( (v4 & 1) != 0 )
    v7 = *(_DWORD *)(a2 + 4);
  if ( (v4 & 8) == 0 )
    v8 = *(_DWORD *)(a2 + 4);
  if ( *(unsigned __int16 *)(a1 + 4) - 1 > 0 )
  {
    do
    {
      v10 = *v5;
      if ( *v5 > 8u || v10 == 4 || (v5[1] & 0x10) == 0 )
        goto LABEL_18;
      v11 = *(_BYTE *)a2 - 5;
      if ( v10 >= 5u )
      {
        if ( v11 > 3u )
          goto LABEL_18;
        v12 = RtlpCompareKnownObjectAces(v5, a2);
      }
      else
      {
        if ( v11 <= 3u )
          goto LABEL_18;
        v12 = RtlpCompareKnownAces(v5, a2);
      }
      if ( v12 )
      {
        v14 = v5[1];
        v15 = *((_DWORD *)v5 + 1);
        if ( (v14 & 2) != 0 )
          v9 &= ~v15;
        if ( (v14 & 1) != 0 )
          v7 &= ~v15;
        if ( (v14 & 8) == 0 )
          v8 &= ~v15;
        if ( !(v9 | v7 | v8) )
          return 1;
      }
LABEL_18:
      ++v6;
      v5 += *((unsigned __int16 *)v5 + 1);
    }
    while ( v6 < *(unsigned __int16 *)(a1 + 4) - 1 );
  }
  return 0;
}
