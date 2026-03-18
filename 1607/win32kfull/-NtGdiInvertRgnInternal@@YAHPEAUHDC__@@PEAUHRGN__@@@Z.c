/*
 * XREFs of ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C028FD68
 * Callers:
 *     NtGdiInvertRgn @ 0x1C0290710 (NtGdiInvertRgn.c)
 * Callees:
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
 *     EngPaint @ 0x1C013A0D0 (EngPaint.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiInvertRgnInternal(HDC a1, HRGN a2)
{
  unsigned int v3; // ebx
  REGION *v4; // r14
  int v5; // edi
  BOOL v6; // esi
  DC *v7; // rcx
  REGION *v8; // rcx
  DC *v9; // rax
  __int64 v10; // rdi
  struct EPOINTL *v11; // rax
  struct REGION *v12; // rax
  struct ECLIPOBJ *v13; // rdx
  DC *v14; // rdx
  DC *v16[6]; // [rsp+30h] [rbp-D0h] BYREF
  REGION *v17[7]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v18[2]; // [rsp+98h] [rbp-68h] BYREF
  RECTL rclBounds; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v20[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v21; // [rsp+C8h] [rbp-38h]
  char v22; // [rsp+D8h] [rbp-28h]
  _BYTE v23[96]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v24; // [rsp+140h] [rbp+40h] BYREF
  CLIPOBJ pco; // [rsp+150h] [rbp+50h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  if ( !v16[0] || (*((_DWORD *)v16[0] + 9) & 0x10000) != 0 )
    goto LABEL_35;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v18, (struct XDCOBJ *)v16, 0x204u);
  v6 = (*(_DWORD *)(*((_QWORD *)v16[0] + 10) + 352LL) & 0x802) != 2050;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v17, a2, 1, 0);
  if ( !v17[0] )
  {
LABEL_34:
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v17);
LABEL_35:
    v3 = v5;
    goto LABEL_36;
  }
  if ( !v6 )
  {
LABEL_16:
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v17) == 1 )
      goto LABEL_31;
    v7 = v16[0];
    v24 = *(_OWORD *)((char *)v17[0] + 88);
    if ( (*((_DWORD *)v16[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v16, (struct ERECTL *)&v24);
      v7 = v16[0];
    }
    if ( !*((_QWORD *)v7 + 64) )
    {
LABEL_31:
      v5 = 1;
    }
    else
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v20, (struct XDCOBJ *)v16, 0);
      v8 = v17[0];
      v9 = v16[0];
      if ( !v17[0] )
        *((_DWORD *)v16[0] + 9) |= 0x10u;
      *((_QWORD *)v9 + 191) = v8;
      v10 = *((_QWORD *)v16[0] + 64);
      if ( (v22 & 1) != 0 && (unsigned int)DC::bTightenRao(v16[0]) )
      {
        v11 = DC::eptlOrigin(v16[0]);
        LODWORD(v24) = *(_DWORD *)v11 + v24;
        DWORD2(v24) += *(_DWORD *)v11;
        DWORD1(v24) += *((_DWORD *)v11 + 1);
        HIDWORD(v24) += *((_DWORD *)v11 + 1);
        v12 = XDCOBJ::prgnEffRao((XDCOBJ *)v16);
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco, v12, (struct ERECTL *)&v24, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          if ( (*((_DWORD *)v16[0] + 9) & 0xE0) != 0 )
          {
            rclBounds = pco.rclBounds;
            XDCOBJ::vAccumulateTight((struct _RECTL **)v16, v13, &rclBounds);
          }
          ++*(_DWORD *)(v10 + 92);
          EngPaint((SURFOBJ *)(v10 + 24), &pco, 0LL, 0LL, 0x606u);
        }
        v14 = v16[0];
        v5 = 1;
      }
      else
      {
        v5 = XDCOBJ::bFullScreen((XDCOBJ *)v16);
      }
      *((_DWORD *)v14 + 9) |= 0x10u;
      *((_QWORD *)v14 + 191) = 0LL;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v20);
      DCOBJ::~DCOBJ((DCOBJ *)v23);
    }
    if ( v6 )
    {
      REGION::vDeleteREGION(v17[0]);
      v17[0] = v4;
    }
    goto LABEL_34;
  }
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v20);
  if ( v21 )
  {
    if ( !v18[0] || !RGNOBJ::bCreate((RGNOBJ *)v17, (struct EPATHOBJ *)v20, (struct EXFORMOBJ *)v18) )
      goto LABEL_7;
    *(_QWORD *)&v24 = 0LL;
    DWORD2(v24) = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v24, (struct EPATHOBJ *)v20, 1u, 0LL);
    if ( !(_QWORD)v24 )
    {
      EngSetLastError(8u);
      if ( DWORD2(v24) == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v24);
      goto LABEL_7;
    }
    v4 = v17[0];
    v17[0] = (REGION *)v24;
    if ( DWORD2(v24) == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v24);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v20);
    goto LABEL_16;
  }
  EngSetLastError(8u);
LABEL_7:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v20);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v17);
LABEL_36:
  DCOBJ::~DCOBJ((DCOBJ *)v16);
  return v3;
}
