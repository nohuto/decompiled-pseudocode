/*
 * XREFs of ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C00391A0
 * Callers:
 *     GreExtTextOutRect @ 0x1C0039588 (GreExtTextOutRect.c)
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C010AD28 (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 * Callees:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002FA30 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C003560C (-bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00356B4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00363F0 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     bCvtPts1 @ 0x1C003BEC0 (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00491C8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExtTextOutRect(struct XDCOBJ *a1, struct tagRECT *a2)
{
  unsigned int v4; // ebx
  int v5; // r8d
  LONG left; // ecx
  LONG right; // edx
  __int64 v8; // r14
  __int64 v9; // rsi
  struct _POINTL *v10; // rdx
  __int64 v11; // r15
  struct REGION *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  struct ECLIPOBJ *v15; // rdx
  __int64 v16; // rcx
  __int64 v19; // [rsp+60h] [rbp-9h] BYREF
  int v20; // [rsp+6Ch] [rbp+3h]
  __int128 v21; // [rsp+70h] [rbp+7h] BYREF
  __int128 v22; // [rsp+80h] [rbp+17h] BYREF

  if ( !*(_QWORD *)a1 || (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x10000) != 0 )
    return 0;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v19, a1, 0x204u);
  v4 = 1;
  v5 = *(_DWORD *)(v19 + 32);
  if ( (v5 & 1) == 0 )
    return (unsigned int)GreExtTextOutWLocked(
                           a1,
                           0,
                           0,
                           2,
                           a2,
                           0LL,
                           0,
                           0LL,
                           *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 73LL),
                           0LL,
                           0);
  left = a2->left;
  right = a2->right;
  DWORD1(v22) = a2->top;
  HIDWORD(v22) = a2->bottom;
  LODWORD(v22) = left;
  DWORD2(v22) = right;
  if ( (v5 & 0x43) != 0x43 )
  {
    bCvtPts1(v19, &v22, 2LL);
    right = DWORD2(v22);
    left = v22;
  }
  if ( v20 )
  {
    LODWORD(v22) = left + 1;
    DWORD2(v22) = right + 1;
  }
  ERECTL::vOrder((ERECTL *)&v22);
  if ( (_DWORD)v22 == DWORD2(v22) || DWORD1(v22) == HIDWORD(v22) )
    return v4;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(a1, (struct ERECTL *)&v22);
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
  if ( !v8 )
    return v4;
  if ( !(unsigned int)DestSurfaceAccessCheck(*(struct SURFACE **)(*(_QWORD *)a1 + 512LL)) )
  {
    EngSetLastError(5u);
    return 0;
  }
  v9 = *(_QWORD *)a1;
  v10 = (struct _POINTL *)(*(_QWORD *)a1 + 1416LL);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1) == 0 )
    v10 = (struct _POINTL *)(v9 + 1408);
  if ( (unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v22, v10) )
  {
    v11 = 0LL;
    if ( (int)v22 < *(_DWORD *)(v9 + 1392)
      || SDWORD2(v22) > *(_DWORD *)(v9 + 1400)
      || SDWORD1(v22) < *(_DWORD *)(v9 + 1396)
      || SHIDWORD(v22) > *(_DWORD *)(v9 + 1404) )
    {
      v11 = v9 + 2184;
      v12 = XDCOBJ::prgnEffRao(a1);
      XCLIPOBJ::vSetup((XCLIPOBJ *)(v9 + 2184), v12, (struct ERECTL *)&v22, 2);
      v22 = *(_OWORD *)(v9 + 2188);
      if ( ERECTL::bEmpty((ERECTL *)&v22) )
        return v4;
    }
    v13 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
    v14 = *(_QWORD *)a1 + 2016LL;
    v15 = (struct ECLIPOBJ *)(unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 332LL) | *(_DWORD *)(v13 + 8));
    if ( ((*(_BYTE *)(*(_QWORD *)a1 + 332LL) | *(_BYTE *)(v13 + 8)) & 8) != 0 )
    {
      *(_DWORD *)(v13 + 8) &= ~8u;
      *(_DWORD *)(*(_QWORD *)a1 + 332LL) &= ~8u;
      EBRUSHOBJ::vInitBrush(
        v14,
        *(_QWORD *)a1,
        gpbrBackground,
        *(_QWORD *)(*(_QWORD *)a1 + 96LL),
        *(_QWORD *)(v8 + 120),
        v8,
        (*(_DWORD *)(*(_QWORD *)a1 + 72LL) >> 15) & 1);
    }
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0) != 0 && (*(_DWORD *)(v14 + 128) & 0x100) == 0 )
    {
      v21 = v22;
      XDCOBJ::vAccumulateTight(a1, v15, (struct ERECTL *)&v21);
    }
    ++*(_DWORD *)(v8 + 92);
    v16 = *(_QWORD *)a1 + 1576LL;
    if ( (*(_DWORD *)(v8 + 112) & 1) != 0 )
      return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD, __int128 *, _QWORD, _QWORD, __int64, __int64, int))(*(_QWORD *)(v8 + 48) + 2856LL))(
                             v8 + 24,
                             0LL,
                             0LL,
                             v11,
                             0LL,
                             &v22,
                             0LL,
                             0LL,
                             v14,
                             v16,
                             61680);
    else
      return (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, _QWORD, __int128 *, _QWORD, _QWORD, __int64, __int64, int))EngBitBlt)(
                             v8 + 24,
                             0LL,
                             0LL,
                             v11,
                             0LL,
                             &v22,
                             0LL,
                             0LL,
                             v14,
                             v16,
                             61680);
  }
  return 0LL;
}
