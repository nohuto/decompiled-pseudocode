/*
 * XREFs of cjComputeGLYPHSET_MSFT_UNICODE @ 0x1C00AC430
 * Callers:
 *     bLoadGlyphSet @ 0x1C00AC344 (bLoadGlyphSet.c)
 * Callees:
 *     sfac_ComputeIndex4 @ 0x1C00AC840 (sfac_ComputeIndex4.c)
 *     Fixup5cRun @ 0x1C0244F2C (Fixup5cRun.c)
 *     sfac_ComputeIndex2 @ 0x1C02D8734 (sfac_ComputeIndex2.c)
 */

__int64 __fastcall cjComputeGLYPHSET_MSFT_UNICODE(__int64 a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  int v4; // r10d
  unsigned __int16 v5; // bp
  unsigned int *v6; // rdi
  unsigned __int16 v7; // r8
  _DWORD *v8; // r12
  __int64 v9; // rbx
  unsigned __int16 v10; // si
  unsigned int v11; // edx
  unsigned int v12; // r15d
  bool v13; // zf
  __int16 v14; // r14
  __int64 v15; // r10
  BOOL v16; // ecx
  unsigned __int16 v17; // r14
  __int64 v18; // r11
  unsigned __int16 *v19; // r13
  unsigned int *v20; // r9
  _BOOL8 v21; // rdx
  unsigned __int16 v22; // cx
  unsigned __int16 v23; // di
  __int64 v24; // r14
  unsigned __int16 v25; // si
  int v26; // eax
  int v27; // eax
  __int64 v28; // r9
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rax
  __int64 v32; // rax
  _WORD *v33; // r12
  int v34; // ebp
  unsigned int *v35; // rbx
  unsigned int v36; // r15d
  unsigned __int16 v37; // ax
  int v38; // ebx
  int v39; // eax
  __int64 v40; // rax
  __int64 result; // rax
  unsigned __int16 *v42; // rax
  unsigned __int16 v43; // ax
  __int16 v44; // [rsp+30h] [rbp-B8h]
  __int16 v45; // [rsp+34h] [rbp-B4h] BYREF
  __int16 v46; // [rsp+38h] [rbp-B0h]
  unsigned __int16 v47; // [rsp+3Ch] [rbp-ACh] BYREF
  __int16 v48; // [rsp+40h] [rbp-A8h]
  unsigned int *v49; // [rsp+48h] [rbp-A0h]
  int v50; // [rsp+50h] [rbp-98h]
  unsigned int *v51; // [rsp+58h] [rbp-90h] BYREF
  __int64 v52; // [rsp+60h] [rbp-88h]
  _BOOL8 v53; // [rsp+68h] [rbp-80h]
  unsigned __int16 *v54; // [rsp+70h] [rbp-78h]
  unsigned __int16 *v55; // [rsp+78h] [rbp-70h] BYREF
  __int64 v56; // [rsp+80h] [rbp-68h]
  BOOL v57; // [rsp+88h] [rbp-60h]
  unsigned __int16 *v58; // [rsp+90h] [rbp-58h]
  unsigned int v59; // [rsp+98h] [rbp-50h]
  unsigned __int16 *v60; // [rsp+A0h] [rbp-48h]

  v4 = *a4;
  v5 = 0;
  v60 = 0LL;
  v6 = a3;
  v58 = 0LL;
  v7 = 0;
  v50 = 0;
  v8 = a4;
  v9 = a2;
  v10 = 0;
  if ( (v4 & 4) != 0 )
  {
    v7 = 1;
    v50 = 1;
  }
  v11 = v7 + a4[1];
  v12 = 4 * (a4[3] + 4 + 4 * v11);
  v59 = v12;
  if ( !v6 )
    return v12;
  v13 = (v4 & 3) == 3;
  v14 = *(_WORD *)(a1 + 6);
  v15 = a1 + 14;
  v56 = a1 + 14;
  v16 = v13;
  v17 = __ROR2__(v14, 8) >> 1;
  v57 = v13;
  v44 = v17;
  v18 = v15 + 2LL * (v17 + 1);
  v52 = v18;
  if ( *(_WORD *)(v18 + 2LL * v17 - 2) == 0xFFFF && v17 > 1u )
    v44 = --v17;
  v54 = (unsigned __int16 *)(v6 + 4);
  v19 = (unsigned __int16 *)(v6 + 4);
  v20 = &v6[4 * v11 + 4];
  v55 = (unsigned __int16 *)(v6 + 4);
  v49 = v20;
  v51 = v20;
  v48 = 0;
  if ( !v17 )
    goto LABEL_47;
  v21 = v13;
  v53 = v13;
  do
  {
    v22 = v10;
    v10 = __ROR2__(*(_WORD *)(v15 + 2LL * v5), 8);
    v23 = __ROR2__(*(_WORD *)(v18 + 2LL * v5), 8);
    v47 = v23;
    v46 = v10;
    v45 = v10;
    if ( v21 )
    {
      if ( v22 < 0xB7u && v23 > 0xB7u )
      {
        *(_DWORD *)v19 = 65719;
        *((_QWORD *)v19 + 1) = v20;
        v60 = v19;
        v19 += 8;
        ++v20;
        v54 = v19;
        v49 = v20;
        v51 = v20;
        v55 = v19;
      }
      if ( v23 <= 0x2219u )
      {
        v42 = v58;
        if ( v10 >= 0x2219u )
          v42 = v19;
        v58 = v42;
      }
    }
    v19[1] = v10 - v23 + 1;
    *v19 = v23;
    *((_QWORD *)v19 + 1) = v20;
    if ( v7 && v23 <= 0x5Cu && v10 >= 0x5Cu )
    {
      if ( !(unsigned int)Fixup5cRun(v9, (unsigned int)&v47, (unsigned int)&v45, (unsigned int)&v55, (__int64)&v51) )
        return 0LL;
      v19 = v55;
      --v8[3];
      v7 = 0;
      v20 = v51;
      v10 = v45;
      v15 = v56;
      v18 = v52;
      v21 = v53;
      v50 = 0;
      v54 = v19;
      v49 = v51;
      if ( !v19[1] )
        goto LABEL_45;
      v23 = v47;
      v46 = v45;
    }
    if ( v23 == 0xFFFF )
      goto LABEL_44;
    v24 = *(_QWORD *)(v9 + 8);
    v25 = v19[1];
    if ( !v24 )
    {
      v39 = 4097;
      goto LABEL_68;
    }
    *(_QWORD *)(v24 + 232) = v9 + 8;
    if ( v9 == -8 )
    {
      v39 = 4099;
      goto LABEL_68;
    }
    v26 = *(_DWORD *)(v9 + 88);
    *(_DWORD *)(v24 + 8) = v26;
    if ( !v26 )
    {
      v39 = 4104;
      goto LABEL_68;
    }
    v27 = *(_DWORD *)(v9 + 92);
    *(_DWORD *)(v24 + 12) = v27;
    if ( !v27 )
      *(_DWORD *)(v24 + 12) = 2;
    if ( (*(_DWORD *)(v24 + 420) & 2) == 0 )
    {
      v39 = 4101;
      goto LABEL_68;
    }
    v28 = *(_QWORD *)(v9 + 96);
    *(_QWORD *)v24 = v28;
    if ( (*(_WORD *)(v24 + 208) & 0xFFF9) != 0 )
    {
      v20 = v49;
      v39 = 5130;
      goto LABEL_67;
    }
    v29 = *(_DWORD *)(v24 + 92);
    if ( !v29 )
    {
      v38 = 5129;
      goto LABEL_91;
    }
    v30 = *(_DWORD *)(v24 + 88);
    if ( *(_DWORD *)(v24 + 8) != 1 )
    {
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
      v18 = v52;
LABEL_71:
      v21 = v53;
      v38 = 5128;
LABEL_91:
      v20 = v49;
      goto LABEL_41;
    }
    if ( v30 )
    {
      if ( v30 <= 0 || v29 < 0 || v30 > 0x7FFFFFFF - v29 || v30 + v29 > *(_DWORD *)(v28 + 72) )
      {
        v32 = 0LL;
        goto LABEL_28;
      }
      v31 = *(int *)(v24 + 88);
    }
    else
    {
      v31 = *(unsigned int *)(v28 + 272);
    }
    v32 = *(_QWORD *)(v28 + 64) + v31;
LABEL_28:
    if ( !v32 )
      goto LABEL_71;
    v20 = v49;
    v33 = (_WORD *)(v32 + *(unsigned int *)(v24 + 20));
    v34 = *(_DWORD *)(v24 + 212);
    v35 = v49;
    if ( v23 + (unsigned int)v25 > 0xFFFF )
    {
      v38 = 4108;
      goto LABEL_39;
    }
    if ( !v25 )
      goto LABEL_38;
    v36 = *(unsigned __int16 *)(v24 + 392);
    do
    {
      if ( v34 == 4 )
      {
        v37 = sfac_ComputeIndex4(v33, v23, v24);
        goto LABEL_34;
      }
      if ( v34 != 1 )
      {
        if ( v34 == 2 )
        {
          if ( v23 < 0x100u )
          {
            v37 = *((unsigned __int8 *)v33 + v23);
            goto LABEL_34;
          }
          goto LABEL_86;
        }
        if ( v34 == 3 )
        {
          v37 = sfac_ComputeIndex2(v33, v23);
          goto LABEL_34;
        }
        if ( v34 != 5 )
        {
          EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
          v37 = 0;
          goto LABEL_34;
        }
        v43 = __ROR2__(*v33, 8);
        if ( v23 >= v43 )
        {
          if ( (unsigned __int16)(v23 - v43) < __ROR2__(v33[1], 8) )
          {
            v37 = __ROR2__(v33[(unsigned __int16)(v23 - v43) + 2], 8);
            goto LABEL_34;
          }
LABEL_86:
          v37 = 0;
          goto LABEL_34;
        }
      }
      v37 = 0;
LABEL_34:
      *v35 = v37;
      if ( v37 >= v36 )
        *v35 = 0;
      ++v35;
      ++v23;
      --v25;
    }
    while ( v25 );
    v19 = v54;
    v20 = v49;
    v18 = v52;
LABEL_38:
    v38 = 0;
LABEL_39:
    if ( *(_DWORD *)(v24 + 12) != 1 && *(_DWORD *)(v24 + 12) != 2 )
    {
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
      v20 = v49;
      v18 = v52;
    }
    v5 = v48;
    v21 = v53;
    v8 = a4;
LABEL_41:
    v39 = v38;
    if ( !v38 )
    {
      v15 = v56;
      goto LABEL_43;
    }
LABEL_67:
    v15 = v56;
LABEL_68:
    if ( v39 )
      return 0LL;
LABEL_43:
    v17 = v44;
    v10 = v46;
LABEL_44:
    v40 = v19[1];
    v19 += 8;
    v9 = a2;
    v7 = v50;
    v54 = v19;
    v20 += v40;
    v55 = v19;
    v49 = v20;
    v51 = v20;
LABEL_45:
    v48 = ++v5;
  }
  while ( v5 < v17 );
  v6 = a3;
  v12 = v59;
  v16 = v57;
LABEL_47:
  if ( v16 && v60 )
  {
    if ( v58 )
      *(_DWORD *)(*((_QWORD *)v60 + 1) + 4 * (183LL - *v60)) = *(_DWORD *)(*((_QWORD *)v58 + 1) + 4 * (8729LL - *v58));
  }
  *v6 = v12;
  v6[1] = 4;
  v6[2] = v8[3];
  result = v12;
  v6[3] = ((char *)v19 - (char *)(v6 + 4)) >> 4;
  return result;
}
