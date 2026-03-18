/*
 * XREFs of ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0298A2C
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02949E0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffBitBlt @ 0x1C00E9B20 (OffBitBlt.c)
 *     OffCopyBits @ 0x1C00EAB10 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025DDFC (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C0293DF8 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z @ 0x1C0293F50 (--0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z.c)
 *     ??1MULTISORTBLTORDER@@QEAA@XZ @ 0x1C02940B0 (--1MULTISORTBLTORDER@@QEAA@XZ.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C0294228 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C02984E8 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 */

__int64 __fastcall bBitBltScreenToScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        struct _POINTL *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  DHPDEV dhpdev; // rbx
  unsigned int v14; // edi
  _QWORD *v15; // r15
  int v16; // r8d
  __int64 v17; // r12
  int v18; // ebx
  __int64 v19; // rsi
  int v20; // r15d
  __int64 v21; // rax
  struct PALETTE *v22; // r15
  __int64 v23; // rbx
  int v24; // r15d
  int v25; // r12d
  ULONG v26; // r8d
  SURFOBJ *v27; // rdx
  __int64 v28; // rax
  BOOL (__stdcall *v29)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  __int64 v30; // rbx
  int v31; // ecx
  __int64 v32; // r9
  __int64 v33; // rax
  struct PALETTE *v34; // rax
  __int64 v35; // rax
  ULONG iUniq; // esi
  int v37; // r11d
  FLONG flXlate; // ecx
  ULONG v39; // r8d
  ULONG *pulXlate; // rdx
  __int64 v41; // rdx
  __int16 v42; // si
  BOOL (__stdcall *v43)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct SURFACE *v44; // rax
  BOOL (__stdcall *v45)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  HSURF v46; // rbx
  _QWORD *v47; // rax
  int v49; // [rsp+70h] [rbp-90h]
  int v50; // [rsp+74h] [rbp-8Ch]
  int v51; // [rsp+78h] [rbp-88h]
  __int64 v52; // [rsp+80h] [rbp-80h] BYREF
  int v53[2]; // [rsp+88h] [rbp-78h]
  __int64 v54; // [rsp+90h] [rbp-70h]
  struct PALETTE *v55; // [rsp+98h] [rbp-68h]
  struct _XLATEOBJ *v56; // [rsp+A0h] [rbp-60h] BYREF
  SURFOBJ *pso; // [rsp+A8h] [rbp-58h]
  HSURF hsurf; // [rsp+B0h] [rbp-50h]
  _QWORD *v59; // [rsp+B8h] [rbp-48h]
  _QWORD *v60; // [rsp+C0h] [rbp-40h]
  SIZEL sizl; // [rsp+C8h] [rbp-38h]
  __int64 v62; // [rsp+D0h] [rbp-30h]
  const struct _RECTL *v63; // [rsp+D8h] [rbp-28h]
  __int64 v64; // [rsp+E0h] [rbp-20h]
  __int64 v65; // [rsp+E8h] [rbp-18h]
  __int64 v66; // [rsp+F0h] [rbp-10h]
  struct _XLATEOBJ *v67; // [rsp+F8h] [rbp-8h]
  __int64 v68; // [rsp+100h] [rbp+0h]
  struct PALETTE *v69; // [rsp+108h] [rbp+8h]
  __int64 v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  __int64 v72; // [rsp+120h] [rbp+20h]
  _BYTE v73[16]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD *v74; // [rsp+138h] [rbp+38h]
  _DWORD v75[14]; // [rsp+140h] [rbp+40h] BYREF
  struct _RECTL v76; // [rsp+178h] [rbp+78h] BYREF
  __int64 v77; // [rsp+188h] [rbp+88h] BYREF
  int v78; // [rsp+190h] [rbp+90h]
  int v79; // [rsp+194h] [rbp+94h]
  RECTL rclBounds; // [rsp+198h] [rbp+98h] BYREF

  dhpdev = a1->dhpdev;
  v14 = 0;
  v65 = (__int64)a2;
  v63 = a5;
  v64 = (__int64)a7;
  v50 = a5->top - a6->y;
  v51 = a5->left - a6->x;
  v72 = (__int64)a8;
  v70 = (__int64)a9;
  pso = 0LL;
  v49 = 1;
  MULTISORTBLTORDER::MULTISORTBLTORDER((MULTISORTBLTORDER *)v73, (struct _VDEV *)dhpdev, v51, v50);
  v15 = v74;
  v60 = v74;
  if ( !v74 )
    goto LABEL_67;
  v16 = *((_DWORD *)dhpdev + 4);
  v67 = a4;
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v75,
    a8,
    v16,
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    ((unsigned __int16)a10 ^ (unsigned __int16)(a10 >> 4)) & 0xF0F);
  if ( !v75[0] )
    goto LABEL_67;
  if ( a3 )
    rclBounds = a3->rclBounds;
  v68 = (LOBYTE(a1->fjBitmap) >> 6) & 1;
  do
  {
    v17 = v15[1];
    v18 = v51;
    v19 = v17;
    v59 = v15;
    v20 = v50;
    v62 = v17;
    while ( 1 )
    {
      v76.left = v18 + *(_DWORD *)(v19 + 28);
      v76.right = v18 + *(_DWORD *)(v19 + 36);
      v76.top = v20 + *(_DWORD *)(v19 + 32);
      v76.bottom = v20 + *(_DWORD *)(v19 + 40);
      if ( bIntersect(v63, &v76, &v76) && bIntersect(&v76, (const struct _RECTL *)(v17 + 28), &v76) )
      {
        *(_QWORD *)v53 = v19 + 72;
        LODWORD(v52) = v76.left - v18;
        hsurf = 0LL;
        HIDWORD(v52) = v76.top - v20;
        v21 = *(_QWORD *)(v19 + 64);
        v22 = *(struct PALETTE **)(v17 + 64);
        v54 = v21;
        v55 = v22;
        if ( (struct PALETTE *)v21 == v22 )
          goto LABEL_17;
        if ( *(_DWORD *)(v19 + 20) )
        {
          v23 = *(_QWORD *)(v19 + 48);
          v24 = v76.right - v76.left;
          v25 = v76.bottom - v76.top;
          sizl.cx = v76.right - v76.left;
          v26 = *(_DWORD *)(v23 + 2132);
          sizl.cy = v76.bottom - v76.top;
          hsurf = (HSURF)EngCreateBitmap(sizl, 0, v26, 0, 0LL);
          pso = EngLockSurface(hsurf);
          v27 = pso;
          if ( pso )
          {
            v28 = *(_QWORD *)(v23 + 2576);
            v77 = 0LL;
            v78 = v24;
            v79 = v25;
            if ( (*(_DWORD *)(v28 + 112) & 0x400) != 0 )
              v29 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v23 + 2872);
            else
              v29 = EngCopyBits;
            v49 &= OffCopyBits(
                     (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v29,
                     (LONG *)&gptlZero,
                     (__int64)pso,
                     *(int **)v53,
                     v54,
                     0LL,
                     0LL,
                     &v77,
                     &v52);
            v27 = pso;
          }
          v17 = v62;
          v22 = v55;
          v21 = (__int64)v27;
          *(_QWORD *)v53 = &gptlZero;
          v54 = (__int64)v27;
          v52 = 0LL;
LABEL_17:
          if ( v21 )
          {
            v30 = *(_QWORD *)(v17 + 48);
            v56 = 0LL;
            if ( v22 == (struct PALETTE *)v21 )
              goto LABEL_41;
            v31 = *(_DWORD *)(v17 + 24);
            if ( !v31 && !*(_DWORD *)(v19 + 24) )
              goto LABEL_41;
            v32 = *(_QWORD *)(*(_QWORD *)(v19 + 56) + 2576LL);
            v33 = *(_QWORD *)(v17 + 56);
            v71 = v32;
            v66 = *(_QWORD *)(v33 + 2576);
            v69 = ppalDefault;
            v55 = ppalDefault;
            if ( v31 && (*(_DWORD *)(v30 + 2196) & 0x100) != 0 )
            {
              v34 = DrvRealizeHalftonePalette((_QWORD *)v30, 0);
              v32 = v71;
              v55 = v34;
            }
            v35 = *(_QWORD *)(v19 + 56);
            if ( a4 )
              iUniq = a4[1].iUniq;
            else
              iUniq = 0;
            if ( a4 )
              v37 = *(_DWORD *)&a4[1].iSrcType;
            else
              v37 = 0;
            if ( a4 )
              flXlate = a4[1].flXlate;
            else
              flXlate = 0;
            if ( a4 )
              v39 = a4[3].iUniq;
            else
              v39 = 0;
            if ( a4 )
              pulXlate = a4[2].pulXlate;
            else
              pulXlate = 0LL;
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 (__int64 *)&v56,
                                 (__int64)pulXlate,
                                 v39,
                                 *(_QWORD *)(v32 + 120),
                                 *(_QWORD *)(v66 + 120),
                                 (__int64)v69,
                                 (__int64)v55,
                                 flXlate,
                                 v37,
                                 iUniq,
                                 32 * (*(_DWORD *)(v35 + 2196) & 0x100u)) )
            {
              a4 = v56;
LABEL_41:
              if ( !a3 || bIntersect(&rclBounds, &v76, &a3->rclBounds) )
              {
                if ( a10 == 52428 )
                {
                  v42 = *((_WORD *)v22 + 39);
                  if ( v68 )
                    *((_WORD *)v22 + 39) = v42 | 0x40;
                  if ( (*(_DWORD *)(*(_QWORD *)(v30 + 2576) + 112LL) & 0x400) != 0 )
                    v43 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v30 + 2872);
                  else
                    v43 = EngCopyBits;
                  v49 &= OffCopyBits(
                           (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v43,
                           (LONG *)(v17 + 72),
                           (__int64)v22,
                           *(int **)v53,
                           v54,
                           a3,
                           (__int64)a4,
                           &v76,
                           &v52);
                  *((_WORD *)v22 + 39) = v42;
                }
                else
                {
                  v44 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v22);
                  MULTIBRUSH::LoadElement((MULTIBRUSH *)v75, (struct _DISPSURF *)v17, v44);
                  if ( (*(_DWORD *)(*(_QWORD *)(v30 + 2576) + 112LL) & 1) != 0 )
                    v45 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(v30 + 2864);
                  else
                    v45 = EngBitBlt;
                  v49 &= OffBitBlt(
                           (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v45,
                           (int *)(v17 + 72),
                           (__int64)v22,
                           *(_DWORD **)v53,
                           v54,
                           v65,
                           a3,
                           (__int64)a4,
                           &v76,
                           &v52,
                           v64,
                           v72,
                           (_DWORD *)v70,
                           a10);
                  MULTIBRUSH::StoreElement((MULTIBRUSH *)v75, *(_DWORD *)(v17 + 16));
                }
              }
              else
              {
                a3->rclBounds = rclBounds;
              }
            }
            else
            {
              v49 = 0;
            }
            a4 = v67;
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v56, v41);
          }
          v46 = hsurf;
          if ( hsurf )
          {
            EngUnlockSurface(pso);
            EngDeleteSurface(v46);
          }
          v18 = v51;
        }
        v20 = v50;
      }
      v47 = (_QWORD *)*v59;
      v59 = v47;
      if ( !v47 )
        break;
      v19 = v47[1];
    }
    v15 = (_QWORD *)*v60;
    v60 = v15;
  }
  while ( v15 );
  if ( a3 )
    a3->rclBounds = rclBounds;
  v14 = v49;
LABEL_67:
  MULTISORTBLTORDER::~MULTISORTBLTORDER((MULTISORTBLTORDER *)v73);
  return v14;
}
