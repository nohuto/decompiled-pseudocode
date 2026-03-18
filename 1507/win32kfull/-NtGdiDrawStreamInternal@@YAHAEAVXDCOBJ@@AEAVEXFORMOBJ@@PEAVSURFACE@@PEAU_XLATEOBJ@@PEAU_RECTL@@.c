/*
 * XREFs of ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C0097490
 * Callers:
 *     GreDrawStream @ 0x1C0026AD0 (GreDrawStream.c)
 * Callees:
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019CD4 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0019EA4 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0032C68 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     bCvtPts1 @ 0x1C00979C4 (bCvtPts1.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C025B15C (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiDrawStreamInternal(
        struct XDCOBJ *a1,
        struct EXFORMOBJ *a2,
        struct SURFACE *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        int a7,
        char *a8,
        struct _DRAWSTREAMINFO *a9)
{
  XDCOBJ *v9; // rsi
  int v10; // r10d
  unsigned int v12; // edi
  LONG right; // ecx
  _DWORD *v14; // rax
  __int64 v15; // rcx
  char *v16; // r8
  LONG v17; // ebx
  LONG v18; // r12d
  LONG v19; // r15d
  LONG bottom; // r13d
  int v21; // eax
  int v22; // eax
  int v23; // eax
  char *v24; // rbx
  char *v25; // rsi
  LONG v26; // eax
  LONG v27; // eax
  _DWORD *v28; // rcx
  _DWORD *v29; // rdx
  __int64 v30; // r14
  int v31; // eax
  int *v32; // rdx
  __int64 v33; // r9
  __int64 v34; // r8
  LONG v35; // r10d
  LONG v36; // eax
  int *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rdx
  int v40; // r12d
  LONG v41; // r15d
  int v42; // ebx
  LONG v43; // r13d
  _DWORD *v44; // rsi
  struct _RECTL v45; // xmm6
  XDCOBJ *v46; // r15
  struct REGION *v47; // rax
  int v48; // r9d
  struct ECLIPOBJ *v49; // rdx
  __int64 (__fastcall *v50)(int, int, int, int, int, __int64, int, __int64, __int64); // rbx
  __int64 v51; // rax
  int v52; // ecx
  struct SURFACE *v53; // r15
  struct _SURFOBJ *v54; // rdx
  char *v55; // rdx
  LONG v57; // [rsp+50h] [rbp-A1h]
  LONG top; // [rsp+54h] [rbp-9Dh]
  __int64 v59; // [rsp+58h] [rbp-99h] BYREF
  LONG left; // [rsp+60h] [rbp-91h]
  int v61; // [rsp+70h] [rbp-81h]
  LONG v62; // [rsp+78h] [rbp-79h]
  unsigned __int64 v63; // [rsp+80h] [rbp-71h]
  XDCOBJ *v64; // [rsp+88h] [rbp-69h]
  char *v65; // [rsp+90h] [rbp-61h]
  struct _XLATEOBJ *v66; // [rsp+98h] [rbp-59h]
  struct SURFACE *v67; // [rsp+A0h] [rbp-51h]
  struct _DRAWSTREAMINFO *v68; // [rsp+A8h] [rbp-49h]
  struct _RECTL v69; // [rsp+B0h] [rbp-41h] BYREF
  struct _RECTL v70; // [rsp+C0h] [rbp-31h] BYREF

  v9 = a1;
  v10 = a7;
  v64 = a1;
  v12 = 0;
  v69.top = a5->top;
  v68 = a9;
  v69.left = a5->left;
  left = v69.left;
  right = a5->right;
  top = v69.top;
  v14 = *(_DWORD **)v9;
  v69.bottom = a5->bottom;
  v69.right = right;
  v59 = 0LL;
  v62 = right;
  v15 = *((_QWORD *)v14 + 64);
  v66 = a4;
  v67 = a3;
  LODWORD(v14) = *(_DWORD *)(v15 + 116);
  v16 = a8;
  v17 = a6->top;
  v18 = a6->left;
  v19 = a6->right;
  bottom = a6->bottom;
  v57 = v69.bottom;
  v61 = a7;
  v65 = a8;
  v70.left = v18;
  LODWORD(v63) = v17;
  v70.top = v17;
  v70.right = v19;
  v70.bottom = bottom;
  if ( (((unsigned __int8)v14 & 8) != 0 || *(_QWORD *)(v15 + 216)) && (*(_WORD *)(v15 + 102) & 0x200) != 0 )
    goto LABEL_73;
  v21 = *(_DWORD *)(v15 + 112);
  if ( (v21 & 0x800) != 0 )
  {
    v22 = UserSurfaceAccessCheck(*(_QWORD *)(v15 + 592));
  }
  else
  {
    if ( (v21 & 0x10000000) == 0 )
      goto LABEL_10;
    v22 = UserScreenAccessCheck(v15);
  }
  if ( !v22 )
  {
LABEL_73:
    EngSetLastError(5u);
    return v12;
  }
  v16 = v65;
  v10 = v61;
  v57 = v69.bottom;
  v62 = v69.right;
  top = v69.top;
  left = v69.left;
LABEL_10:
  v23 = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
  if ( (v23 & 1) == 0 )
    return v12;
  if ( (v23 & 2) != 0 )
  {
    if ( (v23 & 0x43) != 0x43 )
      bCvtPts1(*(_QWORD *)a2, &v59, 1LL);
    goto LABEL_18;
  }
  v24 = v16;
  v25 = &v16[v10];
  if ( v16 >= v25 )
  {
LABEL_17:
    v9 = v64;
    v17 = v63;
LABEL_18:
    if ( (*(_BYTE *)(*(_QWORD *)a2 + 32LL) & 0x43) != 0x43 )
    {
      bCvtPts1(*(_QWORD *)a2, &v70, 2LL);
      bottom = v70.bottom;
      v19 = v70.right;
      v17 = v70.top;
      v18 = v70.left;
    }
    if ( *((_DWORD *)a2 + 3) )
    {
      ++v18;
      ++v19;
    }
    if ( v18 > v19 )
    {
      v26 = v18;
      v18 = v19;
      v19 = v26;
    }
    if ( v17 > bottom )
    {
      v27 = v17;
      v17 = bottom;
      bottom = v27;
    }
    if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v69) )
    {
      v28 = *(_DWORD **)v9;
      v29 = (_DWORD *)(*(_QWORD *)v9 + 1416LL);
      v30 = *(_QWORD *)(*(_QWORD *)v9 + 512LL);
      if ( (*(_DWORD *)(*(_QWORD *)v9 + 40LL) & 1) == 0 )
        v29 = v28 + 352;
      LODWORD(v59) = *v29 + v59;
      v31 = v29[1];
      v32 = v28 + 354;
      HIDWORD(v59) += v31;
      if ( (v28[10] & 1) == 0 )
        v32 = v28 + 352;
      v33 = *v32;
      v63 = 0xFFFFFFFFLL;
      if ( (unsigned __int64)(v33 + left + 0x80000000LL) <= 0xFFFFFFFF
        && (unsigned __int64)(v33 + v62 + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v34 = v32[1];
        if ( (unsigned __int64)(v34 + top + 0x80000000LL) <= 0xFFFFFFFF
          && (unsigned __int64)(v34 + v57 + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v69.left = v33 + left;
          v35 = *v32 + v62;
          v69.right = v35;
          v69.top = v32[1] + top;
          v36 = v32[1] + v57;
          v37 = v28 + 354;
          v69.bottom = v36;
          if ( (v28[10] & 1) == 0 )
            v37 = v28 + 352;
          v38 = *v37;
          if ( v38 + v18 + 0x80000000LL <= v63 && (unsigned __int64)(v38 + v19 + 0x80000000LL) <= 0xFFFFFFFF )
          {
            v39 = v37[1];
            if ( (unsigned __int64)(v39 + v17 + 0x80000000LL) <= 0xFFFFFFFF
              && (unsigned __int64)(v39 + bottom + 0x80000000LL) <= 0xFFFFFFFF )
            {
              v40 = v38 + v18;
              v41 = v38 + v19;
              v42 = v39 + v17;
              v43 = v39 + bottom;
              v44 = 0LL;
              if ( (int)v33 + left > v40
                || v35 < v41
                || v69.top > v42
                || v36 < v43
                || v28[348] > v40
                || v28[350] < v41
                || v28[349] > v42
                || v28[351] < v43 )
              {
                v46 = v64;
                v44 = v28 + 546;
                v47 = XDCOBJ::prgnEffRao(v64);
                XCLIPOBJ::vSetup((XCLIPOBJ *)v44, v47, (struct ERECTL *)&v69, v48);
                v45 = *(struct _RECTL *)(v44 + 1);
                v69 = v45;
              }
              else
              {
                ERECTL::operator*=(&v69);
                v45 = v69;
                v46 = v64;
              }
              if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v69) )
              {
                return 1;
              }
              else
              {
                if ( (*(_DWORD *)(*(_QWORD *)v46 + 36LL) & 0xE0) != 0 )
                {
                  v70 = v45;
                  XDCOBJ::vAccumulateTight(v46, v49, &v70);
                }
                ++*(_DWORD *)(v30 + 92);
                v50 = EngDrawStream;
                v51 = *(_QWORD *)(v30 + 48);
                if ( *(_QWORD *)(v51 + 3440) )
                  v50 = *(__int64 (__fastcall **)(int, int, int, int, int, __int64, int, __int64, __int64))(v51 + 3440);
                if ( (*(_DWORD *)(*(_QWORD *)v46 + 36LL) & 0x200) == 0
                  || !v51
                  || (v52 = 1, (*(_DWORD *)(v51 + 56) & 0x20000) == 0) )
                {
                  v52 = 0;
                }
                if ( *(int *)(v30 + 112) >= 0 && (!v52 || *(_WORD *)(v30 + 100) != 3) )
                  v50 = EngDrawStream;
                v53 = v67;
                v54 = 0LL;
                if ( v67 )
                  v54 = (struct _SURFOBJ *)((char *)v67 + 24);
                *(_QWORD *)&v70.left = 0LL;
                SURFREFVIEW::bMap((SURFREFVIEW *)&v70, v54);
                if ( *(_QWORD *)&v70.left )
                {
                  v55 = 0LL;
                  if ( v53 )
                    v55 = (char *)v53 + 24;
                  if ( (unsigned int)v50(
                                       v30 + 24,
                                       (int)v55,
                                       (int)v44,
                                       (int)v66,
                                       (int)&v69,
                                       (__int64)&v59,
                                       v61,
                                       (__int64)v65,
                                       (__int64)v68) )
                    v12 = 1;
                }
                SURFREFVIEW::bUnMap((SURFREFVIEW *)&v70);
              }
            }
          }
        }
      }
    }
    return v12;
  }
  while ( *(_DWORD *)v24 == 9 )
  {
    EXFORMOBJ::bXform(a2, (struct _POINTL *)(v24 + 4));
    v24 += 60;
    if ( v24 >= v25 )
      goto LABEL_17;
  }
  return v12;
}
