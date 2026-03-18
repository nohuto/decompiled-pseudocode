/*
 * XREFs of FreeSpb @ 0x1C0008718
 * Callers:
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C0008654 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     SpbCheckPwnd @ 0x1C00095D4 (SpbCheckPwnd.c)
 *     FreeAllSpbs @ 0x1C003E1D0 (FreeAllSpbs.c)
 *     zzzLockWindowUpdate2 @ 0x1C0044DC8 (zzzLockWindowUpdate2.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0062A3C (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     RestoreSpb @ 0x1C01EA24C (RestoreSpb.c)
 *     xxxDrawDragRectEx @ 0x1C020B728 (xxxDrawDragRectEx.c)
 * Callees:
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     ?PostSpbApc@@YAXPEAU_KAPC@@PEAUtagWND@@_K@Z @ 0x1C01EA144 (-PostSpbApc@@YAXPEAU_KAPC@@PEAUtagWND@@_K@Z.c)
 *     GreSaveScreenBits @ 0x1C0290ED8 (GreSaveScreenBits.c)
 */

void __fastcall FreeSpb(__int64 a1)
{
  char v1; // bp
  char v2; // si
  _QWORD *i; // rcx
  struct tagWND **v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  struct tagWND *v8; // rdx
  __int64 v9; // rcx
  _QWORD **v10; // rcx
  _QWORD *v11; // rbx

  if ( !a1 )
    return;
  v1 = 0;
  v2 = 0;
  if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
  {
    if ( (unsigned int)GreIsVisRgnPublishLocked(*gpDispInfo) )
      v1 = 1;
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
  v5 = (struct tagWND **)(a1 + 8);
  *i = *(_QWORD *)a1;
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 )
  {
    SetOrClrWF(0LL, v6, 128LL, 1LL);
    if ( ExIsResourceAcquiredExclusiveLite(gpresUser) || !ExIsResourceAcquiredSharedLite(gpresUser) )
      HMAssignmentUnlock(a1 + 8);
    else
      v2 = 1;
  }
  if ( v1 )
  {
    v7 = *(_QWORD *)(a1 + 56);
    goto LABEL_22;
  }
  if ( v2 )
  {
    v7 = 0LL;
LABEL_22:
    if ( v2 )
      v8 = *v5;
    else
      v8 = 0LL;
    PostSpbApc(*(struct _KAPC **)(a1 + 64), v8, v7);
    if ( v2 )
      *v5 = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v9 = *(_QWORD *)(a1 + 64);
  if ( v9 )
    Win32FreePool(v9);
  Win32FreePool(a1);
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
