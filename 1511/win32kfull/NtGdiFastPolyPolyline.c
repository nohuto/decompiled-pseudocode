/*
 * XREFs of NtGdiFastPolyPolyline @ 0x1C013B590
 * Callers:
 *     <none>
 * Callees:
 *     ??0EPATHOBJ@@QEAA@XZ @ 0x1C00161C4 (--0EPATHOBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C0027E48 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C002C838 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C002C85C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002D820 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C002DCB4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0036AA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C013C228 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bMakePathRecords@@YAHPEAU_PATHRECORD@@PEAKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1C013C288 (-bMakePathRecords@@YAHPEAU_PATHRECORD@@PEAKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiFastPolyPolyline(HDC a1, struct _POINTL *a2, unsigned int *a3, unsigned int a4)
{
  __int64 v4; // r15
  struct _VECTORFX *v6; // r13
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  struct REGION *v9; // rax
  int v10; // r9d
  struct ECLIPOBJ *v11; // rdx
  unsigned int v12; // eax
  DC *v14; // rcx
  char *v15; // r12
  __int64 v16; // rdx
  int v17; // edi
  unsigned int *v18; // rdx
  unsigned int v19; // edx
  int v20; // r8d
  unsigned int *v21; // rax
  bool v22; // zf
  __int64 v23; // rax
  struct _PATHRECORD *v24; // rsi
  unsigned int v25; // ebx
  DC *v26; // rcx
  int v27; // edx
  int v28; // r8d
  __int64 v29; // r10
  int v30; // r12d
  int v31; // edx
  int v32; // r8d
  unsigned int *v33; // r10
  int v34; // ebx
  int v35; // r12d
  FIX xRight; // r8d
  FIX yBottom; // edx
  DC *v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // r9
  char *v42; // r15
  __int64 v43; // r10
  int v44; // r8d
  int v45; // eax
  DC *v46[2]; // [rsp+58h] [rbp-400h] BYREF
  unsigned int v47; // [rsp+68h] [rbp-3F0h]
  int v48; // [rsp+6Ch] [rbp-3ECh]
  int v49; // [rsp+70h] [rbp-3E8h]
  unsigned int v50; // [rsp+78h] [rbp-3E0h]
  int v51; // [rsp+80h] [rbp-3D8h]
  int v52; // [rsp+84h] [rbp-3D4h]
  struct _POINTL *v53; // [rsp+88h] [rbp-3D0h]
  int v54; // [rsp+90h] [rbp-3C8h]
  int v55; // [rsp+94h] [rbp-3C4h]
  struct _POINTL *v56; // [rsp+98h] [rbp-3C0h]
  unsigned int v57; // [rsp+A0h] [rbp-3B8h]
  unsigned int *v58; // [rsp+A8h] [rbp-3B0h]
  int v59; // [rsp+B0h] [rbp-3A8h]
  char *v60; // [rsp+B8h] [rbp-3A0h]
  unsigned int *v61; // [rsp+C0h] [rbp-398h]
  _QWORD v62[2]; // [rsp+C8h] [rbp-390h] BYREF
  struct _RECTL v63; // [rsp+D8h] [rbp-380h] BYREF
  unsigned int *v64; // [rsp+E8h] [rbp-370h]
  _DWORD v65[2]; // [rsp+F0h] [rbp-368h] BYREF
  char *v66; // [rsp+F8h] [rbp-360h]
  _BYTE v67[80]; // [rsp+150h] [rbp-308h] BYREF
  char v68; // [rsp+1A0h] [rbp-2B8h] BYREF
  struct _PATHRECORD *v69; // [rsp+1C0h] [rbp-298h]
  struct _PATHRECORD *v70; // [rsp+1C8h] [rbp-290h] BYREF
  struct _RECTFX v71; // [rsp+1D0h] [rbp-288h] BYREF
  int v72; // [rsp+1E8h] [rbp-270h]
  __int64 v73; // [rsp+1F0h] [rbp-268h]
  struct _RECTFX v74; // [rsp+2F0h] [rbp-168h] BYREF
  _BYTE v75[112]; // [rsp+300h] [rbp-158h] BYREF
  char v76[4]; // [rsp+370h] [rbp-E8h] BYREF
  struct _RECTL v77; // [rsp+374h] [rbp-E4h] BYREF

  v4 = a4;
  v58 = a3;
  v6 = (struct _VECTORFX *)a2;
  v56 = a2;
  v53 = a2;
  v61 = a3;
  v50 = a4;
  v7 = 0;
  v47 = 0;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v46, a1);
  if ( !v46[0] || (*((_DWORD *)v46[0] + 9) & 0x10000) != 0 )
    goto LABEL_12;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v62, (struct XDCOBJ *)v46, 0x204u);
  v14 = v46[0];
  v15 = (char *)v46[0] + 184;
  v60 = (char *)v46[0] + 184;
  v16 = *((_QWORD *)v46[0] + 10);
  v17 = *(_DWORD *)(v16 + 8);
  if ( (v17 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v46[0], *(_QWORD *)(v16 + 16));
    v14 = v46[0];
  }
  if ( (v17 & 0x2000) != 0 )
  {
    GreDCSelectPen(v14, *(_QWORD *)(*((_QWORD *)v14 + 10) + 24LL));
    v14 = v46[0];
  }
  if ( !(_DWORD)v4 )
  {
    v8 = 1;
LABEL_12:
    DCOBJ::~DCOBJ((DCOBJ *)v46);
    return v8;
  }
  if ( (unsigned int)v4 <= 0x3FFFFFFF )
  {
    if ( 4 * v4 )
    {
      v18 = &a3[v4];
      if ( (unsigned __int64)v18 > W32UserProbeAddress || v18 < a3 )
      {
        *W32UserProbeAddress = 0;
        v14 = v46[0];
      }
    }
    v19 = 0;
    v57 = 0;
    v20 = v4;
    v59 = v4;
    v21 = a3;
    v64 = a3;
    do
    {
      v19 += *v21;
      v57 = v19;
      v64 = ++v21;
      v22 = v20-- == 1;
      v59 = v20;
    }
    while ( !v22 );
    if ( v19 <= 0x1FFFFFFF )
    {
      v23 = 8LL * v19;
      if ( v23 && ((unsigned __int64)v6 + v23 > W32UserProbeAddress || (struct _VECTORFX *)((char *)v6 + v23) < v6) )
      {
        *W32UserProbeAddress = 0;
        v14 = v46[0];
      }
      v7 = v19;
      v47 = v19;
    }
  }
  if ( !v7
    || (unsigned int)v4 >= 0x8000000
    || v7 >= 0x8000000
    || (*((_DWORD *)v14 + 44) & 1) != 0
    || (*(_DWORD *)v15 & 3) != 0
    || *((_QWORD *)v15 + 3) )
  {
    goto LABEL_12;
  }
  EPATHOBJ::EPATHOBJ((EPATHOBJ *)v65);
  v24 = 0LL;
  v53 = 0LL;
  v25 = 8 * (v4 + v7 + 2 * v4);
  if ( v25 > 0x64 )
  {
    if ( v25 <= 0x2710000 )
    {
      v24 = (struct _PATHRECORD *)AllocFreeTmpBuffer(v25);
      v53 = (struct _POINTL *)v24;
    }
    if ( !v24 )
      goto LABEL_64;
  }
  else
  {
    v24 = (struct _PATHRECORD *)v75;
    v53 = (struct _POINTL *)v75;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v67, (struct XDCOBJ *)v46, 0);
  if ( (v67[24] & 1) == 0 )
  {
    v12 = XDCOBJ::bFullScreen((XDCOBJ *)v46);
    goto LABEL_8;
  }
  v54 = *(_DWORD *)DC::eptlOrigin(v46[0]);
  v51 = v54;
  v28 = *((_DWORD *)DC::eptlOrigin(v26) + 1);
  v55 = v28;
  v52 = v28;
  v30 = 1;
  v48 = 1;
  v49 = 0;
  if ( (*(_DWORD *)(v62[0] + 32LL) & 2) != 0
    && (*(_DWORD *)(*(_QWORD *)(v29 + 80) + 68LL) == 1
     || ((*(_BYTE *)(v62[0] + 24LL) | *(_BYTE *)(v62[0] + 28LL)) & 0xF) == 0) )
  {
    v31 = (*(int *)(v62[0] + 24LL) >> 4) + v27;
    v51 = v31;
    v32 = (*(int *)(v62[0] + 28LL) >> 4) + v28;
    v52 = v32;
    v33 = v58;
  }
  else
  {
    v6 = (struct _PATHRECORD *)((char *)v24 + v25 - 8LL * v7);
    *(_QWORD *)&v63.left = v6;
    if ( *(_DWORD *)(*(_QWORD *)(v29 + 80) + 68LL) == 2 )
    {
      v48 = 0;
      v45 = EXFORMOBJ::bXform((EXFORMOBJ *)v62, (struct _VECTORL *)v56, v6, v7);
      v31 = *(_DWORD *)(v62[0] + 24LL) + 16 * v54;
      v51 = v31;
      v32 = *(_DWORD *)(v62[0] + 28LL) + 16 * v55;
      v52 = v32;
    }
    else
    {
      v48 = 1;
      v45 = EXFORMOBJ::bXform((EXFORMOBJ *)v62, v56, (struct _POINTL *)v6, v7);
      v31 = v54;
      v32 = v55;
    }
    v30 = v45;
    v33 = v58;
  }
  v34 = v48;
  v65[0] = v48 != 0 ? 4 : 0;
  v35 = bMakePathRecords(v24, v33, v7, (struct _POINTL *)v6, v4, v31, v32, &v71, &v70) & v30;
  if ( v34 )
  {
    v74 = v71;
    xRight = v71.xRight;
    yBottom = v71.yBottom;
    v71.xLeft *= 16;
    v71.xRight *= 16;
    v71.yTop *= 16;
    v71.yBottom *= 16;
  }
  else
  {
    v74.xLeft = v71.xLeft >> 4;
    v74.yTop = v71.yTop >> 4;
    xRight = (v71.xRight + 15) >> 4;
    v74.xRight = xRight;
    yBottom = (v71.yBottom + 15) >> 4;
    v74.yBottom = yBottom;
  }
  if ( yBottom != 0x7FFFFFFF && xRight != 0x7FFFFFFF )
  {
    v74.yBottom = yBottom + 1;
    v74.xRight = xRight + 1;
  }
  if ( v35 )
  {
    v69 = v24;
    v72 = 0;
    v73 = 0LL;
    v65[1] = v7 - v4;
    v66 = &v68;
    v38 = v46[0];
    if ( (*((_DWORD *)v46[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v46, v46[0], (struct ERECTL *)&v74);
      v38 = v46[0];
    }
    if ( *((struct PEN **)v38 + 19) == gpPenNull )
      goto LABEL_58;
    v39 = *((_QWORD *)v38 + 64);
    if ( !v39 )
      goto LABEL_58;
    v40 = *(_QWORD *)(v39 + 120);
    v41 = *((_QWORD *)v38 + 12);
    v42 = (char *)v38 + 1704;
    if ( *((_DWORD *)v38 + 426) == -1 )
    {
      *(_DWORD *)(*((_QWORD *)v38 + 10) + 8LL) |= 2u;
      v38 = v46[0];
    }
    v43 = *((_QWORD *)v38 + 10);
    v44 = *(_DWORD *)(v43 + 8);
    if ( (((unsigned __int8)v44 | *((_BYTE *)v38 + 332)) & 2) != 0 )
    {
      *(_DWORD *)(v43 + 8) = v44 & 0xFFFFFFFD;
      *((_DWORD *)v46[0] + 83) &= ~2u;
      EBRUSHOBJ::vInitBrush(v42, v46[0], *((_QWORD *)v46[0] + 19), v41, v40, v39, 0);
    }
    v9 = XDCOBJ::prgnEffRao((XDCOBJ *)v46);
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v76, v9, (struct ERECTL *)&v74, v10);
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v77) )
    {
LABEL_58:
      v8 = 1;
      goto LABEL_9;
    }
    if ( (*((_DWORD *)v46[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v42 + 32) & 0x100) == 0 )
    {
      v63 = v77;
      XDCOBJ::vAccumulateTight((XDCOBJ *)v46, v11, &v63);
    }
    ++*(_DWORD *)(v39 + 92);
    v12 = _guard_dispatch_icall_fptr();
LABEL_8:
    v8 = v12;
LABEL_9:
    if ( v24 != (struct _PATHRECORD *)v75 )
      FreeTmpBuffer(v24);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v67);
    goto LABEL_12;
  }
  if ( v24 != (struct _PATHRECORD *)v75 )
    FreeTmpBuffer(v24);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v67);
LABEL_64:
  DCOBJ::~DCOBJ((DCOBJ *)v46);
  return 0LL;
}
