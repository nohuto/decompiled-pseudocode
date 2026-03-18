/*
 * XREFs of ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C009A640
 * Callers:
 *     GreExtTextOutRect @ 0x1C0098EB8 (GreExtTextOutRect.c)
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C009DC5C (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 * Callees:
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019CD4 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C001E8B0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     bCvtPts1 @ 0x1C00979C4 (bCvtPts1.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009DA98 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C009DB38 (-bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009DC0C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall ExtTextOutRect(struct XDCOBJ *a1, struct tagRECT *a2)
{
  unsigned int v4; // ebx
  int v5; // r8d
  LONG left; // ecx
  LONG right; // edx
  __int64 v8; // r14
  int v9; // r8d
  __int64 v10; // rsi
  struct _POINTL *v11; // rdx
  __int64 v12; // r15
  struct REGION *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  struct ECLIPOBJ *v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v20; // [rsp+60h] [rbp-9h] BYREF
  int v21; // [rsp+6Ch] [rbp+3h]
  struct _RECTL v22; // [rsp+70h] [rbp+7h] BYREF
  struct _RECTL v23; // [rsp+80h] [rbp+17h] BYREF

  if ( !*(_QWORD *)a1 || (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x10000) != 0 )
    return 0;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v20, a1, 0x204u);
  v4 = 1;
  v5 = *(_DWORD *)(v20 + 32);
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
  v23.top = a2->top;
  v23.bottom = a2->bottom;
  v23.left = left;
  v23.right = right;
  if ( (v5 & 0x43) != 0x43 )
  {
    bCvtPts1(v20, &v23, 2LL);
    right = v23.right;
    left = v23.left;
  }
  if ( v21 )
  {
    v23.left = left + 1;
    v23.right = right + 1;
  }
  ERECTL::vOrder((ERECTL *)&v23);
  if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v23) )
    return v4;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(a1, (struct ERECTL *)&v23);
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
  if ( !v8 )
    return v4;
  if ( !(unsigned int)DestSurfaceAccessCheck(*(struct SURFACE **)(*(_QWORD *)a1 + 512LL)) )
  {
    EngSetLastError(5u);
    return 0;
  }
  v10 = *(_QWORD *)a1;
  v11 = (struct _POINTL *)(*(_QWORD *)a1 + 1416LL);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1) == 0 )
    v11 = (struct _POINTL *)(v10 + 1408);
  if ( (unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v23, v11, v9) )
  {
    v12 = 0LL;
    if ( v23.left < *(_DWORD *)(v10 + 1392)
      || v23.right > *(_DWORD *)(v10 + 1400)
      || v23.top < *(_DWORD *)(v10 + 1396)
      || v23.bottom > *(_DWORD *)(v10 + 1404) )
    {
      v13 = *(struct REGION **)(v10 + 1552);
      v12 = v10 + 2184;
      if ( !v13 )
        v13 = *(struct REGION **)(v10 + 1544);
      XCLIPOBJ::vSetup((XCLIPOBJ *)(v10 + 2184), v13, (struct ERECTL *)&v23, 2);
      v23 = *(struct _RECTL *)(v10 + 2188);
      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v23) )
        return v4;
    }
    v14 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
    v15 = *(_QWORD *)a1 + 2016LL;
    v16 = (struct ECLIPOBJ *)(unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 332LL) | *(_DWORD *)(v14 + 8));
    if ( ((*(_BYTE *)(*(_QWORD *)a1 + 332LL) | *(_BYTE *)(v14 + 8)) & 8) != 0 )
    {
      *(_DWORD *)(v14 + 8) &= ~8u;
      *(_DWORD *)(*(_QWORD *)a1 + 332LL) &= ~8u;
      EBRUSHOBJ::vInitBrush(
        v15,
        *(_QWORD *)a1,
        gpbrBackground,
        *(_QWORD *)(*(_QWORD *)a1 + 96LL),
        *(_QWORD *)(v8 + 120));
    }
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0) != 0 && (*(_DWORD *)(v15 + 128) & 0x100) == 0 )
    {
      v22 = v23;
      XDCOBJ::vAccumulateTight(a1, v16, &v22);
    }
    ++*(_DWORD *)(v8 + 92);
    v17 = *(_QWORD *)a1 + 1576LL;
    if ( (*(_DWORD *)(v8 + 112) & 1) != 0 )
      return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD, struct _RECTL *, _QWORD, _QWORD, __int64, __int64, int))(*(_QWORD *)(v8 + 48) + 2864LL))(
                             v8 + 24,
                             0LL,
                             0LL,
                             v12,
                             0LL,
                             &v23,
                             0LL,
                             0LL,
                             v15,
                             v17,
                             61680);
    else
      return (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, _QWORD, struct _RECTL *, _QWORD, _QWORD, __int64, __int64, int))EngBitBlt)(
                             v8 + 24,
                             0LL,
                             0LL,
                             v12,
                             0LL,
                             &v23,
                             0LL,
                             0LL,
                             v15,
                             v17,
                             61680);
  }
  return 0LL;
}
