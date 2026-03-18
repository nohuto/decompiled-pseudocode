/*
 * XREFs of SetWindowGroupBand @ 0x1C00A4DA4
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0078230 (xxxEndDeferWindowPosEx.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C00A4EF8 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     zzzImeSetOwnerWindow @ 0x1C00A8C1C (zzzImeSetOwnerWindow.c)
 *     zzzImeSetFutureOwner @ 0x1C00A8D44 (zzzImeSetFutureOwner.c)
 *     xxxUpdateShadowZorder @ 0x1C0224E68 (xxxUpdateShadowZorder.c)
 * Callees:
 *     UnlinkWindow @ 0x1C0063380 (UnlinkWindow.c)
 *     LinkWindow @ 0x1C007B12C (LinkWindow.c)
 *     GetBandOrdinal @ 0x1C007B43C (GetBandOrdinal.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x1C00A4EB0 (-HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z.c)
 *     ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C011CD64 (-SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0121D24 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

void __fastcall SetWindowGroupBand(struct tagWND *a1, unsigned int a2, int a3)
{
  struct tagWND *RootOwner; // rdi
  int v5; // ebp
  unsigned int BandOrdinal; // eax
  __int64 v7; // rbx
  unsigned int v8; // r8d
  bool v9; // cf
  __int64 v10; // rax
  _BOOL8 v11; // r15
  __int64 v12; // rsi

  RootOwner = a1;
  if ( !a3 )
    RootOwner = GetRootOwner(a1);
  v5 = *((_DWORD *)RootOwner + 76);
  GetBandOrdinal(v5);
  BandOrdinal = GetBandOrdinal(a2);
  v7 = (__int64)RootOwner;
  v9 = BandOrdinal < v8;
  v10 = *((_QWORD *)RootOwner + 10);
  v11 = !v9;
  while ( v10 && *(_DWORD *)(v10 + 304) == v5 )
  {
    v7 = v10;
    v10 = *(_QWORD *)(v10 + 80);
  }
  do
  {
    if ( *(_DWORD *)(v7 + 304) != v5 )
      break;
    v12 = *(_QWORD *)(v7 + 72);
    if ( (struct tagWND *)v7 == RootOwner || (unsigned int)HasOwnedWindowInTree((struct tagWND *)v7, RootOwner) )
    {
      UnlinkWindow(v7, *(_QWORD *)(v7 + 88));
      if ( a2 != 1 )
      {
        SetOrClrWF(0, (_DWORD *)v7, 0x304u, 1);
        SetOrClrWF(1, (_DWORD *)v7, 0x808u, 1);
      }
      SetWindowTreeBand(v7, a2);
      LinkWindow((struct tagWND *)v7, v11, *(_QWORD *)(v7 + 88));
      v11 = v7;
    }
    v7 = v12;
  }
  while ( v12 );
}
