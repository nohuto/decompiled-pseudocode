/*
 * XREFs of bQueryAdvanceWidths @ 0x1C00B19B0
 * Callers:
 *     ttfdSemQueryAdvanceWidths @ 0x1C00B1650 (ttfdSemQueryAdvanceWidths.c)
 * Callees:
 *     ttfdOpenFontContext @ 0x1C00A9964 (ttfdOpenFontContext.c)
 *     IsFullWidthCharacter @ 0x1C011D838 (IsFullWidthCharacter.c)
 */

__int64 __fastcall bQueryAdvanceWidths(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  __int64 v9; // r14
  int v10; // r9d
  __int64 v11; // rdx
  unsigned int *v12; // rax
  __int64 v13; // r11
  __int16 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r10
  __int64 v18; // r12
  unsigned int v19; // ebp
  int v20; // eax
  unsigned __int16 v21; // cx
  unsigned int v22; // edx
  __int16 v23; // r15
  int v24; // ecx
  int v25; // r11d
  int v26; // r13d
  __int64 v27; // r10
  __int64 v28; // r9
  __int64 v29; // rax
  int v30; // edi
  unsigned __int16 v31; // di
  __int64 v32; // rcx
  __int16 v34; // r8
  unsigned int v35; // edi
  _WORD *v36; // rbx
  unsigned int *v37; // rsi
  unsigned __int8 v38; // cl
  __int16 v39; // ax
  unsigned __int8 v40; // cl
  __int16 v41; // ax
  unsigned __int8 v42; // cl
  __int16 v43; // ax
  unsigned __int8 v44; // cl
  __int16 v45; // ax
  unsigned __int8 v46; // cl
  __int16 v47; // ax
  unsigned __int8 v48; // cl
  __int16 v49; // ax
  unsigned __int8 v50; // cl
  __int16 v51; // ax
  unsigned __int8 v52; // cl
  __int16 v53; // ax
  __int64 v54; // rcx
  unsigned __int16 *v55; // rdi
  int v56; // ecx
  __int64 v57; // rdx
  __int64 v58; // rax
  int v59; // eax
  int v60; // [rsp+20h] [rbp-48h]
  __int64 v61; // [rsp+28h] [rbp-40h]
  unsigned __int16 v62; // [rsp+70h] [rbp+8h]
  int v63; // [rsp+88h] [rbp+20h]

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) != 0 )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 56);
  if ( v9 )
  {
    *(_DWORD *)(v9 + 40) = *(_DWORD *)(v9 + 40) & 0x80000000 | *(_DWORD *)(a1 + 12);
  }
  else
  {
    v9 = ttfdOpenFontContext();
    *(_QWORD *)(a1 + 56) = v9;
  }
  if ( !v9 )
    return 0xFFFFFFFFLL;
  v10 = *(_DWORD *)(v9 + 40);
  *(_QWORD *)v9 = a1;
  if ( (v10 & 0x42000000) == 0x40000000 && (*(_DWORD *)(*(_QWORD *)(v9 + 8) + 400LL) & 0x10000000) == 0 )
  {
    if ( a5 )
    {
      v54 = a5;
      v55 = a4;
      while ( v54 )
      {
        *v55++ = -1;
        --v54;
      }
    }
    return 0LL;
  }
  v11 = *(_QWORD *)(v9 + 136);
  if ( a2 > 1 )
    return 0LL;
  if ( v11 )
  {
    v34 = 0;
    if ( (v10 & 0x2000) != 0 )
      v34 = 16;
    v35 = a5;
    v36 = a4 + 6;
    v37 = a3 + 6;
    while ( 1 )
    {
      switch ( v35 )
      {
        case 0u:
          goto LABEL_58;
        case 1u:
          goto LABEL_55;
        case 2u:
          goto LABEL_52;
        case 3u:
          goto LABEL_49;
        case 4u:
          goto LABEL_46;
        case 5u:
          goto LABEL_43;
        case 6u:
          goto LABEL_40;
        case 7u:
          goto LABEL_37;
        default:
          v38 = *(_BYTE *)(v37[1] + v11 + 2);
          v39 = 16 * v38;
          if ( v38 )
            v39 += v34;
          v36[1] = v39;
LABEL_37:
          v40 = *(_BYTE *)(*v37 + v11 + 2);
          v41 = 16 * v40;
          if ( v40 )
            v41 += v34;
          *v36 = v41;
LABEL_40:
          v42 = *(_BYTE *)(*(v37 - 1) + v11 + 2);
          v43 = 16 * v42;
          if ( v42 )
            v43 += v34;
          *(v36 - 1) = v43;
LABEL_43:
          v44 = *(_BYTE *)(*(v37 - 2) + v11 + 2);
          v45 = 16 * v44;
          if ( v44 )
            v45 += v34;
          *(v36 - 2) = v45;
LABEL_46:
          v46 = *(_BYTE *)(*(v37 - 3) + v11 + 2);
          v47 = 16 * v46;
          if ( v46 )
            v47 += v34;
          *(v36 - 3) = v47;
LABEL_49:
          v48 = *(_BYTE *)(*(v37 - 4) + v11 + 2);
          v49 = 16 * v48;
          if ( v48 )
            v49 += v34;
          *(v36 - 4) = v49;
LABEL_52:
          v50 = *(_BYTE *)(*(v37 - 5) + v11 + 2);
          v51 = 16 * v50;
          if ( v50 )
            v51 += v34;
          *(v36 - 5) = v51;
LABEL_55:
          v52 = *(_BYTE *)(*(v37 - 6) + v11 + 2);
          v53 = 16 * v52;
          if ( v52 )
            v53 += v34;
          *(v36 - 6) = v53;
LABEL_58:
          if ( v35 <= 8 )
            return 1LL;
          v36 += 8;
          v37 += 8;
          v35 -= 8;
          break;
      }
    }
  }
  v12 = *(unsigned int **)(v9 + 192);
  v13 = *(_QWORD *)(v9 + 8);
  v14 = 0;
  v15 = *(_QWORD *)(v13 + 64);
  v16 = v15 + v12[4];
  v17 = v12[24];
  v18 = v15 + v12[8];
  if ( (_DWORD)v17 && (unsigned __int64)*(unsigned int *)(v13 + 552) + 4 <= v12[25] )
    v61 = v15 + v17;
  else
    v61 = 0LL;
  v19 = (unsigned __int16)__ROR2__(*(_WORD *)(v12[6] + v15 + 34), 8);
  v20 = *(_DWORD *)(v9 + 116);
  v21 = __ROR2__(*(_WORD *)(v18 + 4LL * (v19 - 1)), 8);
  v62 = v21;
  if ( (v20 & 1) != 0 )
  {
    v22 = 1;
    v23 = 0;
    v60 = *(_DWORD *)(v9 + 124);
    if ( (v10 & 0x2000) != 0 )
      v23 = 16;
    v63 = 1;
    v24 = 1;
    if ( (v20 & 0x10) == 0 || (*(_BYTE *)(v16 + 17) & 0x14) == 0 || (*(_DWORD *)(v13 + 400) & 0x10000000) != 0 )
      v24 = 0;
    v25 = *(_DWORD *)(v9 + 80);
    if ( v25 < 0 )
      v25 = -v25;
    if ( a5 )
    {
      v26 = gbJpn98FixPitch;
      v27 = v24;
      v28 = a5;
      do
      {
        if ( ((*(_DWORD *)(v9 + 40) & 0x42000000) != 0x40000000
           || (unsigned int)IsFullWidthCharacter(*(_QWORD *)(v9 + 8), *a3, 65520LL, v28))
          && (!v27 || v61 && v60 >= *(unsigned __int8 *)(*a3 + v61 + 4)) )
        {
          v29 = *a3;
          if ( (unsigned int)v29 >= v19 )
            v30 = v62;
          else
            v30 = (unsigned __int16)__ROR2__(*(_WORD *)(v18 + 4 * v29), 8);
          v31 = ((v25 * v30 + 0x8000) >> 12) & 0xFFF0;
          *a4 = v31;
          if ( !v26 )
          {
            v32 = *(_QWORD *)(v9 + 8);
            if ( (*(_DWORD *)(v32 + 400) & 0x10000000) != 0 )
            {
              if ( (unsigned int)IsFullWidthCharacter(v32, *a3, 65520LL, v28) )
              {
                v56 = *(_DWORD *)(v9 + 404);
                if ( *(int *)(v9 + 80) <= 0 )
                {
                  if ( v31 != -16 * v56 )
                    *a4 = -32 * *(_WORD *)(v9 + 404);
                }
                else if ( v31 != 16 * v56 )
                {
                  *a4 = 32 * *(_WORD *)(v9 + 404);
                }
              }
            }
          }
          v22 = v63;
          if ( *a4 )
            *a4 += v23;
        }
        else
        {
          v22 = 0;
          *a4 = -1;
          v63 = 0;
        }
        ++a3;
        ++a4;
        --v28;
      }
      while ( v28 );
    }
    return v22;
  }
  else
  {
    if ( (v10 & 0x2000) != 0 )
      v14 = 16;
    if ( a5 )
    {
      v57 = a5;
      do
      {
        v58 = *a3;
        if ( (unsigned int)v58 >= v19 )
        {
          v59 = v21;
        }
        else
        {
          v59 = (unsigned __int16)__ROR2__(*(_WORD *)(v18 + 4 * v58), 8);
          v21 = v62;
        }
        if ( v59 )
          LOWORD(v59) = v14 + (int)(float)((float)v59 * *(float *)(v9 + 224));
        else
          v59 = (int)(float)(*(float *)(v9 + 224) * 0.0);
        *a4 = v59;
        ++a3;
        ++a4;
        --v57;
      }
      while ( v57 );
    }
    return 1LL;
  }
}
