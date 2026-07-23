/*
 * XREFs of RtlpMuiRegConfigListAddLanguage @ 0x1800F41BC
 * Callers:
 *     RtlpPopulateLanguageConfigList @ 0x180071B00 (RtlpPopulateLanguageConfigList.c)
 * Callees:
 *     RtlpMuiRegResizeLanguageConfigList @ 0x1800F5554 (RtlpMuiRegResizeLanguageConfigList.c)
 */

__int64 __fastcall RtlpMuiRegConfigListAddLanguage(__int64 *a1, __int16 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r8
  __int16 v6; // r11
  char v7; // al
  int v8; // edx
  __int64 v9; // r9
  _WORD *v10; // r10
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax

  v2 = 0;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v5 = *a1;
  if ( !*a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v6 = *a2;
  v7 = ((unsigned __int16)a2[1] >> 14) & 3;
  if ( !v7 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned __int16 *)(v5 + 4);
  v9 = 0LL;
  if ( !*(_WORD *)(v5 + 4) )
    goto LABEL_9;
  while ( 1 )
  {
    v10 = (_WORD *)(*(_QWORD *)(v5 + 8) + 12LL * (int)v9);
    if ( v10[1] >> 14 == v7 && *v10 == v6 )
      break;
    v9 = (unsigned int)(v9 + 1);
    if ( (int)v9 >= v8 )
      goto LABEL_9;
  }
  if ( (int)v9 < 0 )
  {
LABEL_9:
    if ( (unsigned __int16)v8 >= *(_WORD *)(v5 + 6) )
    {
      v11 = (unsigned int)(v8 + 1);
      v12 = *a1;
      if ( (int)v11 >= *(unsigned __int16 *)(v5 + 6) )
        v12 = RtlpMuiRegResizeLanguageConfigList(v5, v11, v5, v9);
      if ( !v12 )
        return (unsigned int)-1073741801;
      v5 = v12;
      *a1 = v12;
    }
    v14 = *(_QWORD *)(v5 + 8);
    v15 = 3LL * *(unsigned __int16 *)(v5 + 4);
    v16 = *((_DWORD *)a2 + 2);
    *(_QWORD *)(v14 + 4 * v15) = *(_QWORD *)a2;
    *(_DWORD *)(v14 + 4 * v15 + 8) = v16;
    ++*(_WORD *)(v5 + 4);
    return v2;
  }
  v13 = 0;
  while ( ((v10[1] >> (2 * v13)) & 3) == (((unsigned __int16)a2[1] >> (2 * v13)) & 3) && v10[v13 + 3] == a2[v13 + 3] )
  {
    if ( ++v13 >= 3 )
      return v2;
  }
  return 0x40000000;
}
