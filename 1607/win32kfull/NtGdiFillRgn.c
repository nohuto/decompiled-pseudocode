/*
 * XREFs of NtGdiFillRgn @ 0x1C0139B60
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C013933C (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ?mixBest@EBRUSHOBJ@@QEAAKEE@Z @ 0x1C0015AD0 (-mixBest@EBRUSHOBJ@@QEAAKEE@Z.c)
 *     ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0022AB0 (-bValid@RFONTOBJ@@QEAAHXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C00417A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C004892C (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00491C8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C004A0F8 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C004B158 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C004BB88 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0065F2C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C010D440 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C010D46C (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C013A0A8 (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 *     EngPaint @ 0x1C013A0D0 (EngPaint.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C013A180 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C013A1CC (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiFillRgn(HDC a1, HRGN a2, HBRUSH a3)
{
  unsigned int v4; // esi
  int v6; // r14d
  BOOL v8; // r12d
  REGION *v9; // rcx
  DC *v10; // rax
  __int64 v11; // r13
  struct EPOINTL *v12; // rax
  struct REGION *v13; // rax
  DC *v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rdi
  struct ECLIPOBJ *v17; // rdx
  struct BRUSH *v18; // r15
  MIX mix; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v23; // [rsp+40h] [rbp-C0h]
  DC *v24[6]; // [rsp+48h] [rbp-B8h] BYREF
  REGION *v25; // [rsp+78h] [rbp-88h]
  REGION *v26[7]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v27[2]; // [rsp+B8h] [rbp-48h] BYREF
  RECTL rclBounds; // [rsp+C8h] [rbp-38h] BYREF
  struct BRUSH *v29[10]; // [rsp+E0h] [rbp-20h] BYREF
  BRUSHOBJ pbo; // [rsp+130h] [rbp+30h] BYREF
  int v31; // [rsp+14Ch] [rbp+4Ch]
  __int64 v32; // [rsp+150h] [rbp+50h]
  __int64 v33; // [rsp+158h] [rbp+58h]
  char *v34; // [rsp+168h] [rbp+68h]
  __int64 v35; // [rsp+188h] [rbp+88h]
  __int128 v36; // [rsp+190h] [rbp+90h]
  int v37; // [rsp+1B0h] [rbp+B0h]
  _BYTE v38[8]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v39; // [rsp+1C8h] [rbp+C8h]
  char v40; // [rsp+1D8h] [rbp+D8h]
  _BYTE v41[96]; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _RECTL v42; // [rsp+240h] [rbp+140h] BYREF
  CLIPOBJ pco; // [rsp+250h] [rbp+150h] BYREF

  v4 = 0;
  v23 = 0;
  v6 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v24, a1);
  v25 = 0LL;
  if ( !RFONTOBJ::bValid((RFONTOBJ *)v24) )
    goto LABEL_49;
  if ( *((_WORD *)v24[0] + 6) == 1 )
  {
    if ( (*((_DWORD *)v24[0] + 9) & 0x10000) == 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v27, (struct XDCOBJ *)v24, 0x204u);
      v8 = (*(_DWORD *)(*((_QWORD *)v24[0] + 10) + 352LL) & 0x802) != 2050;
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v26, a2, 0, 0);
      if ( !v26[0] )
      {
LABEL_47:
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v26);
        if ( v23 )
        {
          v21 = UserReferenceDwmApiPort(v20);
          DwmSyncFlushAndWaitForBatch(v21);
        }
        goto LABEL_49;
      }
      if ( v8 )
      {
        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v38);
        if ( !v39 )
        {
          EngSetLastError(8u);
LABEL_9:
          PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v38);
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v26);
          goto LABEL_50;
        }
        if ( !v27[0] || !RGNOBJ::bCreate((RGNOBJ *)v26, (struct EPATHOBJ *)v38, (struct EXFORMOBJ *)v27) )
          goto LABEL_9;
        *(_QWORD *)&v42.left = 0LL;
        v42.right = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v42, (struct EPATHOBJ *)v38, 1u, 0LL);
        if ( !*(_QWORD *)&v42.left )
        {
          EngSetLastError(8u);
          if ( v42.right == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v42);
          goto LABEL_9;
        }
        v25 = v26[0];
        v26[0] = *(REGION **)&v42.left;
        if ( v42.right == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v42);
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v38);
      }
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v26) == 1 )
        goto LABEL_44;
      v42 = 0LL;
      v42 = *(struct _RECTL *)((char *)v26[0] + 88);
      if ( (*((_DWORD *)v24[0] + 9) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)v24, (struct ERECTL *)&v42);
      v29[3] = (struct BRUSH *)v24;
      if ( !ERECTL::bEmpty((ERECTL *)&v42) )
        v23 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v29, &v42);
      if ( !*((_QWORD *)v24[0] + 64) )
      {
LABEL_44:
        v6 = 1;
LABEL_45:
        if ( v8 )
        {
          REGION::vDeleteREGION(v26[0]);
          v26[0] = v25;
        }
        goto LABEL_47;
      }
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v38, (struct XDCOBJ *)v24, 0);
      v9 = v26[0];
      v10 = v24[0];
      if ( !v26[0] )
        *((_DWORD *)v24[0] + 9) |= 0x10u;
      *((_QWORD *)v10 + 191) = v9;
      v11 = *((_QWORD *)v24[0] + 64);
      if ( (v40 & 1) == 0 || !(unsigned int)DC::bTightenRao(v24[0]) )
      {
        v6 = XDCOBJ::bFullScreen((XDCOBJ *)v24);
        goto LABEL_43;
      }
      v12 = DC::eptlOrigin(v24[0]);
      v42.left += *(_DWORD *)v12;
      v42.right += *(_DWORD *)v12;
      v42.top += *((_DWORD *)v12 + 1);
      v42.bottom += *((_DWORD *)v12 + 1);
      v13 = XDCOBJ::prgnEffRao((XDCOBJ *)v24);
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco, v13, (struct ERECTL *)&v42, 0);
      if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
      {
        v6 = 1;
LABEL_30:
        v14 = v24[0];
LABEL_43:
        *((_DWORD *)v14 + 9) |= 0x10u;
        *((_QWORD *)v14 + 191) = 0LL;
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v38);
        DCOBJ::~DCOBJ((DCOBJ *)v41);
        goto LABEL_45;
      }
      v15 = *(_QWORD *)(v11 + 120);
      v16 = *((_QWORD *)v24[0] + 12);
      v31 = -1;
      v35 = 0LL;
      v36 = 0LL;
      pbo.pvRbrush = 0LL;
      pbo.flColorType = 0;
      v32 = 0LL;
      v33 = 0LL;
      v37 = 0;
      BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v29, a3);
      v18 = 0LL;
      if ( v29[0] )
        v18 = v29[0];
      if ( (*((_DWORD *)v24[0] + 9) & 0xE0) != 0 )
      {
        if ( !v18 )
        {
LABEL_41:
          BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v29);
          EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
          goto LABEL_30;
        }
        if ( (*((_DWORD *)v18 + 12) & 0x100) == 0 )
        {
          rclBounds = pco.rclBounds;
          XDCOBJ::vAccumulateTight((struct _RECTL **)v24, v17, &rclBounds);
        }
      }
      if ( v18 )
      {
        bSyncBrushObj(v18);
        EBRUSHOBJ::vInitBrush(&pbo, v24[0], v18, v16, v15, v11, 1);
        v34 = (char *)v24[0] + 240;
        if ( (*((_DWORD *)v18 + 12) & 0x100) == 0 )
        {
          mix = EBRUSHOBJ::mixBest(
                  (EBRUSHOBJ *)&pbo,
                  *(_BYTE *)(*((_QWORD *)v24[0] + 10) + 72LL),
                  *(_BYTE *)(*((_QWORD *)v24[0] + 10) + 73LL));
          ++*(_DWORD *)(v11 + 92);
          EngPaint((SURFOBJ *)(v11 + 24), &pco, &pbo, (POINTL *)v24[0] + 197, mix);
          v6 = 1;
        }
        BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)v29);
      }
      goto LABEL_41;
    }
LABEL_49:
    v4 = v6;
    goto LABEL_50;
  }
  EngSetLastError(0x57u);
LABEL_50:
  DCOBJ::~DCOBJ((DCOBJ *)v24);
  return v4;
}
