/*
 * XREFs of CompareNamesCaseSensitive @ 0x140687C98
 * Callers:
 *     PfxFindPrefix @ 0x140687E98 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x140687F70 (PfxInsertPrefix.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 */

__int64 __fastcall CompareNamesCaseSensitive(unsigned __int16 *a1, unsigned __int16 *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  const void *v7; // rdx
  const void *v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // r8d
  unsigned int v12; // edx
  __int64 v13; // rbp
  __int64 v14; // r15
  __int64 v15; // rcx
  unsigned __int8 v16; // al
  unsigned __int8 v17; // bl
  unsigned __int8 v18; // r11
  unsigned __int8 v19; // r10
  unsigned int i; // r9d
  unsigned int j; // r9d

  v2 = *a1;
  v3 = *a2;
  if ( (_WORD)v2 == 1 && **((_BYTE **)a1 + 1) == 92 && (unsigned __int16)v3 > 1u && **((_BYTE **)a2 + 1) == 92 )
    return 1LL;
  v7 = (const void *)*((_QWORD *)a2 + 1);
  v8 = (const void *)*((_QWORD *)a1 + 1);
  v9 = v3;
  if ( (unsigned int)v2 < v3 )
    v9 = v2;
  v10 = RtlCompareMemory(v8, v7, v9);
  v11 = 0;
  v12 = v10;
  if ( v10 >= v9 )
    goto LABEL_28;
  v13 = *((_QWORD *)a1 + 1);
  v14 = *((_QWORD *)a2 + 1);
  v15 = v10;
  v16 = *(_BYTE *)(v10 + v13);
  v17 = *(_BYTE *)(v15 + v14);
  v18 = v16;
  v19 = v17;
  if ( v16 == 92 )
    v18 = 0;
  if ( v17 == 92 )
    v19 = 0;
  if ( (_BYTE)NlsMbCodePageTag )
  {
    if ( v16 == 92 )
    {
      for ( i = 0; i < v12; i += (NlsLeadByteInfoTable[*(unsigned __int8 *)(i + v13)] != 0) + 1 )
        ;
      if ( i != v12 )
        v18 = 92;
    }
    if ( v17 == 92 )
    {
      for ( j = 0; j < v12; j += (NlsLeadByteInfoTable[*(unsigned __int8 *)(j + v14)] != 0) + 1 )
        ;
      if ( j != v12 )
        v19 = 92;
    }
  }
  if ( v18 < v19 )
    return 0LL;
  if ( v18 > v19 )
    return 3LL;
LABEL_28:
  if ( v3 <= (unsigned int)v2 )
    return (unsigned int)(v3 < (unsigned int)v2) + 2;
  LOBYTE(v11) = *(_BYTE *)(v2 + *((_QWORD *)a2 + 1)) == 92;
  return v11;
}
