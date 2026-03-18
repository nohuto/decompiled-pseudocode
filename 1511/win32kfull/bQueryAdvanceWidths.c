/*
 * XREFs of bQueryAdvanceWidths @ 0x1C00AA1F0
 * Callers:
 *     ttfdSemQueryAdvanceWidths @ 0x1C00A9E90 (ttfdSemQueryAdvanceWidths.c)
 * Callees:
 *     ttfdOpenFontContext @ 0x1C0118EA0 (ttfdOpenFontContext.c)
 *     IsFullWidthCharacter @ 0x1C014739C (IsFullWidthCharacter.c)
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
  __int64 v11; // rdi
  __int16 v12; // r13
  unsigned int *v13; // rax
  __int64 v14; // r11
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r10
  __int64 v18; // r12
  unsigned int v19; // ebp
  int v20; // eax
  int v21; // edi
  __int16 v22; // r15
  int v23; // ecx
  int v24; // r11d
  int v25; // edx
  __int64 v26; // r9
  __int64 v27; // r10
  __int64 v28; // rax
  unsigned __int16 v29; // di
  __int64 v30; // rcx
  unsigned int v32; // r8d
  _WORD *v33; // rbx
  unsigned int *v34; // rdx
  unsigned __int8 v35; // cl
  __int16 v36; // ax
  unsigned __int8 v37; // cl
  __int16 v38; // ax
  unsigned __int8 v39; // cl
  __int16 v40; // ax
  unsigned __int8 v41; // cl
  __int16 v42; // ax
  unsigned __int8 v43; // cl
  __int16 v44; // ax
  unsigned __int8 v45; // cl
  __int16 v46; // ax
  unsigned __int8 v47; // cl
  __int16 v48; // ax
  unsigned __int8 v49; // cl
  __int16 v50; // ax
  __int64 v51; // rcx
  unsigned __int16 *v52; // rdi
  int v53; // eax
  int v54; // eax
  int v55; // ecx
  __int64 v56; // rdx
  __int64 v57; // rax
  int v58; // eax
  unsigned int v59; // [rsp+20h] [rbp-48h]
  int v60; // [rsp+24h] [rbp-44h]
  __int64 v61; // [rsp+28h] [rbp-40h]
  __int16 v62; // [rsp+70h] [rbp+8h]
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
      v51 = a5;
      v52 = a4;
      while ( v51 )
      {
        *v52++ = -1;
        --v51;
      }
    }
    return 0LL;
  }
  v11 = *(_QWORD *)(v9 + 136);
  if ( a2 > 1 )
    return 0LL;
  v12 = 0;
  if ( v11 )
  {
    v32 = a5;
    if ( (v10 & 0x2000) != 0 )
      v12 = 16;
    v33 = a4 + 6;
    v34 = a3 + 6;
    while ( 1 )
    {
      switch ( v32 )
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
          v35 = *(_BYTE *)(v34[1] + v11 + 2);
          v36 = 16 * v35;
          if ( v35 )
            v36 += v12;
          v33[1] = v36;
LABEL_37:
          v37 = *(_BYTE *)(*v34 + v11 + 2);
          v38 = 16 * v37;
          if ( v37 )
            v38 += v12;
          *v33 = v38;
LABEL_40:
          v39 = *(_BYTE *)(*(v34 - 1) + v11 + 2);
          v40 = 16 * v39;
          if ( v39 )
            v40 += v12;
          *(v33 - 1) = v40;
LABEL_43:
          v41 = *(_BYTE *)(*(v34 - 2) + v11 + 2);
          v42 = 16 * v41;
          if ( v41 )
            v42 += v12;
          *(v33 - 2) = v42;
LABEL_46:
          v43 = *(_BYTE *)(*(v34 - 3) + v11 + 2);
          v44 = 16 * v43;
          if ( v43 )
            v44 += v12;
          *(v33 - 3) = v44;
LABEL_49:
          v45 = *(_BYTE *)(*(v34 - 4) + v11 + 2);
          v46 = 16 * v45;
          if ( v45 )
            v46 += v12;
          *(v33 - 4) = v46;
LABEL_52:
          v47 = *(_BYTE *)(*(v34 - 5) + v11 + 2);
          v48 = 16 * v47;
          if ( v47 )
            v48 += v12;
          *(v33 - 5) = v48;
LABEL_55:
          v49 = *(_BYTE *)(*(v34 - 6) + v11 + 2);
          v50 = 16 * v49;
          if ( v49 )
            v50 += v12;
          *(v33 - 6) = v50;
LABEL_58:
          if ( v32 <= 8 )
            return 1LL;
          v33 += 8;
          v34 += 8;
          v32 -= 8;
          break;
      }
    }
  }
  v13 = *(unsigned int **)(v9 + 192);
  v14 = *(_QWORD *)(v9 + 8);
  v15 = *(_QWORD *)(v14 + 64);
  v16 = v15 + v13[4];
  v17 = v13[24];
  v18 = v15 + v13[8];
  if ( (_DWORD)v17 && (unsigned __int64)*(unsigned int *)(v14 + 552) + 4 <= v13[25] )
    v61 = v15 + v17;
  else
    v61 = 0LL;
  v19 = (unsigned __int16)__ROR2__(*(_WORD *)(v15 + v13[6] + 34), 8);
  v20 = *(_DWORD *)(v9 + 116);
  LOWORD(v21) = __ROR2__(*(_WORD *)(v18 + 4LL * (v19 - 1)), 8);
  v62 = v21;
  if ( (v20 & 1) != 0 )
  {
    v22 = 0;
    v60 = *(_DWORD *)(v9 + 124);
    if ( (v10 & 0x2000) != 0 )
      v22 = 16;
    v23 = 1;
    v59 = 1;
    if ( (v20 & 0x10) == 0 || (*(_BYTE *)(v16 + 17) & 0x14) == 0 || (*(_DWORD *)(v14 + 400) & 0x10000000) != 0 )
      v23 = 0;
    v24 = *(_DWORD *)(v9 + 80);
    if ( v24 < 0 )
      v24 = -v24;
    if ( a5 )
    {
      v25 = gbJpn98FixPitch;
      v26 = a5;
      v63 = gbJpn98FixPitch;
      v27 = v23;
      do
      {
        if ( ((*(_DWORD *)(v9 + 40) & 0x42000000) != 0x40000000
           || (v53 = IsFullWidthCharacter(*(_QWORD *)(v9 + 8), *a3, 65520LL, v26), v25 = v63, v53))
          && (!v27 || v61 && v60 >= *(unsigned __int8 *)(*a3 + v61 + 4)) )
        {
          v28 = *a3;
          if ( (unsigned int)v28 >= v19 )
            v21 = (unsigned __int16)v21;
          else
            v21 = (unsigned __int16)__ROR2__(*(_WORD *)(v18 + 4 * v28), 8);
          v29 = ((v24 * v21 + 0x8000) >> 12) & 0xFFF0;
          *a4 = v29;
          if ( !v25 )
          {
            v30 = *(_QWORD *)(v9 + 8);
            if ( (*(_DWORD *)(v30 + 400) & 0x10000000) != 0 )
            {
              v54 = IsFullWidthCharacter(v30, *a3, 65520LL, v26);
              v25 = v63;
              if ( v54 )
              {
                v55 = *(_DWORD *)(v9 + 404);
                if ( *(int *)(v9 + 80) <= 0 )
                {
                  if ( v29 != -16 * v55 )
                    *a4 = -32 * *(_WORD *)(v9 + 404);
                }
                else if ( v29 != 16 * v55 )
                {
                  *a4 = 32 * *(_WORD *)(v9 + 404);
                }
              }
            }
          }
          LOWORD(v21) = v62;
          if ( *a4 )
            *a4 += v22;
        }
        else
        {
          v59 = 0;
          *a4 = -1;
        }
        ++a3;
        ++a4;
        --v26;
      }
      while ( v26 );
    }
    return v59;
  }
  else
  {
    if ( (v10 & 0x2000) != 0 )
      v12 = 16;
    if ( a5 )
    {
      v56 = a5;
      do
      {
        v57 = *a3;
        if ( (unsigned int)v57 >= v19 )
          v58 = (unsigned __int16)v21;
        else
          v58 = (unsigned __int16)__ROR2__(*(_WORD *)(v18 + 4 * v57), 8);
        if ( v58 )
          LOWORD(v58) = v12 + (int)(float)((float)v58 * *(float *)(v9 + 224));
        else
          v58 = (int)(float)(*(float *)(v9 + 224) * 0.0);
        *a4 = v58;
        ++a3;
        ++a4;
        --v56;
      }
      while ( v56 );
    }
    return 1LL;
  }
}
