/*
 * XREFs of ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0027340
 * Callers:
 *     ReleaseCacheDC @ 0x1C0024AF0 (ReleaseCacheDC.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032CE0 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     GreCleanDC @ 0x1C0077530 (GreCleanDC.c)
 *     ?vFixPublicDCWithPrivateReferences@XDCOBJ@@QEAAXK@Z @ 0x1C00CCED8 (-vFixPublicDCWithPrivateReferences@XDCOBJ@@QEAAXK@Z.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00CCFD0 (GreCleanDCAndSetOwnerEx.c)
 * Callees:
 *     RFONTOBJ_vConstructPRFONTWrap_0 @ 0x1C0001090 (RFONTOBJ_vConstructPRFONTWrap_0.c)
 *     IsRFONTOBJ_vConstructPRFONTSupported_0 @ 0x1C0001098 (IsRFONTOBJ_vConstructPRFONTSupported_0.c)
 *     RFONTOBJ_dtHelperWrap_0 @ 0x1C00010A0 (RFONTOBJ_dtHelperWrap_0.c)
 *     IsRFONTOBJ_dtHelperSupported_0 @ 0x1C00010A8 (IsRFONTOBJ_dtHelperSupported_0.c)
 *     IsXDCOBJ_vSetDefaultFontSupported_0 @ 0x1C00010D0 (IsXDCOBJ_vSetDefaultFontSupported_0.c)
 *     XDCOBJ_vSetDefaultFontWrap_0 @ 0x1C00010D8 (XDCOBJ_vSetDefaultFontWrap_0.c)
 *     GreRestoreDC @ 0x1C0025490 (GreRestoreDC.c)
 *     hbmSelectBitmap @ 0x1C0025B20 (hbmSelectBitmap.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0029DA0 (DEC_SHARE_REF_CNT.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C002E5F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C0030090 (-RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     GreDCSelectBrush @ 0x1C0059210 (GreDCSelectBrush.c)
 *     GreDCSelectPen @ 0x1C0059450 (GreDCSelectPen.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C005CA28 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C00BD724 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00BD79C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00BD904 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00C0210 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00C02E0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00C064C (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 */

