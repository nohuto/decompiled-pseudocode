/*
 * XREFs of ?vPatCpyRect8_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02BE750
 * Callers:
 *     ?vBrushPath8_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z @ 0x1C02C9990 (-vBrushPath8_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z.c)
 * Callees:
 *     vFetchAndCopy @ 0x1C00E211C (vFetchAndCopy.c)
 */

void __fastcall vPatCpyRect8_8x8(struct _PATBLTFRAME *a1, int a2)
{
  int *v2; // rax
  struct _PATBLTFRAME *v3; // rsi
  unsigned int *v4; // r14
  int v5; // r11d
  int v6; // ecx
  char v7; // di
  char v8; // r11
  __int64 v9; // r9
  int v10; // r10d
  int v11; // r12d
  int v12; // ecx
  int v13; // ebp
  int v14; // r15d
  int v15; // r15d
  int v16; // eax
  int v17; // edx
  int v18; // r13d
  BOOL v19; // r8d
  int v20; // eax
  unsigned int *v21; // r13
  unsigned __int64 v22; // r10
  int v23; // r9d
  __int64 v24; // rax
  _BOOL8 v25; // rcx
  int v26; // ebx
  unsigned int v27; // r14d
  unsigned int v28; // edx
  unsigned int v29; // eax
  int v30; // eax
  _BYTE *v31; // rbp
  int v32; // r8d
  __int64 v33; // r9
  unsigned int v34; // ecx
  int v35; // edx
  unsigned int v36; // esi
  _BYTE *v37; // rdi
  unsigned __int64 v38; // rax
  bool v39; // zf
  unsigned int v40; // [rsp+20h] [rbp-D8h]
  int v41; // [rsp+24h] [rbp-D4h]
  int v42; // [rsp+28h] [rbp-D0h]
  char v43; // [rsp+2Ch] [rbp-CCh]
  unsigned int v44; // [rsp+30h] [rbp-C8h]
  char v45; // [rsp+34h] [rbp-C4h]
  int v46; // [rsp+38h] [rbp-C0h]
  int v47; // [rsp+3Ch] [rbp-BCh]
  _DWORD v48[2]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v49; // [rsp+48h] [rbp-B0h]
  __int64 v50; // [rsp+50h] [rbp-A8h]
  unsigned int *v51; // [rsp+58h] [rbp-A0h]
  int *v52; // [rsp+60h] [rbp-98h]
  __int64 v53; // [rsp+68h] [rbp-90h]
  unsigned int *v54; // [rsp+70h] [rbp-88h]
  _BOOL8 v55; // [rsp+78h] [rbp-80h]
  unsigned __int64 v56; // [rsp+80h] [rbp-78h]
  _QWORD v57[2]; // [rsp+88h] [rbp-70h] BYREF
  int v58; // [rsp+98h] [rbp-60h]
  int v59; // [rsp+9Ch] [rbp-5Ch]
  int v60; // [rsp+A0h] [rbp-58h]
  int v61; // [rsp+A4h] [rbp-54h]
  int v64; // [rsp+110h] [rbp+18h]
  int v65; // [rsp+118h] [rbp+20h]

  v2 = (int *)*((_QWORD *)a1 + 3);
  v3 = a1;
  v4 = (unsigned int *)*((_QWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 8);
  v6 = v5 & 7;
  v52 = v2;
  LOBYTE(v5) = v5 & 3;
  v44 = v6;
  v54 = v4;
  v7 = 8 * (4 - v5);
  v8 = 8 * v5;
  v43 = v8;
  v45 = v7;
  v56 = (unsigned __int64)(v4 + 24);
  do
  {
    v9 = *v2;
    v10 = v2[1];
    v11 = *v2 & 3;
    v12 = v2[2] - v9;
    v64 = v2[2] & 3;
    v13 = v2[3] - v10;
    v14 = v12 - (-v11 & 3) - v64;
    if ( v14 >= 0 )
      v15 = v14 >> 2;
    else
      v15 = 0;
    if ( v11 == 1 )
    {
      if ( v12 == 1 )
      {
        v64 = 0;
        v11 = 4;
        goto LABEL_14;
      }
      if ( v12 == 2 )
      {
        v11 = 5;
LABEL_13:
        v64 = 0;
      }
    }
    else if ( v11 == 2 && v12 == 1 )
    {
      v11 = 6;
      goto LABEL_13;
    }
LABEL_14:
    v58 = 0;
    v57[1] = v48;
    v16 = (v10 - *((_DWORD *)v3 + 9)) & 7;
    v17 = ((int)v9 >> 2) & 1;
    v61 = 2;
    v18 = 3 * v16;
    v19 = (((int)v9 >> 2) & 1) == 0;
    v20 = v10 * *((_DWORD *)v3 + 4);
    v21 = (unsigned int *)((char *)v4 + (unsigned int)(4 * v18));
    v51 = v21;
    v22 = *(_QWORD *)v3 + (v9 & 0xFFFFFFFFFFFFFFFCuLL) + v20;
    v49 = v22;
    v65 = v13 & 7;
    v23 = (v13 >> 3) + 1;
    v42 = 8 * *((_DWORD *)v3 + 4);
    v41 = v23;
    v59 = 8;
    if ( v13 > 8 )
      v13 = 8;
    if ( v13 )
    {
      v24 = v17;
      v25 = v19;
      v50 = v17;
      v55 = v19;
      while ( 1 )
      {
        v47 = v13 - 1;
        if ( *((_DWORD *)v3 + 8) )
        {
          v27 = *v21;
          v28 = v21[1];
          if ( v44 >= 4 )
          {
            if ( v44 == 4 )
            {
              v26 = v21[1];
            }
            else
            {
              v26 = (v28 << v8) | (v27 >> v7);
              v27 = (v27 << v8) | (v28 >> v7);
            }
          }
          else
          {
            v26 = (v27 << v8) | (v28 >> v7);
            v27 = (v28 << v8) | (v27 >> v7);
          }
          if ( v50 )
          {
            v29 = v26;
            v26 = v27;
            v27 = v29;
          }
        }
        else
        {
          v26 = v21[v24];
          v27 = v21[v25];
        }
        v30 = v65;
        v31 = (_BYTE *)v22;
        --v65;
        if ( !v30 )
          v41 = --v23;
        v32 = v23;
        if ( v23 )
          break;
LABEL_62:
        v21 += 3;
        v4 = v54;
        v13 = v47;
        if ( (unsigned __int64)v21 >= v56 )
          v21 = v54;
        v25 = v55;
        v22 += *((int *)v3 + 4);
        v24 = v50;
        v51 = v21;
        v49 = v22;
        if ( !v47 )
          goto LABEL_65;
      }
      v33 = v42;
      v53 = v42;
      while ( 2 )
      {
        --v32;
        v34 = v27;
        v46 = v32;
        v35 = v15;
        v40 = v27;
        v36 = v26;
        v37 = v31;
        if ( !v11 )
          goto LABEL_44;
        if ( v11 == 1 )
        {
          v31[1] = BYTE1(v26);
        }
        else if ( v11 != 2 )
        {
          if ( v11 == 3 )
          {
            v31[3] = HIBYTE(v26);
          }
          else if ( v11 == 4 )
          {
            v31[1] = BYTE1(v26);
          }
          else
          {
            if ( v11 == 5 )
              v31[1] = BYTE1(v26);
            v31[2] = BYTE2(v26);
          }
LABEL_43:
          v37 = v31 + 4;
          v40 = v26;
          v36 = v27;
          v34 = v26;
LABEL_44:
          if ( v15 <= 7 )
          {
            if ( (unsigned int)v15 >= 2 )
            {
              v38 = (unsigned __int64)(unsigned int)v15 >> 1;
              do
              {
                *(_DWORD *)v37 = v36;
                v35 -= 2;
                *((_DWORD *)v37 + 1) = v34;
                v37 += 8;
                --v38;
              }
              while ( v38 );
            }
            if ( v35 )
            {
              *(_DWORD *)v37 = v36;
              v37 += 4;
            }
          }
          else
          {
            v48[1] = v34;
            v48[0] = v36;
            v60 = v15;
            v57[0] = v37;
            vFetchAndCopy((__int64)v57);
            v32 = v46;
            v33 = v53;
            v37 += 4 * v15;
          }
          if ( v64 )
          {
            if ( (v15 & 1) != 0 )
              v36 = v40;
            switch ( v64 )
            {
              case 1:
                *v37 = v36;
                break;
              case 2:
                *(_WORD *)v37 = v36;
                break;
              case 3:
                *(_WORD *)v37 = v36;
                v37[2] = BYTE2(v36);
                break;
            }
          }
          v31 += v33;
          if ( !v32 )
          {
            v21 = v51;
            v8 = v43;
            v7 = v45;
            v3 = a1;
            v23 = v41;
            v22 = v49;
            goto LABEL_62;
          }
          continue;
        }
        break;
      }
      *((_WORD *)v31 + 1) = HIWORD(v26);
      goto LABEL_43;
    }
LABEL_65:
    v2 = v52 + 4;
    v39 = a2-- == 1;
    v52 += 4;
  }
  while ( !v39 );
}
