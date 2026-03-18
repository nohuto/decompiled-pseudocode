/*
 * XREFs of NtGdiFillRgn @ 0x1C01301F0
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C012FA10 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C0027B7C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C0027E48 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C002C838 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002D820 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D98C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C002DCB4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00368B0 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0036AA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0037A14 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C007B840 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     EngPaint @ 0x1C00E6F30 (EngPaint.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00EDEF0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00EDF2C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?mixBest@EBRUSHOBJ@@QEAAKEE@Z @ 0x1C00FE6C0 (-mixBest@EBRUSHOBJ@@QEAAKEE@Z.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C00FEB54 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C01306DC (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C0130704 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiFillRgn(HDC a1, HRGN a2, HBRUSH a3)
{
  unsigned int v4; // esi
  int v6; // r14d
  BOOL v7; // r12d
  REGION *v8; // rcx
  DC *v9; // rax
  __int64 v10; // r13
  struct EPOINTL *v11; // rax
  struct REGION *v12; // rax
  DC *v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdi
  struct ECLIPOBJ *v16; // rdx
  struct BRUSH *v17; // r15
  MIX mix; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  DC *v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+50h] [rbp-B0h]
  REGION *v24[3]; // [rsp+58h] [rbp-A8h] BYREF
  REGION *v25; // [rsp+70h] [rbp-90h]
  struct BRUSH *v26[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v27[2]; // [rsp+88h] [rbp-78h] BYREF
  RECTL rclBounds; // [rsp+98h] [rbp-68h] BYREF
  BRUSHOBJ pbo; // [rsp+B0h] [rbp-50h] BYREF
  int v30; // [rsp+CCh] [rbp-34h]
  __int64 v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  char *v33; // [rsp+E8h] [rbp-18h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  __int128 v35; // [rsp+110h] [rbp+10h]
  int v36; // [rsp+130h] [rbp+30h]
  _BYTE v37[8]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v38; // [rsp+148h] [rbp+48h]
  DC **v39; // [rsp+158h] [rbp+58h]
  struct _RECTL v40; // [rsp+1C0h] [rbp+C0h] BYREF
  CLIPOBJ pco; // [rsp+1D0h] [rbp+D0h] BYREF

  v4 = 0;
  v23 = 0;
  v6 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v22, a1);
  v25 = 0LL;
  if ( !v22[0] || (*((_DWORD *)v22[0] + 9) & 0x10000) != 0 )
  {
LABEL_47:
    v4 = v6;
    goto LABEL_48;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v27, (struct XDCOBJ *)v22, 0x204u);
  v7 = (*(_DWORD *)(*((_QWORD *)v22[0] + 10) + 352LL) & 0x802) != 2050;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v24, a2, 0);
  if ( !v24[0] )
  {
LABEL_45:
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v24);
    if ( v23 )
    {
      v20 = UserReferenceDwmApiPort(v19);
      DwmSyncFlushAndWaitForBatch(v20);
    }
    goto LABEL_47;
  }
  if ( !v7 )
  {
LABEL_16:
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v24) == 1 )
      goto LABEL_42;
    v40 = 0LL;
    v40 = *(struct _RECTL *)((char *)v24[0] + 88);
    if ( (*((_DWORD *)v22[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v22, (struct ERECTL *)&v40);
    v39 = v22;
    if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v40) )
      v23 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v37, &v40);
    if ( !*((_QWORD *)v22[0] + 64) )
    {
LABEL_42:
      v6 = 1;
LABEL_43:
      if ( v7 )
      {
        REGION::vDeleteREGION(v24[0]);
        v24[0] = v25;
      }
      goto LABEL_45;
    }
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v37, (struct XDCOBJ *)v22, 0);
    v8 = v24[0];
    v9 = v22[0];
    if ( !v24[0] )
      *((_DWORD *)v22[0] + 9) |= 0x10u;
    *((_QWORD *)v9 + 188) = v8;
    v10 = *((_QWORD *)v22[0] + 64);
    if ( ((unsigned __int8)v39 & 1) == 0 || !(unsigned int)DC::bTightenRao(v22[0]) )
    {
      v6 = XDCOBJ::bFullScreen((XDCOBJ *)v22);
      goto LABEL_41;
    }
    v11 = DC::eptlOrigin(v22[0]);
    v40.left += *(_DWORD *)v11;
    v40.right += *(_DWORD *)v11;
    v40.top += *((_DWORD *)v11 + 1);
    v40.bottom += *((_DWORD *)v11 + 1);
    v12 = XDCOBJ::prgnEffRao((XDCOBJ *)v22);
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco, v12, (struct ERECTL *)&v40, 0);
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
    {
      v6 = 1;
LABEL_28:
      v13 = v22[0];
LABEL_41:
      *((_DWORD *)v13 + 9) |= 0x10u;
      *((_QWORD *)v13 + 188) = 0LL;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v37);
      goto LABEL_43;
    }
    v14 = *(_QWORD *)(v10 + 120);
    v15 = *((_QWORD *)v22[0] + 12);
    v30 = -1;
    v34 = 0LL;
    v35 = 0LL;
    pbo.pvRbrush = 0LL;
    pbo.flColorType = 0;
    v31 = 0LL;
    v32 = 0LL;
    v36 = 0;
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v26, a3);
    v17 = 0LL;
    if ( v26[0] )
      v17 = v26[0];
    if ( (*((_DWORD *)v22[0] + 9) & 0xE0) != 0 )
    {
      if ( !v17 )
      {
LABEL_39:
        BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v26);
        EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
        goto LABEL_28;
      }
      if ( (*((_DWORD *)v17 + 12) & 0x100) == 0 )
      {
        rclBounds = pco.rclBounds;
        XDCOBJ::vAccumulateTight((XDCOBJ *)v22, v16, &rclBounds);
      }
    }
    if ( v17 )
    {
      bSyncBrushObj(v17);
      EBRUSHOBJ::vInitBrush(&pbo, v22[0], v17, v15, v14, v10, 1);
      v33 = (char *)v22[0] + 240;
      if ( (*((_DWORD *)v17 + 12) & 0x100) == 0 )
      {
        mix = EBRUSHOBJ::mixBest(
                (EBRUSHOBJ *)&pbo,
                *(_BYTE *)(*((_QWORD *)v22[0] + 10) + 72LL),
                *(_BYTE *)(*((_QWORD *)v22[0] + 10) + 73LL));
        ++*(_DWORD *)(v10 + 92);
        EngPaint((SURFOBJ *)(v10 + 24), &pco, &pbo, (POINTL *)v22[0] + 194, mix);
        v6 = 1;
      }
      BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)v26);
    }
    goto LABEL_39;
  }
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v37);
  if ( v38 )
  {
    if ( !v27[0] || !RGNOBJ::bCreate((RGNOBJ *)v24, (struct EPATHOBJ *)v37, (struct EXFORMOBJ *)v27) )
      goto LABEL_7;
    v40.right = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v40, (struct EPATHOBJ *)v37, 1u, 0LL);
    if ( !*(_QWORD *)&v40.left )
    {
      EngSetLastError(8u);
      if ( v40.right == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v40);
      goto LABEL_7;
    }
    v25 = v24[0];
    v24[0] = *(REGION **)&v40.left;
    if ( v40.right == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v40);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v37);
    goto LABEL_16;
  }
  EngSetLastError(8u);
LABEL_7:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v37);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v24);
LABEL_48:
  DCOBJ::~DCOBJ((DCOBJ *)v22);
  return v4;
}
