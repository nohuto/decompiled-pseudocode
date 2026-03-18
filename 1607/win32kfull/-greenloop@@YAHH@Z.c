/*
 * XREFs of ?greenloop@@YAHH@Z @ 0x1C0136CB0
 * Callers:
 *     ?redloop@@YAHXZ @ 0x1C0136B54 (-redloop@@YAHXZ.c)
 * Callees:
 *     ?blueloop@@YAHH@Z @ 0x1C0137200 (-blueloop@@YAHH@Z.c)
 */

__int64 __fastcall greenloop(int a1)
{
  int v1; // r8d
  int v2; // ebp
  int v3; // edx
  int v4; // r14d
  int v5; // ecx
  int v6; // eax
  __int64 v7; // r13
  int v8; // r15d
  int v9; // r12d
  __int64 v10; // r9
  int v11; // eax
  char v12; // r11
  int v13; // r13d
  int v14; // ebx
  int v15; // r10d
  int v16; // eax
  int v17; // edi
  int v18; // r8d
  unsigned int *v19; // rax
  _BYTE *v20; // r9
  int v21; // r15d
  int v22; // esi
  int v23; // edx
  unsigned int v24; // ecx
  int v25; // edx
  int v26; // r8d
  unsigned int *v27; // rcx
  unsigned int v28; // eax
  _BYTE *v29; // r9
  int v30; // edx
  __int64 v31; // rax
  __int64 v32; // rdi
  int v33; // ebx
  int v34; // r14d
  int v35; // r9d
  int v36; // r15d
  __int64 v37; // r12
  __int64 v38; // rsi
  __int64 v39; // r13
  int v40; // ecx
  bool v41; // zf
  __int64 result; // rax
  int v43; // edx
  int v44; // ecx
  int v45; // [rsp+20h] [rbp-78h]
  int v46; // [rsp+24h] [rbp-74h]
  __int64 v47; // [rsp+28h] [rbp-70h]
  __int64 v48; // [rsp+30h] [rbp-68h]
  __int64 v49; // [rsp+38h] [rbp-60h]
  __int64 v50; // [rsp+40h] [rbp-58h]
  unsigned int v51; // [rsp+A0h] [rbp+8h]
  int v52; // [rsp+A8h] [rbp+10h]
  int v53; // [rsp+B0h] [rbp+18h]
  int v54; // [rsp+B8h] [rbp+20h]

  v1 = dword_1C03295D0;
  v2 = 2 * dword_1C03295CC;
  if ( a1 )
  {
    v3 = dword_1C032956C;
    v5 = dword_1C03295D0 - 1;
    v4 = dword_1C0329584;
    v6 = 0;
    dword_1C03295E0 = 0;
    dword_1C03295E4 = dword_1C03295D0 - 1;
    dword_1C03295EC = 0;
    dword_1C03295DC = dword_1C032956C;
    dword_1C03295E8 = dword_1C0329584;
    dword_1C03295F0 = dword_1C03295D0;
  }
  else
  {
    v3 = dword_1C03295DC;
    v4 = dword_1C03295E8;
    v5 = dword_1C03295E4;
    v6 = dword_1C03295E0;
  }
  v7 = qword_1C0329598;
  v8 = dword_1C0329578;
  v9 = dword_1C0329578;
  v45 = v6;
  v10 = qword_1C0329598;
  v47 = qword_1C03295B0;
  v50 = qword_1C03295B0;
  v11 = 1;
  v46 = v5;
  v51 = 0;
  v52 = v3;
  v53 = dword_1C0329578;
  v54 = v4;
  v48 = qword_1C0329598;
  v49 = qword_1C0329598;
  if ( v3 > v5 )
    goto LABEL_37;
  v12 = dword_1C03295D4;
  v13 = dword_1C0329610;
  v14 = dword_1C0329614;
  v15 = dword_1C0329618;
  while ( 1 )
  {
    if ( v11 )
    {
      v13 = dword_1C0329568;
      v15 = v1 - 1;
      v16 = dword_1C0329580;
      v14 = 0;
      dword_1C0329614 = 0;
      dword_1C0329618 = v1 - 1;
      dword_1C0329624 = 0;
      dword_1C0329610 = dword_1C0329568;
      dword_1C032961C = dword_1C0329580;
      dword_1C0329620 = v1;
    }
    else
    {
      v16 = dword_1C032961C;
    }
    v17 = 0;
    v18 = v16;
    v19 = (unsigned int *)v10;
    v20 = (_BYTE *)v47;
    v21 = v14;
    v22 = v15;
    v23 = v13;
    v24 = v9;
    if ( v13 <= v15 )
    {
      while ( *v19 <= v24 )
      {
        v24 += v18;
        ++v23;
        v18 += v2;
        ++v19;
        ++v20;
        if ( v23 > v15 )
          goto LABEL_16;
      }
      if ( v23 > v13 )
      {
        v13 = v23;
        dword_1C0329610 = v23;
        v48 = (__int64)v19;
        v9 = v24;
        v47 = (__int64)v20;
        v21 = v23;
        dword_1C032961C = v18;
      }
      v17 = 1;
      if ( v23 <= v15 )
      {
        while ( *v19 > v24 )
        {
          *v19 = v24;
          ++v23;
          v24 += v18;
          *v20++ = v12;
          v18 += v2;
          ++v19;
          if ( v23 > v15 )
            goto LABEL_16;
        }
        v22 = v23 - 1;
      }
    }
LABEL_16:
    v25 = v13 - 1;
    v26 = dword_1C032961C - v2;
    v27 = (unsigned int *)(v48 - 4);
    v28 = v9 - (dword_1C032961C - v2);
    v29 = (_BYTE *)(v47 - 1);
    if ( v17 )
      goto LABEL_17;
    if ( v25 >= v14 )
    {
      while ( *v27 <= v28 )
      {
        v26 -= v2;
        --v25;
        v28 -= v26;
        --v27;
        --v29;
        if ( v25 < v14 )
          goto LABEL_33;
      }
      v13 = v25;
      dword_1C0329610 = v25;
      v48 = (__int64)v27;
      v9 = v28;
      v47 = (__int64)v29;
      v22 = v25;
      dword_1C032961C = v26;
LABEL_17:
      if ( v25 >= v14 )
      {
        while ( *v27 > v28 )
        {
          *v27 = v28;
          v26 -= v2;
          *v29 = v12;
          v28 -= v26;
          --v29;
          --v25;
          --v27;
          if ( v25 < v14 )
            goto LABEL_22;
        }
        v21 = v25 + 1;
      }
LABEL_22:
      v30 = v52;
      if ( v22 < dword_1C0329624 )
        v15 = v22;
      dword_1C0329624 = v22;
      dword_1C0329618 = v15;
      if ( v21 > dword_1C0329620 )
        v14 = v21;
      dword_1C0329620 = v21;
      dword_1C0329614 = v14;
      if ( !v51 )
      {
        if ( v52 > dword_1C03295DC )
        {
          v4 = v54;
          qword_1C0329598 = v49;
          qword_1C03295B0 = v50;
          dword_1C0329578 = v53;
          dword_1C03295DC = v52;
          dword_1C03295E8 = v54;
          v45 = v52;
        }
        v51 = 1;
      }
      goto LABEL_27;
    }
LABEL_33:
    if ( v51 )
      break;
    v30 = v52;
LABEL_27:
    v47 += dword_1C03295C0;
    v50 += dword_1C03295C0;
    v1 = dword_1C03295D0;
    v31 = 4LL * dword_1C03295C0;
    v10 = v31 + v48;
    v49 += v31;
    v9 += v54;
    v53 += v54;
    v11 = 0;
    v52 = v30 + 1;
    v48 = v10;
    v54 += v2;
    if ( v30 + 1 > dword_1C03295E4 )
      goto LABEL_36;
  }
  v46 = v52 - 1;
LABEL_36:
  v3 = dword_1C03295DC;
  v7 = qword_1C0329598;
  v8 = dword_1C0329578;
LABEL_37:
  v32 = dword_1C03295C0;
  v33 = v3 - 1;
  v34 = v4 - v2;
  v35 = dword_1C03295E0;
  v36 = v8 - v34;
  v37 = qword_1C03295B0 - dword_1C03295C0;
  dword_1C03295F8 = v34;
  v38 = 4LL * dword_1C03295C0;
  dword_1C0329574 = v36;
  v39 = v7 - v38;
  dword_1C03295F4 = v36;
  qword_1C0329590 = v39;
  v40 = 1;
  qword_1C0329600 = v39;
  qword_1C03295A8 = v37;
  qword_1C0329608 = v37;
  if ( v3 - 1 < dword_1C03295E0 )
  {
    result = v51;
    v43 = v45;
  }
  else
  {
    do
    {
      v41 = (unsigned int)blueloop(v40) == 0;
      result = v51;
      if ( v41 )
      {
        if ( v51 )
        {
          v35 = dword_1C03295E0;
          v43 = v33 + 1;
          goto LABEL_41;
        }
      }
      else if ( !v51 )
      {
        result = 1LL;
        dword_1C03295DC = v33;
        v51 = 1;
        qword_1C0329598 = v39;
        qword_1C03295B0 = v37;
        dword_1C0329578 = v36;
        dword_1C03295E8 = v34;
        v46 = v33;
      }
      qword_1C0329590 -= v38;
      v34 -= v2;
      dword_1C0329574 -= v34;
      v36 -= v34;
      qword_1C03295A8 -= v32;
      v39 -= v38;
      v35 = dword_1C03295E0;
      v37 -= v32;
      --v33;
      qword_1C0329600 = v39;
      v40 = 0;
      qword_1C0329608 = v37;
      dword_1C03295F8 = v34;
      dword_1C03295F4 = v36;
    }
    while ( v33 >= dword_1C03295E0 );
    v43 = v45;
  }
LABEL_41:
  if ( (_DWORD)result )
  {
    v44 = dword_1C03295E4;
    if ( v46 < dword_1C03295EC )
      v44 = v46;
    dword_1C03295EC = v46;
    dword_1C03295E4 = v44;
    if ( v43 > dword_1C03295F0 )
      v35 = v43;
    dword_1C03295F0 = v43;
    dword_1C03295E0 = v35;
  }
  return result;
}
