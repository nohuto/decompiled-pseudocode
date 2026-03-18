/*
 * XREFs of ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C00A54D0
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C00A4EF8 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 * Callees:
 *     ?IsOwnee@@YAHPEAUtagWND@@0@Z @ 0x1C00A56A0 (-IsOwnee@@YAHPEAUtagWND@@0@Z.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C00A60DC (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     NextOwnedWindow @ 0x1C00A62A8 (NextOwnedWindow.c)
 *     PWInsertAfter @ 0x1C00A6AA8 (PWInsertAfter.c)
 *     ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00A7A78 (-GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagSMWP *__fastcall ZOrderByOwner2(struct tagSMWP *a1, int a2)
{
  __int64 v2; // rbp
  struct tagSMWP *v3; // rdi
  __int64 v4; // r14
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 OwnedWindow; // rax
  struct tagWND *v9; // r12
  __int64 v10; // rbx
  struct tagWND *RealOwner; // rax
  struct tagWND *v12; // r10
  struct tagWND *v13; // r11
  struct tagWND *v14; // rsi
  int v15; // r9d
  struct tagSMWP *v16; // rax
  struct tagWND *v17; // rcx
  __int64 v18; // rcx
  struct tagWND *v19; // rax
  __int64 i; // rcx
  struct tagWND *v21; // rcx

  v2 = *((_QWORD *)a1 + 5);
  v3 = a1;
  v4 = 168LL * a2;
  if ( (*(_DWORD *)(v4 + v2 + 32) & 0x204) != 0 )
    return v3;
  v6 = *(_QWORD *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)(v4 + v2) + gSharedInfo[1]);
  PWInsertAfter(*(_QWORD *)(v4 + v2 + 8));
  v7 = *(_QWORD *)(v6 + 88);
  OwnedWindow = NextOwnedWindow(0LL, v6, v7);
  v9 = *(struct tagWND **)(v6 + 104);
  v10 = 0LL;
  if ( !v9 && !OwnedWindow )
    return v3;
  RealOwner = (struct tagWND *)v6;
  do
    RealOwner = GetRealOwner(RealOwner);
  while ( RealOwner );
  v14 = v12;
  if ( !v12 )
    goto LABEL_10;
  if ( v12 == (struct tagWND *)1 )
  {
    for ( i = *(_QWORD *)(v7 + 96); i && (*(_BYTE *)(i + 44) & 0x20) == 0; i = *((_QWORD *)v21 + 9) )
    {
      if ( !(unsigned int)IsOwnee((struct tagWND *)i, v13) )
        v14 = v21;
    }
    if ( v14 == (struct tagWND *)1 )
      *(_DWORD *)(v4 + v2 + 32) |= 4u;
    goto LABEL_10;
  }
  if ( !(unsigned int)IsOwnee(v12, v13) )
  {
LABEL_10:
    if ( (*(_DWORD *)(v4 + v2 + 32) & 4) == 0 )
    {
      --*((_DWORD *)v3 + 7);
      v16 = AddSelfAndOwnees(
              v3,
              v13,
              (struct tagWND *)v6,
              v12,
              a2,
              *(_DWORD *)(v4 + v2 + 32) & 0x40000 | (*(_DWORD *)(v4 + v2 + 32) >> 7) & 0x400u);
      v3 = v16;
      if ( v16 )
      {
        if ( v14 )
          v10 = *(_QWORD *)v14;
        *(_QWORD *)(*((_QWORD *)v16 + 5) + v4 + 8) = v10;
      }
    }
    return v3;
  }
  if ( v15 )
  {
LABEL_16:
    v17 = *(struct tagWND **)(v7 + 96);
    v14 = 0LL;
    while ( v17 && !(unsigned int)IsOwnee(v17, v13) )
    {
      v14 = (struct tagWND *)v18;
      v17 = *(struct tagWND **)(v18 + 72);
    }
    goto LABEL_10;
  }
  v19 = v12;
  while ( v19 != v9 )
  {
    v19 = (struct tagWND *)*((_QWORD *)v19 + 9);
    if ( !v19 )
      goto LABEL_16;
  }
  return v3;
}
