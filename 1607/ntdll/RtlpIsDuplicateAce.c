/*
 * XREFs of RtlpIsDuplicateAce @ 0x18003FE90
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x18003FB94 (RtlpGenerateInheritedAce.c)
 * Callees:
 *     RtlpCompareKnownObjectAces @ 0x18008EA10 (RtlpCompareKnownObjectAces.c)
 *     memcmp @ 0x18009A690 (memcmp.c)
 */

char __fastcall RtlpIsDuplicateAce(__int64 a1, char *a2)
{
  char v4; // cl
  unsigned __int8 *v5; // rbx
  int v6; // edi
  int v7; // r12d
  int v8; // r14d
  int v9; // r15d
  unsigned __int8 v10; // cl
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // r8
  unsigned __int8 v14; // dl
  int v15; // ecx

  if ( (unsigned __int8)*a2 <= 8u && *a2 != 4 )
  {
    v4 = a2[1];
    if ( (v4 & 0x10) != 0 )
    {
      v5 = (unsigned __int8 *)(a1 + 8);
      v6 = 0;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      if ( (v4 & 2) != 0 )
        v9 = *((_DWORD *)a2 + 1);
      if ( (v4 & 1) != 0 )
        v7 = *((_DWORD *)a2 + 1);
      if ( (v4 & 8) == 0 )
        v8 = *((_DWORD *)a2 + 1);
      if ( *(unsigned __int16 *)(a1 + 4) - 1 <= 0 )
        return 0;
      while ( 1 )
      {
        v10 = *v5;
        if ( *v5 > 8u )
          goto LABEL_19;
        if ( v10 == 4 )
          goto LABEL_19;
        v11 = v5[1];
        if ( (v11 & 0x10) == 0 )
          goto LABEL_19;
        if ( v10 >= 5u )
        {
          if ( (unsigned __int8)(*a2 - 5) > 3u || !(unsigned __int8)RtlpCompareKnownObjectAces(v5, a2, 0LL, 0LL) )
            goto LABEL_19;
        }
        else
        {
          v12 = *a2;
          if ( (unsigned __int8)(*a2 - 5) <= 3u
            || RtlBaseAceType[v12] != RtlBaseAceType[v10]
            || RtlIsSystemAceType[v12] && (((unsigned __int8)a2[1] ^ v11) & 0xC0) != 0
            || *((_WORD *)a2 + 4) != *((_WORD *)v5 + 4)
            || memcmp(a2 + 8, v5 + 8, 4 * (unsigned int)(unsigned __int8)a2[9] + 8) )
          {
            goto LABEL_19;
          }
        }
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
LABEL_19:
        ++v6;
        v5 += *((unsigned __int16 *)v5 + 1);
        if ( v6 >= *(unsigned __int16 *)(a1 + 4) - 1 )
          return 0;
      }
    }
  }
  return 0;
}
