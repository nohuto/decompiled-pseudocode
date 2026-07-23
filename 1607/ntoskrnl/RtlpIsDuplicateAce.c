/*
 * XREFs of RtlpIsDuplicateAce @ 0x140413CE0
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x140413670 (RtlpGenerateInheritedAce.c)
 * Callees:
 *     RtlpCompareKnownAces @ 0x140413E00 (RtlpCompareKnownAces.c)
 *     RtlpCompareKnownObjectAces @ 0x140683E7C (RtlpCompareKnownObjectAces.c)
 */

char __fastcall RtlpIsDuplicateAce(__int64 a1, __int64 a2)
{
  char v4; // dl
  int v5; // ecx
  unsigned __int8 *v6; // rsi
  char v7; // bl
  int v8; // ebp
  int v9; // r12d
  int v10; // r14d
  int v11; // r15d
  unsigned __int8 v12; // cl
  unsigned __int8 v13; // al
  char v14; // al
  unsigned __int8 v16; // dl
  int v17; // ecx

  if ( *(_BYTE *)a2 > 8u )
    return 0;
  if ( *(_BYTE *)a2 == 4 )
    return 0;
  v4 = *(_BYTE *)(a2 + 1);
  if ( (v4 & 0x10) == 0 )
    return 0;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = (unsigned __int8 *)(a1 + 8);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = (v4 & 2) != 0 ? v5 : 0;
  v11 = (v4 & 1) != 0 ? v5 : 0;
  if ( (v4 & 8) == 0 )
    v8 = *(_DWORD *)(a2 + 4);
  if ( *(unsigned __int16 *)(a1 + 4) - 1 > 0 )
  {
    do
    {
      v12 = *v6;
      if ( *v6 > 8u || v12 == 4 || (v6[1] & 0x10) == 0 )
        goto LABEL_14;
      v13 = *(_BYTE *)a2 - 5;
      if ( v12 >= 5u )
      {
        if ( v13 > 3u )
          goto LABEL_14;
        v14 = RtlpCompareKnownObjectAces(v6, a2);
      }
      else
      {
        if ( v13 <= 3u )
          goto LABEL_14;
        v14 = RtlpCompareKnownAces(v6, a2);
      }
      if ( v14 )
      {
        v16 = v6[1];
        v17 = *((_DWORD *)v6 + 1);
        if ( (v16 & 2) != 0 )
          v10 &= ~v17;
        if ( (v16 & 1) != 0 )
          v11 &= ~v17;
        if ( (v16 & 8) == 0 )
          v8 &= ~v17;
        if ( !(v10 | v11 | v8) )
          return 1;
      }
LABEL_14:
      ++v9;
      v6 += *((unsigned __int16 *)v6 + 1);
    }
    while ( v9 < *(unsigned __int16 *)(a1 + 4) - 1 );
  }
  return v7;
}
