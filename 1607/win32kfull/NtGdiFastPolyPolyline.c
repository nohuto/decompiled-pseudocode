/*
 * XREFs of NtGdiFastPolyPolyline @ 0x1C0010D50
 * Callers:
 *     <none>
 * Callees:
 *     ?bMakePathRecords@@YAHPEAU_PATHRECORD@@PEAKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1C0010BFC (-bMakePathRecords@@YAHPEAU_PATHRECORD@@PEAKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C00417A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C004892C (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0048970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0049004 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00491C8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiFastPolyPolyline(HDC a1, struct _VECTORL *a2, unsigned int *a3, unsigned int a4)
{
  __int64 v4; // r12
  unsigned int v7; // r15d
  unsigned int v8; // edi
  DC *v9; // rcx
  __int64 v10; // rdx
  int v11; // esi
  unsigned int *v12; // rdx
  unsigned int v13; // edx
  int v14; // r8d
  unsigned int *v15; // rax
  bool v16; // zf
  __int64 v17; // rax
  struct _PATHRECORD *v18; // r14
  __int64 v19; // rdi
  DC *v20; // rcx
  int v21; // edx
  int v22; // r8d
  __int64 v23; // r11
  int v24; // r13d
  struct _VECTORFX *v25; // rdi
  int v26; // eax
  int v27; // edx
  int v28; // r8d
  unsigned int *v29; // r10
  int v30; // r13d
  int v31; // r8d
  int v32; // edx
  DC *v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r9
  char *v37; // r13
  __int64 v38; // r10
  int v39; // r8d
  struct REGION *v40; // rax
  int v41; // r9d
  struct ECLIPOBJ *v42; // rdx
  unsigned int v43; // eax
  int v45; // [rsp+5Ch] [rbp-43Ch]
  int v47; // [rsp+80h] [rbp-418h]
  int v48; // [rsp+84h] [rbp-414h]
  DC *v49[6]; // [rsp+90h] [rbp-408h] BYREF
  unsigned int v50; // [rsp+C0h] [rbp-3D8h]
  int v51; // [rsp+C4h] [rbp-3D4h]
  unsigned int *v52; // [rsp+C8h] [rbp-3D0h]
  unsigned int *v53; // [rsp+D0h] [rbp-3C8h]
  char *v54; // [rsp+D8h] [rbp-3C0h]
  _QWORD v55[2]; // [rsp+E0h] [rbp-3B8h] BYREF
  unsigned int *v56; // [rsp+F0h] [rbp-3A8h]
  __int128 v57; // [rsp+F8h] [rbp-3A0h] BYREF
  int v58; // [rsp+110h] [rbp-388h]
  int v59; // [rsp+114h] [rbp-384h]
  char *v60; // [rsp+118h] [rbp-380h]
  __int128 v61; // [rsp+120h] [rbp-378h]
  __int128 v62; // [rsp+130h] [rbp-368h]
  int v63; // [rsp+140h] [rbp-358h]
  __int64 v64; // [rsp+148h] [rbp-350h]
  int v65; // [rsp+150h] [rbp-348h]
  __int64 v66; // [rsp+158h] [rbp-340h]
  __int64 v67; // [rsp+160h] [rbp-338h]
  _BYTE v68[112]; // [rsp+170h] [rbp-328h] BYREF
  char v69; // [rsp+1E0h] [rbp-2B8h] BYREF
  struct _PATHRECORD *v70; // [rsp+200h] [rbp-298h]
  struct _PATHRECORD *v71; // [rsp+208h] [rbp-290h] BYREF
  __int64 plResult; // [rsp+210h] [rbp-288h] BYREF
  int v73; // [rsp+218h] [rbp-280h]
  int v74; // [rsp+21Ch] [rbp-27Ch]
  int v75; // [rsp+228h] [rbp-270h]
  __int64 v76; // [rsp+230h] [rbp-268h]
  __int64 v77; // [rsp+330h] [rbp-168h] BYREF
  int v78; // [rsp+338h] [rbp-160h]
  int v79; // [rsp+33Ch] [rbp-15Ch]
  _BYTE v80[112]; // [rsp+340h] [rbp-158h] BYREF
  _BYTE v81[4]; // [rsp+3B0h] [rbp-E8h] BYREF
  _OWORD v82[9]; // [rsp+3B4h] [rbp-E4h] BYREF

  v4 = a4;
  v52 = a3;
  v53 = a3;
  v7 = 0;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v49, a1);
  if ( !v49[0] || (*((_DWORD *)v49[0] + 9) & 0x10000) != 0 )
    goto LABEL_56;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v55, (struct XDCOBJ *)v49, 0x204u);
  v9 = v49[0];
  v54 = (char *)v49[0] + 184;
  v10 = *((_QWORD *)v49[0] + 10);
  v11 = *(_DWORD *)(v10 + 8);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v49[0], *(_QWORD *)(v10 + 16));
    v9 = v49[0];
  }
  if ( (v11 & 0x2000) != 0 )
  {
    GreDCSelectPen(v9, *(_QWORD *)(*((_QWORD *)v9 + 10) + 24LL));
    v9 = v49[0];
  }
  if ( !(_DWORD)v4 )
  {
    v8 = 1;
LABEL_56:
    DCOBJ::~DCOBJ((DCOBJ *)v49);
    return v8;
  }
  if ( (unsigned int)v4 <= 0x3FFFFFFF )
  {
    if ( 4 * v4 )
    {
      v12 = &a3[v4];
      if ( (unsigned __int64)v12 > W32UserProbeAddress || v12 < a3 )
      {
        *W32UserProbeAddress = 0;
        v9 = v49[0];
      }
    }
    v13 = 0;
    v50 = 0;
    v14 = v4;
    v51 = v4;
    v15 = a3;
    v56 = a3;
    do
    {
      v13 += *v15;
      v50 = v13;
      v56 = ++v15;
      v16 = v14-- == 1;
      v51 = v14;
    }
    while ( !v16 );
    if ( v13 <= 0x1FFFFFFF )
    {
      v17 = 8LL * v13;
      if ( v17 && ((unsigned __int64)a2 + v17 > W32UserProbeAddress || (struct _VECTORL *)((char *)a2 + v17) < a2) )
      {
        *W32UserProbeAddress = 0;
        v9 = v49[0];
      }
      v7 = v13;
    }
  }
  if ( !v7
    || (unsigned int)v4 >= 0x8000000
    || v7 >= 0x8000000
    || (*((_DWORD *)v9 + 44) & 1) != 0
    || (*(_DWORD *)v54 & 3) != 0
    || *((_QWORD *)v54 + 3) )
  {
    goto LABEL_56;
  }
  v67 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v65 = 0;
  v63 = 0;
  v66 = 0LL;
  v64 = 0LL;
  v18 = 0LL;
  v19 = 8 * ((unsigned int)v4 + v7 + 2 * (_DWORD)v4);
  if ( (unsigned int)v19 > 0x64 )
  {
    if ( (unsigned int)v19 <= 0x2710000 )
      v18 = (struct _PATHRECORD *)AllocFreeTmpBuffer((unsigned int)v19);
    if ( !v18 )
      goto LABEL_67;
  }
  else
  {
    v18 = (struct _PATHRECORD *)v80;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v68, (struct XDCOBJ *)v49, 0);
  if ( (v68[24] & 1) == 0 )
  {
    v43 = XDCOBJ::bFullScreen((XDCOBJ *)v49);
    goto LABEL_52;
  }
  v47 = *(_DWORD *)DC::eptlOrigin(v49[0]);
  v22 = *((_DWORD *)DC::eptlOrigin(v20) + 1);
  v48 = v22;
  v24 = 1;
  v45 = 1;
  if ( (*(_DWORD *)(v55[0] + 32LL) & 2) != 0
    && (*(_DWORD *)(*(_QWORD *)(v23 + 80) + 68LL) == 1
     || ((*(_BYTE *)(v55[0] + 24LL) | *(_BYTE *)(v55[0] + 28LL)) & 0xF) == 0) )
  {
    v27 = (*(int *)(v55[0] + 24LL) >> 4) + v21;
    v28 = (*(int *)(v55[0] + 28LL) >> 4) + v22;
    v25 = a2;
    v29 = v52;
  }
  else
  {
    v25 = (struct _PATHRECORD *)((char *)v18 + v19 - 8LL * v7);
    if ( *(_DWORD *)(*(_QWORD *)(v23 + 80) + 68LL) == 2 )
    {
      v45 = 0;
      v26 = EXFORMOBJ::bXform((EXFORMOBJ *)v55, a2, v25, v7, 0);
      v27 = *(_DWORD *)(v55[0] + 24LL) + 16 * v47;
      v28 = *(_DWORD *)(v55[0] + 28LL) + 16 * v48;
    }
    else
    {
      v45 = 1;
      v26 = EXFORMOBJ::bXform((EXFORMOBJ *)v55, (struct _POINTL *)a2, (struct _POINTL *)v25, v7);
      v27 = v47;
      v28 = v48;
    }
    v24 = v26;
    v29 = v52;
  }
  v58 = v45 != 0 ? 4 : 0;
  v30 = bMakePathRecords(v18, v29, v7, (struct _POINTL *)v25, v4, v27, v28, (LONG *)&plResult, &v71) & v24;
  if ( v45 )
  {
    v77 = plResult;
    v31 = v73;
    v78 = v73;
    v32 = v74;
    v79 = v74;
    LODWORD(plResult) = 16 * plResult;
    v73 *= 16;
    HIDWORD(plResult) *= 16;
    v74 *= 16;
  }
  else
  {
    LODWORD(v77) = (int)plResult >> 4;
    HIDWORD(v77) = SHIDWORD(plResult) >> 4;
    v31 = (v73 + 15) >> 4;
    v78 = v31;
    v32 = (v74 + 15) >> 4;
    v79 = v32;
  }
  if ( v32 != 0x7FFFFFFF && v31 != 0x7FFFFFFF )
  {
    v79 = v32 + 1;
    v78 = v31 + 1;
  }
  if ( v30 )
  {
    v70 = v18;
    v75 = 0;
    v76 = 0LL;
    v59 = v7 - v4;
    v60 = &v69;
    v33 = v49[0];
    if ( (*((_DWORD *)v49[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v49, v49[0], (struct ERECTL *)&v77);
      v33 = v49[0];
    }
    if ( *((struct PEN **)v33 + 19) == gpPenNull )
      goto LABEL_61;
    v34 = *((_QWORD *)v33 + 64);
    if ( !v34 )
      goto LABEL_61;
    v35 = *(_QWORD *)(v34 + 120);
    v36 = *((_QWORD *)v33 + 12);
    v37 = (char *)v33 + 1728;
    if ( *((_DWORD *)v33 + 432) == -1 )
    {
      *(_DWORD *)(*((_QWORD *)v33 + 10) + 8LL) |= 2u;
      v33 = v49[0];
    }
    v38 = *((_QWORD *)v33 + 10);
    v39 = *(_DWORD *)(v38 + 8);
    if ( (((unsigned __int8)v39 | *((_BYTE *)v33 + 332)) & 2) != 0 )
    {
      *(_DWORD *)(v38 + 8) = v39 & 0xFFFFFFFD;
      *((_DWORD *)v49[0] + 83) &= ~2u;
      EBRUSHOBJ::vInitBrush(v37, v49[0], *((_QWORD *)v49[0] + 19), v36, v35, v34, 0);
    }
    v40 = XDCOBJ::prgnEffRao((XDCOBJ *)v49);
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v81, v40, (struct ERECTL *)&v77, v41);
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v82) )
    {
LABEL_61:
      v8 = 1;
      goto LABEL_53;
    }
    if ( (*((_DWORD *)v49[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v37 + 32) & 0x100) == 0 )
    {
      v57 = v82[0];
      XDCOBJ::vAccumulateTight((XDCOBJ *)v49, v42, (struct ERECTL *)&v57);
    }
    ++*(_DWORD *)(v34 + 92);
    v43 = _guard_dispatch_icall_fptr();
LABEL_52:
    v8 = v43;
LABEL_53:
    if ( v18 != (struct _PATHRECORD *)v80 )
      FreeTmpBuffer(v18);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v68);
    goto LABEL_56;
  }
  if ( v18 != (struct _PATHRECORD *)v80 )
    FreeTmpBuffer(v18);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v68);
LABEL_67:
  DCOBJ::~DCOBJ((DCOBJ *)v49);
  return 0LL;
}
