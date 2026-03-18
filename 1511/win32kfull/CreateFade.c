/*
 * XREFs of CreateFade @ 0x1C0139CBC
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00C6150 (xxxTooltipWndProc.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0139638 (-zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     zzzStartSonar @ 0x1C01E8164 (zzzStartSonar.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0040968 (GreCreateCompatibleBitmapInternal.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _MonitorFromRect @ 0x1C00780C0 (_MonitorFromRect.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C007BE74 (GreDwmNotifySpriteDPIChange.c)
 *     xxxSetLayeredWindow @ 0x1C007D4C8 (xxxSetLayeredWindow.c)
 *     GreCreateSprite @ 0x1C007DE98 (GreCreateSprite.c)
 *     DeleteFadeSprite @ 0x1C0139C50 (DeleteFadeSprite.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall CreateFade(__m128i *a1, struct tagRECT *a2, unsigned int a3, int a4, unsigned int a5)
{
  struct tagRECT *v8; // rbx
  __int64 v9; // rcx
  int v10; // esi
  int v11; // r15d
  __int64 v12; // rdx
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rax
  struct tagMINIWINDOWINFO *v17; // r9
  __int64 v18; // rcx
  __int64 v19; // [rsp+50h] [rbp-51h] BYREF
  __int64 v20; // [rsp+58h] [rbp-49h] BYREF
  __int64 v21; // [rsp+60h] [rbp-41h]
  __int64 v22; // [rsp+68h] [rbp-39h]
  __int64 v23; // [rsp+70h] [rbp-31h]
  int v24; // [rsp+78h] [rbp-29h]
  _BYTE v25[56]; // [rsp+80h] [rbp-21h] BYREF

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
    v18 = *(_QWORD *)&gfade[2];
    if ( !v18 )
      return 0LL;
    GreSetDCOwnerEx(v18, 0LL, 0LL, 1LL);
  }
  if ( a1 )
  {
    v8 = (struct tagRECT *)&a1[7];
    gfade[12] |= 8u;
    *(_QWORD *)gfade = a1->m128i_i64[0];
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v20);
    xxxSetLayeredWindow(a1, 0, 0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v20);
  }
  else
  {
    v21 = a5;
    v19 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v24 = 0;
    if ( a5 == 2 )
    {
      v16 = MonitorFromRect(&v8->left, 2u);
      v19 = v16;
    }
    else
    {
      v20 = 0LL;
      v14 = MonitorFlagsFromDpiAwareness(a5);
      LogicalToPhysicalDPIPoint(&v20, v8, v14 | 2u, &v19);
      v15 = MonitorFlagsFromDpiAwareness(a5);
      v22 = OriginFromMonFlags(v15, v19);
      v23 = OriginFromMonFlags(32LL, v19);
      v16 = v19;
    }
    HIDWORD(v21) = *(unsigned __int16 *)(v16 + 152);
    gfade[12] &= ~8u;
    if ( (a4 & 0x100) != 0 )
    {
      memset(&v25[4], 0, 0x34uLL);
      v17 = (struct tagMINIWINDOWINFO *)v25;
      a4 &= ~0x100u;
      *(struct tagRECT *)v25 = *v8;
      *(_OWORD *)&v25[16] = *(_OWORD *)v25;
      *(_QWORD *)&v25[48] = *(_QWORD *)(grpdeskRitInput + 40LL);
    }
    else
    {
      v17 = 0LL;
    }
    *(_QWORD *)gfade = GreCreateSprite((HDEV)*gpDispInfo, 0LL, v8, v17, 1, 1, 0, 0, 0);
    if ( *(_QWORD *)gfade )
      GreDwmNotifySpriteDPIChange(*(__int64 *)gfade, 0LL, *(HSPRITE *)gfade);
  }
  if ( !*(_QWORD *)gfade )
    return 0LL;
  v10 = v8->right - v8->left;
  v11 = v8->bottom - v8->top;
  *(_QWORD *)&gfade[4] = GreCreateCompatibleBitmapInternal(*(_QWORD *)(gpDispInfo + 24LL), v10, v11, 0, 0LL);
  v12 = *(_QWORD *)&gfade[4];
  if ( !v12 )
  {
    DeleteFadeSprite();
    return 0LL;
  }
  GreSelectBitmap(*(_QWORD *)&gfade[2], v12);
  if ( a1 )
  {
    if ( (a1[3].m128i_i8[2] & 0x40) != 0 )
      GreSetLayout(*(_QWORD *)&gfade[2], 0xFFFFFFFFLL, 1LL);
  }
  GreSetDCOwnerEx(*(_QWORD *)&gfade[2], 2147483650LL, 0LL, 0LL);
  gfade[6] = v8->left;
  gfade[7] = v8->top;
  gfade[8] = v10;
  gfade[9] = v11;
  gfade[10] = a3;
  gfade[12] |= a4;
  gfade[13] = (gfade[12] & 0x40) != 0 ? 0xFF00FF : 0;
  return *(_QWORD *)&gfade[2];
}
