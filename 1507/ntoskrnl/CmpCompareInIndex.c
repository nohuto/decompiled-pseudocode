/*
 * XREFs of CmpCompareInIndex @ 0x1404CAF30
 * Callers:
 *     CmpFindSubKeyInLeafWithStatus @ 0x1404CA7D0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpFindSubKeyInRoot @ 0x1404CAD00 (CmpFindSubKeyInRoot.c)
 *     CmpAddToLeaf @ 0x1405339A8 (CmpAddToLeaf.c)
 * Callees:
 *     CmpDoCompareKeyName @ 0x1404CB110 (CmpDoCompareKeyName.c)
 *     RtlUpcaseUnicodeChar @ 0x1404CC660 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpCompareInIndex(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        __int16 *a5,
        unsigned int *a6)
{
  unsigned int *v7; // rdi
  __int16 v9; // r10
  bool v10; // r12
  __int64 v11; // r11
  __int64 v13; // rbx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // r8
  unsigned int *v18; // rbx
  __int64 v19; // rsi
  _BYTE *v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // ebp
  unsigned int v23; // eax
  WCHAR v24; // cx
  unsigned int v25; // edi
  int v26; // ebx
  int v27; // eax
  int v28; // ebx
  unsigned int v29; // eax
  __int64 result; // rax
  unsigned int *v32; // [rsp+70h] [rbp+18h]
  __int64 v33; // [rsp+80h] [rbp+28h]

  v7 = a6;
  v9 = *a5;
  v10 = a3 != 0LL;
  *a6 = -1;
  v11 = a1;
  if ( ((v9 - 26220) & 0xFDFF) != 0 )
  {
    v13 = 2LL * a4;
    v14 = CmpDoCompareKeyName(a1, a2, a3, *(unsigned int *)&a5[v13 + 2]);
    v15 = v14;
    if ( v14 != 2 )
    {
      if ( !v14 )
      {
        v16 = *(_DWORD *)&a5[v13 + 2];
LABEL_40:
        *v7 = v16;
        return v15;
      }
      return v15;
    }
    return 2LL;
  }
  v17 = 8LL * a4;
  v33 = v17;
  v18 = (unsigned int *)((char *)a5 + v17 + 4);
  v32 = v18;
  if ( v9 != 26220 )
    goto LABEL_33;
  v19 = 0LL;
  v20 = v18 + 1;
  v21 = 0;
  v22 = 4;
  while ( *v20 )
  {
    ++v21;
    ++v20;
    if ( v21 >= 4 )
      goto LABEL_11;
  }
  v22 = v21;
LABEL_11:
  if ( v10 )
    v23 = *a3;
  else
    v23 = *a2 >> 1;
  if ( v23 < v22 )
    v22 = v23;
  if ( !v22 )
  {
LABEL_33:
    v29 = CmpDoCompareKeyName(v11, a2, a3, *v18);
    v15 = v29;
    if ( v29 != 2 )
    {
      if ( !v29 )
      {
        v16 = *v18;
        goto LABEL_40;
      }
      return v15;
    }
    return 2LL;
  }
  while ( 1 )
  {
    v24 = v10 ? *(unsigned __int8 *)(*((_QWORD *)a3 + 1) + v19) : *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * v19);
    v25 = *((unsigned __int8 *)a5 + (unsigned int)v19 + v17 + 8);
    if ( v24 >= 0x61u )
      v26 = v24 <= 0x7Au ? v24 - 32 : RtlUpcaseUnicodeChar(v24);
    else
      v26 = v24;
    if ( v25 >= 0x61 )
      v27 = v25 <= 0x7A ? v25 - 32 : RtlUpcaseUnicodeChar(v25);
    else
      v27 = v25;
    v28 = v26 - v27;
    if ( v28 )
      break;
    v17 = v33;
    v19 = (unsigned int)(v19 + 1);
    if ( (unsigned int)v19 >= v22 )
    {
      v18 = v32;
      v7 = a6;
      v11 = a1;
      goto LABEL_33;
    }
  }
  result = 0xFFFFFFFFLL;
  if ( v28 > 0 )
    return 1LL;
  return result;
}
