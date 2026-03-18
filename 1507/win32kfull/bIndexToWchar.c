/*
 * XREFs of bIndexToWchar @ 0x1C02469B8
 * Callers:
 *     bIndexToWcharKern @ 0x1C0246C00 (bIndexToWcharKern.c)
 * Callees:
 *     vCvtMacToUnicode @ 0x1C0247A40 (vCvtMacToUnicode.c)
 */

__int64 __fastcall bIndexToWchar(__int64 a1, unsigned __int16 *a2, unsigned __int16 a3, int a4)
{
  __int64 v4; // r10
  __int16 v6; // ax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rcx
  _BYTE *i; // rax
  __int64 v11; // r8
  unsigned int v12; // r11d
  unsigned int v13; // r9d
  unsigned __int16 *k; // r10
  unsigned int v15; // ecx
  unsigned __int64 v16; // r14
  unsigned __int16 v17; // r8
  _WORD *v18; // r9
  _WORD *v19; // rbx
  _WORD *v20; // rdi
  _WORD *v21; // r11
  unsigned int v22; // ecx
  __int64 v23; // rax
  unsigned __int16 v24; // r10
  unsigned __int16 v25; // bp
  __int16 v26; // cx
  unsigned __int16 v27; // ax
  unsigned __int16 v28; // ax
  __int16 v29; // si
  _WORD *v30; // r8
  _WORD *j; // rcx
  char v32; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 64) + *(unsigned int *)(a1 + 304);
  v6 = *(_WORD *)(a1 + 310);
  v7 = v4 + (unsigned __int16)__ROR2__(*(_WORD *)(v4 + 2), 8);
  if ( v6 == 1 )
  {
    v8 = v4 + 6;
    for ( i = (_BYTE *)(v4 + 261); (unsigned __int64)i >= v8; --i )
    {
      if ( *i == (_BYTE)a3 )
      {
        v32 = (_BYTE)i - v8;
        vCvtMacToUnicode(v8, a2, &v32, 1LL);
        return 1LL;
      }
    }
    return 0LL;
  }
  if ( v6 != 3 || (unsigned int)(*(_DWORD *)(a1 + 316) - 5) > 1 )
  {
    v16 = v4 + 14;
    v17 = __ROR2__(*(_WORD *)(v4 + 6), 8) >> 1;
    v18 = (_WORD *)(v4 + 14 + 2LL * (v17 - 1));
    v19 = &v18[v17 + 1];
    v20 = &v19[v17];
    v21 = &v20[v17];
    if ( __ROR2__(*v18, 8) != 0xFFFF )
    {
      v22 = 0;
      while ( (unsigned __int64)v18 >= v16 && __ROR2__(*v18, 8) != 0xFFFF )
      {
        ++v22;
        --v18;
      }
      v23 = 2LL * v22;
      v19 = (_WORD *)((char *)v19 - v23);
      v20 = (_WORD *)((char *)v20 - v23);
      v21 = (_WORD *)((char *)v21 - v23);
    }
    while ( (unsigned __int64)v18 >= v16 )
    {
      v24 = __ROR2__(*v19, 8);
      v25 = __ROR2__(*v18, 8);
      v26 = __ROR2__(*v20, 8);
      v27 = __ROR2__(*v21, 8);
      if ( v27 )
      {
        v29 = __ROL2__(a3 - v26, 8);
        v30 = &v21[(unsigned __int64)v27 >> 1];
        if ( (unsigned __int64)v30 <= v7 )
        {
          for ( j = &v30[v25 - v24]; j >= v30; --j )
          {
            if ( v29 == *j )
            {
              *a2 = v24 + j - v30;
              return 1LL;
            }
          }
        }
      }
      else
      {
        v28 = a3 - v26;
        if ( (unsigned __int16)(a3 - v26) >= v24 && v28 <= v25 )
        {
          *a2 = v28;
          return 1LL;
        }
      }
      --v19;
      --v18;
      --v20;
      --v21;
    }
    return 0LL;
  }
  if ( a4 )
    v11 = *(_QWORD *)(a1 + 96);
  else
    v11 = *(_QWORD *)(a1 + 88);
  v12 = *(_DWORD *)(v11 + 12);
  v13 = 0;
  if ( !v12 )
    return 0LL;
  for ( k = (unsigned __int16 *)(v11 + 18); ; k += 8 )
  {
    v15 = 0;
    if ( *k )
      break;
LABEL_19:
    if ( ++v13 >= v12 )
      return 0LL;
  }
  while ( *(_DWORD *)(*(_QWORD *)(k + 3) + 4LL * v15) != a3 )
  {
    if ( ++v15 >= *k )
      goto LABEL_19;
  }
  *a2 = v15 + *(_WORD *)(v11 + 16 * (v13 + 1LL));
  return 1LL;
}
