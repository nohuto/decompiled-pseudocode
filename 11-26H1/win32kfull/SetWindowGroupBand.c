/*
 * XREFs of SetWindowGroupBand @ 0x14017A7AC
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1400487E4 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x14017A04C (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x14017A9B4 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     xxxUpdateShadowZorder @ 0x1402536E8 (xxxUpdateShadowZorder.c)
 * Callees:
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     LinkWindow @ 0x14012DC64 (LinkWindow.c)
 *     GetBandOrdinal @ 0x14012E344 (GetBandOrdinal.c)
 *     UnlinkWindow @ 0x14012E600 (UnlinkWindow.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x140179D6C (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x140179DA0 (-SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z.c)
 *     ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x14017A8C4 (-HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z.c)
 */

void __fastcall SetWindowGroupBand(struct tagWND *a1, unsigned int a2, int a3)
{
  struct tagWND *RootOwner; // rdi
  int v5; // ebp
  unsigned int BandOrdinal; // eax
  __int64 v7; // rbx
  unsigned int v8; // r8d
  _BOOL8 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rsi

  RootOwner = a1;
  if ( !a3 )
    RootOwner = GetRootOwner(a1);
  v5 = *(_DWORD *)(*((_QWORD *)RootOwner + 5) + 236LL);
  GetBandOrdinal(v5);
  BandOrdinal = GetBandOrdinal(a2);
  v7 = (__int64)RootOwner;
  v9 = BandOrdinal >= v8;
  while ( 1 )
  {
    v10 = *(_QWORD *)(v7 + 96);
    if ( !v10 || *(_DWORD *)(*(_QWORD *)(v10 + 40) + 236LL) != v5 )
      break;
    v7 = *(_QWORD *)(v7 + 96);
  }
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)(v7 + 40) + 236LL) != v5 )
      break;
    v11 = *(_QWORD *)(v7 + 88);
    if ( (struct tagWND *)v7 == RootOwner || (unsigned int)HasOwnedWindowInTree((struct tagWND *)v7, RootOwner) )
    {
      UnlinkWindow((struct tagWND *)v7, *(__int64 **)(v7 + 104));
      if ( a2 != 1 )
      {
        SetOrClrWF(0, (struct tagWND *)v7, 0x304u, 1);
        SetOrClrWF(1, (struct tagWND *)v7, 0x808u, 1);
      }
      SetWindowTreeBand(v7, a2);
      LinkWindow((struct tagWND *)v7, (struct tagWND **)v9, *(_QWORD *)(v7 + 104));
      v9 = v7;
    }
    v7 = v11;
  }
  while ( v11 );
}
