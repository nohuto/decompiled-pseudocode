/*
 * XREFs of ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0297D1C
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0294180 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffBitBlt @ 0x1C0102BB8 (OffBitBlt.c)
 *     OffCopyBits @ 0x1C0103410 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0269130 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C0269258 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C0293588 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0293970 (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C02939B8 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C0297C88 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0298934 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0298D44 (-bNextSurface@MSURF@@QEAAHXZ.c)
 */

__int64 __fastcall bBitBltFromScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  DHPDEV dhpdev; // rsi
  unsigned int v12; // ebx
  struct _XLATEOBJ *v13; // rdi
  int v15; // r15d
  int v16; // r14d
  int v17; // r13d
  int v19; // r13d
  struct _RECTL *v20; // rsi
  struct _SURFOBJ *v21; // r14
  int i; // eax
  __int64 v23; // r8
  int v24; // eax
  struct _SURFOBJ *v25; // r14
  struct _DISPSURF *v26; // rcx
  __int64 v27; // r13
  __int64 v28; // rsi
  __int64 v29; // rax
  int v30; // r11d
  int v31; // r10d
  int v32; // ecx
  unsigned int v33; // r8d
  __int64 v34; // rdx
  struct _RECTL v35; // xmm0
  struct SURFACE *v36; // rax
  BOOL (__stdcall *v37)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  BOOL (__stdcall *v38)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  struct _SURFOBJ *v40; // [rsp+78h] [rbp-88h]
  int v41; // [rsp+80h] [rbp-80h]
  int v42; // [rsp+84h] [rbp-7Ch]
  struct _XLATEOBJ *v43; // [rsp+88h] [rbp-78h] BYREF
  struct _RECTL *v44; // [rsp+90h] [rbp-70h]
  struct _SURFOBJ *v45; // [rsp+98h] [rbp-68h]
  struct _BRUSHOBJ *v46; // [rsp+A0h] [rbp-60h]
  __int64 *v47; // [rsp+A8h] [rbp-58h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  __int64 v50; // [rsp+C0h] [rbp-40h]
  struct _XLATEOBJ *v51; // [rsp+C8h] [rbp-38h]
  _DWORD v52[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v53[64]; // [rsp+110h] [rbp+10h] BYREF
  struct _DISPSURF *v54; // [rsp+150h] [rbp+50h]
  __int64 v55; // [rsp+158h] [rbp+58h]
  __int64 v56; // [rsp+160h] [rbp+60h]
  int v57[2]; // [rsp+168h] [rbp+68h]
  _BYTE v58[88]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v59; // [rsp+1D8h] [rbp+D8h]
  int v60[2]; // [rsp+1E0h] [rbp+E0h]
  struct _RECTL v61; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v62[2]; // [rsp+200h] [rbp+100h] BYREF

  dhpdev = a2->dhpdev;
  v12 = 0;
  v13 = a5;
  v50 = (__int64)a3;
  v15 = 1;
  v49 = (__int64)a8;
  v40 = a1;
  v45 = a2;
  v46 = a9;
  v16 = a6->left - a7->x;
  v17 = a6->top - a7->y;
  v44 = a6;
  v47 = (__int64 *)a7;
  v48 = (__int64)a10;
  v51 = a5;
  v41 = v16;
  v42 = v17;
  v61 = *a6;
  if ( a4 && a4->iDComplexity && !bIntersect(&a4->rclBounds, &v61, &v61) )
    return 1LL;
  v61.top -= v17;
  v61.bottom -= v17;
  v61.left -= v16;
  v61.right -= v16;
  v19 = a11;
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v52,
    v46,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    ((unsigned __int16)a11 ^ (unsigned __int16)(a11 >> 4)) & 0xF0F);
  if ( !v52[0] )
    return v12;
  v20 = v44;
  v21 = v40;
  MULTISURF::MULTISURF((MULTISURF *)v58, v40, v44);
  for ( i = MSURF::bFindSurface((MSURF *)v53, v45, 0LL, &v61); i; i = MSURF::bNextSurface((MSURF *)v53) )
  {
    v23 = v55;
    if ( (*(_DWORD *)(*(_QWORD *)(v55 + 24) + 1848LL) & 0x8000000) == 0 )
    {
      v24 = IsMetaRedirectionBitmap(v21);
      v23 = v55;
      if ( !v24 )
      {
        v25 = *(struct _SURFOBJ **)v60;
        v26 = v54;
LABEL_12:
        v43 = 0LL;
        if ( *((_DWORD *)v26 + 6) )
        {
          v27 = SURFOBJ_TO_SURFACE_NOT_NULL(v23);
          v28 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 120);
          if ( v28 )
            goto LABEL_20;
          if ( !v13 )
            goto LABEL_58;
          if ( *(_QWORD *)&v13[2].iUniq )
          {
            v28 = *(_QWORD *)&v13[2].iUniq;
            goto LABEL_20;
          }
          if ( (v13->flXlate & 1) != 0 )
          {
LABEL_58:
            v29 = SURFOBJ_TO_SURFACE_NOT_NULL(v45);
            if ( v25 == v40 )
              v28 = *(_QWORD *)(v29 + 120);
LABEL_20:
            v30 = v13 ? v13[1].iUniq : 0;
            v31 = v13 ? *(_DWORD *)&v13[1].iSrcType : 0;
            v32 = v13 ? v13[1].flXlate : 0;
            v33 = v13 ? v13[3].iUniq : 0;
            v34 = v13 ? (__int64)v13[2].pulXlate : 0LL;
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 (__int64 *)&v43,
                                 v34,
                                 v33,
                                 *(_QWORD *)(v27 + 120),
                                 v28,
                                 (__int64)ppalDefault,
                                 (__int64)ppalDefault,
                                 v32,
                                 v31,
                                 v30,
                                 0x2000) )
            {
              v13 = v43;
              v23 = v55;
              v19 = a11;
              v20 = v44;
              goto LABEL_37;
            }
          }
          v19 = a11;
          v15 = 0;
        }
        else
        {
LABEL_37:
          if ( *(_BYTE *)(v56 + 20) )
          {
            v39 = *(_QWORD *)(v56 + 4);
            LODWORD(v62[0]) = v41 + *(_DWORD *)(v56 + 4);
            LODWORD(v62[1]) = v41 + *(_DWORD *)(v56 + 12);
            HIDWORD(v62[0]) = v42 + *(_DWORD *)(v56 + 8);
            HIDWORD(v62[1]) = v42 + *(_DWORD *)(v56 + 16);
          }
          else
          {
            v35 = *v20;
            v39 = *v47;
            *(struct _RECTL *)v62 = v35;
          }
          v36 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v23);
          if ( v19 == 52428 )
          {
            if ( (*((_DWORD *)v36 + 28) & 0x400) != 0 )
              v37 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)v54 + 7) + 2864LL);
            else
              v37 = EngCopyBits;
            v15 &= OffCopyBits(
                     (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v37,
                     (LONG *)&gptlZero,
                     (__int64)v25,
                     *(int **)v57,
                     v55,
                     a4,
                     (__int64)v13,
                     v62,
                     &v39);
          }
          else
          {
            MULTIBRUSH::LoadElement((MULTIBRUSH *)v52, v54, v36);
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v55) + 112) & 1) != 0 )
              v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)v54 + 7) + 2856LL);
            else
              v38 = EngBitBlt;
            v15 &= OffBitBlt(
                     (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v38,
                     (int *)&gptlZero,
                     (__int64)v25,
                     *(_DWORD **)v57,
                     v55,
                     v50,
                     a4,
                     (__int64)v13,
                     v62,
                     &v39,
                     v49,
                     (__int64)v46,
                     (_DWORD *)v48,
                     v19);
            MULTIBRUSH::StoreElement((MULTIBRUSH *)v52, *((_DWORD *)v54 + 4));
          }
        }
        v13 = v51;
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v43);
        v20 = v44;
        goto LABEL_51;
      }
    }
    if ( !v59 )
      continue;
    v26 = v54;
    v25 = *(struct _SURFOBJ **)(*(_QWORD *)(v59 + 8) + 8LL * *((unsigned int *)v54 + 4));
    if ( v25 )
      goto LABEL_12;
LABEL_51:
    v21 = v40;
  }
  v12 = v15;
  MULTISURF::~MULTISURF((MULTISURF *)v58);
  return v12;
}
