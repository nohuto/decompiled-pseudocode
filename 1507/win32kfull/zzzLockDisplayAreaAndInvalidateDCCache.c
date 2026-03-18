/*
 * XREFs of zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0060E9C
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x1C000A564 (zzzUpdateWindowsAfterModeChange.c)
 *     UnsetLayeredWindow @ 0x1C000CA0C (UnsetLayeredWindow.c)
 *     zzzResetSharedDesktops @ 0x1C003DE30 (zzzResetSharedDesktops.c)
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     zzzLockWindowUpdate2 @ 0x1C0044DC8 (zzzLockWindowUpdate2.c)
 *     xxxSetLayeredWindow @ 0x1C0056D10 (xxxSetLayeredWindow.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0062A3C (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C0068470 (xxxSetWindowStyle.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00FB378 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxScrollWindowEx @ 0x1C0112924 (xxxScrollWindowEx.c)
 *     xxxMinimizeHungWindow @ 0x1C0227678 (xxxMinimizeHungWindow.c)
 * Callees:
 *     GreLockDisplayArea @ 0x1C0009A6C (GreLockDisplayArea.c)
 *     SpbCheckDce @ 0x1C005E760 (SpbCheckDce.c)
 *     InvalidateDCE @ 0x1C005E7C8 (InvalidateDCE.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0061170 (GreUpdateSpriteVisRgn.c)
 *     GreClientRgnUpdated @ 0x1C0061BE4 (GreClientRgnUpdated.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     zzzSetFMouseMovedWorker @ 0x1C008D08C (zzzSetFMouseMovedWorker.c)
 *     InvalidateGDIWindows @ 0x1C01E7E34 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzLockDisplayAreaAndInvalidateDCCache(__int64 a1, char a2, struct tagRECT *a3)
{
  char v3; // si
  __int64 v5; // rdi
  DWORD LowPart; // eax
  _QWORD **v7; // rcx
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // esi
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // rdx
  unsigned __int8 v20; // cl
  __int64 v21; // rdx
  _QWORD v22[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  v5 = a1;
  v22[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v22;
  ++*(_DWORD *)(a1 + 8);
  v22[1] = a1;
  if ( (*(_DWORD *)(gptiCurrent + 448LL) & 0x8000) == 0 && (a2 & 0x10) == 0 )
  {
    LowPart = KeQueryPerformanceCounter(0LL).LowPart;
    zzzSetFMouseMovedWorker(LowPart, 0, 0, 0, 0);
  }
  if ( (v3 & 1) != 0 )
  {
    v3 = 0;
    if ( *(_QWORD *)(v5 + 88) )
    {
      if ( v5 != GetDesktopWindow(v5) )
      {
        if ( (*(_BYTE *)(v21 + 55) & 2) != 0 )
        {
          v3 = 4;
LABEL_42:
          v5 = v21;
          goto LABEL_4;
        }
        if ( (*(_BYTE *)(v5 + 55) & 4) != 0 )
        {
          v3 = 2;
          goto LABEL_42;
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
  v8 = *(_QWORD *)(gpDispInfo + 64LL);
  if ( v8 )
  {
    do
    {
      v9 = *(_DWORD *)(v8 + 64);
      if ( (v9 & 0x400800) == 0 )
      {
        if ( (v9 & 3) == 0 )
        {
          v19 = *(_QWORD *)(v8 + 16);
          if ( (*(_BYTE *)(v19 + 55) & 2) != 0 )
            *(_DWORD *)(v8 + 64) = v9 | 8;
          if ( (*(_BYTE *)(v19 + 55) & 0x20) != 0 )
            *(_DWORD *)(v8 + 64) &= ~8u;
        }
        v10 = *(_QWORD *)(v8 + 16);
        v11 = v10;
        if ( v10 )
        {
          while ( v11 != v5 )
          {
            v11 = *(_QWORD *)(v11 + 88);
            if ( !v11 )
              goto LABEL_24;
          }
          if ( v5 != v10 || (v3 & 2) == 0 && ((*(_BYTE *)(v8 + 64) & 1) == 0 || (v3 & 4) == 0) )
          {
            v12 = *(unsigned int *)(v8 + 64);
            if ( (v12 & 0x1000) != 0 )
            {
              v13 = *(_QWORD *)(v8 + 24);
              if ( (int)v12 >= 0 )
              {
                v12 = (unsigned int)v12 & 0xFFFFFFE7;
                *(_DWORD *)(v8 + 64) = v12;
                if ( *(char *)(*(_QWORD *)(v10 + 152) + 84LL) >= 0
                  || (*(_BYTE *)(v10 + 45) & 1) == 0 && (*(_BYTE *)(v13 + 55) & 2) != 0
                  || (v20 = *(_BYTE *)(v13 + 55), ((v20 ^ *(_BYTE *)(v10 + 55)) & 0x10) != 0) )
                {
                  if ( (*(_BYTE *)(v10 + 55) & 0x22) == 2 )
                  {
                    v12 = (unsigned int)v12 | 8;
                    *(_DWORD *)(v8 + 64) = v12;
                  }
                  if ( (*(_BYTE *)(v10 + 55) & 4) != 0 )
                    *(_DWORD *)(v8 + 64) |= 0x10u;
                }
                else if ( (v20 & 4) != 0 )
                {
                  v12 = (unsigned int)v12 | 0x10;
                  *(_DWORD *)(v8 + 64) = v12;
                }
              }
              *(_DWORD *)(v8 + 64) |= 0x2000u;
              UserSetDCVisRgn(v8, v12, v10, v13);
            }
            else
            {
              SpbCheckDce(v8);
              InvalidateDCE(v8);
            }
          }
        }
      }
LABEL_24:
      v8 = *(_QWORD *)v8;
    }
    while ( v8 );
    v7 = (_QWORD **)gpDispInfo;
  }
  GreUnlockVisRgnPublish(**v7);
  v14 = v3 & 8;
  v15 = v14 != 0 ? 2 : 0;
  if ( gcountPWO )
  {
    InvalidateGDIWindows(v5);
    v15 |= 1u;
  }
  GreClientRgnUpdated(v15);
  GreUpdateSpriteVisRgn(*gpDispInfo, v14 != 0 ? 4 : 0);
  GreUnlockVisRgn(*gpDispInfo);
  ThreadUnlock1(v17, v16);
  return 1LL;
}
