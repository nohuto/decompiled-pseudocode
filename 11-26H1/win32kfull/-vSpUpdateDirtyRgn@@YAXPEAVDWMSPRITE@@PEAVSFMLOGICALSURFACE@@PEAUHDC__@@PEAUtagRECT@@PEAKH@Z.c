/*
 * XREFs of ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x140074A40
 * Callers:
 *     GreAddBitmapD3DDirtyRgn @ 0x14001C31C (GreAddBitmapD3DDirtyRgn.c)
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140073700 (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1400757E8 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x14009D800 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     GreTransferSpriteStateToDwmState @ 0x1402029BC (GreTransferSpriteStateToDwmState.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x140344914 (-SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140001158 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x140075444 (-vCalculateNoMoveDirty@METAREGION@@AEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400AC7D8 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1400D3558 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E8CD4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1401F3E40 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1401F4210 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x14034F82C (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall vSpUpdateDirtyRgn(
        struct DWMSPRITE *a1,
        struct SFMLOGICALSURFACE *a2,
        HDC a3,
        const struct _RECTL *a4,
        unsigned int *a5,
        int a6)
{
  struct _POINTL *v6; // rsi
  struct _POINTL v7; // rax
  int v8; // r15d
  __int64 v13; // rcx
  REGION_CORE *v14; // rcx
  int v15; // eax
  Gre::Base *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  Gre::Base *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _POINTL *v22; // r9
  struct _POINTL v23; // r8
  struct Gre::Base::SESSION_GLOBALS *v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rbx
  const struct BaseRustGlobals *BaseRustGlobals; // rax
  struct _RECTL v30; // xmm0
  __int64 v31; // rcx
  LONG v32; // ecx
  __int64 CurrentProcessWin32Process; // rax
  int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  struct _POINTL v38; // rbx
  int v39; // eax
  struct _POINTL v40; // rax
  struct _POINTL v41; // [rsp+40h] [rbp-A9h] BYREF
  __int64 v42; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v43; // [rsp+50h] [rbp-99h] BYREF
  struct REGION *v44; // [rsp+58h] [rbp-91h] BYREF
  __int64 v45; // [rsp+60h] [rbp-89h] BYREF
  int v46; // [rsp+68h] [rbp-81h] BYREF
  __int64 v47; // [rsp+70h] [rbp-79h] BYREF
  struct _POINTL v48; // [rsp+78h] [rbp-71h] BYREF
  __int64 v49; // [rsp+80h] [rbp-69h] BYREF
  int v50; // [rsp+88h] [rbp-61h]
  struct Gre::Base::SESSION_GLOBALS *v51; // [rsp+90h] [rbp-59h]
  __int64 v52; // [rsp+98h] [rbp-51h]
  _OWORD v53[2]; // [rsp+A0h] [rbp-49h] BYREF
  struct _RECTL v54; // [rsp+C0h] [rbp-29h] BYREF
  struct _RECTL v55; // [rsp+D0h] [rbp-19h] BYREF

  v6 = (struct _POINTL *)((char *)a2 + 128);
  v7 = (struct _POINTL)*((_QWORD *)a2 + 16);
  v8 = 0;
  v46 = 0;
  if ( !*(_QWORD *)&v7 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v41);
    v7 = v41;
    *v6 = v41;
  }
  if ( !*((_QWORD *)a2 + 10) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v41);
    v13 = *(_QWORD *)a2;
    *((struct _POINTL *)a2 + 10) = v41;
    EtwTraceLifetimeAccum(v13, 1LL);
    v7 = *v6;
    v46 = 1;
  }
  if ( !*((_QWORD *)a2 + 23) )
  {
    v41 = v7;
    RGNOBJ::vSet((RGNOBJ *)&v41);
    if ( *((_QWORD *)a2 + 10) )
    {
      v44 = (struct REGION *)*((_QWORD *)a2 + 10);
      RGNOBJ::vSet((RGNOBJ *)&v44);
      EtwTraceLifetimeAccum(*(_QWORD *)a2, 1LL);
    }
  }
  v48 = *v6;
  v43 = 0LL;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v43, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v43);
  v45 = 0LL;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v45, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v45);
  v47 = 0LL;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v47, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v47);
  if ( !*(_QWORD *)&v48 || !v43 || !v45 || !v47 )
    goto LABEL_7;
  RGNOBJ::vSet((RGNOBJ *)&v43, a4);
  if ( (*((_DWORD *)a2 + 63) & 1) == 0 || !a3 )
    goto LABEL_47;
  v51 = Gre::Base::Globals(v16);
  v52 = 0LL;
  v49 = 0LL;
  v50 = 0;
  memset(v53, 0, sizeof(v53));
  PushThreadGuardedObject(v53, &v49, UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
  LOBYTE(v17) = 1;
  v18 = HmgShareLock(v51, a3, v17, 1LL);
  v49 = v18;
  v20 = v18;
  if ( !v18 )
    goto LABEL_25;
  v19 = (Gre::Base *)*(unsigned int *)(v18 + 36);
  if ( ((unsigned __int8)v19 & 1) == 0 )
    goto LABEL_25;
  v21 = *(_QWORD *)(v18 + 1168);
  if ( v21 && (*(_DWORD *)(v18 + 40) & 2) != 0 && (unsigned int)DC::bDpiScaledSurface((DC *)v18) )
  {
    v22 = (struct _POINTL *)(v20 + 1152);
  }
  else
  {
    v22 = (struct _POINTL *)(v20 + 1152);
    if ( !*(_QWORD *)(v20 + 1152) )
    {
      if ( !*(_QWORD *)(v20 + 1160)
        || (*(_DWORD *)(v20 + 40) & 2) == 0
        || !(unsigned int)DC::bDpiScaledSurface((DC *)v20) )
      {
        v23 = *(struct _POINTL *)(v20 + 1144);
      }
      goto LABEL_22;
    }
    if ( !v21 )
      goto LABEL_21;
  }
  if ( (*(_DWORD *)(v20 + 40) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)v20) )
LABEL_21:
    v23 = *v22;
LABEL_22:
  v41 = v23;
  if ( v23 )
  {
    if ( RGNOBJ::bMerge((RGNOBJ *)&v45, (struct RGNOBJ *)&v41, (struct RGNOBJ *)&v43, 8u) )
    {
      RGNOBJ::vSwap((RGNOBJ *)&v45, (struct RGNOBJ *)&v43);
      v8 = 1;
    }
    else
    {
      RGNOBJ::vSet((RGNOBJ *)&v45);
    }
  }
LABEL_25:
  if ( v49 )
  {
    v24 = Gre::Base::Globals(v19);
    DEC_SHARE_REF_CNT(v24, v49);
    v49 = 0LL;
  }
  PopThreadGuardedObject(v53);
  if ( !v8 )
  {
LABEL_47:
    if ( !a1 )
      goto LABEL_52;
    v42 = 0LL;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v42, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v42);
    v54.right = *((_DWORD *)a1 + 16) - *((_DWORD *)a1 + 14);
    v32 = *((_DWORD *)a1 + 17) - *((_DWORD *)a1 + 15);
    *(_QWORD *)&v54.left = 0LL;
    v54.bottom = v32;
    if ( v42 )
    {
      RGNOBJ::vSet((RGNOBJ *)&v42, &v54);
      if ( RGNOBJ::bMerge((RGNOBJ *)&v45, (struct RGNOBJ *)&v43, (struct RGNOBJ *)&v42, 8u) )
      {
        RGNOBJ::vSwap((RGNOBJ *)&v45, (struct RGNOBJ *)&v43);
        v8 = 1;
      }
    }
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v42);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v42);
    if ( !v8 )
LABEL_52:
      RGNOBJ::vSet((RGNOBJ *)&v43);
  }
  if ( !RGNOBJ::bMerge((RGNOBJ *)&v45, (struct RGNOBJ *)&v48, (struct RGNOBJ *)&v43, 0xEu) )
    goto LABEL_34;
  RGNOBJ::vSwap((RGNOBJ *)&v45, (struct RGNOBJ *)&v48);
  v25 = *(_QWORD *)a2;
  if ( !a6 )
  {
    EtwDirtyRectUpdate(v25, (unsigned int)a4->left, (unsigned int)a4->top, (unsigned int)a4->right, a4->bottom);
    *v6 = v48;
    if ( !v6[5].x || !a4 )
      goto LABEL_31;
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v44);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v42);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v41);
    v40 = v6[4];
    *(struct _POINTL *)&v54.left = v40;
    if ( v44
      && v42
      && *(_QWORD *)&v41
      && *(_QWORD *)&v40
      && RGNOBJ::bCopy((RGNOBJ *)&v42, (struct RGNOBJ *)&v54)
      && RGNOBJ::bOffset((RGNOBJ *)&v42, v6 + 3) )
    {
      RGNOBJ::vSet((RGNOBJ *)&v44, a4);
      if ( !v44 )
        goto LABEL_92;
      if ( !v42 )
        goto LABEL_92;
      if ( !*(_QWORD *)&v41 )
        goto LABEL_92;
      if ( !RGNOBJ::iCombine((RGNOBJ *)&v41, (struct RGNOBJ *)&v44, (struct RGNOBJ *)&v42, 1) )
        goto LABEL_92;
      v55 = *(struct _RECTL *)(*(_QWORD *)&v41 + 52LL);
      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v55)
        || (unsigned int)METAREGION::bTrimMoveWithRegion((METAREGION *)v6, v44, 1) )
      {
        goto LABEL_92;
      }
      EtwLogicalSurfRemovedTranslationFromDirtyEvent(
        *(_QWORD *)&v6[6],
        (unsigned int)a4->left,
        (unsigned int)a4->top,
        (unsigned int)a4->right,
        a4->bottom);
      EtwTraceMoveRegion(*(_QWORD *)&v6[4], 0LL, 0LL, *(_QWORD *)&v6[4]);
    }
    METAREGION::vClearMoveData((METAREGION *)v6, 1);
LABEL_92:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v41);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v42);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v44);
LABEL_31:
    METAREGION::vCalculateNoMoveDirty((METAREGION *)v6);
    goto LABEL_32;
  }
  EtwTranslationUpdateOffset(v25, *((_QWORD *)a2 + 19), HIDWORD(*((_QWORD *)a2 + 19)));
  EtwTranslationUpdate(
    *(_QWORD *)a2,
    (unsigned int)a4->left,
    (unsigned int)a4->top,
    (unsigned int)a4->right,
    a4->bottom);
  v38 = v48;
  v39 = METAREGION::vApplyMoveData(
          (METAREGION *)v6,
          (struct _RECTL *)a2 + 7,
          (struct _POINTL *)a2 + 13,
          *((struct REGION **)a2 + 12));
  *v6 = v38;
  if ( v39 )
    goto LABEL_31;
LABEL_32:
  v26 = *((_DWORD *)a2 + 63);
  if ( (v26 & 2) == 0 )
  {
    *((_DWORD *)a2 + 63) = v26 | 2;
    *a5 |= 1u;
  }
LABEL_34:
  if ( *((_QWORD *)a2 + 10) )
  {
    v41 = (struct _POINTL)*((_QWORD *)a2 + 10);
    if ( RGNOBJ::bMerge((RGNOBJ *)&v47, (struct RGNOBJ *)&v41, (struct RGNOBJ *)&v43, 0xEu) )
    {
      RGNOBJ::vSwap((RGNOBJ *)&v47, (struct RGNOBJ *)&v41);
      v27 = *(_QWORD *)a2;
      *((struct _POINTL *)a2 + 10) = v41;
      EtwTraceLifetimeAccum(v27, 1LL);
    }
    if ( !v46 )
    {
      if ( GetBaseRustGlobals() )
      {
        v28 = (*(_QWORD *)&v41 + 24LL) & -(__int64)(v41 != 0LL);
        BaseRustGlobals = GetBaseRustGlobals();
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)BaseRustGlobals + 32LL))(v28) != 2 )
          goto LABEL_7;
      }
      else
      {
        v14 = (REGION_CORE *)(*(_QWORD *)&v41 + 24LL);
        if ( *(_DWORD *)(*(_QWORD *)&v41 + 48LL) == 1 || REGION_CORE::get_sizeScan(v14) > 0x38 )
          goto LABEL_7;
      }
      v55 = 0LL;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v44);
      if ( v44 )
      {
        v30 = *(struct _RECTL *)(*(_QWORD *)&v41 + 52LL);
        *(_QWORD *)&v54.left = *((_QWORD *)a2 + 10);
        v55 = v30;
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v54);
        RGNOBJ::vSet((RGNOBJ *)&v44, &v55);
        v31 = *(_QWORD *)a2;
        *((_QWORD *)a2 + 10) = v44;
        EtwTraceLifetimeAccum(v31, 1LL);
      }
    }
  }
LABEL_7:
  v15 = *((_DWORD *)a2 + 63);
  if ( (v15 & 0x20) != 0 )
  {
    if ( (v15 & 4) != 0 )
      *a5 |= 2u;
    *((_DWORD *)a2 + 63) &= ~0x20u;
  }
  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 34) & 2) != 0 && (*a5 & 1) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process )
        {
          v34 = *(_DWORD *)(CurrentProcessWin32Process + 276);
          if ( (v34 & 2) == 0 )
          {
            *(_DWORD *)(CurrentProcessWin32Process + 276) = v34 | 2;
            if ( (unsigned int)dword_1403AAA30 > 5 )
            {
              if ( (unsigned __int8)tlgKeywordOn(&dword_1403AAA30, 0x400000000000LL) )
              {
                *(_QWORD *)&v54.left = 0x2000000LL;
                v46 = 1;
                LODWORD(v42) = 1;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                  v35,
                  (__int64)&unk_14037AD93,
                  v36,
                  v37,
                  (__int64)&v42,
                  (__int64)&v46,
                  (__int64)&v54);
              }
            }
          }
        }
      }
    }
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v47);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v47);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v45);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v45);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v43);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v43);
}
