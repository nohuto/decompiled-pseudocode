/*
 * XREFs of sfac_ReadOutlineData @ 0x1C00B75B0
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00B5A60 (fsg_ExecuteGlyph.c)
 * Callees:
 *     UShortToShort @ 0x1C02D8718 (UShortToShort.c)
 */

__int64 __fastcall sfac_ReadOutlineData(
        _BYTE *a1,
        _DWORD *a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int16 a8,
        _WORD *a9,
        SHORT *psResult,
        _WORD *a11,
        _QWORD *a12,
        unsigned int *a13,
        unsigned int *a14)
{
  int v14; // r10d
  _BYTE *v16; // r14
  char *v17; // r13
  _WORD *v18; // r8
  __int64 v20; // r11
  __int16 v21; // dx
  unsigned int v22; // edi
  unsigned int v23; // eax
  char *v24; // rcx
  __int16 v25; // ax
  _WORD *v26; // rcx
  SHORT *v27; // rdx
  int v28; // r9d
  int v29; // esi
  _WORD *v30; // rdi
  signed __int64 v31; // rbx
  signed __int64 v32; // r13
  int v33; // r9d
  int v34; // ecx
  int v35; // ecx
  unsigned int v36; // edx
  unsigned __int16 v37; // ax
  unsigned __int16 v38; // r9
  int v39; // ebx
  _BYTE *v40; // r11
  char v41; // al
  char v42; // cl
  void *v43; // rdi
  __int16 v44; // cx
  char *v45; // rdi
  int v46; // r9d
  char v47; // dl
  __int16 v48; // ax
  int v49; // edx
  char v50; // cl
  __int16 v51; // ax
  _DWORD *v52; // [rsp+60h] [rbp+8h]
  _DWORD *v53; // [rsp+68h] [rbp+10h]

  v14 = 0;
  v16 = a1;
  v17 = 0LL;
  *a9 = 0;
  *psResult = 0;
  *a1 = 1;
  *a3 = 0;
  *a2 = 0;
  v52 = a3;
  v18 = 0LL;
  *a12 = 0LL;
  v53 = a2;
  *a11 = 0;
  if ( !a6 && !a7 )
    return 0LL;
  if ( a8 > 0 )
  {
    v20 = a5;
    v21 = *(_WORD *)(a5 + 8);
    if ( a8 <= v21 )
    {
      v22 = a8 + *a14;
      if ( v22 < *a14 )
        return 5123LL;
      LOWORD(v23) = *(_WORD *)(a5 + 12);
      *a14 = v22;
      v23 = (unsigned __int16)v21 <= (unsigned __int16)v23 ? (unsigned __int16)v23 : (unsigned __int16)v21;
      if ( v22 > v23 )
        return 5123LL;
      if ( a6 )
      {
        v17 = *(char **)(a4 + 8);
        v24 = &v17[2 * a8];
        if ( (unsigned __int64)v24 > *(_QWORD *)(a4 + 16) - 2LL )
          return 5133LL;
        v25 = *(_WORD *)v24;
        v26 = v24 + 2;
        *a11 = __ROR2__(v25, 8);
        *a12 = v26;
        if ( (_WORD *)((char *)v26 + (unsigned __int16)*a11) < v26 )
          return 5133LL;
        *a9 = 0;
        if ( UShortToShort(__ROR2__(*(_WORD *)v17, 8), psResult) < 0 )
          return 5121LL;
      }
      else
      {
        v27 = psResult;
      }
      v28 = 1;
      v29 = *v27 + 1;
      if ( a8 > 1 )
      {
        v30 = a9 + 1;
        v31 = (char *)v27 - (char *)a9;
        v32 = v17 - (char *)a9;
        do
        {
          *v30 = *(_WORD *)((char *)v30 + v31 - 2) + 1;
          if ( UShortToShort(__ROR2__(*(_WORD *)((char *)v30 + v32), 8), &v27[v28]) < 0 )
            return 5121LL;
          v34 = *(__int16 *)((char *)v30 + v31);
          if ( v29 > v34 || v29 > *(unsigned __int16 *)(v20 + 6) || v29 <= 0 )
            return 5121LL;
          v27 = psResult;
          v29 = v34 + 1;
          v28 = v33 + 1;
          ++v30;
        }
        while ( v28 < a8 );
      }
      if ( v29 <= 0 )
        return 5121LL;
      v35 = *(unsigned __int16 *)(v20 + 6);
      if ( v29 > v35 )
        return 5121LL;
      v36 = *a13 + v29;
      if ( v36 < *a13 )
        return 5121LL;
      v37 = *(_WORD *)(v20 + 10);
      *a13 = v36;
      if ( (unsigned __int16)v35 <= v37 )
        v35 = v37;
      if ( v36 > v35 )
        return 5121LL;
      if ( a6 == v14 )
        return 0LL;
      v38 = v14;
      v39 = v29;
      v40 = v16;
      do
      {
        if ( v38 )
        {
          v42 = *(v40 - 1);
          v39 -= v38;
          if ( v39 < 0 )
            return 5133LL;
          v43 = v40;
          v40 += v38;
          memset(v43, v42, v38);
          do
            --v38;
          while ( v38 );
        }
        else
        {
          if ( (unsigned __int64)v18 > *(_QWORD *)(a4 + 16) - 1LL )
            return 5133LL;
          v41 = *(_BYTE *)v18;
          *v40 = *(_BYTE *)v18;
          if ( (v41 & 8) != 0 )
          {
            v18 = (_WORD *)((char *)v18 + 1);
            if ( (unsigned __int64)v18 > *(_QWORD *)(a4 + 16) - 1LL )
              return 5133LL;
            v38 = *(unsigned __int8 *)v18;
          }
          v18 = (_WORD *)((char *)v18 + 1);
          ++v40;
          --v39;
        }
      }
      while ( v39 > 0 );
      if ( v38 )
        return 5121LL;
      v44 = v14;
      v45 = v16;
      v46 = v14;
      do
      {
        v47 = *v45;
        if ( (*v45 & 2) != 0 )
        {
          if ( (unsigned __int64)v18 > *(_QWORD *)(a4 + 16) - 1LL )
            return 5133LL;
          v48 = *(unsigned __int8 *)v18;
          if ( (v47 & 0x10) != 0 )
            v44 += v48;
          else
            v44 -= v48;
          v18 = (_WORD *)((char *)v18 + 1);
        }
        else if ( (v47 & 0x10) == 0 )
        {
          if ( (unsigned __int64)v18 > *(_QWORD *)(a4 + 16) - 2LL )
            return 5133LL;
          v44 += __ROR2__(*v18++, 8);
        }
        ++v45;
        ++v46;
        *v52++ = v44;
      }
      while ( v46 < v29 );
      v49 = v14;
      do
      {
        v50 = *v16;
        if ( (*v16 & 4) != 0 )
        {
          if ( (unsigned __int64)v18 > *(_QWORD *)(a4 + 16) - 1LL )
            return 5133LL;
          v51 = *(unsigned __int8 *)v18;
          if ( (v50 & 0x20) != 0 )
            LOWORD(v14) = v51 + v14;
          else
            LOWORD(v14) = v14 - v51;
          v18 = (_WORD *)((char *)v18 + 1);
        }
        else if ( (v50 & 0x20) == 0 )
        {
          if ( (unsigned __int64)v18 > *(_QWORD *)(a4 + 16) - 2LL )
            return 5133LL;
          LOWORD(v14) = __ROR2__(*v18++, 8) + v14;
        }
        ++v49;
        *v53 = (__int16)v14;
        *v16++ &= 1u;
        ++v53;
      }
      while ( v49 < v29 );
      if ( (unsigned __int64)v18 <= *(_QWORD *)(a4 + 16) )
      {
        *(_QWORD *)(a4 + 8) = v18;
        return 0LL;
      }
      return 5133LL;
    }
  }
  return 5123LL;
}
