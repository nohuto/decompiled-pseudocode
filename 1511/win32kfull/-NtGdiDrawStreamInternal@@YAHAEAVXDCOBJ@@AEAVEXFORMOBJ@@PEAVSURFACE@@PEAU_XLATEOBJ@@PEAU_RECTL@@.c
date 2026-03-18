/*
 * XREFs of ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C00418B4
 * Callers:
 *     GreDrawStream @ 0x1C00433E0 (GreDrawStream.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0019BFC (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002D820 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0041888 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0041C98 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C0041D3C (-bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     bCvtPts1 @ 0x1C0041E4C (bCvtPts1.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiDrawStreamInternal(
        struct XDCOBJ *this,
        struct EXFORMOBJ *a2,
        struct SURFACE *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        int a7,
        char *a8,
        struct _DRAWSTREAMINFO *a9)
{
  unsigned int v9; // ebx
  XDCOBJ *v10; // r15
  LONG top; // r14d
  LONG left; // esi
  LONG right; // edi
  LONG bottom; // r13d
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  int v19; // r8d
  __int64 v20; // rdi
  _DWORD *v21; // rcx
  __int64 v22; // rsi
  struct _POINTL *v23; // rdx
  int v24; // r8d
  struct _POINTL *v25; // rdx
  __int64 v26; // r14
  struct _RECTL v27; // xmm6
  struct ECLIPOBJ *v28; // rdx
  __int64 (__fastcall *v29)(__int64, __int64, __int64, __int64, int, struct _POINTL *, unsigned int, __int64, struct _DRAWSTREAMINFO *); // rdi
  __int64 v30; // rax
  int v31; // ecx
  struct SURFACE *v32; // r15
  struct _SURFOBJ *v33; // rdx
  __int64 v34; // rdx
  struct REGION *v36; // rax
  int v37; // r9d
  char *v38; // r14
  char *v39; // r15
  __int64 v40; // [rsp+58h] [rbp-81h] BYREF
  int v41; // [rsp+60h] [rbp-79h]
  LONG v42; // [rsp+64h] [rbp-75h]
  char *v43; // [rsp+68h] [rbp-71h]
  struct XDCOBJ *v44; // [rsp+70h] [rbp-69h]
  struct _DRAWSTREAMINFO *v45; // [rsp+78h] [rbp-61h]
  struct _XLATEOBJ *v46; // [rsp+80h] [rbp-59h]
  struct SURFACE *v47; // [rsp+88h] [rbp-51h]
  struct _RECTL v48; // [rsp+98h] [rbp-41h] BYREF
  struct _RECTL v49; // [rsp+A8h] [rbp-31h] BYREF

  v9 = 0;
  v10 = this;
  v41 = a7;
  top = a6->top;
  left = a6->left;
  right = a6->right;
  bottom = a6->bottom;
  v43 = a8;
  v45 = a9;
  v40 = 0LL;
  v46 = a4;
  v44 = this;
  v47 = a3;
  v48.left = left;
  v49 = *a5;
  v16 = *(_QWORD *)this;
  v42 = top;
  v48.top = top;
  v48.right = right;
  v17 = *(_QWORD *)(v16 + 512);
  v48.bottom = bottom;
  if ( ((*(_DWORD *)(v17 + 116) & 8) != 0 || *(_QWORD *)(v17 + 216)) && (*(_WORD *)(v17 + 102) & 0x200) != 0
    || !(unsigned int)_SurfaceAccessCheck((struct SURFACE *)v17, 512LL) )
  {
    EngSetLastError(5u);
    return v9;
  }
  v18 = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
  if ( (v18 & 1) != 0 )
  {
    if ( (v18 & 2) != 0 )
    {
      if ( (v18 & 0x43) != 0x43 )
        bCvtPts1(*(_QWORD *)a2, &v40);
      goto LABEL_8;
    }
    v38 = v43;
    v39 = &v43[v41];
    if ( v43 >= v39 )
    {
LABEL_62:
      v10 = v44;
      top = v42;
LABEL_8:
      if ( (*(_BYTE *)(*(_QWORD *)a2 + 32LL) & 0x43) != 0x43 )
      {
        bCvtPts1(*(_QWORD *)a2, &v48);
        bottom = v48.bottom;
        right = v48.right;
        top = v48.top;
        left = v48.left;
      }
      if ( *((_DWORD *)a2 + 3) )
      {
        ++left;
        ++right;
        v48.left = left;
        v48.right = right;
      }
      if ( left > right )
      {
        v48.left = right;
        v48.right = left;
      }
      if ( top > bottom )
      {
        v48.top = bottom;
        v48.bottom = top;
      }
      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v49) )
      {
        v20 = *(_QWORD *)v10;
        v21 = (_DWORD *)(*(_QWORD *)v10 + 1416LL);
        v22 = *(_QWORD *)(*(_QWORD *)v10 + 512LL);
        if ( (*(_DWORD *)(*(_QWORD *)v10 + 40LL) & 1) == 0 )
          v21 = (_DWORD *)(v20 + 1408);
        v23 = (struct _POINTL *)(v20 + 1416);
        LODWORD(v40) = *v21 + v40;
        HIDWORD(v40) += v21[1];
        if ( (*(_DWORD *)(v20 + 40) & 1) == 0 )
          v23 = (struct _POINTL *)(v20 + 1408);
        if ( (unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v49, v23, v19) )
        {
          v25 = (struct _POINTL *)(v20 + 1416);
          if ( (*(_DWORD *)(v20 + 40) & 1) == 0 )
            v25 = (struct _POINTL *)(v20 + 1408);
          if ( (unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v48, v25, v24) )
          {
            v26 = 0LL;
            if ( v49.left > v48.left
              || v49.right < v48.right
              || v49.top > v48.top
              || v49.bottom < v48.bottom
              || *(_DWORD *)(v20 + 1392) > v48.left
              || *(_DWORD *)(v20 + 1400) < v48.right
              || *(_DWORD *)(v20 + 1396) > v48.top
              || *(_DWORD *)(v20 + 1404) < v48.bottom )
            {
              v26 = v20 + 2160;
              v36 = XDCOBJ::prgnEffRao(v10);
              XCLIPOBJ::vSetup((XCLIPOBJ *)(v20 + 2160), v36, (struct ERECTL *)&v49, v37);
              v27 = *(struct _RECTL *)(v20 + 2164);
              v49 = v27;
            }
            else
            {
              ERECTL::operator*=(&v49, v20 + 1392);
              v27 = v49;
            }
            if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v49) )
            {
              return 1;
            }
            else
            {
              if ( (*(_DWORD *)(*(_QWORD *)v10 + 36LL) & 0xE0) != 0 )
              {
                v48 = v27;
                XDCOBJ::vAccumulateTight(v10, v28, &v48);
              }
              ++*(_DWORD *)(v22 + 92);
              v29 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, struct _POINTL *, unsigned int, __int64, struct _DRAWSTREAMINFO *))EngDrawStream;
              v30 = *(_QWORD *)(v22 + 48);
              if ( *(_QWORD *)(v30 + 3440) )
                v29 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, struct _POINTL *, unsigned int, __int64, struct _DRAWSTREAMINFO *))(v30 + 3440);
              if ( (*(_DWORD *)(*(_QWORD *)v10 + 36LL) & 0x200) == 0
                || !v30
                || (v31 = 1, (*(_DWORD *)(v30 + 56) & 0x20000) == 0) )
              {
                v31 = 0;
              }
              if ( *(int *)(v22 + 112) >= 0 && (!v31 || *(_WORD *)(v22 + 100) != 3) )
                v29 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, struct _POINTL *, unsigned int, __int64, struct _DRAWSTREAMINFO *))EngDrawStream;
              v32 = v47;
              v33 = 0LL;
              if ( v47 )
                v33 = (struct _SURFOBJ *)((char *)v47 + 24);
              *(_QWORD *)&v48.left = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)&v48, v33);
              if ( *(_QWORD *)&v48.left )
              {
                v34 = 0LL;
                if ( v32 )
                  v34 = (__int64)v32 + 24;
                if ( (unsigned int)v29(
                                     v22 + 24,
                                     v34,
                                     v26,
                                     (__int64)v46,
                                     (int)&v49,
                                     (struct _POINTL *)&v40,
                                     v41,
                                     (__int64)v43,
                                     v45) )
                  v9 = 1;
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)&v48);
            }
          }
        }
      }
      return v9;
    }
    while ( *(_DWORD *)v38 == 9 )
    {
      EXFORMOBJ::bXform(a2, (struct _POINTL *)(v38 + 4));
      v38 += 60;
      if ( v38 >= v39 )
        goto LABEL_62;
    }
  }
  return v9;
}
