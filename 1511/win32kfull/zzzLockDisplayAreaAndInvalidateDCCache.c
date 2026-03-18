/*
 * XREFs of zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004EC70
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C0058020 (xxxSetWindowStyle.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     xxxSetLayeredWindow @ 0x1C007D4C8 (xxxSetLayeredWindow.c)
 *     UnsetLayeredWindow @ 0x1C007FC9C (UnsetLayeredWindow.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 *     zzzLockWindowUpdate2 @ 0x1C0090970 (zzzLockWindowUpdate2.c)
 *     zzzResetSharedDesktops @ 0x1C009A600 (zzzResetSharedDesktops.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C009AA24 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxScrollWindowEx @ 0x1C00CB5C8 (xxxScrollWindowEx.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0107888 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C02279D4 (xxxMinimizeHungWindow.c)
 * Callees:
 *     GreLockDisplayArea @ 0x1C000CCF8 (GreLockDisplayArea.c)
 *     RevalidateDCE @ 0x1C004EEA0 (RevalidateDCE.c)
 *     GreUpdateSpriteVisRgn @ 0x1C004EF40 (GreUpdateSpriteVisRgn.c)
 *     GreClientRgnUpdated @ 0x1C004F8F8 (GreClientRgnUpdated.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     zzzSetFMouseMovedWorker @ 0x1C0065D9C (zzzSetFMouseMovedWorker.c)
 *     InvalidateGDIWindows @ 0x1C01E82A8 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzLockDisplayAreaAndInvalidateDCCache(__int64 a1, char a2, struct tagRECT *a3)
{
  char v3; // si
  __int64 v5; // rdi
  DWORD LowPart; // eax
  _QWORD **v7; // rcx
  __int64 *v8; // rbx
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // esi
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  _QWORD v20[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  v5 = a1;
  v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v20;
  ++*(_DWORD *)(a1 + 8);
  v20[1] = a1;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x8000) == 0 && (a2 & 0x10) == 0 )
  {
    LowPart = KeQueryPerformanceCounter(0LL).LowPart;
    zzzSetFMouseMovedWorker(LowPart, 0, 0, 0, 0);
  }
  if ( (v3 & 1) != 0 )
  {
    v18 = *(_QWORD *)(v5 + 88);
    v3 = 0;
    if ( v18 )
    {
      if ( v5 != GetDesktopWindow(v5, v18) )
      {
        if ( (*(_BYTE *)(v19 + 55) & 2) != 0 )
        {
          v3 = 4;
LABEL_31:
          v5 = v19;
          goto LABEL_4;
        }
        if ( (*(_BYTE *)(v5 + 55) & 4) != 0 )
        {
          v3 = 2;
          goto LABEL_31;
        }
      }
    }
  }
LABEL_4:
  if ( a3 )
    GreLockDisplayArea(*gpDispInfo, a3);
  GreLockVisRgn(*gpDispInfo);
  GreLockVisRgnPublish(*gpDispInfo);
  v7 = (_QWORD **)gpDispInfo;
  v8 = *(__int64 **)(gpDispInfo + 64LL);
  if ( v8 )
  {
    do
    {
      v9 = *((_DWORD *)v8 + 16);
      if ( (v9 & 0x400800) == 0 )
      {
        if ( (v9 & 3) == 0 )
        {
          v17 = v8[2];
          if ( (*(_BYTE *)(v17 + 55) & 2) != 0 )
            *((_DWORD *)v8 + 16) = v9 | 8;
          if ( (*(_BYTE *)(v17 + 55) & 0x20) != 0 )
            *((_DWORD *)v8 + 16) &= ~8u;
        }
        v10 = v8[2];
        v11 = v10;
        if ( v10 )
        {
          while ( v11 != v5 )
          {
            v11 = *(_QWORD *)(v11 + 88);
            if ( !v11 )
              goto LABEL_15;
          }
          if ( v5 != v10 || (v3 & 2) == 0 && ((v8[8] & 1) == 0 || (v3 & 4) == 0) )
            RevalidateDCE(v8);
        }
      }
LABEL_15:
      v8 = (__int64 *)*v8;
    }
    while ( v8 );
    v7 = (_QWORD **)gpDispInfo;
  }
  GreUnlockVisRgnPublish(**v7);
  v12 = v3 & 8;
  v13 = v12 != 0 ? 2 : 0;
  if ( gcountPWO )
  {
    InvalidateGDIWindows(v5);
    v13 |= 1u;
  }
  GreClientRgnUpdated(v13);
  GreUpdateSpriteVisRgn(*gpDispInfo, v12 != 0 ? 4 : 0);
  GreUnlockVisRgn(*gpDispInfo);
  ThreadUnlock1(v15, v14);
  return 1LL;
}
