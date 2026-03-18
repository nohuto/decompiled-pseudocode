/*
 * XREFs of FreeSpb @ 0x1C000CAC0
 * Callers:
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C000C9FC (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     SpbCheckPwnd @ 0x1C000DD28 (SpbCheckPwnd.c)
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00777E4 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     FreeAllSpbs @ 0x1C0094950 (FreeAllSpbs.c)
 *     zzzLockWindowUpdate2 @ 0x1C0121EF4 (zzzLockWindowUpdate2.c)
 *     RestoreSpb @ 0x1C01E12DC (RestoreSpb.c)
 *     xxxDrawDragRectEx @ 0x1C0202F18 (xxxDrawDragRectEx.c)
 * Callees:
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     ?PostSpbApc@@YAXPEAU_KAPC@@PEAUtagWND@@_K@Z @ 0x1C01E11D4 (-PostSpbApc@@YAXPEAU_KAPC@@PEAUtagWND@@_K@Z.c)
 *     GreSaveScreenBits @ 0x1C028FA38 (GreSaveScreenBits.c)
 */

void __fastcall FreeSpb(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  char v4; // si
  _QWORD *i; // rcx
  struct tagWND **v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD **v10; // rcx
  _QWORD *v11; // rbx
  unsigned __int64 v12; // r8
  struct tagWND *v13; // rdx

  if ( !a1 )
    return;
  v3 = 0;
  v4 = 0;
  if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
  {
    if ( (unsigned int)GreIsVisRgnPublishLocked(*gpDispInfo) )
      v3 = 1;
    else
      GreSaveScreenBits(*gpDispInfo, 2LL, *(_QWORD *)(a1 + 56));
  }
  else if ( *(_QWORD *)(a1 + 16) )
  {
    GreDeleteObject();
  }
  if ( *(_QWORD *)(a1 + 40) )
    GreDeleteObject();
  for ( i = (_QWORD *)(gpDispInfo + 72LL); *i != a1; i = (_QWORD *)*i )
    ;
  v7 = (struct tagWND **)(a1 + 8);
  *i = *(_QWORD *)a1;
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 )
  {
    SetOrClrWF(0LL, v8, 128LL, 1LL);
    if ( ExIsResourceAcquiredExclusiveLite(gpresUser) || !ExIsResourceAcquiredSharedLite(gpresUser) )
      HMAssignmentUnlock(a1 + 8);
    else
      v4 = 1;
  }
  if ( v3 )
  {
    v12 = *(_QWORD *)(a1 + 56);
    goto LABEL_30;
  }
  if ( v4 )
  {
    v12 = 0LL;
LABEL_30:
    if ( v4 )
      v13 = *v7;
    else
      v13 = 0LL;
    PostSpbApc(*(struct _KAPC **)(a1 + 64), v13, v12);
    if ( v4 )
      *v7 = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v9 = *(_QWORD *)(a1 + 64);
  if ( v9 )
    Win32FreePool(v9, v8, a3);
  Win32FreePool(a1, v8, a3);
  if ( !*(_QWORD *)(gpDispInfo + 72LL) )
  {
    GreLockVisRgn(*gpDispInfo);
    v10 = (_QWORD **)gpDispInfo;
    v11 = *(_QWORD **)(gpDispInfo + 64LL);
    if ( v11 )
    {
      do
      {
        GreGetBounds(v11[1], 0LL, 2LL);
        v11 = (_QWORD *)*v11;
      }
      while ( v11 );
      v10 = (_QWORD **)gpDispInfo;
    }
    GreUnlockVisRgn(**v10);
  }
}
