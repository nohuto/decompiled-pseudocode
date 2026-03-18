/*
 * XREFs of ?bSubtractComplex@RGNOBJAPI@@AEAAHPEAU_RECTL@@0H@Z @ 0x1C0037338
 * Callers:
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C0036B1C (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     UIntAdd @ 0x1C00A93FC (UIntAdd.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memcmp @ 0x1C0151300 (memcmp.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     UIntMult @ 0x1C01DCF90 (UIntMult.c)
 */

__int64 __fastcall RGNOBJAPI::bSubtractComplex(RGNOBJAPI *this, struct _RECTL *a2, struct _RECTL *a3, signed int a4)
{
  struct _RECTL *v5; // r15
  RGNOBJ *v6; // rsi
  _BYTE *v7; // rdi
  int v8; // ecx
  __int64 v9; // r11
  __int64 v10; // r8
  LONG *p_top; // r10
  int v12; // r9d
  __int64 i; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  signed int v16; // r8d
  __int64 v17; // r14
  unsigned int *v18; // r14
  unsigned int *v19; // rbx
  LONG top; // r11d
  __int64 v21; // rax
  _BYTE *v22; // rcx
  __int64 v23; // r12
  __int64 v24; // r13
  int v25; // ecx
  int v26; // r9d
  const void *v27; // rdx
  unsigned int v28; // r10d
  __int64 v29; // r9
  __int64 v30; // rax
  LONG bottom; // r15d
  __int64 v32; // rdx
  signed int v33; // esi
  __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rcx
  int v38; // esi
  int *v39; // rax
  __int64 v40; // r10
  int v41; // r11d
  int v42; // edi
  int v43; // r14d
  __int64 v44; // rcx
  int v45; // r13d
  int v46; // r15d
  _DWORD *v47; // r12
  _DWORD *v48; // rdx
  _DWORD *v49; // r9
  int v50; // eax
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  signed int v54; // ecx
  signed int v55; // ecx
  __int64 v56; // rax
  __int64 v57; // rax
  UINT v58; // ecx
  unsigned int v60; // eax
  int v61; // [rsp+20h] [rbp-E0h]
  int v62; // [rsp+20h] [rbp-E0h]
  UINT puResult; // [rsp+24h] [rbp-DCh] BYREF
  __int64 v64; // [rsp+28h] [rbp-D8h]
  signed int v65; // [rsp+30h] [rbp-D0h]
  unsigned int v66; // [rsp+34h] [rbp-CCh]
  int v67; // [rsp+38h] [rbp-C8h]
  signed int v68; // [rsp+3Ch] [rbp-C4h]
  unsigned int *v69; // [rsp+40h] [rbp-C0h]
  __int64 v70; // [rsp+48h] [rbp-B8h]
  struct _RECTL *v71; // [rsp+50h] [rbp-B0h]
  _DWORD *v72; // [rsp+58h] [rbp-A8h]
  _DWORD *v73; // [rsp+60h] [rbp-A0h]
  LONG v74; // [rsp+68h] [rbp-98h]
  __int64 v75; // [rsp+70h] [rbp-90h]
  int v76; // [rsp+78h] [rbp-88h]
  int v77; // [rsp+7Ch] [rbp-84h]
  _BYTE *v78; // [rsp+80h] [rbp-80h]
  RGNOBJAPI *v79; // [rsp+88h] [rbp-78h]
  __int64 v80; // [rsp+90h] [rbp-70h]
  __int64 v81; // [rsp+98h] [rbp-68h]
  _DWORD *v82; // [rsp+A0h] [rbp-60h]
  _DWORD v83[6]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v84[800]; // [rsp+C0h] [rbp-40h] BYREF

  v65 = a4;
  v71 = a2;
  v5 = a2;
  v79 = this;
  v6 = this;
  if ( a4 < 100 )
  {
    v7 = v84;
    v78 = v84;
LABEL_7:
    v8 = 0;
    v9 = a4;
    v10 = 0LL;
    if ( a4 > 0 )
    {
      p_top = &a3->top;
      do
      {
        v12 = v8;
        for ( i = v10; v12; --v12 )
        {
          v14 = *(_QWORD *)&v7[8 * i - 8];
          if ( *p_top >= *(_DWORD *)(v14 + 4) )
            break;
          *(_QWORD *)&v7[8 * i--] = v14;
        }
        ++v10;
        v15 = v8++;
        p_top += 4;
        *(_QWORD *)&v7[8 * i] = &a3[v15];
      }
      while ( v10 < v9 );
      a4 = v65;
    }
    v83[0] = 0;
    v83[2] = 0;
    v16 = 0;
    v83[1] = v5->bottom;
    v83[3] = 0x7FFFFFFF;
    *(_QWORD *)&v7[8 * v9] = v83;
    v17 = *(_QWORD *)v6;
    *(_DWORD *)(v17 + 108) = 0x80000000;
    v18 = (unsigned int *)(v17 + 104);
    v69 = v18;
    puResult = 0;
    *v18 = 0;
    *((_QWORD *)v18 + 1) = 0x7FFFFFFFLL;
    v19 = &v18[*v18 + 4];
    *(_DWORD *)(*(_QWORD *)v6 + 80LL) = 120;
    *(_DWORD *)(*(_QWORD *)v6 + 84LL) = 1;
    *(_DWORD *)(*(_QWORD *)v6 + 88LL) = 0x7FFFFFFF;
    *(_DWORD *)(*(_QWORD *)v6 + 96LL) = 0x80000000;
    top = v5->top;
    v21 = *(_QWORD *)v7;
    v66 = top;
    if ( *(_DWORD *)(v21 + 12) <= top )
    {
      v22 = v7;
      do
      {
        v22 += 8;
        ++v16;
      }
      while ( *(_DWORD *)(*(_QWORD *)v22 + 12LL) <= top );
      puResult = v16;
    }
    v23 = v16;
    v75 = v16;
    v24 = v16;
    v81 = v16;
    v68 = v16;
    while ( 1 )
    {
      v25 = a4 - v16;
      v26 = *(_DWORD *)(*(_QWORD *)v6 + 80LL) + 8 * (a4 - v16 + 5);
      if ( v26 > *(_DWORD *)(*(_QWORD *)v6 + 24LL) )
      {
        *(_QWORD *)(*(_QWORD *)v6 + 40LL) = v19;
        if ( !RGNOBJ::bExpand(v6, v26 + 4 * v25 * (v25 + 4)) )
        {
          if ( v7 != v84 )
            Win32FreePool(v7);
          return 0LL;
        }
        v16 = puResult;
        top = v66;
        v19 = *(unsigned int **)(*(_QWORD *)v6 + 40LL);
        v18 = &v19[-*(v19 - 1) - 4];
        v69 = v18;
      }
      v27 = v19 + 3;
      v28 = 2;
      v61 = 2;
      v29 = 2LL;
      v64 = 2LL;
      v19[3] = v5->left;
      v19[4] = v5->right;
      v30 = *(_QWORD *)&v7[8 * v23];
      bottom = *(_DWORD *)(v30 + 4);
      if ( bottom <= top )
      {
        v32 = *(_QWORD *)&v7[8 * v24];
        bottom = *(_DWORD *)(v30 + 12);
        if ( *(_DWORD *)(v32 + 4) <= top )
        {
          v33 = v68;
          do
          {
            v34 = v24;
            if ( *(_DWORD *)(v32 + 12) < bottom )
              bottom = *(_DWORD *)(v32 + 12);
            if ( v24 > v23 )
            {
              do
              {
                v35 = *(_QWORD *)&v7[8 * v34 - 8];
                if ( *(_DWORD *)(v32 + 12) >= *(_DWORD *)(v35 + 12) )
                  break;
                *(_QWORD *)&v7[8 * v34--] = v35;
              }
              while ( v34 > v23 );
            }
            if ( *(_DWORD *)(*(_QWORD *)&v7[8 * v34] + 12LL) > top )
            {
              *(_QWORD *)&v7[8 * v34] = v32;
            }
            else
            {
              ++v16;
              ++v23;
            }
            ++v24;
            ++v33;
            v32 = *(_QWORD *)&v7[8 * v24];
          }
          while ( *(_DWORD *)(v32 + 4) <= top );
          v18 = v69;
          v29 = 2LL;
          v68 = v33;
          v6 = v79;
          puResult = v16;
          v81 = v24;
          v75 = v23;
        }
        v36 = *(_QWORD *)&v7[8 * v24];
        v37 = v23;
        v80 = v23;
        if ( *(_DWORD *)(v36 + 4) < bottom )
          bottom = *(_DWORD *)(v36 + 4);
        v74 = bottom;
        if ( v23 < v24 )
        {
          v38 = 2;
          while ( 1 )
          {
            v39 = *(int **)&v7[8 * v37];
            v40 = 0LL;
            v77 = 0;
            v70 = 0LL;
            v41 = *v39;
            v76 = v39[2];
            v67 = v41;
            if ( v29 <= 0 )
              goto LABEL_56;
            v42 = v77;
            v43 = v76;
            v44 = v64;
            v45 = 3;
            v82 = v19 + 5;
            v46 = 1;
            v47 = v19 + 5;
            v48 = v19 + 4;
            v73 = v19 + 4;
            v62 = 2;
            v49 = v19 + 3;
            v72 = v19 + 3;
            v50 = 2;
            do
            {
              if ( v41 >= *v48 )
                goto LABEL_54;
              if ( v43 <= *v49 )
                break;
              v51 = v41 <= *v49;
              if ( v43 >= *v48 )
                v51 += 2;
              if ( !v51 )
              {
                memmove(&v19[v45 + 3], &v19[v46 + 3], 4LL * (v38 - v42 - 1));
                v48 = v73;
                v38 += 2;
                v64 += 2LL;
                v41 = v67;
                v49 = v72;
                v40 = v70;
                *v47 = v43;
LABEL_52:
                *v48 = v41;
                goto LABEL_53;
              }
              v52 = v51 - 1;
              if ( v52 )
              {
                v53 = v52 - 1;
                if ( v53 )
                {
                  if ( v53 == 1 )
                  {
                    memmove(&v19[v42 + 3], &v19[v62 + 3], 4LL * (v38 - v42 - 2));
                    v38 -= 2;
                    v40 = v70 - 2;
                    v49 = v72 - 2;
                    v64 -= 2LL;
                    v48 = v73 - 2;
                    v62 -= 2;
                    v42 -= 2;
                    v41 = v67;
                    v46 -= 2;
                    v45 -= 2;
                    v47 -= 2;
                  }
                  goto LABEL_53;
                }
                goto LABEL_52;
              }
              *v49 = v43;
LABEL_53:
              v50 = v62;
              v44 = v64;
LABEL_54:
              v50 += 2;
              v40 += 2LL;
              v49 += 2;
              v62 = v50;
              v48 += 2;
              v70 = v40;
              v42 += 2;
              v72 = v49;
              v46 += 2;
              v73 = v48;
              v45 += 2;
              v47 += 2;
            }
            while ( v40 < v44 );
            v7 = v78;
            v24 = v81;
            v37 = v80;
            v29 = v64;
            v61 = v38;
LABEL_56:
            v80 = ++v37;
            if ( v37 >= v24 )
            {
              v6 = v79;
              v18 = v69;
              bottom = v74;
              v23 = v75;
              v28 = v61;
              break;
            }
          }
        }
        v27 = v19 + 3;
      }
      if ( bottom > v71->bottom )
        bottom = v71->bottom;
      if ( *v18 == v28 )
      {
        if ( !memcmp(v18 + 3, v27, 4LL * v28) )
        {
          v18[2] = bottom;
          goto LABEL_71;
        }
        v28 = v61;
      }
      if ( v28 )
      {
        v54 = v19[3];
        if ( v54 < *(_DWORD *)(*(_QWORD *)v6 + 88LL) )
          *(_DWORD *)(*(_QWORD *)v6 + 88LL) = v54;
        v55 = v19[v64 + 2];
        if ( v55 > *(_DWORD *)(*(_QWORD *)v6 + 96LL) )
          *(_DWORD *)(*(_QWORD *)v6 + 96LL) = v55;
      }
      v56 = *(_QWORD *)v6;
      v18 = v19;
      v69 = v19;
      ++*(_DWORD *)(v56 + 84);
      *v19 = v28;
      *(_DWORD *)(*(_QWORD *)v6 + 80LL) += 4 * v28 + 16;
      v19[1] = v66;
      v57 = v64;
      v19[2] = bottom;
      v19[v57 + 3] = v28;
      v19 += *v19 + 4;
LABEL_71:
      v66 = bottom;
      top = bottom;
      if ( v23 < v24 )
      {
        v58 = puResult;
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)&v7[8 * v23] + 12LL) > bottom )
            break;
          ++v58;
          ++v23;
        }
        while ( v23 < v24 );
        puResult = v58;
        v75 = v23;
      }
      if ( bottom >= v71->bottom )
      {
        if ( *(_DWORD *)(*(_QWORD *)v6 + 84LL) == 1 )
        {
          *(_DWORD *)(*(_QWORD *)v6 + 92LL) = 0;
          *(_DWORD *)(*(_QWORD *)v6 + 100LL) = 0;
          *(_DWORD *)(*(_QWORD *)v6 + 88LL) = 0;
          *(_DWORD *)(*(_QWORD *)v6 + 96LL) = 0;
          v18[2] = 0x7FFFFFFF;
          *(_QWORD *)(*(_QWORD *)v6 + 40LL) = v19;
        }
        else
        {
          if ( *v18 )
          {
            v19[1] = v18[2];
            ++*(_DWORD *)(*(_QWORD *)v6 + 84LL);
            *v19 = 0;
            v19[3] = 0;
            *(_DWORD *)(*(_QWORD *)v6 + 80LL) += 4 * *v19 + 16;
          }
          else
          {
            v19 = v18;
          }
          *(_DWORD *)(*(_QWORD *)v6 + 112LL) = *(_DWORD *)((unsigned int)(4 * *(_DWORD *)(*(_QWORD *)v6 + 104LL) + 16)
                                                         + *(_QWORD *)v6
                                                         + 108LL);
          *(_DWORD *)(*(_QWORD *)v6 + 92LL) = *(_DWORD *)(*(_QWORD *)v6 + 112LL);
          *(_DWORD *)(*(_QWORD *)v6 + 100LL) = v19[1];
          v60 = *v19;
          v19[2] = 0x7FFFFFFF;
          *(_QWORD *)(*(_QWORD *)v6 + 40LL) = &v19[v60 + 4];
        }
        if ( v7 != v84 )
          Win32FreePool(v7);
        return 1LL;
      }
      v16 = puResult;
      v5 = v71;
      a4 = v65;
    }
  }
  if ( UIntAdd(1u, a4, &puResult) >= 0 && UIntMult(puResult, 8u, &puResult) >= 0 )
  {
    v78 = PALLOCMEM2(puResult, 1852273223LL, 0);
    v7 = v78;
    if ( v78 )
    {
      a4 = v65;
      goto LABEL_7;
    }
  }
  return 0LL;
}
