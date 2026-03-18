/*
 * XREFs of NtGdiExtFloodFill @ 0x1C0103240
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B84 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001617C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0019248 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001928C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00199F4 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019A54 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019CD4 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0019EA4 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C001D720 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0021638 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0032CFC (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C009DB38 (-bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     ?mixBest@EBRUSHOBJ@@QEAAKEE@Z @ 0x1C00CD570 (-mixBest@EBRUSHOBJ@@QEAAKEE@Z.c)
 *     EngPaint @ 0x1C00CE580 (EngPaint.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00DF1D4 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C00FEC48 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     ??1STACKMEMOBJ@@QEAA@XZ @ 0x1C0101164 (--1STACKMEMOBJ@@QEAA@XZ.c)
 *     ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x1C0102CEC (-vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z.c)
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C0102DE0 (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x1C01031DC (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 *     ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C0103F60 (-bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z.c)
 *     ??0STACKMEMOBJ@@QEAA@KKJJJ@Z @ 0x1C0104320 (--0STACKMEMOBJ@@QEAA@KKJJJ@Z.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C0106148 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0112294 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bConvertDfbDcToDib@@YAHPEAVXDCOBJ@@@Z @ 0x1C02B35C0 (-bConvertDfbDcToDib@@YAHPEAVXDCOBJ@@@Z.c)
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
  int v41; // ecx
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
  int v58; // ebx
  int v59; // r12d
  __int64 v60; // rsi
  BRUSHOBJ *v61; // rdi
  MIX v62; // eax
  MIX mix; // ebx
  struct ECLIPOBJ *v64; // rdx
  POINTL *v65; // r9
  struct ECLIPOBJ *v66; // rdx
  struct _POINTL v68; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v69; // [rsp+70h] [rbp-98h] BYREF
  __int64 v70; // [rsp+78h] [rbp-90h] BYREF
  struct _POINTL v71; // [rsp+80h] [rbp-88h] BYREF
  int v72; // [rsp+88h] [rbp-80h] BYREF
  struct REGION *v73; // [rsp+90h] [rbp-78h] BYREF
  int v74; // [rsp+98h] [rbp-70h]
  _QWORD v75[2]; // [rsp+A0h] [rbp-68h] BYREF
  BRUSHOBJ *v76; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v77; // [rsp+B8h] [rbp-50h]
  struct REGION *v78[2]; // [rsp+C0h] [rbp-48h] BYREF
  DC *v79[6]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v80; // [rsp+100h] [rbp-8h] BYREF
  char v81; // [rsp+108h] [rbp+0h]
  int v82; // [rsp+10Ch] [rbp+4h]
  int v83; // [rsp+110h] [rbp+8h] BYREF
  __int64 v84; // [rsp+114h] [rbp+Ch]
  __int128 v85; // [rsp+11Ch] [rbp+14h]
  int v86; // [rsp+12Ch] [rbp+24h]
  struct REGION *v87[2]; // [rsp+130h] [rbp+28h] BYREF
  _BYTE v88[4]; // [rsp+140h] [rbp+38h] BYREF
  int v89; // [rsp+144h] [rbp+3Ch]
  __int64 v90; // [rsp+148h] [rbp+40h]
  __int64 v91; // [rsp+160h] [rbp+58h]
  _BYTE v92[4]; // [rsp+168h] [rbp+60h] BYREF
  int v93; // [rsp+16Ch] [rbp+64h]
  __int64 v94; // [rsp+170h] [rbp+68h]
  __int64 v95; // [rsp+188h] [rbp+80h]
  int v96; // [rsp+190h] [rbp+88h] BYREF
  struct _RECTL v97; // [rsp+194h] [rbp+8Ch]
  ULONG v98; // [rsp+1A4h] [rbp+9Ch]
  int v99; // [rsp+1A8h] [rbp+A0h]
  unsigned __int8 *v100; // [rsp+1B0h] [rbp+A8h]
  int v101; // [rsp+1B8h] [rbp+B0h]
  _BYTE v102[24]; // [rsp+1C0h] [rbp+B8h] BYREF
  BRUSHOBJ pbo; // [rsp+1D8h] [rbp+D0h] BYREF
  int v104; // [rsp+1F0h] [rbp+E8h]
  int v105; // [rsp+1F4h] [rbp+ECh]
  __int64 v106; // [rsp+1F8h] [rbp+F0h]
  __int64 v107; // [rsp+200h] [rbp+F8h]
  __int64 v108; // [rsp+230h] [rbp+128h]
  __int128 v109; // [rsp+238h] [rbp+130h]
  int v110; // [rsp+258h] [rbp+150h]
  _BYTE v111[112]; // [rsp+268h] [rbp+160h] BYREF
  struct _RECTL v112; // [rsp+2D8h] [rbp+1D0h] BYREF
  _QWORD v113[2]; // [rsp+2E8h] [rbp+1E0h] BYREF
  CLIPOBJ pco; // [rsp+2F8h] [rbp+1F0h] BYREF

  LODWORD(v77) = a4;
  DCOBJ::DCOBJ((DCOBJ *)v79, a1);
  v8 = v79[0];
  v9 = 0;
  if ( !v79[0] || (*((_DWORD *)v79[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v15 = 0;
LABEL_110:
    v9 = v15;
    goto LABEL_111;
  }
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v79) )
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
        v13 = *((_QWORD *)v79[0] + 66);
      v14 = *(_QWORD *)(v11 + 64);
      v70 = v13;
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v14);
      GreReleaseSemaphoreInternal(*(_QWORD *)(v11 + 64));
      v75[0] = 0LL;
      v75[1] = v13;
      XDCOBJ::vAccumulate((XDCOBJ *)v79, (struct ERECTL *)v75);
    }
    v15 = 1;
    goto LABEL_110;
  }
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v69);
  v16 = v79[0];
  v17 = *((_QWORD *)v79[0] + 10);
  v18 = *(_DWORD *)(v17 + 8);
  if ( (v18 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v79[0], *(_QWORD *)(v17 + 16));
    v16 = v79[0];
  }
  if ( (v18 & 0x2000) != 0 )
  {
    GreDCSelectPen(v16, *(_QWORD *)(*((_QWORD *)v16 + 10) + 24LL));
    v16 = v79[0];
  }
  v19 = (DYNAMICMODECHANGESHARELOCK *)*((_QWORD *)v16 + 64);
  if ( v19 && *((_WORD *)v19 + 50) == 3 )
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v70, (struct XDCOBJ *)v79);
    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v69);
    v76 = (BRUSHOBJ *)ghsemSprite;
    GreAcquireSemaphore(ghsemSprite);
    bConvertDfbDcToDib((struct XDCOBJ *)v79);
    SEMOBJ::vUnlock((SEMOBJ *)&v76);
    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v20);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v70);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v19);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v111, (struct XDCOBJ *)v79, 0);
  v21 = *((_QWORD *)v79[0] + 64);
  v68.x = a2;
  v68.y = a3;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v102, (struct XDCOBJ *)v79, 0x204u);
  v22 = 1;
  if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v102, &v68, 1LL) )
  {
    v23 = *(_QWORD *)(v21 + 48);
    v24 = *(_QWORD *)(v21 + 120);
    v25 = *((_QWORD *)v79[0] + 12);
    if ( (*(_DWORD *)(*((_QWORD *)v79[0] + 6) + 56LL) & 0x80u) != 0
      || (unsigned int)DC::bIsCMYKColor(v79[0])
      || (*(_DWORD *)(v26 + 112) & 2) != 0 )
    {
      EngSetLastError(0x57u);
      v22 = 0;
      goto LABEL_107;
    }
    NearestIndexFromColorref = ulGetNearestIndexFromColorref(v24, v25, a4, 1LL);
    v28 = v79[0];
    v29 = NearestIndexFromColorref;
    v30 = (BRUSHOBJ *)((char *)v79[0] + 1584);
    v31 = *((_QWORD *)v79[0] + 10);
    v32 = (*((_BYTE *)v79[0] + 112) & 5) != 0;
    v76 = (BRUSHOBJ *)((char *)v79[0] + 1584);
    v33 = *(_DWORD *)(v31 + 8);
    v72 = v32 ? 2 : 0;
    if ( (v33 & 1) != 0 || (*((_DWORD *)v79[0] + 83) & 1) != 0 )
    {
      *(_DWORD *)(v31 + 8) = v33 & 0xFFFFFFFE;
      *((_DWORD *)v79[0] + 83) &= ~1u;
      EBRUSHOBJ::vInitBrush(v30, v79[0], *((_QWORD *)v79[0] + 18), v25, v24);
      v28 = v79[0];
      v30 = v76;
    }
    if ( ((__int64)v30[5].pvRbrush & 0x100) != 0 )
      goto LABEL_107;
    if ( (v111[24] & 1) == 0 )
    {
      v22 = XDCOBJ::bFullScreen((XDCOBJ *)v79);
LABEL_107:
      v9 = v22;
      goto LABEL_108;
    }
    v34 = DC::eptlOrigin(v28);
    v68.x += *(_DWORD *)v34;
    v68.y += *((_DWORD *)v34 + 1);
    v73 = XDCOBJ::prgnEffRao((XDCOBJ *)v79);
    if ( RGNOBJ::bInside((RGNOBJ *)&v73, &v68) == 2 )
    {
      v83 = 0;
      v84 = 0LL;
      v85 = 0uLL;
      v86 = 0;
      v80 = 0LL;
      v81 = 0;
      v82 = 0;
      v70 = *(_QWORD *)(v21 + 48);
      PDEVOBJ::vSync((PDEVOBJ *)&v70, (struct _SURFOBJ *)(v21 + 24), 0LL, 0);
      v74 = 0;
      v35 = *(struct _RECTL *)((char *)v73 + 88);
      v112 = v35;
      if ( !*(_WORD *)(v21 + 100) && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v73) != 3 )
      {
        v36 = *(_QWORD *)(v21 + 80);
        v37 = *(_DWORD *)(v21 + 88);
        v38 = *(_DWORD *)(v21 + 96);
        y = v68.y;
        x = v68.x;
        goto LABEL_59;
      }
      v41 = 1;
      LODWORD(v70) = *(_DWORD *)(v21 + 96);
      v83 = v70;
      LODWORD(v84) = v112.right - v112.left;
      HIDWORD(v84) = v112.bottom - v112.top;
      HIDWORD(v85) = 1;
      *(_QWORD *)((char *)&v85 + 4) = 0LL;
      if ( (*(_DWORD *)(v21 + 112) & 0x40000) != 0 )
        v41 = 262145;
      HIDWORD(v85) = v41;
      SURFMEM::bCreateDIB((SURFMEM *)&v80, (struct _DEVBITMAPINFO *)&v83, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v80 )
      {
        EngSetLastError(8u);
        goto LABEL_104;
      }
      v42 = (*(_DWORD *)(v21 + 112) & 0x400) == 0;
      v113[1] = v84;
      v113[0] = 0LL;
      if ( v42 )
        v43 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, _QWORD *, struct _RECTL *))EngCopyBits)(
                v80 + 24,
                v21 + 24,
                0LL,
                xloIdent,
                v113,
                &v112);
      else
        v43 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, XLATEOBJ *const, _QWORD *, struct _RECTL *))(v23 + 2872))(
                v80 + 24,
                v21 + 24,
                0LL,
                xloIdent,
                v113,
                &v112);
      left = v112.left;
      top = v112.top;
      v46 = v43;
      v47 = -v112.left;
      v48 = -v112.top;
      v71.x = -v112.left;
      v71.y = -v112.top;
      if ( !v43 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v73) != 3 )
      {
        v112.right += v47;
        v112.left = v47 + left;
        v112.bottom += v48;
        v112.top = v48 + top;
LABEL_57:
        if ( v46 )
        {
          x = v47 + v68.x;
          v35 = v112;
          v38 = v70;
          y = v48 + v68.y;
          v68.x += v47;
          v71.y = -v48;
          v68.y += v48;
          v71.x = -v47;
          v37 = *(_DWORD *)(v80 + 88);
          v36 = *(_QWORD *)(v80 + 80);
          v74 = 1;
LABEL_59:
          v101 = -1;
          v77 = v36;
          v96 = v38;
          v97 = v35;
          v98 = v29;
          v51 = *(_QWORD *)(v21 + 120);
          v52 = (unsigned __int8 *)(v36 + y * v37);
          v99 = a5;
          v100 = v52;
          if ( v51 )
          {
            v53 = *(_DWORD *)(v51 + 24);
            if ( (v53 & 0xC) != 0 )
            {
              v101 = 0xFFFFFF;
            }
            else if ( (v53 & 2) != 0 )
            {
              v101 = **(_DWORD **)(v51 + 128) | *(_DWORD *)(*(_QWORD *)(v51 + 128) + 4LL) | *(_DWORD *)(*(_QWORD *)(v51 + 128) + 8LL);
            }
          }
          v54 = FLOODBM::iColorGet((FLOODBM *)&v96, x);
          if ( !v56 && v54 == v29 || v56 == 1 && v54 != v29 )
            goto LABEL_104;
          FLOODBM::vFindExtent((FLOODBM *)&v96, v55, &v72, (int *)&v70);
          v57 = v70;
          STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v92, 0x1B8u, 1u, y, v72, v70);
          if ( !v95 )
          {
            EngSetLastError(8u);
LABEL_103:
            STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v92);
            goto LABEL_104;
          }
          STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v88, 0xF8u, 0, v68.y, v72, v57);
          if ( !v91 )
          {
            EngSetLastError(8u);
LABEL_102:
            STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v88);
            goto LABEL_103;
          }
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v78, 0x1348u);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v78);
          if ( !v78[0] )
          {
            EngSetLastError(8u);
LABEL_101:
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v78);
            goto LABEL_102;
          }
          v58 = 1;
          v59 = v112.bottom - 1;
          LODWORD(v70) = v112.top;
          if ( v68.y >= v112.bottom - 1 )
          {
            v89 -= *(_DWORD *)(v90 + 8);
            v90 = *(_QWORD *)(v90 + 16);
          }
          else
          {
            v58 = FLOODBM::bExtendScanline(
                    (FLOODBM *)&v96,
                    (struct STACKOBJ *)v88,
                    (struct STACKOBJ *)v92,
                    v68.y + 1,
                    v52,
                    &v52[v37]) & 1;
          }
          if ( v58 )
          {
            v60 = v77;
            do
            {
              while ( 1 )
              {
                while ( v89 )
                {
                  if ( !RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v78, (struct STACKOBJ *)v88) )
                    goto LABEL_98;
                  if ( *(_DWORD *)v90 >= v59 )
                  {
                    v89 -= *(_DWORD *)(v90 + 8);
                    v90 = *(_QWORD *)(v90 + 16);
                  }
                  else if ( !(unsigned int)FLOODBM::bExtendScanline(
                                             (FLOODBM *)&v96,
                                             (struct STACKOBJ *)v88,
                                             (struct STACKOBJ *)v92,
                                             *(_DWORD *)v90 + 1,
                                             (unsigned __int8 *)(v60 + v37 * *(_DWORD *)v90),
                                             (unsigned __int8 *)(v60 + v37 * *(_DWORD *)v90 + v37)) )
                  {
LABEL_98:
                    v58 = 0;
                    goto LABEL_99;
                  }
                }
                if ( !v93 )
                  goto LABEL_84;
                v58 &= RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v78, (struct STACKOBJ *)v92);
                if ( *(_DWORD *)v94 > (int)v70 )
                  break;
                v93 -= *(_DWORD *)(v94 + 8);
                v94 = *(_QWORD *)(v94 + 16);
              }
            }
            while ( (unsigned int)FLOODBM::bExtendScanline(
                                    (FLOODBM *)&v96,
                                    (struct STACKOBJ *)v92,
                                    (struct STACKOBJ *)v88,
                                    *(_DWORD *)v94 - 1,
                                    (unsigned __int8 *)(v60 + v37 * *(_DWORD *)v94),
                                    (unsigned __int8 *)(v60 + v37 * *(_DWORD *)v94 - v37)) );
            v58 = 0;
LABEL_84:
            if ( !v58 )
              goto LABEL_99;
            if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v78) != 1 )
            {
              if ( v74
                && (!RGNOBJ::bOffset((RGNOBJ *)v78, &v71) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v112, &v71)) )
              {
                goto LABEL_101;
              }
              v61 = v76;
              v62 = EBRUSHOBJ::mixBest(
                      (EBRUSHOBJ *)v76,
                      *(_BYTE *)(*((_QWORD *)v79[0] + 10) + 72LL),
                      *(_BYTE *)(*((_QWORD *)v79[0] + 10) + 73LL));
              ++*(_DWORD *)(v21 + 92);
              mix = v62;
              ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco, v78[0], (struct ERECTL *)&v112, 0);
              v65 = (POINTL *)v79[0];
              if ( (*((_DWORD *)v79[0] + 9) & 0xE0) != 0 )
              {
                XDCOBJ::vAccumulate(v79, v64, (__m128i *)&v112);
                XDCOBJ::vAccumulateTight((XDCOBJ *)v79, v66, &v112);
                v65 = (POINTL *)v79[0];
              }
              v58 = EngPaint((SURFOBJ *)(v21 + 24), &pco, v61, v65 + 197, mix);
            }
            if ( v58 )
              goto LABEL_100;
          }
LABEL_99:
          EngSetLastError(8u);
LABEL_100:
          v9 = v58;
          goto LABEL_101;
        }
LABEL_104:
        SURFMEM::~SURFMEM((SURFMEM *)&v80);
        goto LABEL_108;
      }
      v46 = 0;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v75);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v87);
      if ( !v75[0]
        || !v87[0]
        || (RGNOBJ::vSet((RGNOBJ *)v75, &v112),
            !RGNOBJ::bMerge((RGNOBJ *)v87, (struct RGNOBJ *)v75, (struct RGNOBJ *)&v73, BYTE4(gafjRgnOp))) )
      {
LABEL_54:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v87);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v75);
        v48 = v71.y;
        v47 = v71.x;
        goto LABEL_57;
      }
      if ( !RGNOBJ::bOffset((RGNOBJ *)v87, &v71) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v112, &v71) )
      {
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v87);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v75);
        goto LABEL_104;
      }
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco, v87[0], (struct ERECTL *)&v112, 0);
      v105 = -1;
      pbo.flColorType = v72;
      v109 = 0LL;
      v108 = 0LL;
      pbo.pvRbrush = 0LL;
      v106 = 0LL;
      v107 = 0LL;
      v110 = 0;
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
          v49 = v77;
LABEL_50:
          v105 = v49;
          v104 = v49;
        }
      }
      v50 = 0LL;
      if ( v80 )
        v50 = (SURFOBJ *)(v80 + 24);
      v46 = EngPaint(v50, &pco, &pbo, 0LL, 0xD0Du);
      EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
      goto LABEL_54;
    }
  }
LABEL_108:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v111);
LABEL_111:
  DCOBJ::~DCOBJ((DCOBJ *)v79);
  return v9;
}
