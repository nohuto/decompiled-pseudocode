/*
 * XREFs of ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C029857C
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02949E0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffBitBlt @ 0x1C00E9B20 (OffBitBlt.c)
 *     OffCopyBits @ 0x1C00EAB10 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C026AC70 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C026AD98 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C0293DF8 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x1C02941E0 (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C0294228 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C02984E8 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0299194 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02995A4 (-bNextSurface@MSURF@@QEAAHXZ.c)
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
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rax
  int v31; // r11d
  int v32; // r10d
  int v33; // ecx
  unsigned int v34; // r8d
  __int64 v35; // rdx
  struct _RECTL v36; // xmm0
  struct SURFACE *v37; // rax
  BOOL (__stdcall *v38)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  BOOL (__stdcall *v39)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v41; // [rsp+78h] [rbp-88h] BYREF
  struct _XLATEOBJ *v42; // [rsp+80h] [rbp-80h] BYREF
  struct _RECTL *v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+90h] [rbp-70h]
  int v45; // [rsp+94h] [rbp-6Ch]
  struct _SURFOBJ *v46; // [rsp+98h] [rbp-68h]
  struct _BRUSHOBJ *v47; // [rsp+A0h] [rbp-60h]
  __int64 *v48; // [rsp+A8h] [rbp-58h]
  struct _XLATEOBJ *v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  __int64 v51; // [rsp+C0h] [rbp-40h]
  __int64 v52; // [rsp+C8h] [rbp-38h]
  _DWORD v53[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v54[64]; // [rsp+110h] [rbp+10h] BYREF
  struct _DISPSURF *v55; // [rsp+150h] [rbp+50h]
  __int64 v56; // [rsp+158h] [rbp+58h]
  __int64 v57; // [rsp+160h] [rbp+60h]
  int v58[2]; // [rsp+168h] [rbp+68h]
  _BYTE v59[88]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v60; // [rsp+1D8h] [rbp+D8h]
  int v61[2]; // [rsp+1E0h] [rbp+E0h]
  struct _RECTL v62; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v63[2]; // [rsp+200h] [rbp+100h] BYREF

  dhpdev = a2->dhpdev;
  v12 = 0;
  v13 = a5;
  v51 = (__int64)a3;
  v15 = 1;
  v50 = (__int64)a8;
  v46 = a2;
  v47 = a9;
  v16 = a6->left - a7->x;
  v17 = a6->top - a7->y;
  v43 = a6;
  v48 = (__int64 *)a7;
  v52 = (__int64)a10;
  v49 = a5;
  v44 = v16;
  v45 = v17;
  v62 = *a6;
  if ( a4 && a4->iDComplexity && !bIntersect(&a4->rclBounds, &v62, &v62) )
    return 1LL;
  v62.top -= v17;
  v62.bottom -= v17;
  v62.left -= v16;
  v62.right -= v16;
  v19 = a11;
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v53,
    v47,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    ((unsigned __int16)a11 ^ (unsigned __int16)(a11 >> 4)) & 0xF0F);
  if ( !v53[0] )
    return v12;
  v20 = v43;
  v21 = a1;
  MULTISURF::MULTISURF((MULTISURF *)v59, a1, v43);
  for ( i = MSURF::bFindSurface((MSURF *)v54, v46, 0LL, &v62); i; i = MSURF::bNextSurface((MSURF *)v54) )
  {
    v23 = v56;
    if ( (*(_DWORD *)(*(_QWORD *)(v56 + 24) + 1848LL) & 0x8000000) == 0 )
    {
      v24 = IsMetaRedirectionBitmap(v21);
      v23 = v56;
      if ( !v24 )
      {
        v25 = *(struct _SURFOBJ **)v61;
        v26 = v55;
LABEL_12:
        v42 = 0LL;
        if ( *((_DWORD *)v26 + 6) )
        {
          v27 = SURFOBJ_TO_SURFACE_NOT_NULL(v23);
          v29 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 120);
          if ( v29 )
            goto LABEL_20;
          if ( !v13 )
            goto LABEL_58;
          if ( *(_QWORD *)&v13[2].iUniq )
          {
            v29 = *(_QWORD *)&v13[2].iUniq;
            goto LABEL_20;
          }
          if ( (v13->flXlate & 1) != 0 )
          {
LABEL_58:
            v30 = SURFOBJ_TO_SURFACE_NOT_NULL(v46);
            if ( v25 == a1 )
              v29 = *(_QWORD *)(v30 + 120);
LABEL_20:
            v31 = v13 ? v13[1].iUniq : 0;
            v32 = v13 ? *(_DWORD *)&v13[1].iSrcType : 0;
            v33 = v13 ? v13[1].flXlate : 0;
            v34 = v13 ? v13[3].iUniq : 0;
            v35 = v13 ? (__int64)v13[2].pulXlate : 0LL;
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 (__int64 *)&v42,
                                 v35,
                                 v34,
                                 *(_QWORD *)(v27 + 120),
                                 v29,
                                 (__int64)ppalDefault,
                                 (__int64)ppalDefault,
                                 v33,
                                 v32,
                                 v31,
                                 0x2000) )
            {
              v13 = v42;
              v23 = v56;
              v19 = a11;
              v20 = v43;
              goto LABEL_37;
            }
          }
          v19 = a11;
          v15 = 0;
        }
        else
        {
LABEL_37:
          if ( *(_BYTE *)(v57 + 20) )
          {
            v41 = *(_QWORD *)(v57 + 4);
            LODWORD(v63[0]) = v44 + *(_DWORD *)(v57 + 4);
            LODWORD(v63[1]) = v44 + *(_DWORD *)(v57 + 12);
            HIDWORD(v63[0]) = v45 + *(_DWORD *)(v57 + 8);
            HIDWORD(v63[1]) = v45 + *(_DWORD *)(v57 + 16);
          }
          else
          {
            v36 = *v20;
            v41 = *v48;
            *(struct _RECTL *)v63 = v36;
          }
          v37 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v23);
          if ( v19 == 52428 )
          {
            if ( (*((_DWORD *)v37 + 28) & 0x400) != 0 )
              v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)v55 + 7) + 2872LL);
            else
              v38 = EngCopyBits;
            v15 &= OffCopyBits(
                     (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v38,
                     (LONG *)&gptlZero,
                     (__int64)v25,
                     *(int **)v58,
                     v56,
                     a4,
                     (__int64)v13,
                     v63,
                     &v41);
          }
          else
          {
            MULTIBRUSH::LoadElement((MULTIBRUSH *)v53, v55, v37);
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v56) + 112) & 1) != 0 )
              v39 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)v55 + 7) + 2864LL);
            else
              v39 = EngBitBlt;
            v15 &= OffBitBlt(
                     (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v39,
                     (int *)&gptlZero,
                     (__int64)v25,
                     *(_DWORD **)v58,
                     v56,
                     v51,
                     a4,
                     (__int64)v13,
                     v63,
                     &v41,
                     v50,
                     (__int64)v47,
                     (_DWORD *)v52,
                     v19);
            MULTIBRUSH::StoreElement((MULTIBRUSH *)v53, *((_DWORD *)v55 + 4));
          }
        }
        v13 = v49;
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v42, v28);
        v20 = v43;
        goto LABEL_51;
      }
    }
    if ( !v60 )
      continue;
    v26 = v55;
    v25 = *(struct _SURFOBJ **)(*(_QWORD *)(v60 + 8) + 8LL * *((unsigned int *)v55 + 4));
    if ( v25 )
      goto LABEL_12;
LABEL_51:
    v21 = a1;
  }
  v12 = v15;
  MULTISURF::~MULTISURF((MULTISURF *)v59);
  return v12;
}
