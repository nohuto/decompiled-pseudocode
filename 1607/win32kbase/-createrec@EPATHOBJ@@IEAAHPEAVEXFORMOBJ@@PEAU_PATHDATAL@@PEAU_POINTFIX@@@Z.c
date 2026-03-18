/*
 * XREFs of ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0046E88
 * Callers:
 *     ?addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z @ 0x1C00471F4 (-addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z.c)
 *     ?bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z @ 0x1C00BDE00 (-bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C0045E30 (-bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z @ 0x1C00473D8 (-vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z.c)
 *     newpathalloc @ 0x1C0047CF0 (newpathalloc.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1C00BE120 (-reinit@EPATHOBJ@@IEAAXXZ.c)
 *     ?vOffsetPoints@@YAXPEAU_POINTFIX@@0IJJ@Z @ 0x1C00BE1AC (-vOffsetPoints@@YAXPEAU_POINTFIX@@0IJJ@Z.c)
 */

__int64 __fastcall EPATHOBJ::createrec(
        EPATHOBJ *this,
        struct EXFORMOBJ *a2,
        struct _PATHDATAL *a3,
        struct _POINTFIX *a4)
{
  EXFORMOBJ *v6; // r10
  __int64 v8; // r8
  __int64 v9; // r15
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned int v13; // r12d
  int v14; // r8d
  __int64 v16; // rax
  unsigned int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  struct _POINTFIX *v22; // rdx
  __int64 v23; // rax
  struct _POINTFIX *v24; // rdx
  __int64 v25; // rcx
  struct _POINTFIX *v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  _QWORD *v29; // rcx

  v6 = a2;
  v8 = *((_QWORD *)this + 1);
  v9 = *(_QWORD *)(v8 + 24);
  LODWORD(v10) = 0;
  if ( v9 )
  {
    v11 = *(_QWORD *)(v9 + 8) + 24LL;
    v12 = v9 + *(unsigned int *)(v9 + 16);
    if ( v12 > v11 )
      v10 = (__int64)(v12 - v11) >> 3;
  }
  v13 = *(_BYTE *)(v8 + 72) & 1;
  v14 = *(_DWORD *)a3;
  if ( (*(_DWORD *)a3 & 0x10) != 0 && (_DWORD)v10 )
    LODWORD(v10) = 3 * (((unsigned int)v10 - v13) / 3) + v13;
  if ( (unsigned int)v10 < v13 + *((_DWORD *)a3 + 1) && (unsigned int)v10 < 8 )
  {
    v16 = newpathalloc();
    v9 = v16;
    if ( !v16 )
    {
      EngSetLastError(8u);
      EPATHOBJ::reinit(this);
      return 0LL;
    }
    *(_QWORD *)v16 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
    *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = v16;
    v18 = (unsigned int)(v16 + *(_DWORD *)(v16 + 16) - *(_DWORD *)(v16 + 8) - 24) >> 3;
    LODWORD(v10) = v18;
    v14 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 0x10) != 0 )
      LODWORD(v10) = v18 - (v18 - v13) % 3;
    v6 = a2;
  }
  if ( (unsigned int)v10 > v13 + *((_DWORD *)a3 + 1) )
    LODWORD(v10) = v13 + *((_DWORD *)a3 + 1);
  v19 = *(_QWORD *)(v9 + 8);
  *(_DWORD *)(v19 + 16) = v14 | 2;
  *(_DWORD *)(v19 + 20) = v10;
  *(_QWORD *)v19 = 0LL;
  *(_QWORD *)(v19 + 8) = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL);
  v20 = *((_QWORD *)this + 1);
  if ( v13 )
  {
    *(_QWORD *)(v19 + 24) = *(_QWORD *)(v20 + 64);
    LODWORD(v10) = v10 - 1;
    *(_DWORD *)(v19 + 16) |= *(_DWORD *)(*((_QWORD *)this + 1) + 72LL) & 5;
    *(_DWORD *)(*((_QWORD *)this + 1) + 72LL) &= 0xFFFFFFFA;
  }
  else
  {
    v21 = *(_QWORD *)(v20 + 40);
    if ( v21 )
      *(_DWORD *)(v21 + 16) &= ~2u;
  }
  v22 = (struct _POINTFIX *)*((_QWORD *)a3 + 1);
  if ( a4 )
  {
    vOffsetPoints((struct _POINTFIX *)(v19 + 8 * (v13 + 3LL)), v22, v10, a4->x, a4->y);
  }
  else
  {
    v23 = v13 + 3LL;
    if ( v6 )
      EXFORMOBJ::bXformRound(v6, (struct _POINTL *)v22, (struct _POINTFIX *)(v19 + 8 * v23), (unsigned int)v10);
    else
      memmove((void *)(v19 + 8 * v23), v22, 8LL * (unsigned int)v10);
  }
  *((_DWORD *)a3 + 1) -= v10;
  *((_QWORD *)a3 + 1) += 8LL * (unsigned int)v10;
  *(_DWORD *)a3 &= 0xFFFFFFFA;
  v24 = (struct _POINTFIX *)(v19 + 24);
  v25 = *((_QWORD *)this + 1);
  if ( !*(_QWORD *)(v25 + 40) )
  {
    *(_DWORD *)(v25 + 56) = v24->x;
    *(_DWORD *)(*((_QWORD *)this + 1) + 48LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 56LL);
    *(_DWORD *)(*((_QWORD *)this + 1) + 60LL) = *(_DWORD *)(v19 + 28);
    *(_DWORD *)(*((_QWORD *)this + 1) + 52LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 60LL);
  }
  if ( v13 + (_DWORD)v10 )
  {
    do
    {
      ERECTFX::vInclude((ERECTFX *)(*((_QWORD *)this + 1) + 48LL), v24);
      v24 = v26 + 1;
    }
    while ( v27 != 1 );
  }
  v28 = *((_QWORD *)this + 1);
  v29 = *(_QWORD **)(v28 + 40);
  if ( v29 )
  {
    *v29 = v19;
    *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = v19;
  }
  else
  {
    *(_QWORD *)(v28 + 40) = v19;
    *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v19;
  }
  *(_QWORD *)(v9 + 8) = v19 + 8 * (*(unsigned int *)(v19 + 20) + 3LL);
  return 1LL;
}
