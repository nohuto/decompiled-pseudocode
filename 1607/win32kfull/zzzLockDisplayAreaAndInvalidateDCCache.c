/*
 * XREFs of zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0074E94
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C00650AC (xxxSetLayeredWindow.c)
 *     UnsetLayeredWindow @ 0x1C0066114 (UnsetLayeredWindow.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00777E4 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C00A1758 (xxxSetWindowStyle.c)
 *     xxxScrollWindowEx @ 0x1C00ADA68 (xxxScrollWindowEx.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00D7A00 (zzzUpdateWindowsAfterModeChange.c)
 *     zzzResetSharedDesktops @ 0x1C00D8AA0 (zzzResetSharedDesktops.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 *     zzzLockWindowUpdate2 @ 0x1C0121EF4 (zzzLockWindowUpdate2.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0126500 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C0227630 (xxxMinimizeHungWindow.c)
 * Callees:
 *     GreLockDisplayArea @ 0x1C000E370 (GreLockDisplayArea.c)
 *     zzzSetFMouseMovedWorker @ 0x1C00587A4 (zzzSetFMouseMovedWorker.c)
 *     RevalidateDCE @ 0x1C00750C0 (RevalidateDCE.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0075160 (GreUpdateSpriteVisRgn.c)
 *     GreClientRgnUpdated @ 0x1C0075BE8 (GreClientRgnUpdated.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     InvalidateGDIWindows @ 0x1C01DEB20 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzLockDisplayAreaAndInvalidateDCCache(__int64 a1, char a2, struct tagRECT *a3)
{
  char v3; // si
  __int64 v5; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
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
  _QWORD v19[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  v5 = a1;
  v19[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v19;
  ++*(_DWORD *)(a1 + 8);
  v19[1] = a1;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x8000) == 0 && (a2 & 0x10) == 0 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    zzzSetFMouseMovedWorker(PerformanceCounter.QuadPart, 0LL, 0, 0LL, 0);
  }
  if ( (v3 & 1) != 0 )
  {
    v3 = 0;
    if ( *(_QWORD *)(v5 + 88) )
    {
      if ( v5 != GetDesktopWindow(v5) )
      {
        if ( (*(_BYTE *)(v18 + 55) & 2) != 0 )
        {
          v3 = 4;
LABEL_29:
          v5 = v18;
          goto LABEL_4;
        }
        if ( (*(_BYTE *)(v5 + 55) & 4) != 0 )
        {
          v3 = 2;
          goto LABEL_29;
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
              goto LABEL_12;
          }
          if ( v5 != v10 || (v3 & 2) == 0 && ((v8[8] & 1) == 0 || (v3 & 4) == 0) )
            RevalidateDCE(v8);
        }
      }
LABEL_12:
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
