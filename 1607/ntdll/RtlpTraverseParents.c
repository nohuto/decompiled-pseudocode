/*
 * XREFs of RtlpTraverseParents @ 0x18006A80C
 * Callers:
 *     LdrpMergeParentBaseLanguagesToList @ 0x180067178 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlpIsQualifiedLanguage @ 0x18006A6F0 (RtlpIsQualifiedLanguage.c)
 *     RtlpTraverseParents @ 0x18006A80C (RtlpTraverseParents.c)
 * Callees:
 *     RtlpTraverseParents @ 0x18006A80C (RtlpTraverseParents.c)
 *     LdrpGetMUILangConfigNode @ 0x1800890D8 (LdrpGetMUILangConfigNode.c)
 */

char __fastcall RtlpTraverseParents(_WORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  char v6; // bl
  __int64 v7; // r11
  __int64 v8; // r10
  unsigned int v11; // r8d
  int v12; // r9d
  int v13; // ecx
  int v15; // ecx
  int MUILangConfigNode; // eax
  int v17; // ebp
  __int64 v18; // r9
  __int16 v19; // r8
  _WORD *v20; // rdx
  int v21; // ebp
  __int16 v22; // dx
  __int16 v23; // cx
  char v24; // al
  __int16 v25; // cx
  __int16 v26; // cx
  __int16 v27; // [rsp+30h] [rbp-28h] BYREF
  __int64 v28; // [rsp+38h] [rbp-20h]

  v6 = 0;
  v27 = -1;
  v7 = a4;
  v8 = a3;
  if ( !a1 )
    return 0;
  if ( !a2 )
    return 0;
  if ( !a3 )
    return 0;
  v11 = a5;
  if ( a5 > 4 )
    return 0;
  v12 = a6;
  if ( a6 <= 1 )
    return 0;
  v13 = (*a1 & 7) - 1;
  if ( !v13 )
  {
    *(_DWORD *)(a2 + 4) = 1;
    v6 = 1;
    goto LABEL_8;
  }
  v15 = v13 - 1;
  if ( !v15 || v15 == 2 )
  {
    if ( v7 )
    {
      MUILangConfigNode = LdrpGetMUILangConfigNode(a1, v8, v7, &v27);
      LODWORD(v7) = a4;
      if ( MUILangConfigNode >= 0 )
      {
        v17 = 0;
        v18 = *(_QWORD *)(a4 + 8) + 12LL * v27;
        v28 = v18;
        do
        {
          v19 = (*(_WORD *)(v18 + 2) >> (2 * v17)) & 3;
          if ( v19 )
          {
            v20 = (_WORD *)(a2 + 8);
            if ( v19 != 2 )
            {
              if ( v19 != 1 )
              {
                v11 = a5;
                *v20 = 0;
                v23 = *(_WORD *)(v18 + 2LL * v17 + 6);
                v24 = 1;
                v12 = a6;
                *(_DWORD *)(a2 + 12) = 1;
                v8 = a3;
                *(_WORD *)(a2 + 10) = v23;
                goto LABEL_25;
              }
              v25 = *(_WORD *)(v18 + 2LL * v17 + 6);
              *(_WORD *)(a2 + 10) = -1;
              *v20 = v25;
              *(_DWORD *)(a2 + 12) = 1;
LABEL_36:
              *(_DWORD *)(a2 + 4) = 1;
              v6 = 1;
LABEL_8:
              *(_WORD *)a2 = a1[2];
              *(_WORD *)(a2 + 2) = a1[3];
              return v6;
            }
            if ( (unsigned __int8)RtlpTraverseParents(
                                    *(_DWORD *)(*(_QWORD *)(a3 + 24) + 16LL) + 28 * *(__int16 *)(v18 + 2LL * v17 + 6),
                                    (_DWORD)v20,
                                    a3,
                                    v7,
                                    a5 + 1,
                                    a6 - 1) )
              goto LABEL_36;
            v18 = v28;
            LODWORD(v7) = a4;
          }
          ++v17;
        }
        while ( v17 < 3 );
      }
      v12 = a6;
      v11 = a5;
      v8 = a3;
    }
    v24 = 0;
LABEL_25:
    v21 = 0;
    if ( v24 )
      goto LABEL_36;
    while ( v21 < 4 )
    {
      v22 = (a1[4] >> (2 * v21)) & 3;
      if ( v22 == 2 )
      {
        if ( (unsigned __int8)RtlpTraverseParents(
                                *(_DWORD *)(*(_QWORD *)(v8 + 24) + 16LL) + 28 * (__int16)a1[v21 + 6],
                                (int)a2 + 8,
                                v8,
                                v7,
                                v11 + 1,
                                v12 - 1) )
          goto LABEL_36;
      }
      else if ( ((v22 - 1) & 0xFFFD) == 0 )
      {
        v26 = a1[v21 + 6];
        if ( v22 == 1 )
          *(_WORD *)(a2 + 8) = v26;
        else
          *(_WORD *)(a2 + 10) = v26;
        *(_DWORD *)(a2 + 12) = 1;
        goto LABEL_36;
      }
      LODWORD(v7) = a4;
      ++v21;
      v8 = a3;
      v11 = a5;
      v12 = a6;
    }
  }
  return v6;
}