__int64 __fastcall XDCOBJ::bCleanDC(DC **this, int a2)
{
  DC *v4; // rcx
  __int64 v5; // rdx
  int v6; // ebx
  DC *v7; // rcx
  DC *v8; // rbx
  struct HPATH__ *v9; // rdx
  DC *v10; // rcx
  HPALETTE *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v15; // xmm0
  _OWORD *v16; // rcx
  __int128 *v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int64 v20; // rdi
  _QWORD *DeferredContext; // r15
  unsigned int v22; // r14d
  __int64 v23; // rbx
  unsigned int v24; // edx
  signed int v25; // ecx
  __int64 v26; // rbx
  char v27; // r15
  __int64 v28; // r13
  _QWORD *v29; // rax
  _QWORD *v30; // r14
  __int64 v31; // r9
  unsigned int v32; // edx
  signed int v33; // ecx
  __int64 v34; // r9
  unsigned __int16 *v35; // rbx
  bool v36; // zf
  int v37; // eax
  struct _BASEOBJECT *v38; // rdi
  unsigned int v39; // edx
  PVOID v40; // r14
  unsigned int v41; // edi
  unsigned int v42; // ebx
  __int64 v43; // r8
  unsigned int v44; // edx
  signed int v45; // ecx
  __int64 v46; // r9
  _DWORD *v47; // rdx
  int v48; // eax
  __int64 v49; // rdi
  unsigned int v50; // ebx
  __int64 v51; // r8
  unsigned int v52; // edx
  signed int v53; // ecx
  __int64 v54; // r10
  DC *v55; // rax
  __int64 v56; // rdi
  _QWORD *v57; // r15
  unsigned int v58; // r14d
  __int64 v59; // rbx
  unsigned int v60; // edx
  signed int v61; // ecx
  __int64 v62; // rbx
  char v63; // r15
  __int64 v64; // r13
  _QWORD *v65; // rax
  _QWORD *v66; // r14
  __int64 v67; // r9
  unsigned int v68; // edx
  signed int v69; // ecx
  __int64 v70; // r9
  unsigned __int16 *v71; // rbx
  int v72; // eax
  struct _BASEOBJECT *v73; // rdi
  unsigned int v74; // edx
  PVOID v75; // r14
  unsigned int v76; // edi
  unsigned int v77; // ebx
  __int64 v78; // r8
  unsigned int v79; // edx
  signed int v80; // ecx
  __int64 v81; // r9
  _DWORD *v82; // rdx
  int v83; // eax
  __int64 v84; // rdi
  unsigned int v85; // ebx
  __int64 v86; // r8
  unsigned int v87; // edx
  signed int v88; // ecx
  __int64 v89; // r10
  DC *v90; // rax
  DC *v91; // rax
  __int64 v92; // rdi
  _QWORD *v93; // r15
  unsigned int v94; // r14d
  __int64 v95; // rbx
  unsigned int v96; // edx
  signed int v97; // ecx
  __int64 v98; // rbx
  char v99; // r15
  __int64 v100; // r13
  _QWORD *v101; // rax
  _QWORD *v102; // r14
  __int64 v103; // r9
  unsigned int v104; // edx
  signed int v105; // ecx
  __int64 v106; // r9
  unsigned __int16 *v107; // rbx
  int v108; // eax
  struct _BASEOBJECT *v109; // rdi
  PVOID v110; // r14
  unsigned int v111; // edi
  unsigned int v112; // ebx
  __int64 v113; // r8
  unsigned int v114; // edx
  signed int v115; // ecx
  __int64 v116; // r9
  _DWORD *v117; // rdx
  int v118; // eax
  __int64 v119; // rdi
  unsigned int v120; // ebx
  __int64 v121; // r8
  unsigned int v122; // edx
  signed int v123; // ecx
  __int64 v124; // r10
  DC *v125; // rdx
  __int64 v126; // rcx
  _DWORD *v127; // rax
  int v128; // ecx
  DC *v129; // r12
  unsigned int v130; // eax
  PVOID v131; // r15
  unsigned int v132; // edi
  __int64 v133; // rsi
  unsigned int v134; // edx
  signed int v135; // ecx
  __int64 v136; // r9
  unsigned int v137; // ecx
  __int64 v138; // r14
  unsigned int v139; // edx
  signed int v140; // ecx
  __int64 v141; // r8
  DC *v142; // rdx
  unsigned __int16 *v144; // [rsp+20h] [rbp-89h] BYREF
  int v145; // [rsp+28h] [rbp-81h]
  int v146; // [rsp+2Ch] [rbp-7Dh]
  struct _BASEOBJECT *v147; // [rsp+38h] [rbp-71h]
  unsigned __int64 v148; // [rsp+40h] [rbp-69h]
  _BYTE v149[8]; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v150[8]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v151; // [rsp+58h] [rbp-51h]
  int v152; // [rsp+110h] [rbp+67h]
  __int64 v153; // [rsp+110h] [rbp+67h]
  struct _BASEOBJECT *v154; // [rsp+120h] [rbp+77h] BYREF
  __int64 v155; // [rsp+128h] [rbp+7Fh] BYREF

  v4 = *this;
  v5 = *((_QWORD *)v4 + 10);
  v6 = *(_DWORD *)(v5 + 8);
  if ( (v6 & 0x1000) != 0 )
    GreDCSelectBrush(v4, *(_QWORD *)(v5 + 16));
  if ( (v6 & 0x2000) != 0 )
    GreDCSelectPen(*this);
  v7 = *this;
  if ( *(_DWORD *)(*((_QWORD *)*this + 10) + 308LL) != 1 || (v152 = 0, (*((_DWORD *)v7 + 66) & 1) != 0) )
    v152 = 1;
  if ( *((int *)v7 + 29) > 1 )
    GreRestoreDC(*(HDC *)v7);
  if ( *((_QWORD *)*this + 12) != *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 )
    SelectPaletteWorker((struct XDCOBJ *)this, dclevelDefault, 1);
  if ( *((_DWORD *)*this + 8) == 1 )
  {
    hbmSelectBitmap(*(HDC *)*this, (HBITMAP)gahStockObjects[21], 1, a2);
    *((_DWORD *)*this + 9) &= ~0x1000u;
  }
  *((_WORD *)*this + 1252) = -1;
  if ( *((_QWORD *)*this + 28) )
  {
    v154 = (struct _BASEOBJECT *)*((_QWORD *)*this + 28);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v154);
    *((_QWORD *)*this + 28) = 0LL;
  }
  if ( *((_QWORD *)*this + 29) )
  {
    v154 = (struct _BASEOBJECT *)*((_QWORD *)*this + 29);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v154);
    *((_QWORD *)*this + 29) = 0LL;
  }
  v8 = *this;
  v9 = (struct HPATH__ *)*((_QWORD *)*this + 21);
  if ( v9 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v150, v9);
    if ( v151 && (*(_DWORD *)(v151 + 88) & 1) == 0 )
      ((void (*)(void))DEC_SHARE_REF_CNT)();
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v150);
    *((_QWORD *)v8 + 21) = 0LL;
  }
  DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*this + 18));
  DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*this + 19));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)*this + 20));
  DEC_SHARE_REF_CNT(*((_QWORD *)*this + 13));
  v10 = (DC *)*((_QWORD *)*this + 39);
  if ( v10 && v10 != (DC *)((char *)*this + 276) )
  {
    Win32FreePool(v10);
    *((_QWORD *)*this + 39) = 0LL;
  }
  v11 = &dclevelDefault;
  v12 = 3LL;
  v13 = (__int64)*this + 88;
  v14 = 3LL;
  do
  {
    v13 += 128LL;
    v15 = *(_OWORD *)v11;
    v11 += 16;
    *(_OWORD *)(v13 - 128) = v15;
    *(_OWORD *)(v13 - 112) = *((_OWORD *)v11 - 7);
    *(_OWORD *)(v13 - 96) = *((_OWORD *)v11 - 6);
    *(_OWORD *)(v13 - 80) = *((_OWORD *)v11 - 5);
    *(_OWORD *)(v13 - 64) = *((_OWORD *)v11 - 4);
    *(_OWORD *)(v13 - 48) = *((_OWORD *)v11 - 3);
    *(_OWORD *)(v13 - 32) = *((_OWORD *)v11 - 2);
    *(_OWORD *)(v13 - 16) = *((_OWORD *)v11 - 1);
    --v14;
  }
  while ( v14 );
  *(_OWORD *)v13 = *(_OWORD *)v11;
  *(_OWORD *)(v13 + 16) = *((_OWORD *)v11 + 1);
  *(_QWORD *)(v13 + 32) = v11[4];
  v16 = (_OWORD *)*((_QWORD *)*this + 10);
  v17 = (__int128 *)&DcAttrDefault;
  do
  {
    v16 += 8;
    v18 = *v17;
    v17 += 8;
    *(v16 - 8) = v18;
    *(v16 - 7) = *(v17 - 7);
    *(v16 - 6) = *(v17 - 6);
    *(v16 - 5) = *(v17 - 5);
    *(v16 - 4) = *(v17 - 4);
    *(v16 - 3) = *(v17 - 3);
    *(v16 - 2) = *(v17 - 2);
    *(v16 - 1) = *(v17 - 1);
    --v12;
  }
  while ( v12 );
  v19 = *v17;
  v144 = 0LL;
  *v16 = v19;
  v16[1] = v17[1];
  *(_DWORD *)(*((_QWORD *)*this + 10) + 8LL) |= 0x12001Fu;
  v147 = (struct _BASEOBJECT *)*((_QWORD *)*this + 18);
  v20 = (unsigned __int16)*(_DWORD *)v147 | (*(_DWORD *)v147 >> 8) & 0xFF0000u;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v149);
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v22 = v20;
  v145 = 1;
  if ( (unsigned int)v20 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v20,
                                  1)
           + 13) == WORD1(v20) )
        v22 = (unsigned __int16)v20;
    }
    else
    {
      v22 = (unsigned __int16)v20;
    }
  }
  v23 = DeferredContext[2];
  v24 = *(_DWORD *)(v23 + 2056);
  if ( v22 >= v24 + ((*(unsigned __int16 *)(v23 + 2) - 1) << 16) )
    goto LABEL_100;
  if ( v22 >= v24 )
  {
    v25 = ((v22 - v24) >> 16) + 1;
    if ( (v22 - v24) >> 16 == -2 )
      goto LABEL_100;
  }
  else
  {
    v25 = 0;
  }
  v26 = *(_QWORD *)(v23 + 8LL * v25 + 8);
  if ( v25 )
    v22 = v22 - ((v25 - 1) << 16) - v24;
  v27 = 0;
  if ( v22 >= *(_DWORD *)(v26 + 20) )
    goto LABEL_100;
  v28 = 16LL * (unsigned __int8)v22;
  v29 = *(_QWORD **)(v26 + 24);
  v148 = 8 * ((unsigned __int64)v22 >> 8);
  v154 = (struct _BASEOBJECT *)(v28 + *(_QWORD *)(*v29 + v148));
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v154, 0LL);
  if ( v22 < *(_DWORD *)(v26 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v26 + 24) + v148) + v28 + 8) )
  {
    v27 = 1;
    *(_DWORD *)(*(_QWORD *)v26 + 24LL * v22 + 8) |= 1u;
  }
  else
  {
    ExReleasePushLockExclusiveEx(v154, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !v27 )
    goto LABEL_100;
  v30 = WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (unsigned int)v20 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v20,
                                  1)
           + 13) == WORD1(v20) )
        v20 = (unsigned __int16)v20;
    }
    else
    {
      v20 = (unsigned __int16)v20;
    }
  }
  v31 = v30[2];
  v32 = *(_DWORD *)(v31 + 2056);
  if ( (unsigned int)v20 >= v32 + ((*(unsigned __int16 *)(v31 + 2) - 1) << 16) )
    goto LABEL_61;
  if ( (unsigned int)v20 >= v32 )
  {
    v33 = (((unsigned int)v20 - v32) >> 16) + 1;
    if ( ((unsigned int)v20 - v32) >> 16 != -2 )
      goto LABEL_56;
LABEL_61:
    v35 = 0LL;
    goto LABEL_62;
  }
  v33 = 0;
