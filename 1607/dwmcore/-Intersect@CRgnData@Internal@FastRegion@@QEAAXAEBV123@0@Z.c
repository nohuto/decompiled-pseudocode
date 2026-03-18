/*
 * XREFs of ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18001D3B4
 * Callers:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18001D0D8 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x18001D538 (-Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x18009B770 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
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
  const struct FastRegion::Internal::CStripe *v15; // r12
  const struct FastRegion::Internal::CStripe *v16; // r15
  _DWORD *v17; // rbp
  int v18; // eax
  __int64 v19; // rax
  FastRegion::Internal::CStripe *v20; // rbx
  _DWORD *v21; // rax
  _DWORD *v22; // r8
  int v23; // edx
  const struct FastRegion::Internal::CStripe *v24; // r8
  const struct FastRegion::Internal::CStripe *v25; // rdx
  int v26; // eax
  bool v27; // zf
  const struct FastRegion::Internal::CStripe *v28; // r8
  const struct FastRegion::Internal::CStripe *v29; // rdx
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
  if ( *v4 < *v6 )
  {
    v13 = v4 + 2;
    while ( *v13 < v12 )
    {
      v13 += 2;
      if ( v13 == v9 )
        goto LABEL_13;
    }
    if ( *v13 <= v12 )
    {
      v13 += 2;
      v14 = (char *)(v6 + 2);
      if ( v13 == v9 )
        goto LABEL_13;
    }
    else
    {
      v14 = (char *)(v6 + 2);
    }
    v16 = (const struct FastRegion::Internal::CStripe *)(v13 - 2);
    v15 = (const struct FastRegion::Internal::CStripe *)(v14 - 8);
    v24 = (const struct FastRegion::Internal::CStripe *)(v13 - 2);
    v25 = (const struct FastRegion::Internal::CStripe *)(v14 - 8);
LABEL_32:
    FastRegion::Internal::CStripe::Intersect(v8, v25, v24);
    if ( *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1) != -8 )
      v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
    goto LABEL_5;
  }
  if ( *v4 > v12 )
  {
    v14 = (char *)(v6 + 2);
    while ( 1 )
    {
      v26 = *(_DWORD *)v14;
      if ( *v4 < *(_DWORD *)v14 )
      {
        v13 = v4 + 2;
        goto LABEL_31;
      }
      v14 += 8;
      if ( *v4 <= v26 )
        break;
      if ( v14 == v11 )
        goto LABEL_13;
    }
    v13 = v4 + 2;
    if ( v14 == v11 )
      goto LABEL_13;
LABEL_31:
    v15 = (const struct FastRegion::Internal::CStripe *)(v14 - 8);
    v16 = (const struct FastRegion::Internal::CStripe *)(v13 - 2);
    v24 = (const struct FastRegion::Internal::CStripe *)(v14 - 8);
    v25 = (const struct FastRegion::Internal::CStripe *)(v13 - 2);
    goto LABEL_32;
  }
  v13 = v4 + 2;
  v14 = (char *)(v6 + 2);
  v15 = (const struct FastRegion::Internal::CStripe *)(v14 - 8);
  v16 = (const struct FastRegion::Internal::CStripe *)(v13 - 2);
  FastRegion::Internal::CStripe::Intersect(
    v8,
    (const struct FastRegion::Internal::CStripe *)(v13 - 2),
    (const struct FastRegion::Internal::CStripe *)(v14 - 8));
  if ( *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1) != -8 )
    v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
LABEL_5:
  v17 = (_DWORD *)((char *)v10 + 8);
  while ( 1 )
  {
    if ( *v13 <= *(_DWORD *)v14 )
    {
      if ( *v13 < *(_DWORD *)v14 )
      {
        v13 += 2;
        v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
        v27 = v13 == v30;
      }
      else
      {
        v13 += 2;
        v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
        v14 += 8;
        v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
        if ( v13 == v30 )
          goto LABEL_9;
        v27 = v14 == v31;
      }
      if ( v27 )
      {
LABEL_9:
        v18 = *(v13 - 2);
        goto LABEL_10;
      }
      v28 = v15;
      v29 = v16;
      goto LABEL_46;
    }
    v14 += 8;
    v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
    if ( v14 == v31 )
      break;
    v28 = v16;
    v29 = v15;
LABEL_46:
    FastRegion::Internal::CStripe::Intersect(v10, v29, v28);
    if ( v10 == (FastRegion::Internal::CRgnData *)((char *)this + 12) )
    {
      if ( (_DWORD)v17 + v17[1] - *((_DWORD *)v10 + 1) - (_DWORD)v10 )
      {
LABEL_50:
        v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
        v17 += 2;
      }
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
    {
      goto LABEL_50;
    }
  }
  v18 = *((_DWORD *)v14 - 2);
LABEL_10:
  v8 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  *(_DWORD *)v10 = v18;
  if ( v10 != (FastRegion::Internal::CRgnData *)((char *)this + 12) )
  {
    v8 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
    if ( (char *)v10 + *((int *)v10 + 1) != (char *)v10 + *((int *)v10 - 1) - 8 )
      v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
  }
LABEL_13:
  v19 = (v10 - this - 12) >> 3;
  *(_DWORD *)this = v19;
  if ( (_DWORD)v19 )
  {
    v20 = (FastRegion::Internal::CStripe *)((char *)v10 - 8);
    *((_DWORD *)this + 1) = 0x7FFFFFFF;
    *((_DWORD *)this + 2) = 0x80000000;
    v21 = (_DWORD *)((char *)v20 + *((int *)v20 + 1));
    while ( 1 )
    {
      v20 = (FastRegion::Internal::CStripe *)((char *)v20 - 8);
      if ( v20 < v8 )
        break;
      v22 = v21;
      v21 = (_DWORD *)((char *)v20 + *((int *)v20 + 1));
      if ( v21 != v22 )
      {
        if ( *((_DWORD *)this + 1) > *v21 )
          *((_DWORD *)this + 1) = *v21;
        v23 = *(v22 - 1);
        if ( *((_DWORD *)this + 2) < v23 )
          *((_DWORD *)this + 2) = v23;
      }
    }
  }
}
