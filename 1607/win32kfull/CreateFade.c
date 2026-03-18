/*
 * XREFs of CreateFade @ 0x1C013FE3C
 * Callers:
 *     xxxTooltipWndProc @ 0x1C011F2F0 (xxxTooltipWndProc.c)
 *     ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C013CA74 (-zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     zzzStartSonar @ 0x1C01DE9E8 (zzzStartSonar.c)
 * Callees:
 *     GreDwmNotifySpriteDPIChange @ 0x1C0062D14 (GreDwmNotifySpriteDPIChange.c)
 *     xxxSetLayeredWindow @ 0x1C00650AC (xxxSetLayeredWindow.c)
 *     GreCreateSprite @ 0x1C0065AC4 (GreCreateSprite.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _MonitorFromRect @ 0x1C00B0090 (_MonitorFromRect.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00F05D8 (GreCreateCompatibleBitmapInternal.c)
 *     DeleteFadeSprite @ 0x1C013FDD0 (DeleteFadeSprite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall CreateFade(__m128i *a1, struct tagRECT *a2, unsigned int a3, int a4, unsigned int a5)
{
  struct tagRECT *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r9
  int v11; // esi
  int v12; // r15d
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rax
  struct tagMINIWINDOWINFO *v20; // r9
  __int64 v21; // rcx
  __int64 v22; // [rsp+50h] [rbp-51h] BYREF
  __int64 v23; // [rsp+58h] [rbp-49h] BYREF
  __int64 v24; // [rsp+60h] [rbp-41h]
  __int64 v25; // [rsp+68h] [rbp-39h]
  __int64 v26; // [rsp+70h] [rbp-31h]
  int v27; // [rsp+78h] [rbp-29h]
  _BYTE v28[56]; // [rsp+80h] [rbp-21h] BYREF

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
    v21 = *(_QWORD *)&gfade[2];
    if ( !v21 )
      return 0LL;
    GreSetDCOwnerEx(v21, 0LL, 0LL, 1LL);
  }
  if ( a1 )
  {
    v8 = (struct tagRECT *)&a1[7];
    gfade[12] |= 8u;
    *(_QWORD *)gfade = a1->m128i_i64[0];
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v23);
    xxxSetLayeredWindow(a1, 0LL, 0LL, v10);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v23);
  }
  else
  {
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0;
    v22 = 0LL;
    v24 = a5 & 0xF;
    if ( (a5 & 0xF) == 2 )
    {
      v19 = MonitorFromRect(&v8->left, 2u);
      v22 = v19;
    }
    else
    {
      v23 = 0LL;
      v17 = MonitorFlagsFromDpiAwarenessContext(a5);
      LogicalToPhysicalDPIPoint(&v23, v8, v17 | 2u, &v22);
      v18 = MonitorFlagsFromDpiAwarenessContext(a5);
      v25 = OriginFromMonFlags(v18, v22);
      v26 = OriginFromMonFlags(32LL, v22);
      v19 = v22;
    }
    HIDWORD(v24) = *(unsigned __int16 *)(v19 + 154);
    gfade[12] &= ~8u;
    if ( (a4 & 0x100) != 0 )
    {
      memset(&v28[4], 0, 0x34uLL);
      v20 = (struct tagMINIWINDOWINFO *)v28;
      a4 &= ~0x100u;
      *(struct tagRECT *)v28 = *v8;
      *(_OWORD *)&v28[16] = *(_OWORD *)v28;
      *(_QWORD *)&v28[48] = *(_QWORD *)(grpdeskRitInput + 40LL);
    }
    else
    {
      v20 = 0LL;
    }
    *(_QWORD *)gfade = GreCreateSprite((HDEV)*gpDispInfo, 0LL, v8, v20, 1, 1, 0, 0, 0);
    if ( *(_QWORD *)gfade )
      GreDwmNotifySpriteDPIChange(*(__int64 *)gfade, 0LL, *(HSPRITE *)gfade);
  }
  if ( !*(_QWORD *)gfade )
    return 0LL;
  v11 = v8->right - v8->left;
  v12 = v8->bottom - v8->top;
  *(_QWORD *)&gfade[4] = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 24LL), v11, v12, 0, 0LL);
  v15 = *(_QWORD *)&gfade[4];
  if ( !v15 )
  {
    DeleteFadeSprite(*(__int64 *)gfade, 0LL, v13, v14);
    return 0LL;
  }
  GreSelectBitmap(*(_QWORD *)&gfade[2], v15);
  if ( a1 )
  {
    if ( (a1[3].m128i_i8[2] & 0x40) != 0 )
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
