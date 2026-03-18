/*
 * XREFs of cjComputeGLYPHSET_MSFT_UNICODE @ 0x1C00A4080
 * Callers:
 *     bLoadGlyphSet @ 0x1C00A3E84 (bLoadGlyphSet.c)
 * Callees:
 *     sfac_ComputeIndex4 @ 0x1C00A4560 (sfac_ComputeIndex4.c)
 *     Fixup5cRun @ 0x1C02450BC (Fixup5cRun.c)
 *     sfac_ComputeIndex2 @ 0x1C02D9ABC (sfac_ComputeIndex2.c)
 */

__int64 __fastcall cjComputeGLYPHSET_MSFT_UNICODE(__int64 a1, __int64 a2, unsigned int *a3, int *a4)
{
  int v4; // r10d
  unsigned __int16 v5; // bp
  unsigned int *v6; // rdi
  unsigned __int16 v7; // r8
  __int64 v8; // rbx
  unsigned __int16 v9; // si
  unsigned int v10; // edx
  unsigned int v11; // r15d
  bool v12; // zf
  __int16 v13; // r14
  __int64 v14; // r10
  unsigned __int16 v15; // r14
  __int64 v16; // r11
  unsigned __int16 *v17; // r13
  unsigned int *v18; // r9
  _BOOL8 v19; // rdx
  unsigned __int16 v20; // cx
  unsigned __int16 v21; // di
  __int64 v22; // r14
  unsigned __int16 v23; // si
  int v24; // eax
  int v25; // eax
  __int64 v26; // r9
  int v27; // r8d
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rax
  _WORD *v31; // r12
  int v32; // ebp
  unsigned int *v33; // rbx
  unsigned int v34; // r15d
  unsigned __int16 v35; // ax
  int v36; // ebx
  int v37; // eax
  __int64 v38; // rax
  __int64 result; // rax
  unsigned __int16 v40; // ax
  __int16 v41; // [rsp+30h] [rbp-B8h]
  unsigned __int16 v42; // [rsp+34h] [rbp-B4h] BYREF
  unsigned __int16 v43; // [rsp+38h] [rbp-B0h]
  unsigned __int16 v44; // [rsp+3Ch] [rbp-ACh] BYREF
  __int16 v45; // [rsp+40h] [rbp-A8h]
  unsigned int *v46; // [rsp+48h] [rbp-A0h]
  int v47; // [rsp+50h] [rbp-98h]
  __int64 v48; // [rsp+58h] [rbp-90h]
  BOOL v49; // [rsp+60h] [rbp-88h]
  unsigned int *v50; // [rsp+68h] [rbp-80h] BYREF
  _BOOL8 v51; // [rsp+70h] [rbp-78h]
  unsigned __int16 *v52; // [rsp+78h] [rbp-70h]
  unsigned __int16 *v53; // [rsp+80h] [rbp-68h] BYREF
  __int64 v54; // [rsp+88h] [rbp-60h]
  unsigned int v55; // [rsp+90h] [rbp-58h]
  unsigned __int16 *v56; // [rsp+98h] [rbp-50h]
  unsigned __int16 *v57; // [rsp+A0h] [rbp-48h]

  v4 = *a4;
  v5 = 0;
  v56 = 0LL;
  v6 = a3;
  v57 = 0LL;
  v7 = 0;
  v47 = 0;
  v8 = a2;
  v9 = 0;
  if ( (v4 & 4) != 0 )
  {
    v7 = 1;
    v47 = 1;
  }
  v10 = v7 + a4[1];
  v11 = 4 * (a4[3] + 4 + 4 * v10);
  v55 = v11;
  if ( !v6 )
    return v11;
  v12 = (v4 & 3) == 3;
  v13 = *(_WORD *)(a1 + 6);
  v14 = a1 + 14;
  v54 = a1 + 14;
  v49 = v12;
  v15 = __ROR2__(v13, 8) >> 1;
  v41 = v15;
  v16 = a1 + 14 + 2LL * (v15 + 1);
  v48 = v16;
  if ( *(_WORD *)(v16 + 2LL * v15 - 2) == 0xFFFF && v15 > 1u )
    v41 = --v15;
  v52 = (unsigned __int16 *)(v6 + 4);
  v17 = (unsigned __int16 *)(v6 + 4);
  v18 = &v6[4 * v10 + 4];
  v53 = (unsigned __int16 *)(v6 + 4);
  v46 = v18;
  v50 = v18;
  v45 = 0;
  if ( !v15 )
    goto LABEL_47;
  v19 = v49;
  v51 = v49;
  do
  {
    v20 = v9;
    v9 = __ROR2__(*(_WORD *)(v14 + 2LL * v5), 8);
    v21 = __ROR2__(*(_WORD *)(v16 + 2LL * v5), 8);
    v44 = v21;
    v43 = v9;
    v42 = v9;
    if ( v19 )
    {
      if ( v20 < 0xB7u && v21 > 0xB7u )
      {
        *(_DWORD *)v17 = 65719;
        *((_QWORD *)v17 + 1) = v18;
        v56 = v17;
        v17 += 8;
        ++v18;
        v52 = v17;
        v46 = v18;
        v50 = v18;
        v53 = v17;
      }
      if ( v9 >= 0x2219u && v21 <= 0x2219u )
        v57 = v17;
    }
    v17[1] = v9 - v21 + 1;
    *v17 = v21;
    *((_QWORD *)v17 + 1) = v18;
    if ( v7 && v21 <= 0x5Cu && v9 >= 0x5Cu )
    {
      if ( !(unsigned int)Fixup5cRun(v8, (unsigned int)&v44, (unsigned int)&v42, (unsigned int)&v53, (__int64)&v50) )
        return 0LL;
      v17 = v53;
      v18 = v50;
      v9 = v42;
      --a4[3];
      v7 = 0;
      v14 = v54;
      v16 = v48;
      v19 = v51;
      v47 = 0;
      v52 = v17;
      v46 = v18;
      if ( !v17[1] )
        goto LABEL_45;
      v21 = v44;
      v43 = v9;
    }
    if ( v21 == 0xFFFF )
      goto LABEL_44;
    v22 = *(_QWORD *)(v8 + 8);
    v23 = v17[1];
    if ( !v22 )
    {
      v37 = 4097;
      goto LABEL_71;
    }
    *(_QWORD *)(v22 + 232) = v8 + 8;
    if ( v8 == -8 )
    {
      v37 = 4099;
      goto LABEL_71;
    }
    v24 = *(_DWORD *)(v8 + 88);
    *(_DWORD *)(v22 + 8) = v24;
    if ( !v24 )
    {
      v37 = 4104;
      goto LABEL_71;
    }
    v25 = *(_DWORD *)(v8 + 92);
    *(_DWORD *)(v22 + 12) = v25;
    if ( !v25 )
      *(_DWORD *)(v22 + 12) = 2;
    if ( (*(_DWORD *)(v22 + 420) & 2) == 0 )
    {
      v37 = 4101;
      goto LABEL_71;
    }
    v26 = *(_QWORD *)(v8 + 96);
    *(_QWORD *)v22 = v26;
    if ( (*(_WORD *)(v22 + 208) & 0xFFF9) != 0 )
    {
      v18 = v46;
      v37 = 5130;
      goto LABEL_70;
    }
    v27 = *(_DWORD *)(v22 + 92);
    if ( !v27 )
    {
      v36 = 5129;
      goto LABEL_94;
    }
    v28 = *(_DWORD *)(v22 + 88);
    if ( *(_DWORD *)(v22 + 8) != 1 )
    {
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
      v16 = v48;
LABEL_74:
      v19 = v51;
      v36 = 5128;
LABEL_94:
      v18 = v46;
      goto LABEL_41;
    }
    if ( v28 )
    {
      if ( v28 <= 0 || v27 < 0 || v28 > 0x7FFFFFFF - v27 || v28 + v27 > *(_DWORD *)(v26 + 72) )
      {
        v30 = 0LL;
        goto LABEL_28;
      }
      v29 = *(int *)(v22 + 88);
    }
    else
    {
      v29 = *(unsigned int *)(v26 + 272);
    }
    v30 = *(_QWORD *)(v26 + 64) + v29;
LABEL_28:
    if ( !v30 )
      goto LABEL_74;
    v18 = v46;
    v31 = (_WORD *)(v30 + *(unsigned int *)(v22 + 20));
    v32 = *(_DWORD *)(v22 + 212);
    v33 = v46;
    if ( v21 + (unsigned int)v23 > 0xFFFF )
    {
      v36 = 4108;
      goto LABEL_39;
    }
    if ( !v23 )
      goto LABEL_38;
    v34 = *(unsigned __int16 *)(v22 + 392);
    do
    {
      if ( v32 == 4 )
      {
        v35 = sfac_ComputeIndex4(v31, v21, v22);
        goto LABEL_34;
      }
      if ( v32 != 1 )
      {
        if ( v32 == 2 )
        {
          if ( v21 < 0x100u )
          {
            v35 = *((unsigned __int8 *)v31 + v21);
            goto LABEL_34;
          }
          goto LABEL_89;
        }
        if ( v32 == 3 )
        {
          v35 = sfac_ComputeIndex2(v31, v21);
          goto LABEL_34;
        }
        if ( v32 != 5 )
        {
          EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
          v35 = 0;
          goto LABEL_34;
        }
        v40 = __ROR2__(*v31, 8);
        if ( v21 >= v40 )
        {
          if ( (unsigned __int16)(v21 - v40) < __ROR2__(v31[1], 8) )
          {
            v35 = __ROR2__(v31[(unsigned __int16)(v21 - v40) + 2], 8);
            goto LABEL_34;
          }
LABEL_89:
          v35 = 0;
          goto LABEL_34;
        }
      }
      v35 = 0;
LABEL_34:
      *v33 = v35;
      if ( v35 >= v34 )
        *v33 = 0;
      ++v33;
      ++v21;
      --v23;
    }
    while ( v23 );
    v17 = v52;
    v18 = v46;
    v16 = v48;
LABEL_38:
    v36 = 0;
LABEL_39:
    if ( *(_DWORD *)(v22 + 12) != 1 && *(_DWORD *)(v22 + 12) != 2 )
    {
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
      v18 = v46;
      v16 = v48;
    }
    v5 = v45;
    v19 = v51;
LABEL_41:
    v37 = v36;
    if ( !v36 )
    {
      v14 = v54;
      goto LABEL_43;
    }
LABEL_70:
    v14 = v54;
LABEL_71:
    if ( v37 )
      return 0LL;
LABEL_43:
    v15 = v41;
    v9 = v43;
LABEL_44:
    v38 = v17[1];
    v17 += 8;
    v8 = a2;
    v7 = v47;
    v52 = v17;
    v18 += v38;
    v53 = v17;
    v46 = v18;
    v50 = v18;
LABEL_45:
    v45 = ++v5;
  }
  while ( v5 < v15 );
  v6 = a3;
  v11 = v55;
LABEL_47:
  if ( v49 && v56 )
  {
    if ( v57 )
      *(_DWORD *)(*((_QWORD *)v56 + 1) + 4 * (183LL - *v56)) = *(_DWORD *)(*((_QWORD *)v57 + 1) + 4 * (8729LL - *v57));
  }
  *v6 = v11;
  v6[1] = 4;
  v6[2] = a4[3];
  result = v11;
  v6[3] = ((char *)v17 - (char *)(v6 + 4)) >> 4;
  return result;
}
