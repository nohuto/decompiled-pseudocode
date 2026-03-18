/*
 * XREFs of CreateFade @ 0x1C010E24C
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C010DBC8 (-zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxTooltipWndProc @ 0x1C0128580 (xxxTooltipWndProc.c)
 *     zzzStartSonar @ 0x1C01E7CF0 (zzzStartSonar.c)
 * Callees:
 *     GreCreateSprite @ 0x1C000D128 (GreCreateSprite.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C000EE5C (GreDwmNotifySpriteDPIChange.c)
 *     xxxSetLayeredWindow @ 0x1C0056D10 (xxxSetLayeredWindow.c)
 *     _MonitorFromRect @ 0x1C0082E40 (_MonitorFromRect.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0098F78 (GreCreateCompatibleBitmapInternal.c)
 *     DeleteFadeSprite @ 0x1C010E1E0 (DeleteFadeSprite.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall CreateFade(struct tagWND *a1, struct tagRECT *a2, unsigned int a3, int a4, unsigned int a5)
{
  struct tagRECT *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // esi
  int v12; // r15d
  __int64 v13; // rdx
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rax
  struct tagMINIWINDOWINFO *v18; // r9
  __int64 v19; // rcx
  __int64 v20; // [rsp+50h] [rbp-51h] BYREF
  __int64 v21; // [rsp+58h] [rbp-49h] BYREF
  __int64 v22; // [rsp+60h] [rbp-41h]
  __int64 v23; // [rsp+68h] [rbp-39h]
  __int64 v24; // [rsp+70h] [rbp-31h]
  int v25; // [rsp+78h] [rbp-29h]
  _BYTE v26[56]; // [rsp+80h] [rbp-21h] BYREF

  v8 = a2;
  if ( *(_QWORD *)&gfade[4] )
    return 0LL;
  v9 = *(_QWORD *)&gfade[2];
  if ( v9 )
  {
    GreCleanDC(v9);
    GreSetLayout(*(_QWORD *)&gfade[2], 0xFFFFFFFFLL, 0LL);
  }
  else
  {
    *(_QWORD *)&gfade[2] = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 24LL), a2);
    v19 = *(_QWORD *)&gfade[2];
    if ( !v19 )
      return 0LL;
    GreSetDCOwnerEx(v19, 0LL, 0LL, 1LL);
  }
  if ( a1 )
  {
    v8 = (struct tagRECT *)((char *)a1 + 112);
    gfade[12] |= 8u;
    *(_QWORD *)gfade = *(_QWORD *)a1;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v21);
    xxxSetLayeredWindow(a1, 0, 0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v21);
  }
  else
  {
    v22 = a5;
    v20 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0;
    if ( a5 == 2 )
    {
      v17 = MonitorFromRect(&v8->left, 2LL, v10);
      v20 = v17;
    }
    else
    {
      v21 = 0LL;
      v15 = MonitorFlagsFromDpiAwareness(a5);
      LogicalToPhysicalDPIPoint(&v21, v8, v15 | 2u, &v20);
      v16 = MonitorFlagsFromDpiAwareness(a5);
      v23 = OriginFromMonFlags(v16, v20);
      v24 = OriginFromMonFlags(32LL, v20);
      v17 = v20;
    }
    HIDWORD(v22) = *(unsigned __int16 *)(v17 + 152);
    gfade[12] &= ~8u;
    if ( (a4 & 0x100) != 0 )
    {
      memset(&v26[4], 0, 0x34uLL);
      v18 = (struct tagMINIWINDOWINFO *)v26;
      a4 &= ~0x100u;
      *(struct tagRECT *)v26 = *v8;
      *(_OWORD *)&v26[16] = *(_OWORD *)v26;
      *(_QWORD *)&v26[48] = *(_QWORD *)(grpdeskRitInput + 40LL);
    }
    else
    {
      v18 = 0LL;
    }
    *(_QWORD *)gfade = GreCreateSprite((HDEV)*gpDispInfo, 0LL, v8, v18, 1, 1, 0, 0, 0);
    if ( *(_QWORD *)gfade )
      GreDwmNotifySpriteDPIChange(*(__int64 *)gfade, 0LL, *(HSPRITE *)gfade);
  }
  if ( !*(_QWORD *)gfade )
    return 0LL;
  v11 = v8->right - v8->left;
  v12 = v8->bottom - v8->top;
  *(_QWORD *)&gfade[4] = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 24LL), v11, v12, 0, 0LL);
  v13 = *(_QWORD *)&gfade[4];
  if ( !v13 )
  {
    DeleteFadeSprite();
    return 0LL;
  }
  GreSelectBitmap(*(_QWORD *)&gfade[2], v13);
  if ( a1 )
  {
    if ( (*((_BYTE *)a1 + 50) & 0x40) != 0 )
      GreSetLayout(*(_QWORD *)&gfade[2], 0xFFFFFFFFLL, 1LL);
  }
  GreSetDCOwnerEx(*(_QWORD *)&gfade[2], 2147483650LL, 0LL, 0LL);
  gfade[6] = v8->left;
  gfade[7] = v8->top;
  gfade[8] = v11;
  gfade[9] = v12;
  gfade[10] = a3;
  gfade[12] |= a4;
  gfade[13] = (gfade[12] & 0x40) != 0 ? 0xFF00FF : 0;
  return *(_QWORD *)&gfade[2];
}
