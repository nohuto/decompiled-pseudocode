/*
 * XREFs of ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800889AC
 * Callers:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800881A0 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x180088F54 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x180088FB4 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800891B4 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z @ 0x180089214 (-Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Subtract(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  _DWORD *v4; // rsi
  __int64 v5; // rdx
  FastRegion::Internal::CStripe *v6; // r13
  _DWORD *v7; // r14
  FastRegion::Internal::CStripe *v8; // rbx
  char *v9; // r8
  char *v10; // r14
  int v11; // eax
  _DWORD *v12; // rsi
  FastRegion::Internal::CStripe *v13; // rcx
  const struct FastRegion::Internal::CStripe *v14; // r15
  const struct FastRegion::Internal::CStripe *v15; // r12
  char *v16; // rcx
  int v17; // eax
  _DWORD *v18; // rbp
  __int64 v19; // r9
  _DWORD *v20; // r9
  __int64 v21; // r8
  __int64 v22; // r10
  _DWORD *v23; // rcx
  char *v24; // rdx
  FastRegion::Internal::CStripe *v25; // r11
  int v26; // eax
  __int64 v27; // rax
  FastRegion::Internal::CStripe *v28; // rbx
  _DWORD *v29; // rax
  _DWORD *v30; // rdx
  int v31; // ecx
  char *v32; // rcx
  int v33; // eax
  int v34; // eax
  _DWORD *v35; // rbp
  const struct FastRegion::Internal::CStripe *v36; // r9
  _DWORD *v37; // rbp
  _DWORD *v39; // [rsp+68h] [rbp+10h]
  char *v40; // [rsp+70h] [rbp+18h]

  v3 = *(int *)a2;
  v4 = (_DWORD *)((char *)a2 + 12);
  v5 = *(int *)a3;
  v6 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v7 = (_DWORD *)((char *)a3 + 12);
  v8 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v39 = &v4[2 * v3];
  v9 = (char *)a3 + 8 * v5 + 12;
  v40 = v9;
  *((_DWORD *)this + 4) = 8 * (v5 + v3);
  if ( *v4 < *v7 )
  {
    v12 = v4 + 2;
    FastRegion::Internal::CStripe::Copy(
      (FastRegion::Internal::CRgnData *)((char *)this + 12),
      (const struct FastRegion::Internal::CStripe *)(v12 - 2));
    if ( (_DWORD)v6 + 8 + *((_DWORD *)v6 + 3) - (_DWORD)v8 - *((_DWORD *)v6 + 1) )
      v8 = (FastRegion::Internal::CStripe *)((char *)v6 + 8);
    if ( *v12 >= *v7 )
    {
LABEL_44:
      v34 = *v7;
      v10 = (char *)(v7 + 2);
      if ( *v12 <= v34 )
      {
        v12 += 2;
        if ( v12 == v39 )
          goto LABEL_24;
      }
      v15 = (const struct FastRegion::Internal::CStripe *)(v10 - 8);
      v14 = (const struct FastRegion::Internal::CStripe *)(v12 - 2);
      FastRegion::Internal::CStripe::Subtract(
        v8,
        (const struct FastRegion::Internal::CStripe *)(v12 - 2),
        (const struct FastRegion::Internal::CStripe *)(v10 - 8),
        (const struct FastRegion::Internal::CStripe *)(v10 - 8));
      if ( v8 != v6 )
      {
        if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
          v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
        goto LABEL_11;
      }
      v16 = (char *)v8 + 8;
      v17 = *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1);
      goto LABEL_7;
    }
    v35 = (_DWORD *)((char *)v8 + 8);
    while ( 1 )
    {
      v12 += 2;
      if ( v12 == v39 )
        goto LABEL_24;
      FastRegion::Internal::CStripe::Copy(v8, (const struct FastRegion::Internal::CStripe *)(v12 - 2));
      if ( v8 == v6 )
        break;
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
        goto LABEL_56;
LABEL_57:
      if ( *v12 >= *v7 )
        goto LABEL_44;
    }
    if ( !((_DWORD)v35 + v35[1] - *((_DWORD *)v8 + 1) - (_DWORD)v8) )
      goto LABEL_57;
LABEL_56:
    v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
    v35 += 2;
    goto LABEL_57;
  }
  if ( *v4 <= *v7 )
  {
    v12 = v4 + 2;
    v10 = (char *)(v7 + 2);
    v14 = (const struct FastRegion::Internal::CStripe *)(v12 - 2);
    v15 = (const struct FastRegion::Internal::CStripe *)(v10 - 8);
    FastRegion::Internal::CStripe::Subtract(
      (FastRegion::Internal::CRgnData *)((char *)this + 12),
      (const struct FastRegion::Internal::CStripe *)(v12 - 2),
      (const struct FastRegion::Internal::CStripe *)(v10 - 8),
      (const struct FastRegion::Internal::CStripe *)(v12 - 2));
    if ( (_DWORD)v6 + 8 + *((_DWORD *)v6 + 3) - (_DWORD)v8 - *((_DWORD *)v6 + 1) )
      v8 = (FastRegion::Internal::CStripe *)((char *)v6 + 8);
    goto LABEL_11;
  }
  v10 = (char *)(v7 + 2);
  while ( 1 )
  {
    v11 = *(_DWORD *)v10;
    if ( *v4 < *(_DWORD *)v10 )
    {
      v12 = v4 + 2;
      v13 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
      goto LABEL_6;
    }
    v10 += 8;
    if ( *v4 <= v11 )
      break;
    if ( v10 == v9 )
    {
      v12 = v4 + 2;
      v13 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
LABEL_38:
      FastRegion::Internal::CStripe::Copy(v13, (const struct FastRegion::Internal::CStripe *)(v12 - 2));
      v32 = (char *)v6 + 8;
      v33 = *((_DWORD *)v6 + 3) - *((_DWORD *)v6 + 1);
LABEL_39:
      if ( (_DWORD)v32 + v33 - (_DWORD)v8 )
        v8 = (FastRegion::Internal::CStripe *)v32;
      goto LABEL_23;
    }
  }
  v12 = v4 + 2;
  v13 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  if ( v10 == v9 )
    goto LABEL_38;
LABEL_6:
  v14 = (const struct FastRegion::Internal::CStripe *)(v12 - 2);
  v15 = (const struct FastRegion::Internal::CStripe *)(v10 - 8);
  FastRegion::Internal::CStripe::Subtract(
    v13,
    (const struct FastRegion::Internal::CStripe *)(v12 - 2),
    (const struct FastRegion::Internal::CStripe *)(v10 - 8),
    (const struct FastRegion::Internal::CStripe *)(v12 - 2));
  v16 = (char *)v6 + 8;
  v17 = *((_DWORD *)v6 + 3) - *((_DWORD *)v6 + 1);
LABEL_7:
  if ( (_DWORD)v16 + v17 - (_DWORD)v8 )
    v8 = (FastRegion::Internal::CStripe *)v16;
LABEL_11:
  v18 = (_DWORD *)((char *)v8 + 8);
  while ( 1 )
  {
    if ( *v12 > *(_DWORD *)v10 )
    {
      v10 += 8;
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      if ( v10 == v40 )
      {
        v19 = *((int *)v8 + 1);
        *(_DWORD *)v8 = *((_DWORD *)v10 - 2);
        v20 = (_DWORD *)((char *)v8 + v19);
        v21 = ((int)v12[1] - ((int)*(v12 - 1) - 8LL)) >> 2;
        v22 = (int)v21;
        if ( (int)v21 > 0 )
        {
          v23 = v20;
          v24 = (char *)((char *)v12 + *(v12 - 1) - 8 - (char *)v20);
          do
          {
            *v23 = *(_DWORD *)((char *)v23 + (_QWORD)v24);
            ++v23;
            --v22;
          }
          while ( v22 );
        }
        v25 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
        v26 = (_DWORD)v20 + 4 * v21 - ((_DWORD)v8 + 8);
        *((_DWORD *)v8 + 3) = v26;
        if ( v8 == v6 )
        {
          if ( v26 - *((_DWORD *)v8 + 1) == -8 )
            goto LABEL_23;
        }
        else if ( FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
        {
          goto LABEL_23;
        }
        v8 = v25;
        goto LABEL_23;
      }
      v36 = v15;
      goto LABEL_65;
    }
    if ( *v12 < *(_DWORD *)v10 )
    {
      v12 += 2;
      v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
      if ( v12 == v39 )
        goto LABEL_24;
      goto LABEL_63;
    }
    v12 += 2;
    v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
    v10 += 8;
    v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
    if ( v12 == v39 )
      goto LABEL_24;
    if ( v10 == v40 )
      break;
LABEL_63:
    v36 = v14;
LABEL_65:
    FastRegion::Internal::CStripe::Subtract(v8, v14, v15, v36);
    if ( v8 == v6 )
    {
      if ( (_DWORD)v18 + v18[1] - *((_DWORD *)v8 + 1) - (_DWORD)v8 )
      {
LABEL_69:
        v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
        v18 += 2;
      }
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
    {
      goto LABEL_69;
    }
  }
  FastRegion::Internal::CStripe::Copy(
    v8,
    (const struct FastRegion::Internal::CStripe *)(v12 - 2),
    (const struct FastRegion::Internal::CStripe *)(v10 - 8));
  if ( v8 == v6 )
  {
    v32 = (char *)v8 + 8;
    v33 = *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1);
    goto LABEL_39;
  }
  if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
    v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
LABEL_23:
  v12 += 2;
  if ( v12 != v39 )
  {
    v37 = (_DWORD *)((char *)v8 + 8);
    while ( 1 )
    {
      FastRegion::Internal::CStripe::Copy(v8, (const struct FastRegion::Internal::CStripe *)(v12 - 2));
      if ( v8 == v6 )
        break;
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
        goto LABEL_82;
LABEL_83:
      v12 += 2;
      if ( v12 == v39 )
        goto LABEL_24;
    }
    if ( !((_DWORD)v37 + v37[1] - *((_DWORD *)v8 + 1) - (_DWORD)v8) )
      goto LABEL_83;
LABEL_82:
    v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
    v37 += 2;
    goto LABEL_83;
  }
LABEL_24:
  *(_DWORD *)v8 = *(v12 - 2);
  if ( v8 != v6 && (char *)v8 + *((int *)v8 + 1) != (char *)v8 + *((int *)v8 - 1) - 8 )
    v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
  v27 = (v8 - this - 12) >> 3;
  *(_DWORD *)this = v27;
  if ( (_DWORD)v27 )
  {
    v28 = (FastRegion::Internal::CStripe *)((char *)v8 - 8);
    *((_DWORD *)this + 1) = 0x7FFFFFFF;
    *((_DWORD *)this + 2) = 0x80000000;
    v29 = (_DWORD *)((char *)v28 + *((int *)v28 + 1));
    while ( 1 )
    {
      v28 = (FastRegion::Internal::CStripe *)((char *)v28 - 8);
      if ( v28 < v6 )
        break;
      v30 = v29;
      v29 = (_DWORD *)((char *)v28 + *((int *)v28 + 1));
      if ( v29 != v30 )
      {
        if ( *((_DWORD *)this + 1) > *v29 )
          *((_DWORD *)this + 1) = *v29;
        v31 = *(v30 - 1);
        if ( *((_DWORD *)this + 2) < v31 )
          *((_DWORD *)this + 2) = v31;
      }
    }
  }
}