LABEL_56:
  v34 = *(_QWORD *)(v31 + 8LL * v33 + 8);
  if ( v33 )
    v20 = (_DWORD)v20 - ((v33 - 1) << 16) - v32;
  v35 = 0LL;
  if ( (unsigned int)v20 < *(_DWORD *)(v34 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v34 + 24) + 8 * ((unsigned __int64)(unsigned int)v20 >> 8))
                 + 16LL * (unsigned __int8)v20
                 + 8) )
  {
    v35 = (unsigned __int16 *)(*(_QWORD *)v34 + 24 * v20);
  }
LABEL_62:
  v144 = v35;
  _m_prefetchw(v35 + 4);
  v36 = (*((_BYTE *)v35 + 15) & 0x20) == 0;
  v146 = *((_DWORD *)v35 + 2);
  if ( v36 )
  {
    v37 = v145;
  }
  else
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v144);
    v37 = v145;
    if ( !v145 )
      goto LABEL_101;
    v35 = v144;
  }
  if ( v35 )
  {
    v38 = v147;
    if ( *((_BYTE *)v35 + 14) == 5 && HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2) && gpentHmgrAltStacks )
    {
      v39 = (unsigned __int16)*(_DWORD *)v147 | (*(_DWORD *)v147 >> 8) & 0xFF0000;
      RECALTLOCKSTACKBACKTRACE((unsigned __int16)v39 | (v39 >> 8) & 0xFF0000, v147);
    }
    ++*((_DWORD *)v38 + 2);
    v40 = WPP_MAIN_CB.Dpc.DeferredContext;
    v41 = *(_DWORD *)v35 & 0xFFFFFF;
    if ( v41 >= 0x10000 )
    {
      if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
      {
        v42 = *v35;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                    (unsigned __int16)v41,
                                    1)
             + 13) == HIWORD(v41) )
          v41 = v42;
      }
      else
      {
        v41 = *v35;
      }
    }
    v43 = *((_QWORD *)v40 + 2);
    v44 = *(_DWORD *)(v43 + 2056);
    if ( v41 >= v44 + ((*(unsigned __int16 *)(v43 + 2) - 1) << 16) )
      goto LABEL_84;
    if ( v41 >= v44 )
    {
      v45 = ((v41 - v44) >> 16) + 1;
      if ( (v41 - v44) >> 16 == -2 )
        goto LABEL_84;
    }
    else
    {
      v45 = 0;
    }
    v46 = *(_QWORD *)(v43 + 8LL * v45 + 8);
    if ( v45 )
      v41 = v41 - ((v45 - 1) << 16) - v44;
    if ( v41 < *(_DWORD *)(v46 + 20) )
    {
      v47 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v46 + 24) + 8 * ((unsigned __int64)v41 >> 8))
                       + 16LL * (unsigned __int8)v41
                       + 8);
