/*
 * XREFs of ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180088530
 * Callers:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180087F0C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x180088F54 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x180088FB4 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x180089014 (-Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800891B4 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Union(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  FastRegion::Internal::CStripe *v4; // rbp
  __int64 v5; // r10
  _DWORD *v6; // r14
  _DWORD *v7; // rsi
  char *v8; // r12
  int v9; // eax
  char *v10; // rsi
  FastRegion::Internal::CStripe *v11; // rbx
  int v12; // eax
  char *v13; // r14
  FastRegion::Internal::CStripe *v14; // rcx
  char *v15; // r14
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  _DWORD *v21; // r15
  const struct FastRegion::Internal::CStripe *v22; // r12
  const struct FastRegion::Internal::CStripe *v23; // r13
  const struct FastRegion::Internal::CStripe *v24; // r8
  const struct FastRegion::Internal::CStripe *v25; // rdx
  _DWORD *v26; // r15
  FastRegion::Internal::CStripe *v27; // rcx
  _DWORD *v28; // r15
  int v29; // eax
  FastRegion::Internal::CStripe *v30; // r11
  _DWORD *v31; // r14
  int v32; // eax
  FastRegion::Internal::CStripe *v33; // r11
  const struct FastRegion::Internal::CStripe *v34; // rdx
  const struct FastRegion::Internal::CStripe *v35; // r8
  _DWORD *v36; // rsi
  char *v37; // [rsp+20h] [rbp-58h]
  char *v41; // [rsp+98h] [rbp+20h]

  v3 = *(int *)a3;
  v4 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v5 = *(int *)a2;
  v6 = (_DWORD *)((char *)a3 + 12);
  v7 = (_DWORD *)((char *)a2 + 12);
  v41 = (char *)a3 + 8 * v3 + 12;
  v8 = (char *)a2 + 8 * v5 + 12;
  v37 = v8;
  *((_DWORD *)this + 4) = 8 * (v3 + v5);
  v9 = *((_DWORD *)a3 + 3);
  if ( *((_DWORD *)a2 + 3) < v9 )
  {
    v10 = (char *)a2 + 20;
    FastRegion::Internal::CStripe::Copy(v4, (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12));
    v11 = v4;
    if ( *((_DWORD *)v4 + 3) - *((_DWORD *)v4 + 1) != -8 )
      v11 = (FastRegion::Internal::CStripe *)((char *)v4 + 8);
    if ( *(_DWORD *)v10 >= *v6 )
    {
LABEL_5:
      v12 = *v6;
      v13 = (char *)(v6 + 2);
      if ( *(_DWORD *)v10 <= v12 )
      {
        v10 += 8;
        v14 = v11;
        if ( v10 == v8 )
        {
LABEL_7:
          FastRegion::Internal::CStripe::Copy(v14, (const struct FastRegion::Internal::CStripe *)(v13 - 8));
          goto LABEL_8;
        }
        v22 = (const struct FastRegion::Internal::CStripe *)(v10 - 8);
        v23 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
        v24 = (const struct FastRegion::Internal::CStripe *)(v10 - 8);
        v25 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
        goto LABEL_31;
      }
      v22 = (const struct FastRegion::Internal::CStripe *)(v10 - 8);
      v23 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
      v24 = (const struct FastRegion::Internal::CStripe *)(v10 - 8);
      v25 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
LABEL_30:
      v14 = v11;
      goto LABEL_31;
    }
    v28 = (_DWORD *)((char *)v11 + 8);
    while ( 1 )
    {
      v10 += 8;
      if ( v10 == v8 )
      {
        *(_DWORD *)v11 = *((_DWORD *)v10 - 2);
        v29 = *((_DWORD *)v11 + 1) - 8;
        *((_DWORD *)v11 + 3) = v29;
        if ( v11 == v4 )
        {
          if ( v29 - *((_DWORD *)v11 + 1) != -8 )
            v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v11) )
        {
          v11 = v30;
        }
        v13 = (char *)(v6 + 2);
        v14 = v11;
        goto LABEL_7;
      }
      FastRegion::Internal::CStripe::Copy(v11, (const struct FastRegion::Internal::CStripe *)(v10 - 8));
      if ( v11 == v4 )
        break;
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v11) )
        goto LABEL_48;
LABEL_49:
      if ( *(_DWORD *)v10 >= *v6 )
        goto LABEL_5;
    }
    if ( !((_DWORD)v28 + v28[1] - *((_DWORD *)v11 + 1) - (_DWORD)v11) )
      goto LABEL_49;
LABEL_48:
    v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
    v28 += 2;
    goto LABEL_49;
  }
  if ( *((_DWORD *)a2 + 3) <= v9 )
  {
    v10 = (char *)a2 + 20;
    v13 = (char *)a3 + 20;
    v23 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
    v22 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
    FastRegion::Internal::CStripe::Union(
      v4,
      (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12),
      (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
    v11 = v4;
    if ( *((_DWORD *)v4 + 3) - *((_DWORD *)v4 + 1) != -8 )
      v11 = (FastRegion::Internal::CStripe *)((char *)v4 + 8);
    goto LABEL_34;
  }
  v13 = (char *)a3 + 20;
  FastRegion::Internal::CStripe::Copy(v4, (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
  v11 = v4;
  v19 = *v7;
  if ( *((_DWORD *)v4 + 3) - *((_DWORD *)v4 + 1) != -8 )
    v11 = (FastRegion::Internal::CStripe *)((char *)v4 + 8);
  v20 = *(_DWORD *)v13;
  if ( v19 < *(_DWORD *)v13 )
  {
LABEL_60:
    v10 = (char *)(v7 + 2);
    v23 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    v24 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    v22 = (const struct FastRegion::Internal::CStripe *)(v10 - 8);
    v25 = (const struct FastRegion::Internal::CStripe *)(v10 - 8);
    goto LABEL_30;
  }
  v21 = (_DWORD *)((char *)v11 + 8);
  while ( 1 )
  {
    v13 += 8;
    if ( v19 <= v20 )
      break;
    if ( v13 == v41 )
    {
      *(_DWORD *)v11 = *((_DWORD *)v13 - 2);
      v32 = *((_DWORD *)v11 + 1) - 8;
      *((_DWORD *)v11 + 3) = v32;
      if ( v11 == v4 )
      {
        if ( v32 - *((_DWORD *)v11 + 1) != -8 )
          v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
      }
      else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v11) )
      {
        v11 = v33;
      }
      v10 = (char *)(v7 + 2);
      v14 = v11;
      goto LABEL_28;
    }
    FastRegion::Internal::CStripe::Copy(v11, (const struct FastRegion::Internal::CStripe *)(v13 - 8));
    if ( v11 == v4 )
    {
      if ( !((_DWORD)v21 + v21[1] - *((_DWORD *)v11 + 1) - (_DWORD)v11) )
        goto LABEL_99;
LABEL_98:
      v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
      v21 += 2;
      goto LABEL_99;
    }
    if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v11) )
      goto LABEL_98;
LABEL_99:
    v19 = *v7;
    v20 = *(_DWORD *)v13;
    if ( *v7 < *(_DWORD *)v13 )
      goto LABEL_60;
  }
  v10 = (char *)(v7 + 2);
  v14 = v11;
  if ( v13 == v41 )
  {
LABEL_28:
    FastRegion::Internal::CStripe::Copy(v14, (const struct FastRegion::Internal::CStripe *)(v10 - 8));
    goto LABEL_39;
  }
  v23 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
  v22 = (const struct FastRegion::Internal::CStripe *)(v10 - 8);
  v24 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
  v25 = (const struct FastRegion::Internal::CStripe *)(v10 - 8);
LABEL_31:
  FastRegion::Internal::CStripe::Union(v14, v25, v24);
  if ( v11 == v4 )
  {
    if ( *((_DWORD *)v11 + 3) - *((_DWORD *)v11 + 1) != -8 )
      v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
  }
  else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v11) )
  {
    v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
  }
LABEL_34:
  v26 = (_DWORD *)((char *)v11 + 8);
  while ( 1 )
  {
    if ( *(_DWORD *)v10 < *(_DWORD *)v13 )
    {
      v10 += 8;
      v22 = (const struct FastRegion::Internal::CStripe *)((char *)v22 + 8);
      v27 = v11;
      if ( v10 == v37 )
        goto LABEL_59;
LABEL_76:
      v34 = v22;
      v35 = v23;
      goto LABEL_77;
    }
    if ( *(_DWORD *)v10 <= *(_DWORD *)v13 )
      break;
    v13 += 8;
    v23 = (const struct FastRegion::Internal::CStripe *)((char *)v23 + 8);
    v27 = v11;
    if ( v13 == v41 )
      goto LABEL_38;
    v35 = v22;
    v34 = v23;
LABEL_77:
    FastRegion::Internal::CStripe::Union(v27, v34, v35);
    if ( v11 != v4 )
    {
      if ( FastRegion::Internal::CStripe::IsEqualToPrevious(v11) )
        continue;
LABEL_79:
      v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
      v26 += 2;
      continue;
    }
    if ( (_DWORD)v26 + v26[1] - *((_DWORD *)v11 + 1) - (_DWORD)v11 )
      goto LABEL_79;
  }
  v10 += 8;
  v22 = (const struct FastRegion::Internal::CStripe *)((char *)v22 + 8);
  v13 += 8;
  v23 = (const struct FastRegion::Internal::CStripe *)((char *)v23 + 8);
  if ( v10 != v37 )
  {
    v27 = v11;
    if ( v13 == v41 )
    {
LABEL_38:
      FastRegion::Internal::CStripe::Copy(
        v27,
        (const struct FastRegion::Internal::CStripe *)(v10 - 8),
        (const struct FastRegion::Internal::CStripe *)(v13 - 8));
LABEL_39:
      if ( v11 == v4 )
      {
        if ( *((_DWORD *)v11 + 3) - *((_DWORD *)v11 + 1) != -8 )
          v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
      }
      else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v11) )
      {
        v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
      }
      v10 += 8;
      if ( v10 == v37 )
      {
LABEL_43:
        v16 = *((_DWORD *)v10 - 2);
        goto LABEL_13;
      }
      v31 = (_DWORD *)((char *)v11 + 8);
      while ( 2 )
      {
        FastRegion::Internal::CStripe::Copy(v11, (const struct FastRegion::Internal::CStripe *)(v10 - 8));
        if ( v11 == v4 )
        {
          if ( (_DWORD)v31 + v31[1] - *((_DWORD *)v11 + 1) - (_DWORD)v11 )
          {
LABEL_67:
            v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
            v31 += 2;
          }
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v11) )
        {
          goto LABEL_67;
        }
        v10 += 8;
        if ( v10 == v37 )
          goto LABEL_43;
        continue;
      }
    }
    goto LABEL_76;
  }
  if ( v13 == v41 )
    goto LABEL_43;
  v27 = v11;
LABEL_59:
  FastRegion::Internal::CStripe::Copy(
    v27,
    (const struct FastRegion::Internal::CStripe *)(v13 - 8),
    (const struct FastRegion::Internal::CStripe *)(v10 - 8));
LABEL_8:
  if ( v11 == v4 )
  {
    if ( *((_DWORD *)v11 + 3) - *((_DWORD *)v11 + 1) != -8 )
      v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
  }
  else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v11) )
  {
    v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
  }
  v15 = v13 + 8;
  if ( v15 != v41 )
  {
    v36 = (_DWORD *)((char *)v11 + 8);
    while ( 1 )
    {
      FastRegion::Internal::CStripe::Copy(v11, (const struct FastRegion::Internal::CStripe *)(v15 - 8));
      if ( v11 == v4 )
        break;
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v11) )
        goto LABEL_83;
LABEL_84:
      v15 += 8;
      if ( v15 == v41 )
        goto LABEL_12;
    }
    if ( !((_DWORD)v36 + v36[1] - *((_DWORD *)v11 + 1) - (_DWORD)v11) )
      goto LABEL_84;
LABEL_83:
    v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
    v36 += 2;
    goto LABEL_84;
  }
LABEL_12:
  v16 = *((_DWORD *)v15 - 2);
LABEL_13:
  *(_DWORD *)v11 = v16;
  if ( v11 != v4 && (char *)v11 + *((int *)v11 + 1) != (char *)v11 + *((int *)v11 - 1) - 8 )
    v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
  *(_DWORD *)this = (v11 - this - 12) >> 3;
  v17 = *((_DWORD *)a3 + 1);
  if ( *((_DWORD *)a2 + 1) < v17 )
    v17 = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 1) = v17;
  v18 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)a2 + 2) > v18 )
    v18 = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 2) = v18;
}
