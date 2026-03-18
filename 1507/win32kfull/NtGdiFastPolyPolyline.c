/*
 * XREFs of NtGdiFastPolyPolyline @ 0x1C011CF30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0019248 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001928C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019A54 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019CD4 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0019EA4 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C001D720 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0021638 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0EPATHOBJ@@QEAA@XZ @ 0x1C00CC4D8 (--0EPATHOBJ@@QEAA@XZ.c)
 *     ?bMakePathRecords@@YAHPEAU_PATHRECORD@@PEAKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1C011D620 (-bMakePathRecords@@YAHPEAU_PATHRECORD@@PEAKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiFastPolyPolyline(HDC a1, struct _POINTL *a2, unsigned int *a3, unsigned int a4)
{
  __int64 v4; // r15
  struct _VECTORFX *v6; // r13
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  struct REGION *v9; // rax
  int v10; // r9d
  DC *v11; // rdx
  __int64 xRight; // r8
  __int64 yBottom; // r9
  unsigned int v14; // eax
  DC *v16; // rcx
  char *v17; // r12
  __int64 v18; // rdx
  int v19; // edi
  unsigned int *v20; // rdx
  unsigned int v21; // edx
  int v22; // r8d
  unsigned int *v23; // rax
  bool v24; // zf
  __int64 v25; // rax
  struct _PATHRECORD *v26; // rsi
  unsigned int v27; // ebx
  DC *v28; // rcx
  int v29; // edx
  int v30; // r8d
  __int64 v31; // r10
  int v32; // r12d
  int v33; // edx
  int v34; // r8d
  unsigned int *v35; // r10
  int v36; // r12d
  __int64 v37; // rdx
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // r9
  char *v41; // r15
  __int64 v42; // r10
  int v43; // r8d
  int v44; // eax
  int v45; // [rsp+58h] [rbp-430h]
  int v46; // [rsp+78h] [rbp-410h]
  int v47; // [rsp+7Ch] [rbp-40Ch]
  DC *v48[6]; // [rsp+80h] [rbp-408h] BYREF
  struct _POINTL *v49; // [rsp+B0h] [rbp-3D8h]
  unsigned int *v50; // [rsp+B8h] [rbp-3D0h]
  int v51; // [rsp+C0h] [rbp-3C8h]
  unsigned int v52; // [rsp+C4h] [rbp-3C4h]
  unsigned int *v53; // [rsp+C8h] [rbp-3C0h]
  char *v54; // [rsp+D0h] [rbp-3B8h]
  _QWORD v55[2]; // [rsp+D8h] [rbp-3B0h] BYREF
  struct _RECTL v56; // [rsp+E8h] [rbp-3A0h] BYREF
  unsigned int *v57; // [rsp+F8h] [rbp-390h]
  _DWORD v58[2]; // [rsp+100h] [rbp-388h] BYREF
  char *v59; // [rsp+108h] [rbp-380h]
  _BYTE v60[112]; // [rsp+160h] [rbp-328h] BYREF
  char v61; // [rsp+1D0h] [rbp-2B8h] BYREF
  struct _PATHRECORD *v62; // [rsp+1F0h] [rbp-298h]
  struct _PATHRECORD *v63; // [rsp+1F8h] [rbp-290h] BYREF
  struct _RECTFX v64; // [rsp+200h] [rbp-288h] BYREF
  int v65; // [rsp+218h] [rbp-270h]
  __int64 v66; // [rsp+220h] [rbp-268h]
  __m128i v67; // [rsp+320h] [rbp-168h] BYREF
  _BYTE v68[112]; // [rsp+330h] [rbp-158h] BYREF
  char v69[4]; // [rsp+3A0h] [rbp-E8h] BYREF
  struct _RECTL v70; // [rsp+3A4h] [rbp-E4h] BYREF

  v4 = a4;
  v50 = a3;
  v6 = (struct _VECTORFX *)a2;
  v49 = a2;
  v53 = a3;
  v7 = 0;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v48, a1);
  if ( !v48[0] || (*((_DWORD *)v48[0] + 9) & 0x10000) != 0 )
    goto LABEL_12;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v55, (struct XDCOBJ *)v48, 0x204u);
  v16 = v48[0];
  v17 = (char *)v48[0] + 184;
  v54 = (char *)v48[0] + 184;
  v18 = *((_QWORD *)v48[0] + 10);
  v19 = *(_DWORD *)(v18 + 8);
  if ( (v19 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v48[0], *(_QWORD *)(v18 + 16));
    v16 = v48[0];
  }
  if ( (v19 & 0x2000) != 0 )
  {
    GreDCSelectPen(v16, *(_QWORD *)(*((_QWORD *)v16 + 10) + 24LL));
    v16 = v48[0];
  }
  if ( !(_DWORD)v4 )
  {
    v8 = 1;
LABEL_12:
    DCOBJ::~DCOBJ((DCOBJ *)v48);
    return v8;
  }
  if ( (unsigned int)v4 <= 0x3FFFFFFF )
  {
    if ( 4 * v4 )
    {
      v20 = &a3[v4];
      if ( (unsigned __int64)v20 > W32UserProbeAddress || v20 < a3 )
      {
        *W32UserProbeAddress = 0;
        v16 = v48[0];
      }
    }
    v21 = 0;
    v52 = 0;
    v22 = v4;
    v51 = v4;
    v23 = a3;
    v57 = a3;
    do
    {
      v21 += *v23;
      v52 = v21;
      v57 = ++v23;
      v24 = v22-- == 1;
      v51 = v22;
    }
    while ( !v24 );
    if ( v21 <= 0x1FFFFFFF )
    {
      v25 = 8LL * v21;
      if ( v25 && ((unsigned __int64)v6 + v25 > W32UserProbeAddress || (struct _VECTORFX *)((char *)v6 + v25) < v6) )
      {
        *W32UserProbeAddress = 0;
        v16 = v48[0];
      }
      v7 = v21;
    }
  }
  if ( !v7
    || (unsigned int)v4 >= 0x8000000
    || v7 >= 0x8000000
    || (*((_DWORD *)v16 + 44) & 1) != 0
    || (*(_DWORD *)v17 & 3) != 0
    || *((_QWORD *)v17 + 3) )
  {
    goto LABEL_12;
  }
  EPATHOBJ::EPATHOBJ((EPATHOBJ *)v58);
  v26 = 0LL;
  v27 = 8 * (v4 + v7 + 2 * v4);
  if ( v27 > 0x64 )
  {
    if ( v27 <= 0x2710000 )
      v26 = (struct _PATHRECORD *)AllocFreeTmpBuffer(v27);
    if ( !v26 )
      goto LABEL_64;
  }
  else
  {
    v26 = (struct _PATHRECORD *)v68;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v60, (struct XDCOBJ *)v48, 0);
  if ( (v60[24] & 1) == 0 )
  {
    v14 = XDCOBJ::bFullScreen((XDCOBJ *)v48);
    goto LABEL_8;
  }
  v46 = *(_DWORD *)DC::eptlOrigin(v48[0]);
  v30 = *((_DWORD *)DC::eptlOrigin(v28) + 1);
  v47 = v30;
  v32 = 1;
  v45 = 1;
  if ( (*(_DWORD *)(v55[0] + 32LL) & 2) != 0
    && (*(_DWORD *)(*(_QWORD *)(v31 + 80) + 68LL) == 1
     || ((*(_BYTE *)(v55[0] + 24LL) | *(_BYTE *)(v55[0] + 28LL)) & 0xF) == 0) )
  {
    v33 = (*(int *)(v55[0] + 24LL) >> 4) + v29;
    v34 = (*(int *)(v55[0] + 28LL) >> 4) + v30;
    v35 = v50;
  }
  else
  {
    v6 = (struct _PATHRECORD *)((char *)v26 + v27 - 8LL * v7);
    *(_QWORD *)&v56.left = v6;
    if ( *(_DWORD *)(*(_QWORD *)(v31 + 80) + 68LL) == 2 )
    {
      v45 = 0;
      v44 = EXFORMOBJ::bXform((EXFORMOBJ *)v55, (struct _VECTORL *)v49, v6, v7);
      v33 = *(_DWORD *)(v55[0] + 24LL) + 16 * v46;
      v34 = *(_DWORD *)(v55[0] + 28LL) + 16 * v47;
    }
    else
    {
      v45 = 1;
      v44 = EXFORMOBJ::bXform((EXFORMOBJ *)v55, v49, (struct _POINTL *)v6, v7);
      v33 = v46;
      v34 = v47;
    }
    v32 = v44;
    v35 = v50;
  }
  v58[0] = v45 != 0 ? 4 : 0;
  v36 = bMakePathRecords(v26, v35, v7, (struct _POINTL *)v6, v4, v33, v34, &v64, &v63) & v32;
  yBottom = (unsigned int)v64.yBottom;
  if ( v45 )
  {
    v67 = (__m128i)v64;
    xRight = (unsigned int)v64.xRight;
    v37 = (unsigned int)v64.yBottom;
    v64.xLeft *= 16;
    v64.xRight *= 16;
    v64.yTop *= 16;
    yBottom = (unsigned int)(16 * v64.yBottom);
    v64.yBottom *= 16;
  }
  else
  {
    v67.m128i_i32[0] = v64.xLeft >> 4;
    v67.m128i_i32[1] = v64.yTop >> 4;
    xRight = (unsigned int)((v64.xRight + 15) >> 4);
    v67.m128i_i32[2] = (v64.xRight + 15) >> 4;
    v37 = (unsigned int)((v64.yBottom + 15) >> 4);
    v67.m128i_i32[3] = (v64.yBottom + 15) >> 4;
  }
  if ( (_DWORD)v37 != 0x7FFFFFFF && (_DWORD)xRight != 0x7FFFFFFF )
  {
    v37 = (unsigned int)(v37 + 1);
    xRight = (unsigned int)(xRight + 1);
    v67.m128i_i64[1] = __PAIR64__(v37, xRight);
  }
  if ( v36 )
  {
    v62 = v26;
    v65 = 0;
    v66 = 0LL;
    v58[1] = v7 - v4;
    v59 = &v61;
    v11 = v48[0];
    if ( (*((_DWORD *)v48[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate(v48, v48[0], &v67);
      v11 = v48[0];
    }
    if ( *((struct PEN **)v11 + 19) == gpPenNull )
      goto LABEL_58;
    v38 = *((_QWORD *)v11 + 64);
    if ( !v38 )
      goto LABEL_58;
    v39 = *(_QWORD *)(v38 + 120);
    v40 = *((_QWORD *)v11 + 12);
    v41 = (char *)v11 + 1728;
    if ( *((_DWORD *)v11 + 432) == -1 )
    {
      *(_DWORD *)(*((_QWORD *)v11 + 10) + 8LL) |= 2u;
      v11 = v48[0];
    }
    v42 = *((_QWORD *)v11 + 10);
    v43 = *(_DWORD *)(v42 + 8);
    if ( (((unsigned __int8)v43 | *((_BYTE *)v11 + 332)) & 2) != 0 )
    {
      *(_DWORD *)(v42 + 8) = v43 & 0xFFFFFFFD;
      *((_DWORD *)v48[0] + 83) &= ~2u;
      EBRUSHOBJ::vInitBrush(v41, v48[0], *((_QWORD *)v48[0] + 19), v40, v39);
    }
    v9 = XDCOBJ::prgnEffRao((XDCOBJ *)v48);
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v69, v9, (struct ERECTL *)&v67, v10);
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v70) )
    {
LABEL_58:
      v8 = 1;
      goto LABEL_9;
    }
    if ( (*((_DWORD *)v48[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v41 + 32) & 0x100) == 0 )
    {
      v56 = v70;
      XDCOBJ::vAccumulateTight((XDCOBJ *)v48, v11, &v56);
    }
    ++*(_DWORD *)(v38 + 92);
    v14 = _guard_dispatch_icall_fptr();
LABEL_8:
    v8 = v14;
LABEL_9:
    if ( v26 != (struct _PATHRECORD *)v68 )
      FreeTmpBuffer(v26, v11, xRight, yBottom);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v60);
    goto LABEL_12;
  }
  if ( v26 != (struct _PATHRECORD *)v68 )
    FreeTmpBuffer(v26, v37, xRight, yBottom);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v60);
LABEL_64:
  DCOBJ::~DCOBJ((DCOBJ *)v48);
  return 0LL;
}
