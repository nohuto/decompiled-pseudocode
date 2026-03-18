/*
 * XREFs of ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C004A15C
 * Callers:
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C004B448 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memcmp @ 0x1C0158D00 (memcmp.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall RGNOBJ::bSubtractComplex(RGNOBJ *this, struct _RECTL *a2, struct _RECTL *a3, int a4)
{
  int v4; // r11d
  struct _RECTL *v6; // rbp
  RGNOBJ *v7; // rsi
  _BYTE *v8; // rdi
  int v9; // r9d
  __int64 v10; // r10
  __int64 v11; // rcx
  LONG *p_top; // r8
  __int64 i; // rdx
  __int64 v14; // r11
  __int64 v15; // rax
  int v16; // r13d
  __int64 v17; // r14
  unsigned int *v18; // r14
  unsigned int *v19; // rbx
  LONG top; // r10d
  __int64 v21; // r15
  __int64 v22; // r12
  int v23; // r8d
  const void *v24; // rdx
  unsigned int v25; // r9d
  __int64 v26; // r8
  __int64 v27; // rax
  LONG bottom; // ebp
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // esi
  int *v35; // rax
  __int64 v36; // r10
  int v37; // r11d
  int v38; // edi
  int v39; // ebp
  __int64 v40; // r13
  int v41; // r12d
  signed int *v42; // rdx
  signed int *v43; // r8
  int v44; // r15d
  int v45; // ecx
  int v46; // ecx
  __int64 v47; // rdx
  int v48; // ecx
  signed int v49; // ecx
  signed int v50; // ecx
  unsigned int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // r8
  unsigned __int64 v55; // rax
  _BYTE *v56; // rcx
  int v57; // [rsp+20h] [rbp-3F8h]
  signed int *v58; // [rsp+20h] [rbp-3F8h]
  int v59; // [rsp+28h] [rbp-3F0h]
  LONG v60; // [rsp+2Ch] [rbp-3ECh]
  __int64 v62; // [rsp+38h] [rbp-3E0h]
  int v63; // [rsp+40h] [rbp-3D8h]
  signed int v64; // [rsp+48h] [rbp-3D0h]
  LONG v65; // [rsp+4Ch] [rbp-3CCh]
  __int64 v66; // [rsp+50h] [rbp-3C8h]
  signed int *v67; // [rsp+58h] [rbp-3C0h]
  unsigned int *v68; // [rsp+60h] [rbp-3B8h]
  __int64 v69; // [rsp+68h] [rbp-3B0h]
  _BYTE *v71; // [rsp+78h] [rbp-3A0h]
  __int64 v72; // [rsp+80h] [rbp-398h]
  __int64 v73; // [rsp+88h] [rbp-390h]
  _DWORD v75[6]; // [rsp+98h] [rbp-380h] BYREF
  _BYTE v76[800]; // [rsp+B0h] [rbp-368h] BYREF

  v4 = a4;
  v6 = a2;
  v7 = this;
  if ( a4 < 100 )
  {
    v8 = v76;
    v71 = v76;
LABEL_3:
    v9 = 0;
    v10 = v4;
    v11 = 0LL;
    if ( v4 > 0 )
    {
      p_top = &a3->top;
      do
      {
        for ( i = v11; i; *(_QWORD *)&v8[8 * i--] = v14 )
        {
          v14 = *(_QWORD *)&v8[8 * i - 8];
          if ( *p_top >= *(_DWORD *)(v14 + 4) )
            break;
        }
        ++v11;
        v15 = v9++;
        p_top += 4;
        *(_QWORD *)&v8[8 * i] = &a3[v15];
      }
      while ( v11 < v10 );
      v4 = a4;
    }
    v75[1] = v6->bottom;
    v75[0] = 0;
    v75[2] = 0;
    v75[3] = 0x7FFFFFFF;
    *(_QWORD *)&v8[8 * v10] = v75;
    v16 = 0;
    v17 = *(_QWORD *)v7;
    *(_DWORD *)(v17 + 108) = 0x80000000;
    v18 = (unsigned int *)(v17 + 104);
    v19 = v18 + 4;
    v68 = v18;
    v59 = 0;
    *v18 = 0;
    *((_QWORD *)v18 + 1) = 0x7FFFFFFFLL;
    *(_DWORD *)(*(_QWORD *)v7 + 80LL) = 120;
    *(_DWORD *)(*(_QWORD *)v7 + 84LL) = 1;
    *(_DWORD *)(*(_QWORD *)v7 + 88LL) = 0x7FFFFFFF;
    *(_DWORD *)(*(_QWORD *)v7 + 96LL) = 0x80000000;
    top = v6->top;
    v60 = top;
    if ( *(_DWORD *)(*(_QWORD *)v8 + 12LL) <= top )
    {
      v56 = v8;
      do
      {
        v56 += 8;
        ++v16;
      }
      while ( *(_DWORD *)(*(_QWORD *)v56 + 12LL) <= top );
      v59 = v16;
    }
    v21 = v16;
    v69 = v16;
    v22 = v16;
    v72 = v16;
    while ( 1 )
    {
      v23 = *(_DWORD *)(*(_QWORD *)v7 + 80LL) + 8 * (v4 - v16 + 5);
      if ( v23 > *(_DWORD *)(*(_QWORD *)v7 + 24LL) )
      {
        *(_QWORD *)(*(_QWORD *)v7 + 40LL) = v19;
        if ( !RGNOBJ::bExpand(v7, v23 + 4 * (v4 - v16) * (v4 - v16 + 4)) )
        {
          if ( v8 != v76 )
            Win32FreePool(v8, v53, v54);
          return 0LL;
        }
        top = v60;
        v19 = *(unsigned int **)(*(_QWORD *)v7 + 40LL);
        v18 = &v19[-*(v19 - 1) - 4];
        v68 = v18;
      }
      v24 = v19 + 3;
      v25 = 2;
      v57 = 2;
      v26 = 2LL;
      v62 = 2LL;
      v19[3] = v6->left;
      v19[4] = v6->right;
      v27 = *(_QWORD *)&v8[8 * v21];
      bottom = *(_DWORD *)(v27 + 4);
      if ( bottom <= top )
      {
        v29 = *(_QWORD *)&v8[8 * v22];
        bottom = *(_DWORD *)(v27 + 12);
        if ( *(_DWORD *)(v29 + 4) <= top )
        {
          do
          {
            v30 = v22;
            if ( *(_DWORD *)(v29 + 12) < bottom )
              bottom = *(_DWORD *)(v29 + 12);
            if ( v22 > v21 )
            {
              do
              {
                v31 = *(_QWORD *)&v8[8 * v30 - 8];
                if ( *(_DWORD *)(v29 + 12) >= *(_DWORD *)(v31 + 12) )
                  break;
                *(_QWORD *)&v8[8 * v30--] = v31;
              }
              while ( v30 > v21 );
            }
            if ( *(_DWORD *)(*(_QWORD *)&v8[8 * v30] + 12LL) <= top )
            {
              ++v16;
              ++v21;
            }
            else
            {
              *(_QWORD *)&v8[8 * v30] = v29;
            }
            ++v22;
            v29 = *(_QWORD *)&v8[8 * v22];
          }
          while ( *(_DWORD *)(v29 + 4) <= top );
          v7 = this;
          v26 = 2LL;
          v59 = v16;
          v72 = v22;
          v69 = v21;
        }
        v32 = *(_QWORD *)&v8[8 * v22];
        v33 = v21;
        v73 = v21;
        if ( *(_DWORD *)(v32 + 4) < bottom )
          bottom = *(_DWORD *)(v32 + 4);
        v65 = bottom;
        if ( v21 < v22 )
        {
          v34 = 2;
          while ( 1 )
          {
            v35 = *(int **)&v8[8 * v33];
            v36 = 0LL;
            v66 = 0LL;
            v37 = *v35;
            v64 = v35[2];
            v63 = *v35;
            if ( v26 <= 0 )
              goto LABEL_37;
            v38 = 0;
            v39 = 1;
            v40 = v62;
            v41 = 3;
            v42 = (signed int *)(v19 + 4);
            v67 = (signed int *)(v19 + 4);
            v43 = (signed int *)(v19 + 3);
            v58 = (signed int *)(v19 + 3);
            v44 = 2;
            do
            {
              if ( v37 >= *v42 )
                goto LABEL_35;
              if ( v64 <= *v43 )
                break;
              v45 = v37 <= *v43;
              if ( v64 >= *v42 )
                v45 += 2;
              if ( !v45 )
              {
                memmove(&v19[v41 + 3], &v19[v39 + 3], 4LL * (v34 - v38 - 1));
                v36 = v66;
                v34 += 2;
                v42 = v67;
                v40 += 2LL;
                v37 = v63;
                v43 = v58;
                v19[v66 + 5] = v64;
LABEL_49:
                *v42 = v37;
                goto LABEL_35;
              }
              v46 = v45 - 1;
              if ( !v46 )
              {
                *v43 = v64;
                goto LABEL_35;
              }
              v48 = v46 - 1;
              if ( !v48 )
                goto LABEL_49;
              if ( v48 == 1 )
              {
                memmove(&v19[v38 + 3], &v19[v44 + 3], 4LL * (v34 - v38 - 2));
                v34 -= 2;
                v36 = v66 - 2;
                v43 = v58 - 2;
                v37 = v63;
                v40 -= 2LL;
                v38 -= 2;
                v44 -= 2;
                v39 -= 2;
                v41 -= 2;
                v42 = v67 - 2;
              }
LABEL_35:
              v36 += 2LL;
              v43 += 2;
              v42 += 2;
              v66 = v36;
              v38 += 2;
              v58 = v43;
              v44 += 2;
              v67 = v42;
              v39 += 2;
              v41 += 2;
            }
            while ( v36 < v40 );
            v8 = v71;
            v26 = v40;
            v22 = v72;
            v33 = v73;
            v62 = v40;
            v57 = v34;
LABEL_37:
            v73 = ++v33;
            if ( v33 >= v22 )
            {
              v7 = this;
              v18 = v68;
              bottom = v65;
              v21 = v69;
              v16 = v59;
              v25 = v57;
              break;
            }
          }
        }
        v24 = v19 + 3;
      }
      if ( bottom > a2->bottom )
        bottom = a2->bottom;
      if ( *v18 == v25 )
      {
        if ( !memcmp(v18 + 3, v24, 4LL * v25) )
        {
          v18[2] = bottom;
          goto LABEL_57;
        }
        v25 = v57;
      }
      if ( v25 )
      {
        v49 = v19[3];
        if ( v49 < *(_DWORD *)(*(_QWORD *)v7 + 88LL) )
          *(_DWORD *)(*(_QWORD *)v7 + 88LL) = v49;
        v47 = v62;
        v50 = v19[v62 + 2];
        if ( v50 > *(_DWORD *)(*(_QWORD *)v7 + 96LL) )
          *(_DWORD *)(*(_QWORD *)v7 + 96LL) = v50;
      }
      else
      {
        v47 = v62;
      }
      v18 = v19;
      v68 = v19;
      ++*(_DWORD *)(*(_QWORD *)v7 + 84LL);
      *v19 = v25;
      *(_DWORD *)(*(_QWORD *)v7 + 80LL) += 4 * v25 + 16;
      v19[1] = v60;
      v19[2] = bottom;
      v19[v47 + 3] = v25;
      v19 += *v19 + 4;
LABEL_57:
      v60 = bottom;
      top = bottom;
      if ( v21 < v22 )
      {
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)&v8[8 * v21] + 12LL) > bottom )
            break;
          ++v16;
          ++v21;
        }
        while ( v21 < v22 );
        v59 = v16;
        v69 = v21;
      }
      if ( bottom >= a2->bottom )
      {
        if ( *(_DWORD *)(*(_QWORD *)v7 + 84LL) == 1 )
        {
          *(_DWORD *)(*(_QWORD *)v7 + 92LL) = 0;
          *(_DWORD *)(*(_QWORD *)v7 + 100LL) = 0;
          *(_DWORD *)(*(_QWORD *)v7 + 88LL) = 0;
          *(_DWORD *)(*(_QWORD *)v7 + 96LL) = 0;
          v18[2] = 0x7FFFFFFF;
          *(_QWORD *)(*(_QWORD *)v7 + 40LL) = v19;
        }
        else
        {
          if ( *v18 )
          {
            v19[1] = v18[2];
            ++*(_DWORD *)(*(_QWORD *)v7 + 84LL);
            *v19 = 0;
            v19[3] = 0;
            *(_DWORD *)(*(_QWORD *)v7 + 80LL) += 4 * *v19 + 16;
          }
          else
          {
            v19 = v18;
          }
          *(_DWORD *)(*(_QWORD *)v7 + 112LL) = *(_DWORD *)((unsigned int)(4 * *(_DWORD *)(*(_QWORD *)v7 + 104LL) + 16)
                                                         + *(_QWORD *)v7
                                                         + 108LL);
          *(_DWORD *)(*(_QWORD *)v7 + 92LL) = *(_DWORD *)(*(_QWORD *)v7 + 112LL);
          *(_DWORD *)(*(_QWORD *)v7 + 100LL) = v19[1];
          v52 = *v19;
          v19[2] = 0x7FFFFFFF;
          v47 = (__int64)&v19[v52 + 4];
          *(_QWORD *)(*(_QWORD *)v7 + 40LL) = v47;
        }
        if ( v8 != v76 )
          Win32FreePool(v8, v47, 1LL);
        return 1LL;
      }
      v4 = a4;
      v6 = a2;
    }
  }
  v55 = 8LL * (unsigned int)(a4 + 1);
  if ( v55 <= 0xFFFFFFFF )
  {
    v71 = (_BYTE *)PALLOCMEM2((unsigned int)v55);
    v8 = v71;
    if ( v71 )
    {
      v4 = a4;
      goto LABEL_3;
    }
  }
  return 0LL;
}