LABEL_85:
      v48 = (unsigned __int16)*v47;
      v49 = v48 | (*v47 >> 8) & 0xFF0000u;
      if ( (unsigned int)v49 >= 0x10000 )
      {
        if ( *(_DWORD *)v40 > 0x10000u )
        {
          v50 = (unsigned __int16)v48;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)v40 + 2),
                                      (unsigned __int16)v48,
                                      1)
               + 13) == WORD1(v49) )
            v49 = v50;
        }
        else
        {
          v49 = (unsigned __int16)v48;
        }
        if ( (unsigned int)v49 >= 0x10000 && *(_DWORD *)v40 > 0x10000u )
          GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v40 + 2), (unsigned __int16)v49, 1);
      }
      v51 = *((_QWORD *)v40 + 2);
      v52 = *(_DWORD *)(v51 + 2056);
      if ( (unsigned int)v49 >= v52 + ((*(unsigned __int16 *)(v51 + 2) - 1) << 16) )
        goto LABEL_100;
      if ( (unsigned int)v49 < v52 )
      {
        v53 = 0;
LABEL_97:
        v54 = *(_QWORD *)(v51 + 8LL * v53 + 8);
        if ( v53 )
          v49 = (_DWORD)v49 - ((v53 - 1) << 16) - v52;
        *(_DWORD *)(*(_QWORD *)v54 + 24 * v49 + 8) &= ~1u;
        ExReleasePushLockExclusiveEx(
          *(_QWORD *)(**(_QWORD **)(v54 + 24) + 8 * ((unsigned __int64)(unsigned int)v49 >> 8))
        + 16LL * (unsigned __int8)v49,
          0LL);
        KeLeaveCriticalRegion();
        goto LABEL_100;
      }
      v53 = (((unsigned int)v49 - v52) >> 16) + 1;
      if ( ((unsigned int)v49 - v52) >> 16 != -2 )
        goto LABEL_97;
LABEL_100:
      KeLeaveCriticalRegion();
      goto LABEL_101;
    }
LABEL_84:
    v47 = 0LL;
    goto LABEL_85;
  }
  if ( v37 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v144);
