/*
 * XREFs of RtlpMuiRegConfigListAddLanguage @ 0x1406E6860
 * Callers:
 *     RtlpPopulateLanguageConfigList @ 0x140560B14 (RtlpPopulateLanguageConfigList.c)
 * Callees:
 *     RtlpMuiRegResizeLanguageConfigList @ 0x1406E7440 (RtlpMuiRegResizeLanguageConfigList.c)
 */

__int64 __fastcall RtlpMuiRegConfigListAddLanguage(__int64 *a1, __int16 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r8
  unsigned __int16 v6; // r11
  __int16 v7; // bp
  int v8; // edx
  __int64 v9; // r9
  _WORD *v10; // r10
  unsigned __int16 v11; // ax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax

  v2 = 0;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v5 = *a1;
  if ( !*a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v6 = a2[1];
  v7 = *a2;
  if ( ((v6 >> 14) & 3) == 0 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned __int16 *)(v5 + 4);
  v9 = 0LL;
  if ( !*(_WORD *)(v5 + 4) )
    goto LABEL_9;
  while ( 1 )
  {
    v10 = (_WORD *)(*(_QWORD *)(v5 + 8) + 12LL * (int)v9);
    if ( v10[1] >> 14 == v6 >> 14 && *v10 == v7 )
      break;
    v9 = (unsigned int)(v9 + 1);
    if ( (int)v9 >= v8 )
      goto LABEL_9;
  }
  if ( (int)v9 < 0 )
  {
LABEL_9:
    v11 = *(_WORD *)(v5 + 6);
    if ( (unsigned __int16)v8 >= v11 )
    {
      v12 = (unsigned int)(v8 + 1);
      v13 = *a1;
      if ( (int)v12 >= v11 )
        v13 = RtlpMuiRegResizeLanguageConfigList(v5, v12, v5, v9);
      if ( !v13 )
        return (unsigned int)-1073741801;
      v5 = v13;
      *a1 = v13;
    }
    v15 = *(_QWORD *)(v5 + 8);
    v16 = 3LL * *(unsigned __int16 *)(v5 + 4);
    v17 = *((_DWORD *)a2 + 2);
    *(_QWORD *)(v15 + 4 * v16) = *(_QWORD *)a2;
    *(_DWORD *)(v15 + 4 * v16 + 8) = v17;
    ++*(_WORD *)(v5 + 4);
    return v2;
  }
  v14 = 0;
  while ( ((v10[1] >> (2 * v14)) & 3) == ((v6 >> (2 * v14)) & 3) && v10[v14 + 3] == a2[v14 + 3] )
  {
    if ( ++v14 >= 3 )
      return v2;
  }
  return 0x40000000;
}
