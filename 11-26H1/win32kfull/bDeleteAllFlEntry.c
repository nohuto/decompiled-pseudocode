/*
 * XREFs of bDeleteAllFlEntry @ 0x14010469C
 * Callers:
 *     GreEnableEUDC @ 0x14016EE38 (GreEnableEUDC.c)
 * Callees:
 *     ?vUnlinkAllEudcFromRFONTList@@YAXXZ @ 0x1400F4808 (-vUnlinkAllEudcFromRFONTList@@YAXXZ.c)
 *     ??$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FAB9C (--$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FABC0 (--$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     bUnloadEudcFont @ 0x140104924 (bUnloadEudcFont.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x140287590 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ?WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x14029600C (-WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     vLinkEudcPFEs @ 0x140324F0C (vLinkEudcPFEs.c)
 */

__int64 __fastcall bDeleteAllFlEntry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 i; // rcx
  _QWORD *v8; // rdi
  int v9; // r14d
  _QWORD *v10; // rcx
  _QWORD *v11; // r15
  int v12; // r8d
  _QWORD *v13; // rdx
  _QWORD *v14; // r9
  struct PFE ***v15; // r11
  int v16; // eax
  _QWORD *v17; // rax
  struct PFE ***v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rax
  int v21; // eax
  struct PFE *v22; // rbx
  struct PFE **v23; // rdi
  struct PFE ***v24; // rax
  struct PFE *v26; // [rsp+20h] [rbp-20h] BYREF
  struct PFE ***v27; // [rsp+28h] [rbp-18h]
  __int128 v28; // [rsp+30h] [rbp-10h] BYREF

  v27 = (struct PFE ***)&v26;
  v26 = (struct PFE *)&v26;
  v28 = 0LL;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 4864LL;
  GreAcquirePushLockExclusive2<16,1>(v3);
  WaitForConcurrentEUDCOperationCompletion((struct Gre::Font::GLOBALS *)v3);
  vUnlinkAllEudcRFONTsAndPFEs(1LL);
  vUnlinkAllEudcFromRFONTList(v5, v4, v6);
  if ( *(_QWORD *)(v3 + 8656) || *(_QWORD *)(v3 + 8664) )
  {
    for ( i = 0LL; i < 2; ++i )
      *((_QWORD *)&v28 + i) = *(_QWORD *)(v3 + 8 * i + 8656);
    *(_OWORD *)(v3 + 8656) = 0LL;
    ++*(_DWORD *)(v3 + 9232);
    *(_WORD *)(v3 + 8672) = 0;
  }
  v8 = *(_QWORD **)(v3 + 9248);
  if ( v8 == (_QWORD *)(v3 + 9248) )
    goto LABEL_25;
  v9 = *(_DWORD *)(v3 + 9240);
  do
  {
    v10 = v8;
    v11 = v8;
    v8 = (_QWORD *)*v8;
    v12 = 0;
    v13 = (_QWORD *)v10[2];
    if ( v13 == v10 + 2 )
    {
LABEL_17:
      v19 = *v11;
      if ( *(_QWORD **)(*v11 + 8LL) != v10 || (v20 = (_QWORD *)v10[1], (_QWORD *)*v20 != v10) )
LABEL_13:
        __fastfail(3u);
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
      Win32FreePool(v10);
      --*(_DWORD *)(v3 + 9240);
      continue;
    }
    do
    {
      v14 = v13;
      v15 = (struct PFE ***)v13;
      v13 = (_QWORD *)*v13;
      v16 = *((_DWORD *)v14 + 4);
      if ( v16 )
      {
        if ( v16 != 1 || (*(_DWORD *)(v3 + 8648) & 8) == 0 )
        {
LABEL_37:
          ++v12;
          continue;
        }
      }
      else if ( (*(_DWORD *)(v3 + 8648) & 2) == 0 )
      {
        goto LABEL_37;
      }
      if ( (_QWORD *)v13[1] != v14 )
        goto LABEL_13;
      v17 = (_QWORD *)v14[1];
      if ( (_QWORD *)*v17 != v14 )
        goto LABEL_13;
      *v17 = v13;
      v13[1] = v17;
      v18 = v27;
      if ( *v27 != &v26 )
        goto LABEL_13;
      v14[1] = v27;
      *v15 = &v26;
      *v18 = (struct PFE **)v14;
      v27 = (struct PFE ***)v14;
    }
    while ( v13 != v10 + 2 );
    if ( !v12 )
      goto LABEL_17;
    if ( *((_DWORD *)v10 + 25) != v12 )
    {
      ++*((_DWORD *)v10 + 26);
      *((_DWORD *)v10 + 25) = v12;
    }
  }
  while ( v8 != (_QWORD *)(v3 + 9248) );
  v21 = *(_DWORD *)(v3 + 9240);
  if ( v9 != v21 )
    ++*(_DWORD *)(v3 + 9236);
  if ( v21 )
    vLinkEudcPFEs(0LL);
LABEL_25:
  GreReleasePushLockExclusive2<16,1>(v3);
  if ( v28 != 0 )
    bUnloadEudcFont((struct PFE **)&v28);
  v22 = v26;
  while ( v22 != (struct PFE *)&v26 )
  {
    v23 = (struct PFE **)v22;
    v22 = *(struct PFE **)v22;
    if ( *((struct PFE ***)v22 + 1) != v23 )
      goto LABEL_13;
    v24 = (struct PFE ***)v23[1];
    if ( *v24 != v23 )
      goto LABEL_13;
    *v24 = (struct PFE **)v22;
    *((_QWORD *)v22 + 1) = v24;
    bUnloadEudcFont(v23 + 4);
    Win32FreePool(v23);
  }
  return 1LL;
}
