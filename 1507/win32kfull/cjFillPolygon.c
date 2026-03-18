/*
 * XREFs of cjFillPolygon @ 0x1C02460B4
 * Callers:
 *     lQueryTTOutline @ 0x1C00F0EFC (lQueryTTOutline.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall cjFillPolygon(__int64 a1, int a2, _QWORD *a3, unsigned int a4)
{
  unsigned __int16 v4; // bp
  _QWORD *v5; // rdi
  __int64 v6; // r15
  int v7; // r10d
  __int64 v8; // rax
  _QWORD *v9; // rbx
  unsigned __int16 v10; // r14
  __int64 v11; // r12
  __int64 v12; // r8
  __int64 v13; // r11
  unsigned __int64 v14; // rsi
  void *v16; // r13
  __int64 v17; // rax
  unsigned int v18; // r9d
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int16 v21; // di
  unsigned __int16 v22; // r14
  __int64 v23; // rcx
  _DWORD *v24; // r15
  _DWORD *v25; // r12
  _QWORD *v26; // r10
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  char *v31; // rsi
  bool v32; // bp
  unsigned __int64 v33; // r13
  __int16 v34; // [rsp+30h] [rbp-88h]
  unsigned int v35; // [rsp+34h] [rbp-84h]
  int v36; // [rsp+38h] [rbp-80h]
  unsigned __int16 v37; // [rsp+3Ch] [rbp-7Ch]
  __int64 v38; // [rsp+40h] [rbp-78h]
  __int64 v39; // [rsp+48h] [rbp-70h]
  void (__fastcall *v40)(char *, _QWORD, _QWORD, _QWORD, int); // [rsp+50h] [rbp-68h]
  unsigned __int64 v41; // [rsp+58h] [rbp-60h]
  __int64 v42; // [rsp+60h] [rbp-58h]
  _QWORD *v43; // [rsp+68h] [rbp-50h]
  _DWORD *v44; // [rsp+70h] [rbp-48h]
  __int64 v45; // [rsp+78h] [rbp-40h]
  int v47; // [rsp+D0h] [rbp+18h]

  v47 = (int)a3;
  v4 = 0;
  v5 = a3;
  v6 = a1;
  if ( !a3 || (v7 = 0, !a4) )
    v7 = 1;
  v8 = *(_QWORD *)(a1 + 184);
  v9 = a3;
  v44 = 0LL;
  v43 = 0LL;
  v10 = *(_WORD *)(v8 + 118);
  v11 = *(_QWORD *)(v8 + 144);
  v12 = *(_QWORD *)(v8 + 120);
  v13 = *(_QWORD *)(v8 + 128);
  v39 = *(_QWORD *)(v8 + 152);
  v42 = *(_QWORD *)(v8 + 136);
  v37 = v10;
  v45 = v11;
  if ( v7 )
    a4 = -1;
  v14 = (unsigned __int64)v5 + a4;
  v41 = v14;
  if ( !*(_WORD *)(v8 + 116) )
    return 0LL;
  if ( v7 )
  {
    v16 = Scale_None;
  }
  else
  {
    v16 = Scale_28DOT4;
    if ( a2 )
      v16 = Scale_16DOT16;
  }
  v40 = (void (__fastcall *)(char *, _QWORD, _QWORD, _QWORD, int))v16;
  v34 = 0;
  v17 = (unsigned __int16)(*(_WORD *)(v11 + 2LL * v10 - 2) + 1);
  v18 = *(_DWORD *)(v12 + 4 * v17);
  v19 = v7;
  v35 = v18;
  v36 = *(_DWORD *)(v13 + 4 * v17);
  v38 = v7;
  if ( !v10 )
    return (unsigned int)((_DWORD)v9 - (_DWORD)v5);
  v20 = v42;
  while ( 1 )
  {
    v21 = *(_WORD *)(v20 + 2LL * v4);
    v22 = *(_WORD *)(v11 + 2LL * v4);
    if ( v21 != v22 )
      break;
LABEL_49:
    v34 = ++v4;
    if ( v4 >= v37 )
    {
      LODWORD(v5) = v47;
      return (unsigned int)((_DWORD)v9 - (_DWORD)v5);
    }
  }
  v23 = *(_QWORD *)(v6 + 184);
  v24 = (_DWORD *)(*(_QWORD *)(v23 + 120) + 4LL * v21);
  v25 = (_DWORD *)(*(_QWORD *)(v23 + 128) + 4LL * v21);
  if ( v19 )
  {
    v26 = v43;
  }
  else
  {
    if ( v14 < (unsigned __int64)(v9 + 2) )
      return 0xFFFFFFFFLL;
    v26 = v9 + 1;
    v44 = v9;
    v43 = v9 + 1;
    *((_DWORD *)v9 + 1) = 24;
  }
  v9 += 2;
  if ( (*(_BYTE *)(v21 + v39) & 1) != 0 )
  {
    ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD))v16)(v26, (unsigned int)*v24++, (unsigned int)*v25++);
    ++v21;
  }
  else
  {
    v27 = v22 - (unsigned __int64)v21;
    if ( (*(_BYTE *)(v22 + v39) & 1) != 0 )
    {
      v28 = (unsigned int)v25[v27];
      v29 = (unsigned int)v24[v27];
    }
    else
    {
      v28 = (unsigned int)((*v25 + v25[v27]) >> 1);
      v29 = (unsigned int)((*v24 + v24[v27]) >> 1);
    }
    ((void (__fastcall *)(_QWORD *, __int64, __int64))v16)(v26, v29, v28);
  }
  v19 = v38;
  if ( v21 > v22 )
  {
LABEL_47:
    v6 = a1;
    v11 = v45;
    v20 = v42;
    if ( !v19 )
      *v44 = (_DWORD)v9 - (_DWORD)v44;
    goto LABEL_49;
  }
  while ( v14 >= (unsigned __int64)v9 + 12 )
  {
    v30 = v39;
    v31 = (char *)v9 + 4;
    v32 = (*(_BYTE *)(v21 + v39) & 1) == 0;
    if ( !v19 )
    {
      *(_WORD *)v9 = ((*(_BYTE *)(v21 + v39) & 1) == 0) + 1;
      v30 = v39;
    }
    if ( v21 <= v22 )
    {
      v33 = (unsigned __int64)v9 + 12;
      do
      {
        if ( v32 == (*(_BYTE *)(v21 + v30) & 1) )
          break;
        if ( v41 < v33 )
          return 0xFFFFFFFFLL;
        v40(v31, (unsigned int)*v24, (unsigned int)*v25, v35, v36);
        v30 = v39;
        ++v21;
        v31 += 8;
        v33 += 8LL;
        ++v24;
        ++v25;
      }
      while ( v21 <= v22 );
      v19 = v38;
      v16 = v40;
    }
    if ( v32 )
    {
      if ( v41 < (unsigned __int64)(v31 + 8) )
        return 0xFFFFFFFFLL;
      if ( v21 > v22 )
      {
        if ( !v19 )
          *(_QWORD *)v31 = *v43;
      }
      else
      {
        ((void (__fastcall *)(char *, _QWORD, _QWORD, _QWORD, int))v16)(
          v31,
          (unsigned int)*v24,
          (unsigned int)*v25,
          v35,
          v36);
        v19 = v38;
        ++v21;
        ++v24;
        ++v25;
      }
      v31 += 8;
    }
    if ( !v19 )
      *((_WORD *)v9 + 1) = (v31 - (char *)v9 - 4) >> 3;
    v9 = v31;
    v14 = v41;
    if ( v21 > v22 )
    {
      v4 = v34;
      goto LABEL_47;
    }
  }
  return 0xFFFFFFFFLL;
}