LABEL_101:
  v55 = *this;
  v144 = 0LL;
  v147 = (struct _BASEOBJECT *)*((_QWORD *)v55 + 19);
  v56 = (unsigned __int16)*(_DWORD *)v147 | (*(_DWORD *)v147 >> 8) & 0xFF0000u;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v149);
  v57 = WPP_MAIN_CB.Dpc.DeferredContext;
  v58 = v56;
  v145 = 1;
  if ( (unsigned int)v56 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v56,
                                  1)
           + 13) == WORD1(v56) )
        v58 = (unsigned __int16)v56;
    }
    else
    {
      v58 = (unsigned __int16)v56;
    }
  }
  v59 = v57[2];
  v60 = *(_DWORD *)(v59 + 2056);
  if ( v58 >= v60 + ((*(unsigned __int16 *)(v59 + 2) - 1) << 16) )
    goto LABEL_173;
  if ( v58 >= v60 )
  {
    v61 = ((v58 - v60) >> 16) + 1;
    if ( (v58 - v60) >> 16 == -2 )
      goto LABEL_173;
  }
  else
  {
    v61 = 0;
  }
  v62 = *(_QWORD *)(v59 + 8LL * v61 + 8);
  if ( v61 )
    v58 = v58 - ((v61 - 1) << 16) - v60;
  v63 = 0;
  if ( v58 >= *(_DWORD *)(v62 + 20) )
    goto LABEL_173;
  v64 = 16LL * (unsigned __int8)v58;
  v65 = *(_QWORD **)(v62 + 24);
  v148 = 8 * ((unsigned __int64)v58 >> 8);
  v154 = (struct _BASEOBJECT *)(v64 + *(_QWORD *)(*v65 + v148));
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v154, 0LL);
  if ( v58 < *(_DWORD *)(v62 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v62 + 24) + v148) + v64 + 8) )
  {
    v63 = 1;
    *(_DWORD *)(*(_QWORD *)v62 + 24LL * v58 + 8) |= 1u;
  }
  else
  {
    ExReleasePushLockExclusiveEx(v154, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !v63 )
    goto LABEL_173;
  v66 = WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (unsigned int)v56 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v56,
                                  1)
           + 13) == WORD1(v56) )
        v56 = (unsigned __int16)v56;
    }
    else
    {
      v56 = (unsigned __int16)v56;
    }
  }
  v67 = v66[2];
  v68 = *(_DWORD *)(v67 + 2056);
  if ( (unsigned int)v56 >= v68 + ((*(unsigned __int16 *)(v67 + 2) - 1) << 16) )
    goto LABEL_134;
  if ( (unsigned int)v56 >= v68 )
  {
    v69 = (((unsigned int)v56 - v68) >> 16) + 1;
    if ( ((unsigned int)v56 - v68) >> 16 != -2 )
      goto LABEL_129;
LABEL_134:
    v71 = 0LL;
    goto LABEL_135;
  }
  v69 = 0;
LABEL_129:
  v70 = *(_QWORD *)(v67 + 8LL * v69 + 8);
  if ( v69 )
    v56 = (_DWORD)v56 - ((v69 - 1) << 16) - v68;
  v71 = 0LL;
  if ( (unsigned int)v56 < *(_DWORD *)(v70 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v70 + 24) + 8 * ((unsigned __int64)(unsigned int)v56 >> 8))
                 + 16LL * (unsigned __int8)v56
                 + 8) )
  {
    v71 = (unsigned __int16 *)(*(_QWORD *)v70 + 24 * v56);
  }
LABEL_135:
  v144 = v71;
  _m_prefetchw(v71 + 4);
  v36 = (*((_BYTE *)v71 + 15) & 0x20) == 0;
  v146 = *((_DWORD *)v71 + 2);
  if ( v36 )
  {
    v72 = v145;
  }
  else
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v144);
    v72 = v145;
    if ( !v145 )
      goto LABEL_174;
    v71 = v144;
  }
  if ( v71 )
  {
    v73 = v147;
    if ( *((_BYTE *)v71 + 14) == 5 && HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2) && gpentHmgrAltStacks )
    {
      v74 = (unsigned __int16)*(_DWORD *)v147 | (*(_DWORD *)v147 >> 8) & 0xFF0000;
      RECALTLOCKSTACKBACKTRACE((unsigned __int16)v74 | (v74 >> 8) & 0xFF0000, v147);
    }
    ++*((_DWORD *)v73 + 2);
    v75 = WPP_MAIN_CB.Dpc.DeferredContext;
    v76 = *(_DWORD *)v71 & 0xFFFFFF;
    if ( v76 >= 0x10000 )
    {
      if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
      {
        v77 = *v71;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                    (unsigned __int16)v76,
                                    1)
             + 13) == HIWORD(v76) )
          v76 = v77;
      }
      else
      {
        v76 = *v71;
      }
    }
    v78 = *((_QWORD *)v75 + 2);
    v79 = *(_DWORD *)(v78 + 2056);
    if ( v76 >= v79 + ((*(unsigned __int16 *)(v78 + 2) - 1) << 16) )
      goto LABEL_157;
    if ( v76 >= v79 )
    {
      v80 = ((v76 - v79) >> 16) + 1;
      if ( (v76 - v79) >> 16 == -2 )
        goto LABEL_157;
    }
    else
    {
      v80 = 0;
    }
    v81 = *(_QWORD *)(v78 + 8LL * v80 + 8);
    if ( v80 )
      v76 = v76 - ((v80 - 1) << 16) - v79;
    if ( v76 < *(_DWORD *)(v81 + 20) )
    {
      v82 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v81 + 24) + 8 * ((unsigned __int64)v76 >> 8))
                       + 16LL * (unsigned __int8)v76
                       + 8);
