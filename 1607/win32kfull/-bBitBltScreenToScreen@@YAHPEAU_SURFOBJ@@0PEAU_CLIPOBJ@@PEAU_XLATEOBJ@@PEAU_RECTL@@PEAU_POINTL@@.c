/*
 * XREFs of ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02981CC
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0294180 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffBitBlt @ 0x1C0102BB8 (OffBitBlt.c)
 *     OffCopyBits @ 0x1C0103410 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025B574 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C0293588 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z @ 0x1C02936E0 (--0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z.c)
 *     ??1MULTISORTBLTORDER@@QEAA@XZ @ 0x1C0293840 (--1MULTISORTBLTORDER@@QEAA@XZ.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C02939B8 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C0297C88 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
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
  SURFOBJ *v15; // rdx
  _QWORD *v16; // r15
  int v17; // r8d
  __int64 v18; // r12
  int v19; // ebx
  __int64 v20; // rsi
  int v21; // r15d
  __int64 v22; // rax
  struct PALETTE *v23; // r15
  __int64 v24; // rbx
  int v25; // r15d
  int v26; // r12d
  ULONG v27; // r8d
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
  __int16 v41; // si
  BOOL (__stdcall *v42)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct SURFACE *v43; // rax
  BOOL (__stdcall *v44)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  HSURF v45; // rbx
  _QWORD *v46; // rax
  int v48; // [rsp+70h] [rbp-90h]
  int v49; // [rsp+74h] [rbp-8Ch]
  int v50; // [rsp+78h] [rbp-88h]
  __int64 v51; // [rsp+80h] [rbp-80h] BYREF
  __int64 v52; // [rsp+88h] [rbp-78h]
  int v53[2]; // [rsp+90h] [rbp-70h]
  struct PALETTE *v54; // [rsp+98h] [rbp-68h]
  struct _XLATEOBJ *v55; // [rsp+A0h] [rbp-60h] BYREF
  SURFOBJ *pso; // [rsp+A8h] [rbp-58h]
  SIZEL sizl; // [rsp+B0h] [rbp-50h]
  HSURF hsurf; // [rsp+B8h] [rbp-48h]
  _QWORD *v59; // [rsp+C0h] [rbp-40h]
  _QWORD *v60; // [rsp+C8h] [rbp-38h]
  __int64 v61; // [rsp+D0h] [rbp-30h]
  const struct _RECTL *v62; // [rsp+D8h] [rbp-28h]
  __int64 v63; // [rsp+E0h] [rbp-20h]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  struct PALETTE *v65; // [rsp+F0h] [rbp-10h]
  __int64 v66; // [rsp+F8h] [rbp-8h]
  __int64 v67; // [rsp+100h] [rbp+0h]
  __int64 v68; // [rsp+108h] [rbp+8h]
  __int64 v69; // [rsp+110h] [rbp+10h]
  __int64 v70; // [rsp+118h] [rbp+18h]
  struct _XLATEOBJ *v71; // [rsp+120h] [rbp+20h]
  _BYTE v72[16]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD *v73; // [rsp+138h] [rbp+38h]
  _DWORD v74[14]; // [rsp+140h] [rbp+40h] BYREF
  struct _RECTL v75; // [rsp+178h] [rbp+78h] BYREF
  __int64 v76; // [rsp+188h] [rbp+88h] BYREF
  int v77; // [rsp+190h] [rbp+90h]
  int v78; // [rsp+194h] [rbp+94h]
  RECTL rclBounds; // [rsp+198h] [rbp+98h] BYREF

  dhpdev = a1->dhpdev;
  v14 = 0;
  v70 = (__int64)a2;
  v62 = a5;
  v69 = (__int64)a7;
  v49 = a5->top - a6->y;
  v50 = a5->left - a6->x;
  v68 = (__int64)a8;
  v67 = (__int64)a9;
  pso = 0LL;
  v48 = 1;
  MULTISORTBLTORDER::MULTISORTBLTORDER((MULTISORTBLTORDER *)v72, (struct _VDEV *)dhpdev, v50, v49);
  v16 = v73;
  v60 = v73;
  if ( !v73 )
    goto LABEL_67;
  v17 = *((_DWORD *)dhpdev + 4);
  v71 = a4;
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v74,
    a8,
    v17,
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    ((unsigned __int16)a10 ^ (unsigned __int16)(a10 >> 4)) & 0xF0F);
  if ( !v74[0] )
    goto LABEL_67;
  if ( a3 )
    rclBounds = a3->rclBounds;
  v66 = (LOBYTE(a1->fjBitmap) >> 6) & 1;
  do
  {
    v18 = v16[1];
    v19 = v50;
    v20 = v18;
    v59 = v16;
    v21 = v49;
    v61 = v18;
    while ( 1 )
    {
      v75.left = v19 + *(_DWORD *)(v20 + 28);
      v75.right = v19 + *(_DWORD *)(v20 + 36);
      v75.top = v21 + *(_DWORD *)(v20 + 32);
      v75.bottom = v21 + *(_DWORD *)(v20 + 40);
      if ( bIntersect(v62, &v75, &v75) && bIntersect(&v75, (const struct _RECTL *)(v18 + 28), &v75) )
      {
        *(_QWORD *)v53 = v20 + 72;
        LODWORD(v51) = v75.left - v19;
        hsurf = 0LL;
        HIDWORD(v51) = v75.top - v21;
        v22 = *(_QWORD *)(v20 + 64);
        v23 = *(struct PALETTE **)(v18 + 64);
        v52 = v22;
        v54 = v23;
        if ( (struct PALETTE *)v22 == v23 )
          goto LABEL_17;
        if ( *(_DWORD *)(v20 + 20) )
        {
          v24 = *(_QWORD *)(v20 + 48);
          v25 = v75.right - v75.left;
          v26 = v75.bottom - v75.top;
          sizl.cx = v75.right - v75.left;
          v27 = *(_DWORD *)(v24 + 2132);
          sizl.cy = v75.bottom - v75.top;
          hsurf = (HSURF)EngCreateBitmap(sizl, 0, v27, 0, 0LL);
          pso = EngLockSurface(hsurf);
          v15 = pso;
          if ( pso )
          {
            v28 = *(_QWORD *)(v24 + 2576);
            v76 = 0LL;
            v77 = v25;
            v78 = v26;
            if ( (*(_DWORD *)(v28 + 112) & 0x400) != 0 )
              v29 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v24 + 2864);
            else
              v29 = EngCopyBits;
            v48 &= OffCopyBits(
                     (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v29,
                     (LONG *)&gptlZero,
                     (__int64)pso,
                     *(int **)v53,
                     v52,
                     0LL,
                     0LL,
                     &v76,
                     &v51);
            v15 = pso;
          }
          v18 = v61;
          v23 = v54;
          v22 = (__int64)v15;
          *(_QWORD *)v53 = &gptlZero;
          v52 = (__int64)v15;
          v51 = 0LL;
LABEL_17:
          if ( v22 )
          {
            v30 = *(_QWORD *)(v18 + 48);
            v55 = 0LL;
            if ( v23 == (struct PALETTE *)v22 )
              goto LABEL_41;
            v31 = *(_DWORD *)(v18 + 24);
            if ( !v31 && !*(_DWORD *)(v20 + 24) )
              goto LABEL_41;
            v32 = *(_QWORD *)(*(_QWORD *)(v20 + 56) + 2576LL);
            v33 = *(_QWORD *)(v18 + 56);
            v63 = v32;
            v64 = *(_QWORD *)(v33 + 2576);
            v65 = ppalDefault;
            v54 = ppalDefault;
            if ( v31 && (*(_DWORD *)(v30 + 2196) & 0x100) != 0 )
            {
              v34 = DrvRealizeHalftonePalette((_QWORD *)v30, 0);
              v32 = v63;
              v54 = v34;
            }
            v35 = *(_QWORD *)(v20 + 56);
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
                                 (__int64 *)&v55,
                                 (__int64)pulXlate,
                                 v39,
                                 *(_QWORD *)(v32 + 120),
                                 *(_QWORD *)(v64 + 120),
                                 (__int64)v65,
                                 (__int64)v54,
                                 flXlate,
                                 v37,
                                 iUniq,
                                 32 * (*(_DWORD *)(v35 + 2196) & 0x100u)) )
            {
              a4 = v55;
LABEL_41:
              if ( !a3 || bIntersect(&rclBounds, &v75, &a3->rclBounds) )
              {
                if ( a10 == 52428 )
                {
                  v41 = *((_WORD *)v23 + 39);
                  if ( v66 )
                    *((_WORD *)v23 + 39) = v41 | 0x40;
                  if ( (*(_DWORD *)(*(_QWORD *)(v30 + 2576) + 112LL) & 0x400) != 0 )
                    v42 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v30 + 2864);
                  else
                    v42 = EngCopyBits;
                  v48 &= OffCopyBits(
                           (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v42,
                           (LONG *)(v18 + 72),
                           (__int64)v23,
                           *(int **)v53,
                           v52,
                           a3,
                           (__int64)a4,
                           &v75,
                           &v51);
                  *((_WORD *)v23 + 39) = v41;
                }
                else
                {
                  v43 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v23);
                  MULTIBRUSH::LoadElement((MULTIBRUSH *)v74, (struct _DISPSURF *)v18, v43);
                  if ( (*(_DWORD *)(*(_QWORD *)(v30 + 2576) + 112LL) & 1) != 0 )
                    v44 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(v30 + 2856);
                  else
                    v44 = EngBitBlt;
                  v48 &= OffBitBlt(
                           (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v44,
                           (int *)(v18 + 72),
                           (__int64)v23,
                           *(_DWORD **)v53,
                           v52,
                           v70,
                           a3,
                           (__int64)a4,
                           &v75,
                           &v51,
                           v69,
                           v68,
                           (_DWORD *)v67,
                           a10);
                  MULTIBRUSH::StoreElement((MULTIBRUSH *)v74, *(_DWORD *)(v18 + 16));
                }
              }
              else
              {
                a3->rclBounds = rclBounds;
              }
            }
            else
            {
              v48 = 0;
            }
            a4 = v71;
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v55);
          }
          v45 = hsurf;
          if ( hsurf )
          {
            EngUnlockSurface(pso);
            EngDeleteSurface(v45);
          }
          v19 = v50;
        }
        v21 = v49;
      }
      v46 = (_QWORD *)*v59;
      v59 = v46;
      if ( !v46 )
        break;
      v20 = v46[1];
    }
    v16 = (_QWORD *)*v60;
    v60 = v16;
  }
  while ( v16 );
  if ( a3 )
    a3->rclBounds = rclBounds;
  v14 = v48;
LABEL_67:
  MULTISORTBLTORDER::~MULTISORTBLTORDER((MULTISORTBLTORDER *)v72, (__int64)v15);
  return v14;
}
