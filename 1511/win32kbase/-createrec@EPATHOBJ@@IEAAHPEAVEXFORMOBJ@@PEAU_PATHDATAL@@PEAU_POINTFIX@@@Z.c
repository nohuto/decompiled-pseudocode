/*
 * XREFs of ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C006FA50
 * Callers:
 *     ?addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z @ 0x1C006FE20 (-addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z.c)
 *     ?bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z @ 0x1C00B3910 (-bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     ?vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z @ 0x1C006FFB8 (-vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z.c)
 *     freepathalloc @ 0x1C0070450 (freepathalloc.c)
 *     newpathalloc @ 0x1C00704B0 (newpathalloc.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 *     ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C0081300 (-bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1C00B3BD0 (-reinit@EPATHOBJ@@IEAAXXZ.c)
 *     ?vOffsetPoints@@YAXPEAU_POINTFIX@@0IJJ@Z @ 0x1C00B3C5C (-vOffsetPoints@@YAXPEAU_POINTFIX@@0IJJ@Z.c)
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
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned int v13; // r12d
  int v14; // r8d
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  struct _POINTFIX *v19; // rdx
  struct _POINTFIX *v20; // rdx
  __int64 v21; // rcx
  struct _POINTFIX *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // [rsp+40h] [rbp-38h]

  v6 = a2;
  v8 = *((_QWORD *)this + 1);
  v29 = *(_QWORD *)(v8 + 24);
  v9 = v29;
  LODWORD(v10) = 0;
  if ( v29 )
  {
    v11 = *(_QWORD *)(v29 + 8) + 24LL;
    v12 = v29 + *(unsigned int *)(v29 + 16);
    if ( v12 > v11 )
      v10 = (__int64)(v12 - v11) >> 3;
  }
  v13 = *(_BYTE *)(v8 + 72) & 1;
  v14 = *(_DWORD *)a3;
  if ( (*(_DWORD *)a3 & 0x10) != 0 && (_DWORD)v10 )
    LODWORD(v10) = 3 * (((unsigned int)v10 - v13) / 3) + v13;
  if ( (unsigned int)v10 < v13 + *((_DWORD *)a3 + 1) && (unsigned int)v10 < 8 )
  {
    v27 = newpathalloc();
    v9 = v27;
    if ( !v27 )
    {
      EngSetLastError(8u);
      EPATHOBJ::reinit(this);
      return 0LL;
    }
    *(_QWORD *)v27 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
    *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = v27;
    v28 = (unsigned int)(v27 + *(_DWORD *)(v27 + 16) - *(_DWORD *)(v27 + 8) - 24) >> 3;
    LODWORD(v10) = v28;
    v14 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 0x10) != 0 )
      LODWORD(v10) = v28 - (v28 - v13) % 3;
    v6 = a2;
  }
  if ( (unsigned int)v10 > v13 + *((_DWORD *)a3 + 1) )
    LODWORD(v10) = v13 + *((_DWORD *)a3 + 1);
  v16 = *(_QWORD *)(v9 + 8);
  *(_DWORD *)(v16 + 16) = v14 | 2;
  *(_DWORD *)(v16 + 20) = v10;
  *(_QWORD *)v16 = 0LL;
  *(_QWORD *)(v16 + 8) = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL);
  v17 = *((_QWORD *)this + 1);
  if ( v13 )
  {
    *(_QWORD *)(v16 + 24) = *(_QWORD *)(v17 + 64);
    LODWORD(v10) = v10 - 1;
    *(_DWORD *)(v16 + 16) |= *(_DWORD *)(*((_QWORD *)this + 1) + 72LL) & 5;
    *(_DWORD *)(*((_QWORD *)this + 1) + 72LL) &= 0xFFFFFFFA;
  }
  else
  {
    v18 = *(_QWORD *)(v17 + 40);
    if ( v18 )
      *(_DWORD *)(v18 + 16) &= ~2u;
  }
  v19 = (struct _POINTFIX *)*((_QWORD *)a3 + 1);
  if ( a4 )
  {
    vOffsetPoints((struct _POINTFIX *)(v16 + 8 * (v13 + 3LL)), v19, v10, a4->x, a4->y);
  }
  else if ( v6 )
  {
    EXFORMOBJ::bXformRound(v6, (struct _POINTL *)v19, (struct _POINTFIX *)(v16 + 8 * (v13 + 3LL)), (unsigned int)v10);
  }
  else
  {
    memmove((void *)(v16 + 8 * (v13 + 3LL)), v19, 8LL * (unsigned int)v10);
  }
  *((_DWORD *)a3 + 1) -= v10;
  *((_QWORD *)a3 + 1) += 8LL * (unsigned int)v10;
  *(_DWORD *)a3 &= 0xFFFFFFFA;
  v20 = (struct _POINTFIX *)(v16 + 24);
  v21 = *((_QWORD *)this + 1);
  if ( !*(_QWORD *)(v21 + 40) )
  {
    *(_DWORD *)(v21 + 56) = v20->x;
    *(_DWORD *)(*((_QWORD *)this + 1) + 48LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 56LL);
    *(_DWORD *)(*((_QWORD *)this + 1) + 60LL) = *(_DWORD *)(v16 + 28);
    *(_DWORD *)(*((_QWORD *)this + 1) + 52LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 60LL);
  }
  if ( v13 + (_DWORD)v10 )
  {
    do
    {
      ERECTFX::vInclude((ERECTFX *)(*((_QWORD *)this + 1) + 48LL), v20);
      v20 = v22 + 1;
    }
    while ( v23 != 1 );
  }
  v24 = *((_QWORD *)this + 1);
  v25 = *(_QWORD **)(v24 + 40);
  if ( v25 )
  {
    *v25 = v16;
    *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = v16;
  }
  else
  {
    *(_QWORD *)(v24 + 40) = v16;
    *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v16;
  }
  *(_QWORD *)(v9 + 8) = v16 + 8 * (*(unsigned int *)(v16 + 20) + 3LL);
  return 1LL;
}
