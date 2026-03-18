/*
 * XREFs of ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C029124C
 * Callers:
 *     NtGdiInvertRgn @ 0x1C0291C00 (NtGdiInvertRgn.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0010EEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00160F4 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001617C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0019248 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019CD4 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0019EA4 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C001D448 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C001D720 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0021638 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     EngPaint @ 0x1C00CE580 (EngPaint.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bHasSurface@XDCOBJ@@QEAAHXZ @ 0x1C026142C (-bHasSurface@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiInvertRgnInternal(HDC a1, HRGN a2)
{
  unsigned int v3; // ebx
  REGION *v4; // r14
  int v5; // edi
  BOOL v6; // esi
  REGION *v7; // rcx
  DC *v8; // rax
  __int64 v9; // rdi
  struct EPOINTL *v10; // rax
  struct REGION *v11; // rax
  struct ECLIPOBJ *v12; // rdx
  DC *v13; // rdx
  DC *v15[6]; // [rsp+30h] [rbp-D0h] BYREF
  REGION *v16[7]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v17[2]; // [rsp+98h] [rbp-68h] BYREF
  RECTL rclBounds; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v19[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v20; // [rsp+C8h] [rbp-38h]
  char v21; // [rsp+D8h] [rbp-28h]
  _BYTE v22[96]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v23; // [rsp+140h] [rbp+40h] BYREF
  CLIPOBJ pco; // [rsp+150h] [rbp+50h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  if ( !v15[0] || (*((_DWORD *)v15[0] + 9) & 0x10000) != 0 )
    goto LABEL_35;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v17, (struct XDCOBJ *)v15, 0x204u);
  v6 = (*(_DWORD *)(*((_QWORD *)v15[0] + 10) + 352LL) & 0x802) != 2050;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v16, a2, 1, 0);
  if ( !v16[0] )
  {
LABEL_34:
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v16);
LABEL_35:
    v3 = v5;
    goto LABEL_36;
  }
  if ( !v6 )
  {
LABEL_16:
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v16) == 1 )
      goto LABEL_31;
    v23 = *(_OWORD *)((char *)v16[0] + 88);
    if ( (*((_DWORD *)v15[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v15, (struct ERECTL *)&v23);
    if ( !XDCOBJ::bHasSurface((XDCOBJ *)v15) )
    {
LABEL_31:
      v5 = 1;
    }
    else
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v19, (struct XDCOBJ *)v15, 0);
      v7 = v16[0];
      v8 = v15[0];
      if ( !v16[0] )
        *((_DWORD *)v15[0] + 9) |= 0x10u;
      *((_QWORD *)v8 + 191) = v7;
      v9 = *((_QWORD *)v15[0] + 64);
      if ( (v21 & 1) != 0 && (unsigned int)DC::bTightenRao(v15[0]) )
      {
        v10 = DC::eptlOrigin(v15[0]);
        LODWORD(v23) = *(_DWORD *)v10 + v23;
        DWORD2(v23) += *(_DWORD *)v10;
        DWORD1(v23) += *((_DWORD *)v10 + 1);
        HIDWORD(v23) += *((_DWORD *)v10 + 1);
        v11 = XDCOBJ::prgnEffRao((XDCOBJ *)v15);
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco, v11, (struct ERECTL *)&v23, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          if ( (*((_DWORD *)v15[0] + 9) & 0xE0) != 0 )
          {
            rclBounds = pco.rclBounds;
            XDCOBJ::vAccumulateTight((XDCOBJ *)v15, v12, &rclBounds);
          }
          ++*(_DWORD *)(v9 + 92);
          EngPaint((SURFOBJ *)(v9 + 24), &pco, 0LL, 0LL, 0x606u);
        }
        v13 = v15[0];
        v5 = 1;
      }
      else
      {
        v5 = XDCOBJ::bFullScreen((XDCOBJ *)v15);
      }
      *((_DWORD *)v13 + 9) |= 0x10u;
      *((_QWORD *)v13 + 191) = 0LL;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
      DCOBJ::~DCOBJ((DCOBJ *)v22);
    }
    if ( v6 )
    {
      REGION::vDeleteREGION(v16[0]);
      v16[0] = v4;
    }
    goto LABEL_34;
  }
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v19);
  if ( v20 )
  {
    if ( !v17[0] || !RGNOBJ::bCreate((RGNOBJ *)v16, (struct EPATHOBJ *)v19, (struct EXFORMOBJ *)v17) )
      goto LABEL_7;
    *(_QWORD *)&v23 = 0LL;
    DWORD2(v23) = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v23, (struct EPATHOBJ *)v19, 1u, 0LL);
    if ( !(_QWORD)v23 )
    {
      EngSetLastError(8u);
      if ( DWORD2(v23) == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
      goto LABEL_7;
    }
    v4 = v16[0];
    v16[0] = (REGION *)v23;
    if ( DWORD2(v23) == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v19);
    goto LABEL_16;
  }
  EngSetLastError(8u);
LABEL_7:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v19);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v16);
LABEL_36:
  DCOBJ::~DCOBJ((DCOBJ *)v15);
  return v3;
}
