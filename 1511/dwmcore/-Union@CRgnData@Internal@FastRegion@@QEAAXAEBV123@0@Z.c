/*
 * XREFs of ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18006E2D4
 * Callers:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006DCA4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x18006EA20 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x18006EA80 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x18006EC18 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x18006EC78 (-Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
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
  _DWORD *v12; // r15
  int v13; // eax
  char *v14; // r14
  FastRegion::Internal::CStripe *v15; // rcx
  char *v16; // r14
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  _DWORD *v20; // r15
  int v21; // eax
  FastRegion::Internal::CStripe *v22; // r11
  int v23; // eax
  int v24; // eax
  const struct FastRegion::Internal::CStripe *v25; // r13
  const struct FastRegion::Internal::CStripe *v26; // r12
  const struct FastRegion::Internal::CStripe *v27; // r8
  const struct FastRegion::Internal::CStripe *v28; // rdx
  _DWORD *v29; // r15
  FastRegion::Internal::CStripe *v30; // rcx
  int v31; // eax
  FastRegion::Internal::CStripe *v32; // r11
  _DWORD *v33; // r14
  _DWORD *v34; // rsi
  const struct FastRegion::Internal::CStripe *v35; // rdx
  const struct FastRegion::Internal::CStripe *v36; // r8
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
    if ( *(_DWORD *)v10 < *v6 )
    {
      v12 = (_DWORD *)((char *)v11 + 8);
      while ( 1 )
      {
        v10 += 8;
        if ( v10 == v8 )
        {
          *(_DWORD *)v11 = *((_DWORD *)v10 - 2);
          v31 = *((_DWORD *)v11 + 1) - 8;
          *((_DWORD *)v11 + 3) = v31;
          if ( v11 == v4 )
          {
            if ( v31 - *((_DWORD *)v11 + 1) != -8 )
              v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
          }
          else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v11) )
          {
            v11 = v32;
          }
          v14 = (char *)(v6 + 2);
          v15 = v11;
          goto LABEL_13;
        }
        FastRegion::Internal::CStripe::Copy(v11, (const struct FastRegion::Internal::CStripe *)(v10 - 8));
        if ( v11 == v4 )
          break;
        if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v11) )
          goto LABEL_9;
LABEL_10:
        if ( *(_DWORD *)v10 >= *v6 )
          goto LABEL_11;
      }
      if ( !((_DWORD)v12 + v12[1] - *((_DWORD *)v11 + 1) - (_DWORD)v11) )
        goto LABEL_10;
LABEL_9:
      v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
      v12 += 2;
      goto LABEL_10;
    }
LABEL_11:
    v13 = *v6;
    v14 = (char *)(v6 + 2);
    if ( *(_DWORD *)v10 <= v13 )
    {
      v10 += 8;
      v15 = v11;
      if ( v10 == v8 )
      {
LABEL_13:
        FastRegion::Internal::CStripe::Copy(v15, (const struct FastRegion::Internal::CStripe *)(v14 - 8));
        goto LABEL_14;
      }
      v26 = (const struct FastRegion::Internal::CStripe *)(v10 - 8);
      v25 = (const struct FastRegion::Internal::CStripe *)(v14 - 8);
      v27 = (const struct FastRegion::Internal::CStripe *)(v10 - 8);
      v28 = (const struct FastRegion::Internal::CStripe *)(v14 - 8);
      goto LABEL_49;
    }
    v26 = (const struct FastRegion::Internal::CStripe *)(v10 - 8);
    v25 = (const struct FastRegion::Internal::CStripe *)(v14 - 8);
    v27 = (const struct FastRegion::Internal::CStripe *)(v10 - 8);
    v28 = (const struct FastRegion::Internal::CStripe *)(v14 - 8);
LABEL_48:
    v15 = v11;
    goto LABEL_49;
  }
  if ( *((_DWORD *)a2 + 3) <= v9 )
  {
    v10 = (char *)a2 + 20;
    v14 = (char *)a3 + 20;
    v25 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
    v26 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
    FastRegion::Internal::CStripe::Union(
      v4,
      (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12),
      (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
    v11 = v4;
    if ( *((_DWORD *)v4 + 3) - *((_DWORD *)v4 + 1) != -8 )
      v11 = (FastRegion::Internal::CStripe *)((char *)v4 + 8);
    goto LABEL_52;
  }
  v14 = (char *)a3 + 20;
  FastRegion::Internal::CStripe::Copy(v4, (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
  v11 = v4;
  v18 = *v7;
  if ( *((_DWORD *)v4 + 3) - *((_DWORD *)v4 + 1) != -8 )
    v11 = (FastRegion::Internal::CStripe *)((char *)v4 + 8);
  v19 = *(_DWORD *)v14;
  if ( v18 < *(_DWORD *)v14 )
  {
LABEL_75:
    v10 = (char *)(v7 + 2);
    v25 = (const struct FastRegion::Internal::CStripe *)(v14 - 8);
    v27 = (const struct FastRegion::Internal::CStripe *)(v14 - 8);
    v26 = (const struct FastRegion::Internal::CStripe *)(v10 - 8);
    v28 = (const struct FastRegion::Internal::CStripe *)(v10 - 8);
    goto LABEL_48;
  }
  v20 = (_DWORD *)((char *)v11 + 8);
  while ( 1 )
  {
    v14 += 8;
    if ( v18 <= v19 )
      break;
    if ( v14 == v41 )
    {
      *(_DWORD *)v11 = *((_DWORD *)v14 - 2);
      v21 = *((_DWORD *)v11 + 1) - 8;
      *((_DWORD *)v11 + 3) = v21;
      if ( v11 == v4 )
      {
        if ( v21 - *((_DWORD *)v11 + 1) != -8 )
          v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
      }
      else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v11) )
      {
        v11 = v22;
      }
      v10 = (char *)(v7 + 2);
      v15 = v11;
      goto LABEL_30;
    }
    FastRegion::Internal::CStripe::Copy(v11, (const struct FastRegion::Internal::CStripe *)(v14 - 8));
    if ( v11 == v4 )
    {
      if ( !((_DWORD)v20 + v20[1] - *((_DWORD *)v11 + 1) - (_DWORD)v11) )
        goto LABEL_99;
LABEL_98:
      v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
      v20 += 2;
      goto LABEL_99;
    }
    if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v11) )
      goto LABEL_98;
LABEL_99:
    v18 = *v7;
    v19 = *(_DWORD *)v14;
    if ( *v7 < *(_DWORD *)v14 )
      goto LABEL_75;
  }
  v10 = (char *)(v7 + 2);
  v15 = v11;
  if ( v14 == v41 )
  {
LABEL_30:
    FastRegion::Internal::CStripe::Copy(v15, (const struct FastRegion::Internal::CStripe *)(v10 - 8));
    goto LABEL_31;
  }
  v25 = (const struct FastRegion::Internal::CStripe *)(v14 - 8);
  v26 = (const struct FastRegion::Internal::CStripe *)(v10 - 8);
  v27 = (const struct FastRegion::Internal::CStripe *)(v14 - 8);
  v28 = (const struct FastRegion::Internal::CStripe *)(v10 - 8);
LABEL_49:
  FastRegion::Internal::CStripe::Union(v15, v28, v27);
  if ( v11 == v4 )
  {
    if ( *((_DWORD *)v11 + 3) - *((_DWORD *)v11 + 1) != -8 )
      v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
  }
  else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v11) )
  {
    v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
  }
LABEL_52:
  v29 = (_DWORD *)((char *)v11 + 8);
  while ( *(_DWORD *)v10 > *(_DWORD *)v14 )
  {
    v14 += 8;
    v25 = (const struct FastRegion::Internal::CStripe *)((char *)v25 + 8);
    v30 = v11;
    if ( v14 == v41 )
      goto LABEL_64;
    v36 = v26;
    v35 = v25;
LABEL_84:
    FastRegion::Internal::CStripe::Union(v30, v35, v36);
    if ( v11 != v4 )
    {
      if ( FastRegion::Internal::CStripe::IsEqualToPrevious(v11) )
        continue;
LABEL_86:
      v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
      v29 += 2;
      continue;
    }
    if ( (_DWORD)v29 + v29[1] - *((_DWORD *)v11 + 1) - (_DWORD)v11 )
      goto LABEL_86;
  }
  if ( *(_DWORD *)v10 < *(_DWORD *)v14 )
  {
    v10 += 8;
    v26 = (const struct FastRegion::Internal::CStripe *)((char *)v26 + 8);
    v30 = v11;
    if ( v10 == v37 )
      goto LABEL_66;
LABEL_83:
    v35 = v26;
    v36 = v25;
    goto LABEL_84;
  }
  v10 += 8;
  v26 = (const struct FastRegion::Internal::CStripe *)((char *)v26 + 8);
  v14 += 8;
  v25 = (const struct FastRegion::Internal::CStripe *)((char *)v25 + 8);
  if ( v10 != v37 )
  {
    v30 = v11;
    if ( v14 == v41 )
    {
LABEL_64:
      FastRegion::Internal::CStripe::Copy(
        v30,
        (const struct FastRegion::Internal::CStripe *)(v10 - 8),
        (const struct FastRegion::Internal::CStripe *)(v14 - 8));
LABEL_31:
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
LABEL_35:
        v17 = *((_DWORD *)v10 - 2);
        goto LABEL_36;
      }
      v33 = (_DWORD *)((char *)v11 + 8);
      while ( 2 )
      {
        FastRegion::Internal::CStripe::Copy(v11, (const struct FastRegion::Internal::CStripe *)(v10 - 8));
        if ( v11 == v4 )
        {
          if ( (_DWORD)v33 + v33[1] - *((_DWORD *)v11 + 1) - (_DWORD)v11 )
          {
LABEL_70:
            v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
            v33 += 2;
          }
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v11) )
        {
          goto LABEL_70;
        }
        v10 += 8;
        if ( v10 == v37 )
          goto LABEL_35;
        continue;
      }
    }
    goto LABEL_83;
  }
  if ( v14 == v41 )
    goto LABEL_35;
  v30 = v11;
LABEL_66:
  FastRegion::Internal::CStripe::Copy(
    v30,
    (const struct FastRegion::Internal::CStripe *)(v14 - 8),
    (const struct FastRegion::Internal::CStripe *)(v10 - 8));
LABEL_14:
  if ( v11 == v4 )
  {
    if ( *((_DWORD *)v11 + 3) - *((_DWORD *)v11 + 1) != -8 )
      v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
  }
  else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v11) )
  {
    v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
  }
  v16 = v14 + 8;
  if ( v16 != v41 )
  {
    v34 = (_DWORD *)((char *)v11 + 8);
    while ( 1 )
    {
      FastRegion::Internal::CStripe::Copy(v11, (const struct FastRegion::Internal::CStripe *)(v16 - 8));
      if ( v11 == v4 )
        break;
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v11) )
        goto LABEL_79;
LABEL_80:
      v16 += 8;
      if ( v16 == v41 )
        goto LABEL_18;
    }
    if ( !((_DWORD)v34 + v34[1] - *((_DWORD *)v11 + 1) - (_DWORD)v11) )
      goto LABEL_80;
LABEL_79:
    v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
    v34 += 2;
    goto LABEL_80;
  }
LABEL_18:
  v17 = *((_DWORD *)v16 - 2);
LABEL_36:
  *(_DWORD *)v11 = v17;
  if ( v11 != v4 && (char *)v11 + *((int *)v11 + 1) != (char *)v11 + *((int *)v11 - 1) - 8 )
    v11 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
  *(_DWORD *)this = (v11 - this - 12) >> 3;
  v23 = *((_DWORD *)a3 + 1);
  if ( *((_DWORD *)a2 + 1) < v23 )
    v23 = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 1) = v23;
  v24 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)a2 + 2) > v24 )
    v24 = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 2) = v24;
}
