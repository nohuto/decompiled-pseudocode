/*
 * XREFs of NtGdiExtFloodFill @ 0x1C0137AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?mixBest@EBRUSHOBJ@@QEAAKEE@Z @ 0x1C0015AD0 (-mixBest@EBRUSHOBJ@@QEAAKEE@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C003560C (-bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C003955C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C00417A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C004892C (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0048970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0048E14 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0049004 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00491C8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C004A0F8 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C0107244 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C011327C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C01132B8 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1STACKMEMOBJ@@QEAA@XZ @ 0x1C0135618 (--1STACKMEMOBJ@@QEAA@XZ.c)
 *     ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x1C0137598 (-vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z.c)
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C013768C (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x1C0137A8C (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 *     ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C01387F0 (-bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z.c)
 *     ??0STACKMEMOBJ@@QEAA@KKJJJ@Z @ 0x1C0138BA4 (--0STACKMEMOBJ@@QEAA@KKJJJ@Z.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C013A064 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     EngPaint @ 0x1C013A0D0 (EngPaint.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?bConvertDfbDcToDib@@YAHPEAVXDCOBJ@@@Z @ 0x1C02B5740 (-bConvertDfbDcToDib@@YAHPEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiExtFloodFill(HDC a1, LONG a2, LONG a3, unsigned int a4, int a5)
{
  DC *v8; // rbx
  unsigned int v9; // r14d
  char v10; // dl
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdx
  int v15; // r15d
  DC *v16; // rax
  __int64 v17; // rdx
  int v18; // ebx
  DYNAMICMODECHANGESHARELOCK *v19; // rcx
  DCVISRGNSHARELOCK *v20; // rcx
  __int64 v21; // r13
  int v22; // r15d
  __int64 v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // r9
  ULONG NearestIndexFromColorref; // eax
  DC *v28; // rcx
  ULONG v29; // r12d
  BRUSHOBJ *v30; // r10
  __int64 v31; // r8
  bool v32; // cf
  int v33; // edx
  struct EPOINTL *v34; // rax
  struct _RECTL v35; // xmm6
  __int64 v36; // rcx
  int v37; // edi
  int v38; // edx
  LONG y; // ebx
  LONG x; // r10d
  int v41; // eax
  bool v42; // zf
  int v43; // eax
  LONG left; // r10d
  LONG top; // r11d
  BOOL v46; // esi
  int v47; // r8d
  int v48; // r9d
  int v49; // eax
  SURFOBJ *v50; // rcx
  __int64 v51; // rax
  unsigned __int8 *v52; // rsi
  int v53; // ecx
  int v54; // eax
  int v55; // r10d
  int v56; // r11d
  int v57; // r12d
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // r8
  int v62; // ebx
  int v63; // r12d
  __int64 v64; // rsi
  BRUSHOBJ *v65; // rdi
  MIX v66; // eax
  MIX mix; // ebx
  struct ECLIPOBJ *v68; // rdx
  POINTL *v69; // r9
  struct ECLIPOBJ *v70; // rdx
  int v72; // [rsp+68h] [rbp-A0h] BYREF
  struct _POINTL v73; // [rsp+70h] [rbp-98h] BYREF
  __int64 v74; // [rsp+78h] [rbp-90h] BYREF
  int v75; // [rsp+80h] [rbp-88h] BYREF
  struct _POINTL v76; // [rsp+88h] [rbp-80h] BYREF
  int v77; // [rsp+90h] [rbp-78h]
  struct REGION *v78; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v79[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v80; // [rsp+B0h] [rbp-58h]
  BRUSHOBJ *v81; // [rsp+B8h] [rbp-50h] BYREF
  struct REGION *v82[2]; // [rsp+C0h] [rbp-48h] BYREF
  DC *v83[6]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v84; // [rsp+100h] [rbp-8h] BYREF
  char v85; // [rsp+108h] [rbp+0h]
  int v86; // [rsp+10Ch] [rbp+4h]
  struct REGION *v87[2]; // [rsp+110h] [rbp+8h] BYREF
  int v88; // [rsp+120h] [rbp+18h] BYREF
  __int64 v89; // [rsp+124h] [rbp+1Ch]
  __int128 v90; // [rsp+12Ch] [rbp+24h]
  int v91; // [rsp+13Ch] [rbp+34h]
  _BYTE v92[4]; // [rsp+140h] [rbp+38h] BYREF
  int v93; // [rsp+144h] [rbp+3Ch]
  __int64 v94; // [rsp+148h] [rbp+40h]
  __int64 v95; // [rsp+160h] [rbp+58h]
  _BYTE v96[4]; // [rsp+168h] [rbp+60h] BYREF
  int v97; // [rsp+16Ch] [rbp+64h]
  __int64 v98; // [rsp+170h] [rbp+68h]
  __int64 v99; // [rsp+188h] [rbp+80h]
  int v100; // [rsp+190h] [rbp+88h] BYREF
  struct _RECTL v101; // [rsp+194h] [rbp+8Ch]
  ULONG v102; // [rsp+1A4h] [rbp+9Ch]
  int v103; // [rsp+1A8h] [rbp+A0h]
  unsigned __int8 *v104; // [rsp+1B0h] [rbp+A8h]
  int v105; // [rsp+1B8h] [rbp+B0h]
  _BYTE v106[24]; // [rsp+1C0h] [rbp+B8h] BYREF
  BRUSHOBJ pbo; // [rsp+1D8h] [rbp+D0h] BYREF
  int v108; // [rsp+1F0h] [rbp+E8h]
  int v109; // [rsp+1F4h] [rbp+ECh]
  __int64 v110; // [rsp+1F8h] [rbp+F0h]
  __int64 v111; // [rsp+200h] [rbp+F8h]
  __int64 v112; // [rsp+230h] [rbp+128h]
  __int128 v113; // [rsp+238h] [rbp+130h]
  int v114; // [rsp+258h] [rbp+150h]
  _BYTE v115[112]; // [rsp+268h] [rbp+160h] BYREF
  struct _RECTL v116; // [rsp+2D8h] [rbp+1D0h] BYREF
  _QWORD v117[2]; // [rsp+2E8h] [rbp+1E0h] BYREF
  CLIPOBJ pco; // [rsp+2F8h] [rbp+1F0h] BYREF

  LODWORD(v80) = a4;
  DCOBJ::DCOBJ((DCOBJ *)v83, a1);
  v8 = v83[0];
  v9 = 0;
  if ( !v83[0] || (*((_DWORD *)v83[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v15 = 0;
LABEL_110:
    v9 = v15;
    goto LABEL_111;
  }
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v83) )
  {
    if ( (v10 & 0xE0) != 0 )
    {
      v11 = *((_QWORD *)v8 + 6);
      GreAcquireSemaphore(*(_QWORD *)(v11 + 64));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v11 + 64), 11LL);
      v12 = *(_QWORD *)(v11 + 2576);
      if ( v12 )
        v13 = *(_QWORD *)(v12 + 56);
      else
        v13 = *((_QWORD *)v83[0] + 66);
      v14 = *(_QWORD *)(v11 + 64);
      v74 = v13;
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v14);
      GreReleaseSemaphoreInternal(*(_QWORD *)(v11 + 64));
      v79[0] = 0LL;
      v79[1] = v13;
      XDCOBJ::vAccumulate((XDCOBJ *)v83, (struct ERECTL *)v79);
    }
    v15 = 1;
    goto LABEL_110;
  }
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v72);
  v16 = v83[0];
  v17 = *((_QWORD *)v83[0] + 10);
  v18 = *(_DWORD *)(v17 + 8);
  if ( (v18 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v83[0], *(_QWORD *)(v17 + 16));
    v16 = v83[0];
  }
  if ( (v18 & 0x2000) != 0 )
  {
    GreDCSelectPen(v16, *(_QWORD *)(*((_QWORD *)v16 + 10) + 24LL));
    v16 = v83[0];
  }
  v19 = (DYNAMICMODECHANGESHARELOCK *)*((_QWORD *)v16 + 64);
  if ( v19 && *((_WORD *)v19 + 50) == 3 )
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v74, (struct XDCOBJ *)v83);
    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v72);
    v81 = (BRUSHOBJ *)ghsemSprite;
    GreAcquireSemaphore(ghsemSprite);
    bConvertDfbDcToDib((struct XDCOBJ *)v83);
    SEMOBJ::vUnlock((SEMOBJ *)&v81);
    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v20);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v74);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v19);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v115, (struct XDCOBJ *)v83, 0);
  v21 = *((_QWORD *)v83[0] + 64);
  v73.x = a2;
  v73.y = a3;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v106, (struct XDCOBJ *)v83, 0x204u);
  v22 = 1;
  if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v106, &v73, 1LL) )
  {
    v23 = *(_QWORD *)(v21 + 48);
    v24 = *(_QWORD *)(v21 + 120);
    v25 = *((_QWORD *)v83[0] + 12);
    if ( (*(_DWORD *)(*((_QWORD *)v83[0] + 6) + 56LL) & 0x80u) != 0
      || (unsigned int)DC::bIsCMYKColor(v83[0])
      || (*(_DWORD *)(v26 + 112) & 2) != 0 )
    {
      EngSetLastError(0x57u);
      v22 = 0;
      goto LABEL_107;
    }
    NearestIndexFromColorref = ulGetNearestIndexFromColorref(v24, v25, a4, 1LL);
    v28 = v83[0];
    v29 = NearestIndexFromColorref;
    v30 = (BRUSHOBJ *)((char *)v83[0] + 1584);
    v31 = *((_QWORD *)v83[0] + 10);
    v32 = (*((_BYTE *)v83[0] + 112) & 5) != 0;
    v81 = (BRUSHOBJ *)((char *)v83[0] + 1584);
    v33 = *(_DWORD *)(v31 + 8);
    v75 = v32 ? 2 : 0;
    if ( (v33 & 1) != 0 || (*((_DWORD *)v83[0] + 83) & 1) != 0 )
    {
      *(_DWORD *)(v31 + 8) = v33 & 0xFFFFFFFE;
      *((_DWORD *)v83[0] + 83) &= ~1u;
      EBRUSHOBJ::vInitBrush(v30, v83[0], *((_QWORD *)v83[0] + 18), v25, v24, v21, 1);
      v28 = v83[0];
      v30 = v81;
    }
    if ( ((__int64)v30[5].pvRbrush & 0x100) != 0 )
      goto LABEL_107;
    if ( (v115[24] & 1) == 0 )
    {
      v22 = XDCOBJ::bFullScreen((XDCOBJ *)v83);
LABEL_107:
      v9 = v22;
      goto LABEL_108;
    }
    v34 = DC::eptlOrigin(v28);
    v73.x += *(_DWORD *)v34;
    v73.y += *((_DWORD *)v34 + 1);
    v78 = XDCOBJ::prgnEffRao((XDCOBJ *)v83);
    if ( RGNOBJ::bInside((RGNOBJ *)&v78, &v73) == 2 )
    {
      v88 = 0;
      v89 = 0LL;
      v90 = 0uLL;
      v91 = 0;
      v84 = 0LL;
      v85 = 0;
      v86 = 0;
      v74 = *(_QWORD *)(v21 + 48);
      PDEVOBJ::vSync((PDEVOBJ *)&v74, (struct _SURFOBJ *)(v21 + 24), 0LL, 0);
      v77 = 0;
      v35 = *(struct _RECTL *)((char *)v78 + 88);
      v116 = v35;
      if ( !*(_WORD *)(v21 + 100) && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v78) != 3 )
      {
        v36 = *(_QWORD *)(v21 + 80);
        v37 = *(_DWORD *)(v21 + 88);
        v38 = *(_DWORD *)(v21 + 96);
        y = v73.y;
        x = v73.x;
        goto LABEL_59;
      }
      v88 = *(_DWORD *)(v21 + 96);
      LODWORD(v74) = v88;
      LODWORD(v89) = v116.right - v116.left;
      HIDWORD(v89) = v116.bottom - v116.top;
      v41 = 1;
      HIDWORD(v90) = 1;
      *(_QWORD *)((char *)&v90 + 4) = 0LL;
      if ( (*(_DWORD *)(v21 + 112) & 0x40000) != 0 )
        v41 = 262145;
      HIDWORD(v90) = v41;
      SURFMEM::bCreateDIB((SURFMEM *)&v84, (struct _DEVBITMAPINFO *)&v88, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v84 )
      {
        EngSetLastError(8u);
        goto LABEL_104;
      }
      v42 = (*(_DWORD *)(v21 + 112) & 0x400) == 0;
      v117[1] = v89;
      v117[0] = 0LL;
      if ( v42 )
        v43 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, _QWORD *, struct _RECTL *))EngCopyBits)(
                v84 + 24,
                v21 + 24,
                0LL,
                xloIdent,
                v117,
                &v116);
      else
        v43 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, XLATEOBJ *const, _QWORD *, struct _RECTL *))(v23 + 2864))(
                v84 + 24,
                v21 + 24,
                0LL,
                xloIdent,
                v117,
                &v116);
      left = v116.left;
      top = v116.top;
      v46 = v43;
      v47 = -v116.left;
      v48 = -v116.top;
      v76.x = -v116.left;
      v76.y = -v116.top;
      if ( !v43 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v78) != 3 )
      {
        v116.right += v47;
        v116.left = v47 + left;
        v116.bottom += v48;
        v116.top = v48 + top;
LABEL_57:
        if ( v46 )
        {
          x = v47 + v73.x;
          v35 = v116;
          v38 = v74;
          y = v48 + v73.y;
          v73.x += v47;
          v76.y = -v48;
          v73.y += v48;
          v76.x = -v47;
          v37 = *(_DWORD *)(v84 + 88);
          v36 = *(_QWORD *)(v84 + 80);
          v77 = 1;
LABEL_59:
          v105 = -1;
          v80 = v36;
          v100 = v38;
          v101 = v35;
          v102 = v29;
          v51 = *(_QWORD *)(v21 + 120);
          v52 = (unsigned __int8 *)(v36 + y * v37);
          v103 = a5;
          v104 = v52;
          if ( v51 )
          {
            v53 = *(_DWORD *)(v51 + 24);
            if ( (v53 & 0xC) != 0 )
            {
              v105 = 0xFFFFFF;
            }
            else if ( (v53 & 2) != 0 )
            {
              v105 = **(_DWORD **)(v51 + 120) | *(_DWORD *)(*(_QWORD *)(v51 + 120) + 4LL) | *(_DWORD *)(*(_QWORD *)(v51 + 120) + 8LL);
            }
          }
          v54 = FLOODBM::iColorGet((FLOODBM *)&v100, x);
          if ( !v56 && v54 == v29 || v56 == 1 && v54 != v29 )
            goto LABEL_104;
          FLOODBM::vFindExtent((FLOODBM *)&v100, v55, &v75, (int *)&v74);
          v57 = v74;
          STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v96, 0x1B8u, 1u, y, v75, v74);
          if ( !v99 )
          {
            EngSetLastError(8u);
LABEL_103:
            STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v96, v58, v59);
            goto LABEL_104;
          }
          STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v92, 0xF8u, 0, v73.y, v75, v57);
          if ( !v95 )
          {
            EngSetLastError(8u);
LABEL_102:
            STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v92, v60, v61);
            goto LABEL_103;
          }
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v82, 0x1348u);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v82);
          if ( !v82[0] )
          {
            EngSetLastError(8u);
LABEL_101:
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v82);
            goto LABEL_102;
          }
          v62 = 1;
          v63 = v116.bottom - 1;
          LODWORD(v74) = v116.top;
          if ( v73.y >= v116.bottom - 1 )
          {
            v93 -= *(_DWORD *)(v94 + 8);
            v94 = *(_QWORD *)(v94 + 16);
          }
          else
          {
            v62 = FLOODBM::bExtendScanline(
                    (FLOODBM *)&v100,
                    (struct STACKOBJ *)v92,
                    (struct STACKOBJ *)v96,
                    v73.y + 1,
                    v52,
                    &v52[v37]) & 1;
          }
          if ( v62 )
          {
            v64 = v80;
            do
            {
              while ( 1 )
              {
                while ( v93 )
                {
                  if ( !RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v82, (struct STACKOBJ *)v92) )
                    goto LABEL_98;
                  if ( *(_DWORD *)v94 >= v63 )
                  {
                    v93 -= *(_DWORD *)(v94 + 8);
                    v94 = *(_QWORD *)(v94 + 16);
                  }
                  else if ( !(unsigned int)FLOODBM::bExtendScanline(
                                             (FLOODBM *)&v100,
                                             (struct STACKOBJ *)v92,
                                             (struct STACKOBJ *)v96,
                                             *(_DWORD *)v94 + 1,
                                             (unsigned __int8 *)(v64 + v37 * *(_DWORD *)v94),
                                             (unsigned __int8 *)(v64 + v37 * *(_DWORD *)v94 + v37)) )
                  {
LABEL_98:
                    v62 = 0;
                    goto LABEL_99;
                  }
                }
                if ( !v97 )
                  goto LABEL_84;
                v62 &= RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v82, (struct STACKOBJ *)v96);
                if ( *(_DWORD *)v98 > (int)v74 )
                  break;
                v97 -= *(_DWORD *)(v98 + 8);
                v98 = *(_QWORD *)(v98 + 16);
              }
            }
            while ( (unsigned int)FLOODBM::bExtendScanline(
                                    (FLOODBM *)&v100,
                                    (struct STACKOBJ *)v96,
                                    (struct STACKOBJ *)v92,
                                    *(_DWORD *)v98 - 1,
                                    (unsigned __int8 *)(v64 + v37 * *(_DWORD *)v98),
                                    (unsigned __int8 *)(v64 + v37 * *(_DWORD *)v98 - v37)) );
            v62 = 0;
LABEL_84:
            if ( !v62 )
              goto LABEL_99;
            if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v82) != 1 )
            {
              if ( v77
                && (!RGNOBJ::bOffset((RGNOBJ *)v82, &v76) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v116, &v76)) )
              {
                goto LABEL_101;
              }
              v65 = v81;
              v66 = EBRUSHOBJ::mixBest(
                      (EBRUSHOBJ *)v81,
                      *(_BYTE *)(*((_QWORD *)v83[0] + 10) + 72LL),
                      *(_BYTE *)(*((_QWORD *)v83[0] + 10) + 73LL));
              ++*(_DWORD *)(v21 + 92);
              mix = v66;
              ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco, v82[0], (struct ERECTL *)&v116, 0);
              v69 = (POINTL *)v83[0];
              if ( (*((_DWORD *)v83[0] + 9) & 0xE0) != 0 )
              {
                XDCOBJ::vAccumulate(v83, v68, (__m128i *)&v116);
                XDCOBJ::vAccumulateTight((struct _RECTL **)v83, v70, &v116);
                v69 = (POINTL *)v83[0];
              }
              v62 = EngPaint((SURFOBJ *)(v21 + 24), &pco, v65, v69 + 197, mix);
            }
            if ( v62 )
              goto LABEL_100;
          }
LABEL_99:
          EngSetLastError(8u);
LABEL_100:
          v9 = v62;
          goto LABEL_101;
        }
LABEL_104:
        SURFMEM::~SURFMEM((SURFMEM *)&v84);
        goto LABEL_108;
      }
      v46 = 0;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v79);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v87);
      if ( !v79[0]
        || !v87[0]
        || (RGNOBJ::vSet((RGNOBJ *)v79, &v116),
            !RGNOBJ::bMerge((RGNOBJ *)v87, (struct RGNOBJ *)v79, (struct RGNOBJ *)&v78, BYTE4(gafjRgnOp))) )
      {
LABEL_54:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v87);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v79);
        v48 = v76.y;
        v47 = v76.x;
        goto LABEL_57;
      }
      if ( !RGNOBJ::bOffset((RGNOBJ *)v87, &v76) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v116, &v76) )
      {
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v87);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v79);
        goto LABEL_104;
      }
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco, v87[0], (struct ERECTL *)&v116, 0);
      v109 = -1;
      pbo.flColorType = v75;
      v113 = 0LL;
      v112 = 0LL;
      pbo.pvRbrush = 0LL;
      v110 = 0LL;
      v111 = 0LL;
      v114 = 0;
      if ( a5 )
      {
        pbo.iSolidColor = (v29 & 1) == 0;
        if ( gbMultiMonMismatchColor )
        {
          v49 = ulIndexToRGB(v24, v25, (v29 & 1) == 0);
          goto LABEL_50;
        }
      }
      else
      {
        pbo.iSolidColor = v29;
        if ( gbMultiMonMismatchColor )
        {
          v49 = v80;
LABEL_50:
          v109 = v49;
          v108 = v49;
        }
      }
      v50 = 0LL;
      if ( v84 )
        v50 = (SURFOBJ *)(v84 + 24);
      v46 = EngPaint(v50, &pco, &pbo, 0LL, 0xD0Du);
      EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
      goto LABEL_54;
    }
  }
LABEL_108:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v115);
LABEL_111:
  DCOBJ::~DCOBJ((DCOBJ *)v83);
  return v9;
}