LABEL_158:
      v83 = (unsigned __int16)*v82;
      v84 = v83 | (*v82 >> 8) & 0xFF0000u;
      if ( (unsigned int)v84 >= 0x10000 )
      {
        if ( *(_DWORD *)v75 > 0x10000u )
        {
          v85 = (unsigned __int16)v83;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)v75 + 2),
                                      (unsigned __int16)v83,
                                      1)
               + 13) == WORD1(v84) )
            v84 = v85;
        }
        else
        {
          v84 = (unsigned __int16)v83;
        }
        if ( (unsigned int)v84 >= 0x10000 && *(_DWORD *)v75 > 0x10000u )
          GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v75 + 2), (unsigned __int16)v84, 1);
      }
      v86 = *((_QWORD *)v75 + 2);
      v87 = *(_DWORD *)(v86 + 2056);
      if ( (unsigned int)v84 >= v87 + ((*(unsigned __int16 *)(v86 + 2) - 1) << 16) )
        goto LABEL_173;
      if ( (unsigned int)v84 < v87 )
      {
        v88 = 0;
LABEL_170:
        v89 = *(_QWORD *)(v86 + 8LL * v88 + 8);
        if ( v88 )
          v84 = (_DWORD)v84 - ((v88 - 1) << 16) - v87;
        *(_DWORD *)(*(_QWORD *)v89 + 24 * v84 + 8) &= ~1u;
        ExReleasePushLockExclusiveEx(
          *(_QWORD *)(**(_QWORD **)(v89 + 24) + 8 * ((unsigned __int64)(unsigned int)v84 >> 8))
        + 16LL * (unsigned __int8)v84,
          0LL);
        KeLeaveCriticalRegion();
        goto LABEL_173;
      }
      v88 = (((unsigned int)v84 - v87) >> 16) + 1;
      if ( ((unsigned int)v84 - v87) >> 16 != -2 )
        goto LABEL_170;
LABEL_173:
      KeLeaveCriticalRegion();
      goto LABEL_174;
    }
LABEL_157:
    v82 = 0LL;
    goto LABEL_158;
  }
  if ( v72 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v144);
LABEL_174:
  if ( (int)IsXDCOBJ_vSetDefaultFontSupported_0() >= 0 )
    XDCOBJ_vSetDefaultFontWrap_0();
  if ( *((_QWORD *)*this + 6) == *(_QWORD *)gpDispInfo )
    *(_DWORD *)(*((_QWORD *)*this + 10) + 8LL) |= 0x10000u;
  v90 = *this;
  if ( v152 )
    *((_DWORD *)v90 + 66) |= 1u;
  else
    *((_DWORD *)v90 + 66) &= ~1u;
  v91 = *this;
  v144 = 0LL;
  v154 = (struct _BASEOBJECT *)*((_QWORD *)v91 + 13);
  v92 = (unsigned __int16)*(_DWORD *)v154 | (*(_DWORD *)v154 >> 8) & 0xFF0000u;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v149);
  v93 = WPP_MAIN_CB.Dpc.DeferredContext;
  v94 = v92;
  v145 = 1;
  if ( (unsigned int)v92 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v92,
                                  1)
           + 13) == WORD1(v92) )
        v94 = (unsigned __int16)v92;
    }
    else
    {
      v94 = (unsigned __int16)v92;
    }
  }
  v95 = v93[2];
  v96 = *(_DWORD *)(v95 + 2056);
  if ( v94 >= v96 + ((*(unsigned __int16 *)(v95 + 2) - 1) << 16) )
    goto LABEL_251;
  if ( v94 >= v96 )
  {
    v97 = ((v94 - v96) >> 16) + 1;
    if ( (v94 - v96) >> 16 == -2 )
      goto LABEL_251;
  }
  else
  {
    v97 = 0;
  }
  v98 = *(_QWORD *)(v95 + 8LL * v97 + 8);
  if ( v97 )
    v94 = v94 - ((v97 - 1) << 16) - v96;
  v99 = 0;
  if ( v94 >= *(_DWORD *)(v98 + 20) )
    goto LABEL_251;
  v100 = 16LL * (unsigned __int8)v94;
  v101 = *(_QWORD **)(v98 + 24);
  v148 = 8 * ((unsigned __int64)v94 >> 8);
  v153 = v100 + *(_QWORD *)(*v101 + v148);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v153, 0LL);
  if ( v94 < *(_DWORD *)(v98 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v98 + 24) + v148) + v100 + 8) )
  {
    v99 = 1;
    *(_DWORD *)(*(_QWORD *)v98 + 24LL * v94 + 8) |= 1u;
  }
  else
  {
    ExReleasePushLockExclusiveEx(v153, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !v99 )
    goto LABEL_251;
  v102 = WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (unsigned int)v92 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v92,
                                  1)
           + 13) == WORD1(v92) )
        v92 = (unsigned __int16)v92;
    }
    else
    {
      v92 = (unsigned __int16)v92;
    }
  }
  v103 = v102[2];
  v104 = *(_DWORD *)(v103 + 2056);
  if ( (unsigned int)v92 >= v104 + ((*(unsigned __int16 *)(v103 + 2) - 1) << 16) )
    goto LABEL_214;
  if ( (unsigned int)v92 >= v104 )
  {
    v105 = (((unsigned int)v92 - v104) >> 16) + 1;
    if ( ((unsigned int)v92 - v104) >> 16 != -2 )
      goto LABEL_209;
LABEL_214:
    v107 = 0LL;
    goto LABEL_215;
  }
  v105 = 0;
