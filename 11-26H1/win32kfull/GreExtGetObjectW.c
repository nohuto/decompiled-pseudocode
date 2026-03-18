/*
 * XREFs of GreExtGetObjectW @ 0x140014058
 * Callers:
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x14000C0D0 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     NtGdiExtGetObjectW @ 0x140013F50 (NtGdiExtGetObjectW.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x140015AE0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x140029AD0 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     GetWindowNCMetrics @ 0x140031DA0 (GetWindowNCMetrics.c)
 *     GetWindowNCMetricsForDpi @ 0x1400322BC (GetWindowNCMetricsForDpi.c)
 *     RecreateRedirectionBitmap @ 0x140041830 (RecreateRedirectionBitmap.c)
 *     CreateCompatiblePublicDC @ 0x140122300 (CreateCompatiblePublicDC.c)
 *     CreateFontFromUserProfile @ 0x140123A40 (CreateFontFromUserProfile.c)
 *     UserSetAltScaleFont @ 0x14012478C (UserSetAltScaleFont.c)
 *     xxxSetNCFonts @ 0x1401250CC (xxxSetNCFonts.c)
 *     xxxCreateCaret @ 0x14014C980 (xxxCreateCaret.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     _SystemParametersInfoForDpi @ 0x1401D0720 (_SystemParametersInfoForDpi.c)
 *     GetScaledLogFontForDpi @ 0x1401D087C (GetScaledLogFontForDpi.c)
 *     CreateScaledFont @ 0x1401D0CC4 (CreateScaledFont.c)
 *     xxxDrawState @ 0x1401F9348 (xxxDrawState.c)
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 *     EraseBitmap @ 0x1402416F4 (EraseBitmap.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x14025E63C (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1402ACD48 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     ?PatchArgbCursorWithMask@CursorApiRouter@@CA_NPEAUHBITMAP__@@IPEAKUtagSIZE@@_N@Z @ 0x1402EE8EC (-PatchArgbCursorWithMask@CursorApiRouter@@CA_NPEAUHBITMAP__@@IPEAKUtagSIZE@@_N@Z.c)
 *     ?SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z @ 0x1402EEAFC (-SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402F9E30 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ @ 0x14001678C (--0-$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14006AB10 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14006FAEC (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140071BDC (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x140082158 (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1400B4DDC (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1401807C4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x140243F08 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall GreExtGetObjectW(Gre::Base *a1, int a2, _WORD *a3)
{
  unsigned __int64 v4; // r12
  unsigned int v6; // esi
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  __int64 v9; // r8
  _DWORD *v10; // rax
  unsigned __int64 v11; // rcx
  _DWORD *v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  struct Gre::Base::SESSION_GLOBALS *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int128 v20; // rcx
  struct LFONT *v21; // r14
  struct Gre::Base::SESSION_GLOBALS *v22; // rax
  char IsUserAddress; // al
  __int64 v25; // rax
  struct Gre::Base::SESSION_GLOBALS *v26; // rax
  int DIBits; // ebx
  __int64 v28; // rax
  int v29; // eax
  struct Gre::Base::SESSION_GLOBALS *v30; // rax
  Gre::Base *v31; // rcx
  struct Gre::Base::SESSION_GLOBALS *v32; // rbx
  struct Gre::Base::SESSION_GLOBALS *v33; // rax
  int v34; // r15d
  _QWORD *HDEV; // rax
  __int64 v36; // r8
  int v37; // r15d
  int v38; // r15d
  __int64 v39; // rdx
  _OWORD v40[2]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v41; // [rsp+70h] [rbp-90h]
  __int64 v42[3]; // [rsp+78h] [rbp-88h] BYREF
  __int16 v43; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+A0h] [rbp-60h] BYREF
  int v45; // [rsp+A8h] [rbp-58h]
  struct Gre::Base::SESSION_GLOBALS *v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  char v48[32]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v49[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v50; // [rsp+100h] [rbp+0h]
  __int16 v51; // [rsp+108h] [rbp+8h]
  struct Gre::Base::SESSION_GLOBALS *v52; // [rsp+150h] [rbp+50h] BYREF
  char v53; // [rsp+168h] [rbp+68h] BYREF

  v4 = a2;
  v6 = 0;
  if ( (((unsigned int)a1 >> 16) & 0x1F) != 5 )
  {
    switch ( ((unsigned int)a1 >> 16) & 0x1F )
    {
      case 8u:
        v6 = 2;
        if ( a3 )
        {
          if ( a2 < 2 )
          {
            return 0;
          }
          else
          {
            v30 = Gre::Base::Globals(a1);
            SEMOBJ<13>::SEMOBJ<13>(&v53, v30);
            EPALOBJ::EPALOBJ((EPALOBJ *)&v52, (HPALETTE)a1);
            v32 = v52;
            if ( v52 )
            {
              *a3 = *((_WORD *)v52 + 14);
              v33 = Gre::Base::Globals(v31);
              DEC_SHARE_REF_CNT(v33, v32);
            }
            else
            {
              v6 = 0;
            }
            SEMOBJ<13>::vUnlock(&v53);
          }
        }
        return v6;
      case 9u:
        return (unsigned int)cjGetLogicalColorSpace((HCOLORSPACE)a1, a2, a3);
      case 0xAu:
        v17 = Gre::Base::Globals(a1);
        LOBYTE(v18) = 10;
        v52 = v17;
        v19 = HmgShareLock(v17, a1, v18, 1LL);
        *((_QWORD *)&v20 + 1) = (v19 + 24) & -(__int64)(v19 != 0);
        *(_QWORD *)&v20 = *((_QWORD *)&v20 + 1) - 24LL;
        v21 = (struct LFONT *)((*((_QWORD *)&v20 + 1) - 24LL) & -(__int64)(*((_QWORD *)&v20 + 1) != 0LL));
        if ( !*((_QWORD *)&v20 + 1) )
        {
LABEL_25:
          if ( v21 )
          {
            v22 = Gre::Base::Globals((Gre::Base *)v20);
            DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v22, v21);
          }
          return v6;
        }
        if ( (*(_BYTE *)(*((_QWORD *)&v20 + 1) + 4LL) & 1) == 0
          || (v34 = *(_DWORD *)(((*((_QWORD *)&v20 + 1) - 24LL) & -(__int64)(*((_QWORD *)&v20 + 1) != 0LL)) + 0x18),
              DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(
                v52,
                (struct LFONT *)((*((_QWORD *)&v20 + 1) - 24LL) & -(__int64)(*((_QWORD *)&v20 + 1) != 0LL))),
              v21 = 0LL,
              (HDEV = (_QWORD *)UserGetHDEV()) == 0LL) )
        {
LABEL_20:
          if ( *((_QWORD *)&v20 + 1) )
          {
            if ( a3 )
            {
              LODWORD(v20) = v4;
              if ( v4 >= *(unsigned int *)(*((_QWORD *)&v20 + 1) + 248LL) )
                LODWORD(v20) = *(_DWORD *)(*((_QWORD *)&v20 + 1) + 248LL);
              v6 = v20;
              memmove(a3, (const void *)(*((_QWORD *)&v20 + 1) + 252LL), (unsigned int)v20);
            }
            else
            {
              v6 = *(_DWORD *)(*((_QWORD *)&v20 + 1) + 248LL);
            }
          }
          goto LABEL_25;
        }
        v37 = v34 - 4;
        if ( v37 )
        {
          v38 = v37 - 1;
          if ( v38 )
          {
            if ( v38 != 1 )
            {
LABEL_57:
              v20 = -(__int128)(unsigned __int64)v21;
              *((_QWORD *)&v20 + 1) &= (unsigned __int64)v21 + 24;
              goto LABEL_20;
            }
            v39 = HDEV[181];
          }
          else
          {
            v39 = HDEV[180];
          }
        }
        else
        {
          v39 = HDEV[179];
        }
        if ( v39 )
        {
          LOBYTE(v36) = 10;
          v21 = (struct LFONT *)HmgShareLock(v52, v39, v36, 1LL);
        }
        goto LABEL_57;
      case 0x10u:
        return (unsigned int)cjGetBrushOrPen((HBRUSH)a1, a2, a3);
      default:
        return v6;
    }
  }
  if ( !a3 )
    return 32;
  if ( a2 >= 32 )
  {
    memset(v40, 0, sizeof(v40));
    PushThreadGuardedObject(
      v40,
      v40,
      UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
    v8 = Gre::Base::Globals(v7);
    LOBYTE(v9) = 5;
    v10 = (_DWORD *)HmgShareLock(v8, a1, v9, 0LL);
    v41 = v10;
    v12 = v10;
    if ( !v10 || (v10[28] & 0x4100000) == 0 )
      goto LABEL_11;
    *(_DWORD *)a3 = 0;
    *((_DWORD *)a3 + 1) = v10[14];
    *((_DWORD *)a3 + 2) = v10[15];
    if ( (v10[29] & 0x800) != 0 )
    {
      *((_DWORD *)a3 + 1) = v10[167];
      *((_DWORD *)a3 + 2) = v10[168];
    }
    v13 = (unsigned __int16)gaulConvert[2 * v10[24]];
    a3[9] = v13;
    v6 = 32;
    v14 = (int)v10[14];
    a3[8] = 1;
    *((_QWORD *)a3 + 3) = 0LL;
    v11 = ((unsigned __int64)(v14 * v13 + 15) >> 3) & 0xFFFFFFFE;
    *((_DWORD *)a3 + 3) = v11;
    if ( (*((_WORD *)v12 + 50) || !*((_QWORD *)v12 + 24)) && (v12[28] & 0x100000) == 0 )
      goto LABEL_11;
    IsUserAddress = MmIsUserAddress(*((_QWORD *)v12 + 9));
    v12 = v41;
    v25 = IsUserAddress ? *((_QWORD *)v41 + 9) : 0LL;
    *((_QWORD *)a3 + 3) = v25;
    v11 = (((unsigned __int64)(unsigned __int16)a3[9] * (int)v12[14] + 31) >> 3) & 0xFFFFFFFC;
    *((_DWORD *)a3 + 3) = v11;
    if ( (unsigned int)v4 < 0x68 )
      goto LABEL_11;
    v42[0] = 0LL;
    *((_DWORD *)a3 + 8) = 40;
    a3[23] = 0;
    v42[1] = 0LL;
    v42[2] = 0LL;
    v43 = 0;
    v26 = Gre::Base::Globals((Gre::Base *)v11);
    v47 = 0LL;
    v46 = v26;
    v44 = 0LL;
    v45 = 0;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v48);
    UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>(v49);
    v50 = 0LL;
    v51 = 1;
    DIBits = GrepGetDIBits((OPTAPIDCOBJ *)&v44, (__int64)v42, a3 + 16, 0, 0, 104);
    v44 &= -(__int64)((_BYTE)v51 != 0);
    PopThreadGuardedObject(v49);
    DCOBJ::~DCOBJ((DCOBJ *)&v44);
    v12 = v41;
    if ( DIBits )
    {
      v6 = 104;
      if ( (v41[28] & 0x100000) != 0 )
        *((_DWORD *)a3 + 13) = 0;
    }
    v28 = *((_QWORD *)v12 + 16);
    if ( v28 )
    {
      v11 = *(unsigned int *)(v28 + 24);
      if ( (v11 & 2) != 0 )
      {
        *((_DWORD *)a3 + 18) = **(_DWORD **)(v28 + 112);
        *((_DWORD *)a3 + 19) = *(_DWORD *)(*(_QWORD *)(v28 + 112) + 4LL);
        v11 = *(_QWORD *)(v28 + 112);
        v29 = *(_DWORD *)(v11 + 8);
        goto LABEL_41;
      }
      if ( (v11 & 8) != 0 )
        *((_DWORD *)a3 + 12) = 0;
    }
    *((_QWORD *)a3 + 9) = 0LL;
    v29 = 0;
LABEL_41:
    *((_DWORD *)a3 + 20) = v29;
    *((_QWORD *)a3 + 11) = *((_QWORD *)v12 + 23);
    *((_DWORD *)a3 + 24) = v12[53];
LABEL_11:
    if ( v12 )
    {
      v15 = Gre::Base::Globals((Gre::Base *)v11);
      DEC_SHARE_REF_CNT(v15, v41);
    }
    PopThreadGuardedObject(v40);
  }
  return v6;
}
