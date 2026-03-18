/*
 * XREFs of sfac_ReadOutlineData @ 0x1C00C9C30
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00C8060 (fsg_ExecuteGlyph.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall sfac_ReadOutlineData(
        _BYTE *a1,
        _DWORD *a2,
        _DWORD *a3,
        __int64 a4,
        unsigned __int16 *a5,
        int a6,
        int a7,
        __int16 a8,
        _WORD *a9,
        char *a10,
        _WORD *a11,
        _QWORD *a12,
        unsigned int *a13,
        unsigned int *a14)
{
  __int16 v14; // bp
  _WORD *v15; // rsi
  _DWORD *v16; // r15
  _DWORD *v17; // r14
  _BYTE *v18; // rbx
  char *v19; // r12
  __int16 v20; // dx
  unsigned int v21; // r8d
  unsigned int v22; // eax
  char *v23; // rcx
  __int16 v24; // ax
  _WORD *v25; // rcx
  _WORD *v26; // r8
  unsigned __int16 v27; // ax
  int v28; // edx
  int v29; // r13d
  int v30; // ecx
  unsigned int v31; // edx
  unsigned __int16 v32; // ax
  unsigned __int16 v33; // r12
  int v34; // ecx
  _BYTE *v35; // r9
  char v36; // al
  __int16 v37; // r9
  char *v38; // rcx
  int i; // edx
  char v40; // r8
  __int16 v41; // ax
  int j; // ecx
  char v43; // dl
  __int16 v44; // ax
  signed __int64 v46; // rdi
  _WORD *v47; // rcx
  signed __int64 v48; // r12
  unsigned __int16 *v49; // r8
  unsigned __int16 v50; // ax
  int v52; // [rsp+78h] [rbp+30h]
  __int64 v53; // [rsp+90h] [rbp+48h]

  v14 = 0;
  v15 = 0LL;
  v16 = a3;
  v17 = a2;
  v18 = a1;
  *a9 = 0;
  v19 = 0LL;
  *(_WORD *)a10 = 0;
  *a1 = 1;
  *a3 = 0;
  *a2 = 0;
  *a12 = 0LL;
  *a11 = 0;
  if ( !a6 && !a7 )
    return 0LL;
  if ( a8 <= 0 )
    return 5123LL;
  v20 = a5[4];
  if ( a8 > v20 )
    return 5123LL;
  v21 = *a14 + a8;
  if ( v21 < *a14 )
    return 5123LL;
  LOWORD(v22) = a5[6];
  *a14 = v21;
  v22 = (unsigned __int16)v20 <= (unsigned __int16)v22 ? (unsigned __int16)v22 : (unsigned __int16)v20;
  if ( v21 > v22 )
    return 5123LL;
  if ( a6 )
  {
    v19 = *(char **)(a4 + 8);
    v23 = &v19[2 * a8];
    if ( (unsigned __int64)v23 > *(_QWORD *)(a4 + 16) - 2LL )
      return 5133LL;
    v24 = *(_WORD *)v23;
    v25 = v23 + 2;
    *a11 = __ROR2__(v24, 8);
    *a12 = v25;
    v15 = (_WORD *)((char *)v25 + (unsigned __int16)*a11);
    if ( v15 < v25 )
      return 5133LL;
    v26 = a9;
    *a9 = 0;
    v27 = __ROR2__(*(_WORD *)v19, 8);
    if ( v27 > 0x7FFFu )
    {
      *(_WORD *)a10 = -1;
      return 5121LL;
    }
    *(_WORD *)a10 = v27;
  }
  else
  {
    v26 = a9;
  }
  v28 = 1;
  v29 = *(__int16 *)a10 + 1;
  if ( a8 <= 1 )
  {
LABEL_14:
    if ( v29 > 0 )
    {
      v30 = a5[3];
      if ( v29 <= v30 )
      {
        v31 = *a13 + v29;
        if ( v31 >= *a13 )
        {
          v32 = a5[5];
          *a13 = v31;
          if ( (unsigned __int16)v30 <= v32 )
            v30 = v32;
          if ( v31 <= v30 )
          {
            if ( !a6 )
              return 0LL;
            v33 = 0;
            v53 = (__int64)v18;
            v34 = v29;
            v35 = v18;
            do
            {
              if ( v33 )
              {
                v52 = v34 - v33;
                if ( v52 < 0 )
                  return 5133LL;
                memset(v35, (unsigned __int8)*(v35 - 1), v33);
                v35 = (_BYTE *)(v33 + v53);
                v53 = (__int64)v35;
                do
                  --v33;
                while ( v33 );
                v34 = v52;
              }
              else
              {
                if ( (unsigned __int64)v15 > *(_QWORD *)(a4 + 16) - 1LL )
                  return 5133LL;
                v36 = *(_BYTE *)v15;
                *v35 = *(_BYTE *)v15;
                if ( (v36 & 8) != 0 )
                {
                  v15 = (_WORD *)((char *)v15 + 1);
                  if ( (unsigned __int64)v15 > *(_QWORD *)(a4 + 16) - 1LL )
                    return 5133LL;
                  v33 = *(unsigned __int8 *)v15;
                }
                ++v35;
                v15 = (_WORD *)((char *)v15 + 1);
                v53 = (__int64)v35;
                --v34;
              }
            }
            while ( v34 > 0 );
            if ( !v33 )
            {
              v37 = 0;
              v38 = v18;
              for ( i = 0; i < v29; ++i )
              {
                v40 = *v38;
                if ( (*v38 & 2) != 0 )
                {
                  if ( (unsigned __int64)v15 > *(_QWORD *)(a4 + 16) - 1LL )
                    return 5133LL;
                  v41 = *(unsigned __int8 *)v15;
                  if ( (v40 & 0x10) != 0 )
                    v37 += v41;
                  else
                    v37 -= v41;
                  v15 = (_WORD *)((char *)v15 + 1);
                }
                else if ( (v40 & 0x10) == 0 )
                {
                  if ( (unsigned __int64)v15 > *(_QWORD *)(a4 + 16) - 2LL )
                    return 5133LL;
                  v37 += __ROR2__(*v15++, 8);
                }
                ++v38;
                *v16++ = v37;
              }
              for ( j = 0; j < v29; ++j )
              {
                v43 = *v18;
                if ( (*v18 & 4) != 0 )
                {
                  if ( (unsigned __int64)v15 > *(_QWORD *)(a4 + 16) - 1LL )
                    return 5133LL;
                  v44 = *(unsigned __int8 *)v15;
                  if ( (v43 & 0x20) != 0 )
                    v14 += v44;
                  else
                    v14 -= v44;
                  v15 = (_WORD *)((char *)v15 + 1);
                }
                else if ( (v43 & 0x20) == 0 )
                {
                  if ( (unsigned __int64)v15 > *(_QWORD *)(a4 + 16) - 2LL )
                    return 5133LL;
                  v14 += __ROR2__(*v15++, 8);
                }
                *v17++ = v14;
                *v18++ &= 1u;
              }
              if ( (unsigned __int64)v15 <= *(_QWORD *)(a4 + 16) )
              {
                *(_QWORD *)(a4 + 8) = v15;
                return 0LL;
              }
              return 5133LL;
            }
          }
        }
      }
    }
    return 5121LL;
  }
  v46 = a10 - (char *)v26;
  v47 = v26 + 1;
  v48 = v19 - (char *)v26;
  while ( 1 )
  {
    v49 = (_WORD *)((char *)v47 + v46);
    *v47 = *(_WORD *)((char *)v47 + v46 - 2) + 1;
    v50 = __ROR2__(*(_WORD *)((char *)v47 + v48), 8);
    if ( v50 > 0x7FFFu )
      break;
    *v49 = v50;
    if ( v29 > (__int16)v50 || v29 > a5[3] || v29 <= 0 )
      return 5121LL;
    ++v28;
    v29 = (__int16)v50 + 1;
    ++v47;
    if ( v28 >= a8 )
      goto LABEL_14;
  }
  *v49 = -1;
  return 5121LL;
}
