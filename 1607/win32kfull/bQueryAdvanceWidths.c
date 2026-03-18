/*
 * XREFs of bQueryAdvanceWidths @ 0x1C00285C4
 * Callers:
 *     ttfdSemQueryAdvanceWidths @ 0x1C0028990 (ttfdSemQueryAdvanceWidths.c)
 * Callees:
 *     ttfdOpenFontContext @ 0x1C0019C2C (ttfdOpenFontContext.c)
 *     IsFullWidthCharacter @ 0x1C014BC60 (IsFullWidthCharacter.c)
 */

__int64 __fastcall bQueryAdvanceWidths(__int64 a1, unsigned int a2, unsigned int *a3, __int16 *a4, unsigned int a5)
{
  __int64 v9; // rdi
  int v10; // edx
  __int64 v11; // r8
  __int16 v12; // di
  unsigned int v13; // r11d
  _WORD *v14; // rcx
  unsigned int *i; // rdx
  unsigned __int8 v16; // r10
  __int16 v17; // ax
  unsigned __int8 v18; // r10
  __int16 v19; // ax
  unsigned __int8 v20; // r10
  __int16 v21; // ax
  unsigned __int8 v22; // r10
  __int16 v23; // ax
  unsigned __int8 v24; // r10
  __int16 v25; // ax
  unsigned __int8 v26; // r10
  __int16 v27; // ax
  unsigned __int8 v28; // r10
  __int16 v29; // ax
  unsigned __int8 v30; // r10
  __int16 v31; // ax
  unsigned int *v33; // rax
  __int64 v34; // r11
  __int64 v35; // r8
  __int64 v36; // rbx
  __int64 v37; // r10
  __int64 v38; // r12
  __int64 v39; // rbp
  unsigned int v40; // r10d
  int v41; // eax
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // ecx
  int v45; // r10d
  unsigned int v46; // ebx
  int v47; // edx
  __int64 v48; // r15
  __int16 v49; // r11
  __int64 v50; // r13
  __int64 v51; // rax
  int v52; // r9d
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int16 *v55; // rdi
  int v56; // eax
  int v57; // ecx
  __int16 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rax
  int v61; // eax
  int v62; // [rsp+20h] [rbp-48h]
  int v63; // [rsp+24h] [rbp-44h]
  unsigned int v64; // [rsp+28h] [rbp-40h]
  unsigned __int16 v65; // [rsp+70h] [rbp+8h]
  __int16 v66; // [rsp+88h] [rbp+20h]

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
  if ( v9 )
  {
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
    if ( a2 <= 1 )
    {
      if ( v11 )
      {
        if ( (v10 & 0x2000) != 0 )
          v12 = 16;
        else
          v12 = 0;
        v13 = a5;
        v14 = a4 + 6;
        for ( i = a3 + 6; ; i += 8 )
        {
          if ( v13 )
          {
            if ( v13 != 1 )
            {
              if ( v13 != 2 )
              {
                if ( v13 != 3 )
                {
                  if ( v13 != 4 )
                  {
                    if ( v13 != 5 )
                    {
                      if ( v13 != 6 )
                      {
                        if ( v13 != 7 )
                        {
                          v16 = *(_BYTE *)(i[1] + v11 + 2);
                          v17 = 16 * v16;
                          if ( v16 )
                            v17 += v12;
                          v14[1] = v17;
                        }
                        v18 = *(_BYTE *)(*i + v11 + 2);
                        v19 = 16 * v18;
                        if ( v18 )
                          v19 += v12;
                        *v14 = v19;
                      }
                      v20 = *(_BYTE *)(*(i - 1) + v11 + 2);
                      v21 = 16 * v20;
                      if ( v20 )
                        v21 += v12;
                      *(v14 - 1) = v21;
                    }
                    v22 = *(_BYTE *)(*(i - 2) + v11 + 2);
                    v23 = 16 * v22;
                    if ( v22 )
                      v23 += v12;
                    *(v14 - 2) = v23;
                  }
                  v24 = *(_BYTE *)(*(i - 3) + v11 + 2);
                  v25 = 16 * v24;
                  if ( v24 )
                    v25 += v12;
                  *(v14 - 3) = v25;
                }
                v26 = *(_BYTE *)(*(i - 4) + v11 + 2);
                v27 = 16 * v26;
                if ( v26 )
                  v27 += v12;
                *(v14 - 4) = v27;
              }
              v28 = *(_BYTE *)(*(i - 5) + v11 + 2);
              v29 = 16 * v28;
              if ( v28 )
                v29 += v12;
              *(v14 - 5) = v29;
            }
            v30 = *(_BYTE *)(*(i - 6) + v11 + 2);
            v31 = 16 * v30;
            if ( v30 )
              v31 += v12;
            *(v14 - 6) = v31;
          }
          if ( v13 <= 8 )
            break;
          v14 += 8;
          v13 -= 8;
        }
        return 1LL;
      }
      v33 = *(unsigned int **)(v9 + 192);
      v34 = *(_QWORD *)(v9 + 8);
      v35 = *(_QWORD *)(v34 + 64);
      v36 = v35 + v33[4];
      v37 = v33[24];
      v38 = v35 + v33[8];
      if ( !(_DWORD)v37 || (v39 = v35 + v37, (unsigned __int64)*(unsigned int *)(v34 + 552) + 4 > v33[25]) )
        v39 = 0LL;
      v40 = (unsigned __int16)__ROR2__(*(_WORD *)(v35 + v33[6] + 34), 8);
      v64 = v40;
      v42 = *(unsigned __int16 *)(v38 + 4LL * (v40 - 1));
      v41 = *(_DWORD *)(v9 + 116);
      LOWORD(v42) = __ROR2__(v42, 8);
      v65 = v42;
      if ( (v41 & 1) == 0 )
      {
        if ( (v10 & 0x2000) != 0 )
          v58 = 16;
        else
          v58 = 0;
        if ( a5 )
        {
          v59 = a5;
          do
          {
            v60 = *a3;
            if ( (unsigned int)v60 >= v40 )
              v61 = (unsigned __int16)v42;
            else
              v61 = (unsigned __int16)__ROR2__(*(_WORD *)(v38 + 4 * v60), 8);
            if ( v61 )
              LOWORD(v61) = v58 + (int)(float)((float)v61 * *(float *)(v9 + 224));
            else
              v61 = (int)(float)(*(float *)(v9 + 224) * 0.0);
            *a4 = v61;
            ++a3;
            ++a4;
            --v59;
          }
          while ( v59 );
        }
        return 1LL;
      }
      v43 = 16LL;
      v63 = *(_DWORD *)(v9 + 124);
      v44 = 1;
      if ( (v10 & 0x2000) != 0 )
        v66 = 16;
      else
        v66 = 0;
      if ( (v41 & 0x10) == 0 || (*(_BYTE *)(v36 + 17) & 0x14) == 0 || (*(_DWORD *)(v34 + 400) & 0x10000000) != 0 )
        v44 = 0;
      v45 = *(_DWORD *)(v9 + 80);
      if ( v45 < 0 )
        v45 = -v45;
      v46 = 1;
      if ( !a5 )
        return v46;
      v47 = gbJpn98FixPitch;
      v48 = a5;
      v62 = gbJpn98FixPitch;
      v49 = -1;
      v50 = v44;
      while ( 1 )
      {
        if ( (*(_DWORD *)(v9 + 40) & 0x42000000) == 0x40000000 )
        {
          v56 = IsFullWidthCharacter(*(_QWORD *)(v9 + 8), *a3, v42, v43);
          v43 = 0LL;
          if ( !v56 )
            goto LABEL_70;
          LOWORD(v42) = v65;
          v47 = v62;
        }
        else
        {
          v43 = 0LL;
        }
        if ( !v50 || v39 && v63 >= *(unsigned __int8 *)(*a3 + v39 + 4) )
        {
          v51 = *a3;
          if ( (unsigned int)v51 >= v64 )
            v52 = (unsigned __int16)v42;
          else
            v52 = (unsigned __int16)__ROR2__(*(_WORD *)(v38 + 4 * v51), 8);
          v43 = (unsigned int)((v45 * v52 + 0x8000) >> 12);
          LOWORD(v43) = v43 & 0xFFF0;
          *a4 = v43;
          if ( !v47 )
          {
            v53 = *(_QWORD *)(v9 + 8);
            if ( (*(_DWORD *)(v53 + 400) & 0x10000000) != 0 )
            {
              if ( (unsigned int)IsFullWidthCharacter(v53, *a3, 0LL, v43) )
              {
                v57 = *(_DWORD *)(v9 + 404);
                if ( *(int *)(v9 + 80) <= 0 )
                {
                  if ( (unsigned __int16)v43 != -16 * v57 )
                    *a4 = -32 * *(_WORD *)(v9 + 404);
                }
                else if ( (unsigned __int16)v43 != 16 * v57 )
                {
                  *a4 = 32 * *(_WORD *)(v9 + 404);
                }
              }
            }
          }
          if ( *a4 )
            *a4 += v66;
          goto LABEL_67;
        }
LABEL_70:
        *a4 = v49;
        v46 = 0;
LABEL_67:
        v42 = v65;
        ++a3;
        v47 = v62;
        ++a4;
        if ( !--v48 )
          return v46;
      }
    }
    return 0LL;
  }
  return 0xFFFFFFFFLL;
}
