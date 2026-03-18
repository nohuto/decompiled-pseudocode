/*
 * XREFs of ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00372DC
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0035314 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C028040C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     STR_DIV @ 0x1C00374D0 (STR_DIV.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall vInitStrDDA(struct _STRDDA *a1, struct _RECTL *a2, struct _RECTL *a3, struct _RECTL *a4)
{
  LONG left; // edx
  struct _RECTL *v7; // rbx
  LONG v9; // r14d
  LONG right; // edi
  signed int v11; // r10d
  signed int *v12; // r11
  int v13; // r12d
  int v14; // r15d
  int v15; // edx
  LONG v16; // ecx
  __int64 v17; // rax
  signed int v18; // r9d
  signed int v19; // r8d
  _DWORD *v20; // r14
  int v21; // eax
  LONG bottom; // edi
  LONG v23; // r12d
  __int64 v24; // r10
  __int64 v25; // r11
  int v26; // r15d
  int v27; // r14d
  int v28; // r8d
  LONG v29; // edx
  __int64 v30; // rax
  int v31; // ebx
  int v32; // r9d
  int v33; // ecx
  LONG top; // ecx
  int v35; // eax
  int v36; // [rsp+20h] [rbp-40h] BYREF
  int v37; // [rsp+24h] [rbp-3Ch]
  int v38; // [rsp+30h] [rbp-30h]
  int v39; // [rsp+34h] [rbp-2Ch]
  int v40; // [rsp+38h] [rbp-28h]
  _BYTE v41[12]; // [rsp+3Ch] [rbp-24h] BYREF
  int v42; // [rsp+48h] [rbp-18h]
  int v43; // [rsp+4Ch] [rbp-14h]

  left = a3->left;
  v7 = a3;
  if ( *(_QWORD *)&a3->left )
  {
    top = a3->top;
    v7 = (struct _RECTL *)&v41[4];
    v35 = a2->left - left;
    *(_QWORD *)&v41[4] = 0LL;
    v38 = v35;
    v39 = a2->top - top;
    v40 = a2->right - left;
    *(_QWORD *)v41 = (unsigned int)(a2->bottom - top);
    v42 = a3->right - left;
    v43 = a3->bottom - top;
  }
  *((_QWORD *)a1 + 3) = (char *)a1 + 4 * v7->right + 32;
  v9 = a4->left;
  right = v7->right;
  STR_DIV(&v36, (unsigned int)(a4->right - a4->left), (unsigned int)right);
  v13 = v37;
  v14 = v36;
  v15 = v36;
  v16 = v37 + ((right - 1) >> 1);
  if ( v16 >= right )
  {
    v15 = v36 + 1;
    v16 -= right;
  }
  v17 = (unsigned int)*v12;
  v18 = v11;
  v19 = v11;
  if ( (int)v17 > 0 )
  {
    v19 = *v12;
    do
    {
      v18 = v15;
      v16 += v37;
      v15 += v36;
      if ( v16 >= right )
      {
        ++v15;
        v16 -= right;
      }
      --v17;
    }
    while ( v17 );
  }
  *(_DWORD *)a1 = v9 + v18;
  if ( v19 < v12[2] )
  {
    v20 = (_DWORD *)((char *)a1 + 32);
    do
    {
      v16 += v13;
      v21 = v15 - v18;
      v18 = v15;
      v15 += v14;
      *v20 = v21;
      if ( v16 >= right )
      {
        ++v15;
        v16 -= right;
      }
      ++v19;
      ++v20;
    }
    while ( v19 < v12[2] );
  }
  *((_DWORD *)a1 + 2) = v18 + a4->left;
  bottom = v7->bottom;
  v23 = a4->top;
  STR_DIV(&v36, (unsigned int)(a4->bottom - v23), (unsigned int)bottom);
  v26 = v37;
  v27 = v36;
  v28 = v36;
  v29 = v37 + ((bottom - 1) >> 1);
  if ( v29 >= bottom )
  {
    v28 = v36 + 1;
    v29 -= bottom;
  }
  v30 = *(unsigned int *)(v25 + 4);
  v31 = v24;
  v32 = v24;
  if ( (int)v30 > 0 )
  {
    v32 = *(_DWORD *)(v25 + 4);
    do
    {
      v31 = v28;
      v29 += v37;
      v28 += v36;
      if ( v29 >= bottom )
      {
        ++v28;
        v29 -= bottom;
      }
      --v30;
    }
    while ( v30 );
  }
  *((_DWORD *)a1 + 1) = v23 + v31;
  while ( v32 < *(_DWORD *)(v25 + 12) )
  {
    v33 = v28 - v31;
    v29 += v26;
    v31 = v28;
    v28 += v27;
    *(_DWORD *)(v24 + *((_QWORD *)a1 + 3)) = v33;
    if ( v29 >= bottom )
    {
      ++v28;
      v29 -= bottom;
    }
    ++v32;
    v24 += 4LL;
  }
  *((_DWORD *)a1 + 3) = v31 + a4->top;
}
