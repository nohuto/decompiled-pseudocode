/*
 * XREFs of ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18009AEB4
 * Callers:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18001D198 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJPEBVCMILMatrix@@@Z @ 0x18006F960 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJPEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x18009B710 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x18009B770 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z @ 0x18009B7D0 (-Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x18009B8F0 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
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
  const struct FastRegion::Internal::CStripe *v19; // r9
  char *v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  FastRegion::Internal::CStripe *v23; // rbx
  _DWORD *v24; // rax
  _DWORD *v25; // rdx
  int v26; // ecx
  int v27; // eax
  _DWORD *v28; // rbp
  _DWORD *v29; // rbp
  _DWORD *v31; // [rsp+68h] [rbp+10h]
  char *v32; // [rsp+70h] [rbp+18h]

  v3 = *(int *)a2;
  v4 = (_DWORD *)((char *)a2 + 12);
  v5 = *(int *)a3;
  v6 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v7 = (_DWORD *)((char *)a3 + 12);
  v8 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v31 = &v4[2 * v3];
  v9 = (char *)a3 + 8 * v5 + 12;
  v32 = v9;
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
LABEL_46:
      v27 = *v7;
      v10 = (char *)(v7 + 2);
      if ( *v12 <= v27 )
      {
        v12 += 2;
        if ( v12 == v31 )
          goto LABEL_26;
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
    v28 = (_DWORD *)((char *)v8 + 8);
    while ( 1 )
    {
      v12 += 2;
      if ( v12 == v31 )
        goto LABEL_26;
      FastRegion::Internal::CStripe::Copy(v8, (const struct FastRegion::Internal::CStripe *)(v12 - 2));
      if ( v8 == v6 )
        break;
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
        goto LABEL_56;
LABEL_57:
      if ( *v12 >= *v7 )
        goto LABEL_46;
    }
    if ( !((_DWORD)v28 + v28[1] - *((_DWORD *)v8 + 1) - (_DWORD)v8) )
      goto LABEL_57;
LABEL_56:
    v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
    v28 += 2;
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
      goto LABEL_40;
    }
  }
  v12 = v4 + 2;
  v13 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  if ( v10 == v9 )
  {
LABEL_40:
    FastRegion::Internal::CStripe::Copy(v13, (const struct FastRegion::Internal::CStripe *)(v12 - 2));
    v20 = (char *)v6 + 8;
    v21 = *((_DWORD *)v6 + 3) - *((_DWORD *)v6 + 1);
    goto LABEL_23;
  }
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
      if ( v10 == v32 )
        break;
      v19 = v15;
      goto LABEL_17;
    }
    if ( *v12 < *(_DWORD *)v10 )
    {
      v12 += 2;
      v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
      if ( v12 == v31 )
        goto LABEL_26;
      goto LABEL_16;
    }
    v12 += 2;
    v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
    v10 += 8;
    v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
    if ( v12 == v31 )
      goto LABEL_26;
    if ( v10 == v32 )
      break;
LABEL_16:
    v19 = v14;
LABEL_17:
    FastRegion::Internal::CStripe::Subtract(v8, v14, v15, v19);
    if ( v8 == v6 )
    {
      if ( (_DWORD)v18 + v18[1] - *((_DWORD *)v8 + 1) - (_DWORD)v8 )
        goto LABEL_68;
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
    {
LABEL_68:
      v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
      v18 += 2;
    }
  }
  FastRegion::Internal::CStripe::Copy(
    v8,
    (const struct FastRegion::Internal::CStripe *)(v12 - 2),
    (const struct FastRegion::Internal::CStripe *)(v10 - 8));
  if ( v8 == v6 )
  {
    v20 = (char *)v8 + 8;
    v21 = *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1);
LABEL_23:
    if ( (_DWORD)v20 + v21 - (_DWORD)v8 )
      v8 = (FastRegion::Internal::CStripe *)v20;
  }
  else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
  {
    v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
  }
  v12 += 2;
  if ( v12 != v31 )
  {
    v29 = (_DWORD *)((char *)v8 + 8);
    while ( 1 )
    {
      FastRegion::Internal::CStripe::Copy(v8, (const struct FastRegion::Internal::CStripe *)(v12 - 2));
      if ( v8 == v6 )
        break;
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
        goto LABEL_74;
LABEL_75:
      v12 += 2;
      if ( v12 == v31 )
        goto LABEL_26;
    }
    if ( !((_DWORD)v29 + v29[1] - *((_DWORD *)v8 + 1) - (_DWORD)v8) )
      goto LABEL_75;
LABEL_74:
    v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
    v29 += 2;
    goto LABEL_75;
  }
LABEL_26:
  *(_DWORD *)v8 = *(v12 - 2);
  if ( v8 != v6 && (char *)v8 + *((int *)v8 + 1) != (char *)v8 + *((int *)v8 - 1) - 8 )
    v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
  v22 = (v8 - this - 12) >> 3;
  *(_DWORD *)this = v22;
  if ( (_DWORD)v22 )
  {
    v23 = (FastRegion::Internal::CStripe *)((char *)v8 - 8);
    *((_DWORD *)this + 1) = 0x7FFFFFFF;
    *((_DWORD *)this + 2) = 0x80000000;
    v24 = (_DWORD *)((char *)v23 + *((int *)v23 + 1));
    while ( 1 )
    {
      v23 = (FastRegion::Internal::CStripe *)((char *)v23 - 8);
      if ( v23 < v6 )
        break;
      v25 = v24;
      v24 = (_DWORD *)((char *)v23 + *((int *)v23 + 1));
      if ( v24 != v25 )
      {
        if ( *((_DWORD *)this + 1) > *v24 )
          *((_DWORD *)this + 1) = *v24;
        v26 = *(v25 - 1);
        if ( *((_DWORD *)this + 2) < v26 )
          *((_DWORD *)this + 2) = v26;
      }
    }
  }
}
