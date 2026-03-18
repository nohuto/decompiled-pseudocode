/*
 * XREFs of ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C0036DD8
 * Callers:
 *     GreDrawStream @ 0x1C0039BA8 (GreDrawStream.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bContain@ERECTL@@QEAAHAEAU_RECTL@@@Z @ 0x1C0035590 (-bContain@ERECTL@@QEAAHAEAU_RECTL@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C003560C (-bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00356B4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00363F0 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00394D4 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C003955C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     bCvtPts1 @ 0x1C003BEC0 (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00491C8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDrawStreamInternal(
        DC **this,
        struct EXFORMOBJ *a2,
        struct SURFACE *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        int a7,
        char *a8,
        struct _DRAWSTREAMINFO *a9)
{
  unsigned int v10; // ebx
  struct SURFACE *v11; // r14
  LONG left; // r15d
  LONG right; // r12d
  DC *v15; // rax
  int v16; // ecx
  DC *v17; // rdi
  __int64 v18; // rsi
  struct EPOINTL *v19; // rax
  struct _POINTL *v20; // rax
  struct _POINTL *v21; // rax
  char *v22; // r15
  _DWORD *v23; // rcx
  struct _RECTL v24; // xmm6
  struct ECLIPOBJ *v25; // rdx
  __int64 (__fastcall *v26)(int, int, int, int, int, __int64, int, __int64, __int64); // rdi
  __int64 v27; // rax
  int v28; // ecx
  struct _SURFOBJ *v29; // rdx
  char *v30; // rdx
  struct REGION *v32; // rax
  int v33; // r9d
  char *v34; // rdi
  char *v35; // r14
  struct _POINTL v36; // [rsp+58h] [rbp-71h] BYREF
  int v37; // [rsp+60h] [rbp-69h]
  struct SURFACE *v38; // [rsp+68h] [rbp-61h]
  char *v39; // [rsp+70h] [rbp-59h]
  struct _DRAWSTREAMINFO *v40; // [rsp+78h] [rbp-51h]
  struct _XLATEOBJ *v41; // [rsp+80h] [rbp-49h]
  struct _RECTL v42; // [rsp+88h] [rbp-41h] BYREF
  struct _RECTL v43; // [rsp+98h] [rbp-31h] BYREF

  v10 = 0;
  v37 = a7;
  v11 = a3;
  left = a6->left;
  right = a6->right;
  v39 = a8;
  v40 = a9;
  v41 = a4;
  v36 = 0LL;
  v38 = a3;
  v42.left = left;
  v43 = *a5;
  v42.top = a6->top;
  v42.bottom = a6->bottom;
  v15 = *this;
  v42.right = right;
  if ( !(unsigned int)DestSurfaceAccessCheck(*((struct SURFACE **)v15 + 64)) )
  {
    EngSetLastError(5u);
    return v10;
  }
  v16 = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
  if ( (v16 & 1) != 0 )
  {
    if ( (v16 & 2) != 0 )
    {
      EXFORMOBJ::bXform(a2, &v36, 1uLL);
LABEL_5:
      if ( (*(_BYTE *)(*(_QWORD *)a2 + 32LL) & 0x43) != 0x43 )
      {
        bCvtPts1(*(_QWORD *)a2, &v42, 2LL);
        right = v42.right;
        left = v42.left;
      }
      if ( *((_DWORD *)a2 + 3) )
      {
        v42.left = left + 1;
        v42.right = right + 1;
      }
      ERECTL::vOrder((ERECTL *)&v42);
      if ( !ERECTL::bEmpty((ERECTL *)&v43) )
      {
        v17 = *this;
        v18 = *((_QWORD *)*this + 64);
        v19 = DC::eptlOrigin(*this);
        v36.x += *(_DWORD *)v19;
        v36.y += *((_DWORD *)v19 + 1);
        v20 = (struct _POINTL *)DC::eptlOrigin(v17);
        if ( (unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v43, v20) )
        {
          v21 = (struct _POINTL *)DC::eptlOrigin(v17);
          if ( (unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v42, v21) )
          {
            v22 = 0LL;
            if ( ERECTL::bContain((ERECTL *)&v43, &v42) && ERECTL::bContain((DC *)((char *)v17 + 1392), &v42) )
            {
              ERECTL::operator*=(&v43, v23);
              v24 = v43;
            }
            else
            {
              v22 = (char *)v17 + 2184;
              v32 = XDCOBJ::prgnEffRao((XDCOBJ *)this);
              XCLIPOBJ::vSetup((DC *)((char *)v17 + 2184), v32, (struct ERECTL *)&v43, v33);
              v24 = *(struct _RECTL *)((char *)v17 + 2188);
              v43 = v24;
            }
            if ( ERECTL::bEmpty((ERECTL *)&v43) )
            {
              return 1;
            }
            else
            {
              if ( (*((_DWORD *)*this + 9) & 0xE0) != 0 )
              {
                v42 = v24;
                XDCOBJ::vAccumulateTight((XDCOBJ *)this, v25, (struct ERECTL *)&v42);
              }
              ++*(_DWORD *)(v18 + 92);
              v26 = EngDrawStream;
              v27 = *(_QWORD *)(v18 + 48);
              if ( *(_QWORD *)(v27 + 3432) )
                v26 = *(__int64 (__fastcall **)(int, int, int, int, int, __int64, int, __int64, __int64))(v27 + 3432);
              if ( (*((_DWORD *)*this + 9) & 0x200) == 0 || !v27 || (v28 = 1, (*(_DWORD *)(v27 + 56) & 0x20000) == 0) )
                v28 = 0;
              if ( *(int *)(v18 + 112) >= 0 && (!v28 || *(_WORD *)(v18 + 100) != 3) )
                v26 = EngDrawStream;
              v29 = 0LL;
              if ( v11 )
                v29 = (struct _SURFOBJ *)((char *)v11 + 24);
              *(_QWORD *)&v42.left = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)&v42, v29);
              if ( *(_QWORD *)&v42.left )
              {
                v30 = 0LL;
                if ( v11 )
                  v30 = (char *)v11 + 24;
                if ( (unsigned int)v26(
                                     v18 + 24,
                                     (int)v30,
                                     (int)v22,
                                     (int)v41,
                                     (int)&v43,
                                     (__int64)&v36,
                                     v37,
                                     (__int64)v39,
                                     (__int64)v40) )
                  v10 = 1;
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)&v42);
            }
          }
        }
      }
      return v10;
    }
    v34 = v39;
    v35 = &v39[v37];
    if ( v39 >= v35 )
    {
LABEL_42:
      v11 = v38;
      goto LABEL_5;
    }
    while ( *(_DWORD *)v34 == 9 )
    {
      EXFORMOBJ::bXform(a2, (struct ERECTL *)(v34 + 4));
      v34 += 60;
      if ( v34 >= v35 )
        goto LABEL_42;
    }
  }
  return v10;
}
