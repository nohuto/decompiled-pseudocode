/*
 * XREFs of GreFillRgn @ 0x140081834
 * Callers:
 *     NtGdiFillRgn @ 0x140083150 (NtGdiFillRgn.c)
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1400836B8 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x140015840 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14006CBDC (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007B224 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14007BAF0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x140082384 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400823D4 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x140082DE8 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x140082E5C (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     EngPaint @ 0x140083090 (EngPaint.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140083168 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400A990C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400B9B4C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     bFToL @ 0x140111E60 (bFToL.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GreFillRgn(HDC a1, HRGN a2, HBRUSH a3)
{
  unsigned int v3; // esi
  int v5; // r14d
  struct BRUSH *v6; // r15
  int v7; // ebx
  int v8; // r12d
  __int64 v9; // rax
  DC *v10; // rcx
  DC *v11; // rax
  __int64 v12; // rcx
  DC *v13; // rcx
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct REGION *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdi
  struct ECLIPOBJ *v20; // rdx
  __int64 v21; // rax
  __int64 v23; // rax
  unsigned __int8 v24; // cl
  MIX mix; // r8d
  Gre::Base *v26; // rcx
  struct Gre::Base::SESSION_GLOBALS *v27; // rax
  unsigned int v28; // r11d
  int *v29; // rdi
  int v30; // r11d
  int v31; // [rsp+40h] [rbp-C0h]
  __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v34[40]; // [rsp+58h] [rbp-A8h] BYREF
  int v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  HBRUSH v37[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-60h] BYREF
  bool v39; // [rsp+A8h] [rbp-58h]
  DC *v40[14]; // [rsp+B0h] [rbp-50h] BYREF
  struct BRUSH *v41[6]; // [rsp+120h] [rbp+20h] BYREF
  BRUSHOBJ pbo; // [rsp+150h] [rbp+50h] BYREF
  int v43; // [rsp+16Ch] [rbp+6Ch]
  __int64 v44; // [rsp+170h] [rbp+70h]
  __int64 v45; // [rsp+178h] [rbp+78h]
  char *v46; // [rsp+188h] [rbp+88h]
  __int64 v47; // [rsp+1A8h] [rbp+A8h]
  __int128 v48; // [rsp+1B0h] [rbp+B0h]
  int v49; // [rsp+1C8h] [rbp+C8h]
  _BYTE v50[8]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v51; // [rsp+1E8h] [rbp+E8h]
  _BYTE v52[160]; // [rsp+260h] [rbp+160h] BYREF
  int v53[4]; // [rsp+300h] [rbp+200h] BYREF
  CLIPOBJ pco; // [rsp+310h] [rbp+210h] BYREF
  __int64 v55; // [rsp+348h] [rbp+248h]
  __int64 v56; // [rsp+360h] [rbp+260h]
  int v57; // [rsp+368h] [rbp+268h]
  int v58; // [rsp+390h] [rbp+290h]
  __int64 v59; // [rsp+3A0h] [rbp+2A0h]

  v3 = 0;
  v37[0] = a3;
  v31 = 0;
  v5 = 0;
  v6 = 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v40, a1);
  v36 = 0LL;
  if ( !v40[0] || (*((_DWORD *)v40[0] + 9) & 0x10000) != 0 )
  {
LABEL_35:
    v3 = v5;
LABEL_36:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v40);
    return v3;
  }
  v7 = *(_DWORD *)(*((_QWORD *)v40[0] + 122) + 208LL);
  DC::QuickInitXform(v40[0], &v32, 2147484164LL);
  v38 = v32;
  v39 = v7 != 2;
  v8 = *(_DWORD *)(*((_QWORD *)v40[0] + 122) + 340LL) & 0x802;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v33, a2, 0, 0);
  v9 = v33;
  if ( !v33 )
  {
LABEL_29:
    if ( !v35 )
    {
      RGNOBJ::UpdateUserRgn((RGNOBJ *)&v33);
      v9 = v33;
    }
    if ( v9 )
      _InterlockedDecrement16((volatile signed __int16 *)(v9 + 12));
    PopThreadGuardedObject(v34);
    if ( (_DWORD)v6 )
    {
      v21 = UserReferenceDwmApiPort();
      DwmSyncFlushAndWaitForBatch(v21);
    }
    goto LABEL_35;
  }
  v5 = 1;
  if ( v8 == 2050 )
  {
LABEL_5:
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v33) == 1 )
      goto LABEL_27;
    v10 = v40[0];
    *(_OWORD *)v53 = 0LL;
    *(_OWORD *)v53 = *(_OWORD *)(v33 + 52);
    if ( (*((_DWORD *)v40[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v40, (struct ERECTL *)v53);
      v10 = v40[0];
    }
    if ( v53[0] != v53[2] && v53[1] != v53[3] )
    {
      v31 = 0;
      if ( v10 )
        v31 = bSpDwmValidateSurface((struct XDCOBJ *)v40, v53[0], v53[1], v53[2] - v53[0], v53[3] - v53[1]);
    }
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v52);
    if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v52, (struct XDCOBJ *)v40, 0) )
    {
      v5 = 0;
      goto LABEL_26;
    }
    v11 = v40[0];
    if ( !*((_QWORD *)v40[0] + 62) )
    {
LABEL_26:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v52);
      LODWORD(v6) = v31;
LABEL_27:
      if ( v8 == 2050 )
      {
        v9 = v33;
      }
      else
      {
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v33);
        v9 = v36;
        v33 = v36;
      }
      goto LABEL_29;
    }
    v12 = v33;
    if ( !v33 )
      *((_DWORD *)v40[0] + 9) |= 0x10u;
    *((_QWORD *)v11 + 141) = v12;
    v13 = v40[0];
    v14 = *((_QWORD *)v40[0] + 62);
    if ( (v52[24] & 1) != 0 )
    {
      if ( DC::bTightenRao(v40[0]) )
      {
        v15 = *((_DWORD *)v40[0] + 10) & 1LL;
        v53[0] += *((_DWORD *)v40[0] + 2 * v15 + 254);
        v53[2] += *((_DWORD *)v40[0] + 2 * v15 + 254);
        v53[1] += *((_DWORD *)v40[0] + 2 * v15 + 255);
        v53[3] += *((_DWORD *)v40[0] + 2 * v15 + 255);
        if ( (unsigned int)DC::bDpiScaleTransform(v40[0]) )
        {
          v28 = 0;
          v29 = v53;
          do
          {
            if ( !(unsigned int)bFToL(v16, &v53[v28], 6LL) )
              break;
            v28 = v30 + 1;
            ++v29;
          }
          while ( v28 < 4 );
        }
        v17 = XDCOBJ::prgnEffRao(v40);
        v55 = 0LL;
        v56 = 0LL;
        v57 = 0;
        v58 = 1;
        v59 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v17, (const struct ERECTL *)v53, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          v18 = *(_QWORD *)(v14 + 128);
          v19 = *((_QWORD *)v40[0] + 11);
          v47 = 0LL;
          v48 = 0LL;
          pbo.pvRbrush = 0LL;
          pbo.flColorType = 0;
          v43 = -1;
          v44 = 0LL;
          v45 = 0LL;
          v49 = 0;
          BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v41, v37[0]);
          v5 = 0;
          if ( v41[0] )
            v6 = v41[0];
          if ( v6 )
          {
            if ( (*((_DWORD *)v40[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v6 + 10) & 0x100) == 0 )
            {
              *(RECTL *)v37 = pco.rclBounds;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v40, v20, (__m128i *)v37);
            }
            bSyncBrushObj(v6);
            EBRUSHOBJ::vInitBrush(&pbo, v40[0], v6, v19, v18, v14, 1);
            v46 = (char *)v40[0] + 176;
            if ( (*((_DWORD *)v6 + 10) & 0x100) == 0 )
            {
              v23 = *((_QWORD *)v40[0] + 122);
              v24 = ((*(_BYTE *)(v23 + 212) - 1) & 0xF) + 1;
              if ( *(_BYTE *)(v23 + 213) == 1 && (v49 & 0x8000) != 0 )
                mix = v24 | 0xB00;
              else
                mix = v24 | (v24 << 8);
              ++*(_DWORD *)(v14 + 92);
              EngPaint((SURFOBJ *)((v14 + 24) & -(__int64)(v14 != 0)), &pco, &pbo, (POINTL *)v40[0] + 149, mix);
              v5 = 1;
            }
            if ( v41[0] )
            {
              XEBRUSHOBJ::RestoreAttributes((XEBRUSHOBJ *)v41);
              v27 = Gre::Base::Globals(v26);
              DEC_SHARE_REF_CNT_LAZY0(v27, v41[0]);
              v41[0] = 0LL;
            }
          }
          BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v41);
          EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
        }
        v13 = v40[0];
LABEL_25:
        *((_DWORD *)v13 + 9) |= 0x10u;
        *((_QWORD *)v13 + 141) = 0LL;
        goto LABEL_26;
      }
      v13 = v40[0];
    }
    if ( *((_QWORD *)v13 + 62) && !(unsigned int)DC::bInFullScreen(v13) )
      v5 = 0;
    goto LABEL_25;
  }
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v50);
  if ( v51 )
  {
    if ( v38 && RGNOBJ::bCreate((RGNOBJ *)&v33, (struct EPATHOBJ *)v50, (const struct EXFORMOBJR *)&v38) )
    {
      v32 = 0LL;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v32, (struct EPATHOBJ *)v50, 1u, 0LL);
      if ( v32 )
      {
        v36 = v33;
        v33 = v32;
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v50);
        goto LABEL_5;
      }
      EngSetLastError(8u);
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v50);
    if ( !v35 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)&v33);
    if ( v33 )
      _InterlockedDecrement16((volatile signed __int16 *)(v33 + 12));
    PopThreadGuardedObject(v34);
    goto LABEL_36;
  }
  EngSetLastError(8u);
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v50);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)&v33);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v40);
  return 0LL;
}
