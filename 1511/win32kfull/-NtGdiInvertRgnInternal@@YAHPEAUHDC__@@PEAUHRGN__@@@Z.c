/*
 * XREFs of ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0290F88
 * Callers:
 *     NtGdiInvertRgn @ 0x1C0291780 (NtGdiInvertRgn.c)
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
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
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
  DC *v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  REGION *v17[3]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-A8h] BYREF
  RECTL rclBounds; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v20[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+88h] [rbp-78h]
  char v22; // [rsp+98h] [rbp-68h]
  __int128 v23; // [rsp+100h] [rbp+0h] BYREF
  CLIPOBJ pco; // [rsp+110h] [rbp+10h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  if ( !v16[0] || (*((_DWORD *)v16[0] + 9) & 0x10000) != 0 )
    goto LABEL_35;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v18, (struct XDCOBJ *)v16, 0x204u);
  v6 = (*(_DWORD *)(*((_QWORD *)v16[0] + 10) + 352LL) & 0x802) != 2050;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v17, a2, 1);
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
    v23 = *(_OWORD *)((char *)v17[0] + 88);
    if ( (*((_DWORD *)v16[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v16, (struct ERECTL *)&v23);
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
      *((_QWORD *)v9 + 188) = v8;
      v10 = *((_QWORD *)v16[0] + 64);
      if ( (v22 & 1) != 0 && (unsigned int)DC::bTightenRao(v16[0]) )
      {
        v11 = DC::eptlOrigin(v16[0]);
        LODWORD(v23) = *(_DWORD *)v11 + v23;
        DWORD2(v23) += *(_DWORD *)v11;
        DWORD1(v23) += *((_DWORD *)v11 + 1);
        HIDWORD(v23) += *((_DWORD *)v11 + 1);
        v12 = XDCOBJ::prgnEffRao((XDCOBJ *)v16);
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco, v12, (struct ERECTL *)&v23, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          if ( (*((_DWORD *)v16[0] + 9) & 0xE0) != 0 )
          {
            rclBounds = pco.rclBounds;
            XDCOBJ::vAccumulateTight((XDCOBJ *)v16, v13, &rclBounds);
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
      *((_QWORD *)v14 + 188) = 0LL;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v20);
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
    DWORD2(v23) = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v23, (struct EPATHOBJ *)v20, 1u, 0LL);
    if ( !(_QWORD)v23 )
    {
      EngSetLastError(8u);
      if ( DWORD2(v23) == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
      goto LABEL_7;
    }
    v4 = v17[0];
    v17[0] = (REGION *)v23;
    if ( DWORD2(v23) == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
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