LABEL_209:
  v106 = *(_QWORD *)(v103 + 8LL * v105 + 8);
  if ( v105 )
    v92 = (_DWORD)v92 - ((v105 - 1) << 16) - v104;
  v107 = 0LL;
  if ( (unsigned int)v92 < *(_DWORD *)(v106 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v106 + 24) + 8 * ((unsigned __int64)(unsigned int)v92 >> 8))
                 + 16LL * (unsigned __int8)v92
                 + 8) )
  {
    v107 = (unsigned __int16 *)(*(_QWORD *)v106 + 24 * v92);
  }
LABEL_215:
  v144 = v107;
  _m_prefetchw(v107 + 4);
  v36 = (*((_BYTE *)v107 + 15) & 0x20) == 0;
  v146 = *((_DWORD *)v107 + 2);
  if ( v36 )
  {
    v108 = v145;
LABEL_219:
    if ( !v107 )
    {
      if ( v108 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v144);
      goto LABEL_252;
    }
    v109 = v154;
    if ( *((_BYTE *)v107 + 14) == 5 )
      RECALTLOCK(
        (struct HOBJ__ *)((unsigned __int16)*(_DWORD *)v154 | (unsigned __int64)((*(_DWORD *)v154 >> 8) & 0xFF0000)),
        v154);
    ++*((_DWORD *)v109 + 2);
    v110 = WPP_MAIN_CB.Dpc.DeferredContext;
    v111 = *(_DWORD *)v107 & 0xFFFFFF;
    if ( v111 >= 0x10000 )
    {
      if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
      {
        v112 = *v107;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                    (unsigned __int16)v111,
                                    1)
             + 13) == HIWORD(v111) )
          v111 = v112;
      }
      else
      {
        v111 = *v107;
      }
    }
    v113 = *((_QWORD *)v110 + 2);
    v114 = *(_DWORD *)(v113 + 2056);
    if ( v111 >= v114 + ((*(unsigned __int16 *)(v113 + 2) - 1) << 16) )
      goto LABEL_235;
    if ( v111 >= v114 )
    {
      v115 = ((v111 - v114) >> 16) + 1;
      if ( (v111 - v114) >> 16 == -2 )
        goto LABEL_235;
    }
    else
    {
      v115 = 0;
    }
    v116 = *(_QWORD *)(v113 + 8LL * v115 + 8);
    if ( v115 )
      v111 = v111 - ((v115 - 1) << 16) - v114;
    if ( v111 < *(_DWORD *)(v116 + 20) )
    {
      v117 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v116 + 24) + 8 * ((unsigned __int64)v111 >> 8))
                        + 16LL * (unsigned __int8)v111
                        + 8);
LABEL_236:
      v118 = (unsigned __int16)*v117;
      v119 = v118 | (*v117 >> 8) & 0xFF0000u;
      if ( (unsigned int)v119 >= 0x10000 )
      {
        if ( *(_DWORD *)v110 > 0x10000u )
        {
          v120 = (unsigned __int16)v118;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)v110 + 2),
                                      (unsigned __int16)v118,
                                      1)
               + 13) == WORD1(v119) )
            v119 = v120;
        }
        else
        {
          v119 = (unsigned __int16)v118;
        }
        if ( (unsigned int)v119 >= 0x10000 && *(_DWORD *)v110 > 0x10000u )
          GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v110 + 2), (unsigned __int16)v119, 1);
      }
      v121 = *((_QWORD *)v110 + 2);
      v122 = *(_DWORD *)(v121 + 2056);
      if ( (unsigned int)v119 >= v122 + ((*(unsigned __int16 *)(v121 + 2) - 1) << 16) )
        goto LABEL_251;
      if ( (unsigned int)v119 < v122 )
      {
        v123 = 0;
LABEL_248:
        v124 = *(_QWORD *)(v121 + 8LL * v123 + 8);
        if ( v123 )
          v119 = (_DWORD)v119 - ((v123 - 1) << 16) - v122;
        *(_DWORD *)(*(_QWORD *)v124 + 24 * v119 + 8) &= ~1u;
        ExReleasePushLockExclusiveEx(
          *(_QWORD *)(**(_QWORD **)(v124 + 24) + 8 * ((unsigned __int64)(unsigned int)v119 >> 8))
        + 16LL * (unsigned __int8)v119,
          0LL);
        KeLeaveCriticalRegion();
        goto LABEL_251;
      }
      v123 = (((unsigned int)v119 - v122) >> 16) + 1;
      if ( ((unsigned int)v119 - v122) >> 16 != -2 )
        goto LABEL_248;
