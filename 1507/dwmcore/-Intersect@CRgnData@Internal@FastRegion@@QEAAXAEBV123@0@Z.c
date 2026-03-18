/*
 * XREFs of ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18015124C
 * Callers:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18015118C (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x180088FB4 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x180151498 (-Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Intersect(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  _DWORD *v4; // rsi
  __int64 v5; // rdx
  _DWORD *v6; // r14
  FastRegion::Internal::CStripe *v8; // rcx
  _DWORD *v9; // r10
  FastRegion::Internal::CStripe *v10; // rbx
  char *v11; // r8
  int v12; // eax
  _DWORD *v13; // rsi
  char *v14; // r14
  const struct FastRegion::Internal::CStripe *v15; // r15
  const struct FastRegion::Internal::CStripe *v16; // r12
  const struct FastRegion::Internal::CStripe *v17; // r8
  const struct FastRegion::Internal::CStripe *v18; // rdx
  int v19; // eax
  _DWORD *v20; // rbp
  bool v21; // zf
  const struct FastRegion::Internal::CStripe *v22; // r8
  const struct FastRegion::Internal::CStripe *v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  FastRegion::Internal::CStripe *v26; // rbx
  _DWORD *v27; // rax
  _DWORD *v28; // r8
  int v29; // edx
  _DWORD *v30; // [rsp+60h] [rbp+8h]
  char *v31; // [rsp+68h] [rbp+10h]

  v3 = *(int *)a2;
  v4 = (_DWORD *)((char *)a2 + 12);
  v5 = *(int *)a3;
  v6 = (_DWORD *)((char *)a3 + 12);
  v8 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v9 = &v4[2 * v3];
  v10 = v8;
  v30 = v9;
  v11 = (char *)a3 + 8 * v5 + 12;
  v31 = v11;
  *((_DWORD *)v8 + 1) = (_DWORD)this + 8 * (v5 + v3) - (_DWORD)v8 + 12;
  v12 = *v6;
  if ( *v4 >= *v6 )
  {
    if ( *v4 <= v12 )
    {
      v13 = v4 + 2;
      v14 = (char *)(v6 + 2);
      v16 = (const struct FastRegion::Internal::CStripe *)(v14 - 8);
      v15 = (const struct FastRegion::Internal::CStripe *)(v13 - 2);
      FastRegion::Internal::CStripe::Intersect(
        v8,
        (const struct FastRegion::Internal::CStripe *)(v13 - 2),
        (const struct FastRegion::Internal::CStripe *)(v14 - 8));
      if ( *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1) != -8 )
        v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
      goto LABEL_21;
    }
    v14 = (char *)(v6 + 2);
    while ( 1 )
    {
      v19 = *(_DWORD *)v14;
      if ( *v4 < *(_DWORD *)v14 )
      {
        v13 = v4 + 2;
        goto LABEL_18;
      }
      v14 += 8;
      if ( *v4 <= v19 )
        break;
      if ( v14 == v11 )
        goto LABEL_41;
    }
    v13 = v4 + 2;
    if ( v14 == v11 )
      goto LABEL_41;
LABEL_18:
    v16 = (const struct FastRegion::Internal::CStripe *)(v14 - 8);
    v15 = (const struct FastRegion::Internal::CStripe *)(v13 - 2);
    v17 = (const struct FastRegion::Internal::CStripe *)(v14 - 8);
    v18 = (const struct FastRegion::Internal::CStripe *)(v13 - 2);
  }
  else
  {
    v13 = v4 + 2;
    while ( *v13 < v12 )
    {
      v13 += 2;
      if ( v13 == v9 )
        goto LABEL_41;
    }
    if ( *v13 <= v12 )
    {
      v13 += 2;
      v14 = (char *)(v6 + 2);
      if ( v13 == v9 )
        goto LABEL_41;
    }
    else
    {
      v14 = (char *)(v6 + 2);
    }
    v15 = (const struct FastRegion::Internal::CStripe *)(v13 - 2);
    v16 = (const struct FastRegion::Internal::CStripe *)(v14 - 8);
    v17 = (const struct FastRegion::Internal::CStripe *)(v13 - 2);
    v18 = (const struct FastRegion::Internal::CStripe *)(v14 - 8);
  }
  FastRegion::Internal::CStripe::Intersect(v8, v18, v17);
  if ( *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1) != -8 )
    v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
LABEL_21:
  v20 = (_DWORD *)((char *)v10 + 8);
  while ( 1 )
  {
    if ( *v13 < *(_DWORD *)v14 )
    {
      v13 += 2;
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      v21 = v13 == v30;
LABEL_24:
      if ( v21 )
        goto LABEL_37;
      v22 = v16;
      v23 = v15;
      goto LABEL_26;
    }
    if ( *v13 <= *(_DWORD *)v14 )
      break;
    v14 += 8;
    v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
    if ( v14 == v31 )
    {
      v24 = *((_DWORD *)v14 - 2);
      goto LABEL_38;
    }
    v22 = v15;
    v23 = v16;
LABEL_26:
    FastRegion::Internal::CStripe::Intersect(v10, v23, v22);
    if ( v10 == (FastRegion::Internal::CRgnData *)((char *)this + 12) )
    {
      if ( (_DWORD)v20 + v20[1] - *((_DWORD *)v10 + 1) - (_DWORD)v10 )
      {
LABEL_30:
        v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
        v20 += 2;
      }
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
    {
      goto LABEL_30;
    }
  }
  v13 += 2;
  v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
  v14 += 8;
  v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
  if ( v13 != v30 )
  {
    v21 = v14 == v31;
    goto LABEL_24;
  }
LABEL_37:
  v24 = *(v13 - 2);
LABEL_38:
  v8 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  *(_DWORD *)v10 = v24;
  if ( v10 != (FastRegion::Internal::CRgnData *)((char *)this + 12) )
  {
    v8 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
    if ( (char *)v10 + *((int *)v10 + 1) != (char *)v10 + *((int *)v10 - 1) - 8 )
      v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
  }
LABEL_41:
  v25 = (v10 - this - 12) >> 3;
  *(_DWORD *)this = v25;
  if ( (_DWORD)v25 )
  {
    v26 = (FastRegion::Internal::CStripe *)((char *)v10 - 8);
    *((_DWORD *)this + 1) = 0x7FFFFFFF;
    *((_DWORD *)this + 2) = 0x80000000;
    v27 = (_DWORD *)((char *)v26 + *((int *)v26 + 1));
    while ( 1 )
    {
      v26 = (FastRegion::Internal::CStripe *)((char *)v26 - 8);
      if ( v26 < v8 )
        break;
      v28 = v27;
      v27 = (_DWORD *)((char *)v26 + *((int *)v26 + 1));
      if ( v27 != v28 )
      {
        if ( *((_DWORD *)this + 1) > *v27 )
          *((_DWORD *)this + 1) = *v27;
        v29 = *(v28 - 1);
        if ( *((_DWORD *)this + 2) < v29 )
          *((_DWORD *)this + 2) = v29;
      }
    }
  }
}
