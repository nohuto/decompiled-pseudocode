/*
 * XREFs of sfac_ReadGlyphBbox @ 0x1C00B6EE0
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00B5A60 (fsg_ExecuteGlyph.c)
 *     sfac_ReadGlyphVertMetrics @ 0x1C0110A74 (sfac_ReadGlyphVertMetrics.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C00ADC14 (InvokeReleaseSfntFrag.c)
 *     InvokeGetSfntFragmentPtr @ 0x1C00ADC8C (InvokeGetSfntFragmentPtr.c)
 */

__int64 __fastcall sfac_ReadGlyphBbox(__int64 a1, unsigned __int16 a2, _WORD *a3)
{
  int v6; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // r9d
  __int64 v10; // rcx
  unsigned int v11; // r15d
  __int16 v12; // r10
  int v13; // edx
  int v14; // r8d
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned int v18; // esi
  unsigned int v19; // ebx
  int v20; // ebx
  int v21; // ebp
  __int64 result; // rax
  __int64 v23; // r10
  int v24; // r9d
  __int64 v25; // rcx
  _WORD *v26; // rcx
  __int16 v27; // ax
  int v28; // ecx
  int v29; // r8d
  __int64 v30; // rdx
  int v31; // ecx
  __int64 v32; // rax
  unsigned int v33; // [rsp+68h] [rbp+10h]

  v6 = a2;
  v7 = 6 * a2;
  v8 = *(_DWORD *)(a1 + 148);
  v9 = v7 + 6;
  if ( v8 )
  {
    v29 = *(_DWORD *)(a1 + 144);
    v30 = *(_QWORD *)a1;
    v31 = *(_DWORD *)(a1 + 8);
    if ( v7 == -7 )
      v9 = v8;
    v10 = InvokeGetSfntFragmentPtr(v31, v30, v29, v9);
  }
  else
  {
    v10 = 0LL;
  }
  v11 = 5128;
  if ( v10 )
  {
    v32 = v7;
    v18 = _byteswap_ulong(*(_DWORD *)(v7 + v10));
    if ( v18 )
      v20 = (unsigned __int16)__ROR2__(*(_WORD *)(v32 + v10 + 4), 8);
    else
      v20 = 0;
    v21 = 21;
    InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
    goto LABEL_24;
  }
  v12 = *(_WORD *)(a1 + 16);
  v13 = 2 * v6 + 4;
  if ( v12 )
    v13 = 4 * v6 + 8;
  if ( !*(_DWORD *)(a1 + 44) )
  {
    result = 5129LL;
    goto LABEL_62;
  }
  v14 = *(_DWORD *)(a1 + 40);
  v15 = *(_QWORD *)a1;
  if ( v13 == -1 )
    v13 = *(_DWORD *)(a1 + 44);
  if ( *(_DWORD *)(a1 + 8) != 1 )
  {
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
    goto LABEL_55;
  }
  if ( !v14 )
  {
    v16 = *(unsigned int *)(v15 + 272);
    goto LABEL_16;
  }
  if ( v14 > 0 && v13 >= 0 && v14 <= 0x7FFFFFFF - v13 && v14 + v13 <= *(_DWORD *)(v15 + 72) )
  {
    v16 = *(int *)(a1 + 40);
LABEL_16:
    v17 = *(_QWORD *)(v15 + 64) + v16;
    goto LABEL_17;
  }
  v17 = 0LL;
LABEL_17:
  if ( !v17 )
  {
LABEL_55:
    result = 5128LL;
LABEL_62:
    v21 = v33;
    v20 = v33;
    v18 = v33;
    goto LABEL_23;
  }
  if ( v12 )
  {
    v18 = _byteswap_ulong(*(_DWORD *)(v17 + 4LL * a2));
    v19 = _byteswap_ulong(*(_DWORD *)(v17 + 4LL * a2 + 4));
  }
  else
  {
    v18 = 2 * (unsigned __int16)__ROR2__(*(_WORD *)(v17 + 2LL * a2), 8);
    v19 = 2 * (unsigned __int16)__ROR2__(*(_WORD *)(v17 + 2LL * a2 + 2), 8);
  }
  if ( v18 > v19 )
    return 5137LL;
  v20 = v19 - v18;
  v21 = 6;
  if ( *(_DWORD *)(a1 + 12) != 1 && *(_DWORD *)(a1 + 12) != 2 )
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
  result = 0LL;
LABEL_23:
  if ( (_DWORD)result )
    return result;
LABEL_24:
  if ( v20 )
  {
    if ( !*(_DWORD *)(a1 + 8LL * v21 + 28) )
      return 5129;
    v23 = *(_QWORD *)a1;
    if ( v20 == -1 )
      v20 = *(_DWORD *)(a1 + 8LL * v21 + 28);
    v24 = v18 + *(_DWORD *)(a1 + 8LL * v21 + 24);
    if ( *(_DWORD *)(a1 + 8) != 1 )
    {
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
      return v11;
    }
    if ( v24 )
    {
      if ( v24 <= 0 || v20 < 0 || v24 > 0x7FFFFFFF - v20 || v24 + v20 > *(_DWORD *)(v23 + 72) )
      {
        v26 = 0LL;
LABEL_36:
        if ( v26 )
        {
          *a3 = __ROR2__(v26[1], 8);
          a3[1] = __ROR2__(v26[2], 8);
          a3[2] = __ROR2__(v26[3], 8);
          v27 = v26[4];
          v28 = *(_DWORD *)(a1 + 12);
          a3[3] = __ROR2__(v27, 8);
          if ( (unsigned int)(v28 - 1) > 1 )
            EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
          if ( *a3 > a3[2] || a3[1] > a3[3] )
            return 5120LL;
          return 0LL;
        }
        return v11;
      }
      v25 = v24;
    }
    else
    {
      v25 = *(unsigned int *)(v23 + 272);
    }
    v26 = (_WORD *)(*(_QWORD *)(v23 + 64) + v25);
    goto LABEL_36;
  }
  *(_QWORD *)a3 = 0LL;
  return 0LL;
}