LABEL_251:
      KeLeaveCriticalRegion();
      goto LABEL_252;
    }
LABEL_235:
    v117 = 0LL;
    goto LABEL_236;
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v144);
  v108 = v145;
  if ( v145 )
  {
    v107 = v144;
    goto LABEL_219;
  }
LABEL_252:
  v155 = 0LL;
  if ( (int)IsRFONTOBJ_vConstructPRFONTSupported_0() >= 0 )
    RFONTOBJ_vConstructPRFONTWrap_0();
  *((_QWORD *)*this + 272) = 0LL;
  v125 = *this;
  v126 = (__int64)*this + 1416;
  if ( (*((_DWORD *)*this + 10) & 1) != 0 )
  {
    v127 = (_DWORD *)((char *)v125 + 1416);
  }
  else
  {
    v126 = (__int64)v125 + 1408;
    v127 = (_DWORD *)((char *)v125 + 1408);
  }
  v128 = *(_DWORD *)(v126 + 4);
  *((_DWORD *)v125 + 394) = *v127;
  *((_DWORD *)v125 + 395) = v128;
  v129 = *this;
  v130 = *(_DWORD *)*this;
  *((_DWORD *)*this + 9) |= 0x10u;
  v131 = WPP_MAIN_CB.Dpc.DeferredContext;
  v132 = (unsigned __int16)v130 | (v130 >> 8) & 0xFF0000;
  if ( v132 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v130,
                                  1)
           + 13) == ((unsigned __int16)v130 | (v130 >> 8) & 0xFF0000) >> 16 )
        v132 = (unsigned __int16)v132;
    }
    else
    {
      v132 = (unsigned __int16)v130;
    }
  }
  v133 = *((_QWORD *)v131 + 2);
  v134 = *(_DWORD *)(v133 + 2056);
  if ( v132 >= v134 + ((*(unsigned __int16 *)(v133 + 2) - 1) << 16) )
    goto LABEL_274;
  if ( v132 < v134 )
  {
    v135 = 0;
    goto LABEL_268;
  }
  v135 = ((v132 - v134) >> 16) + 1;
  if ( (v132 - v134) >> 16 == -2 )
  {
LABEL_274:
    v138 = 0LL;
    goto LABEL_275;
  }
LABEL_268:
  v136 = *(_QWORD *)(v133 + 8LL * v135 + 8);
  if ( v135 )
    v137 = v132 - ((v135 - 1) << 16) - v134;
  else
    v137 = v132;
  v138 = 0LL;
  if ( v137 < *(_DWORD *)(v136 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v136 + 24) + 8 * ((unsigned __int64)v137 >> 8))
                 + 16LL * (unsigned __int8)v137
                 + 8) )
  {
    v138 = *(_QWORD *)v136 + 24LL * v137;
  }
LABEL_275:
  if ( v132 >= 0x10000 )
  {
    if ( *(_DWORD *)v131 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)v131 + 2),
                                  (unsigned __int16)v132,
                                  1)
           + 13) == HIWORD(v132) )
        v132 = (unsigned __int16)v132;
    }
    else
    {
      v132 = (unsigned __int16)v132;
    }
  }
  v139 = *(_DWORD *)(v133 + 2056);
  if ( v132 >= v139 + ((*(unsigned __int16 *)(v133 + 2) - 1) << 16) )
    goto LABEL_288;
  if ( v132 >= v139 )
  {
    v140 = ((v132 - v139) >> 16) + 1;
    if ( (v132 - v139) >> 16 == -2 )
      goto LABEL_288;
  }
  else
  {
    v140 = 0;
  }
  v141 = *(_QWORD *)(v133 + 8LL * v140 + 8);
  if ( v140 )
    v132 = v132 - ((v140 - 1) << 16) - v139;
  if ( v132 < *(_DWORD *)(v141 + 20) )
  {
    v142 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v141 + 24) + 8 * ((unsigned __int64)v132 >> 8))
                  + 16LL * (unsigned __int8)v132
                  + 8);
    goto LABEL_289;
  }
LABEL_288:
  v142 = 0LL;
LABEL_289:
  if ( v142 != v129 )
    v138 = 0LL;
  *(_BYTE *)(v138 + 15) |= 4u;
  if ( v155 )
  {
    if ( (*(_DWORD *)(v155 + 720) & 0x81) != 0 && (int)IsRFONTOBJ_dtHelperSupported_0() >= 0 )
      RFONTOBJ_dtHelperWrap_0();
    RFONTOBJ::vReleaseCache((RFONTOBJ *)&v155);
  }
  return 1LL;
}
