/*
 * XREFs of ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0298F2C
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0294EE0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0026620 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026660 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffBitBlt @ 0x1C012896C (OffBitBlt.c)
 *     OffCopyBits @ 0x1C014CB60 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025E60C (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C02942F0 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z @ 0x1C0294448 (--0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z.c)
 *     ??1MULTISORTBLTORDER@@QEAA@XZ @ 0x1C02945A8 (--1MULTISORTBLTORDER@@QEAA@XZ.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C0294720 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C02989E8 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
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
  int v52[2]; // [rsp+88h] [rbp-78h]
  __int64 v53; // [rsp+90h] [rbp-70h]
  struct PALETTE *v54; // [rsp+98h] [rbp-68h]
  struct _XLATEOBJ *v55; // [rsp+A0h] [rbp-60h] BYREF
  SURFOBJ *pso; // [rsp+A8h] [rbp-58h]
  HSURF hsurf; // [rsp+B0h] [rbp-50h]
  _QWORD *v58; // [rsp+B8h] [rbp-48h]
  _QWORD *v59; // [rsp+C0h] [rbp-40h]
  SIZEL sizl; // [rsp+C8h] [rbp-38h]
  __int64 v61; // [rsp+D0h] [rbp-30h]
  const struct _RECTL *v62; // [rsp+D8h] [rbp-28h]
  __int64 v63; // [rsp+E0h] [rbp-20h]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  __int64 v65; // [rsp+F0h] [rbp-10h]
  struct _XLATEOBJ *v66; // [rsp+F8h] [rbp-8h]
  __int64 v67; // [rsp+100h] [rbp+0h]
  struct PALETTE *v68; // [rsp+108h] [rbp+8h]
  __int64 v69; // [rsp+110h] [rbp+10h]
  __int64 v70; // [rsp+118h] [rbp+18h]
  __int64 v71; // [rsp+120h] [rbp+20h]
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
  v64 = (__int64)a2;
  v62 = a5;
  v63 = (__int64)a7;
  v49 = a5->top - a6->y;
  v50 = a5->left - a6->x;
  v71 = (__int64)a8;
  v69 = (__int64)a9;
  pso = 0LL;
  v48 = 1;
  MULTISORTBLTORDER::MULTISORTBLTORDER((MULTISORTBLTORDER *)v72, (struct _VDEV *)dhpdev, v50, v49);
  v15 = v73;
  v59 = v73;
  if ( !v73 )
    goto LABEL_67;
  v16 = *((_DWORD *)dhpdev + 4);
  v66 = a4;
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v74,
    a8,
    v16,
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    ((unsigned __int16)a10 ^ (unsigned __int16)(a10 >> 4)) & 0xF0F);
  if ( !v74[0] )
    goto LABEL_67;
  if ( a3 )
    rclBounds = a3->rclBounds;
  v67 = (LOBYTE(a1->fjBitmap) >> 6) & 1;
  do
  {
    v17 = v15[1];
    v18 = v50;
    v19 = v17;
    v58 = v15;
    v20 = v49;
    v61 = v17;
    while ( 1 )
    {
      v75.left = v18 + *(_DWORD *)(v19 + 28);
      v75.right = v18 + *(_DWORD *)(v19 + 36);
      v75.top = v20 + *(_DWORD *)(v19 + 32);
      v75.bottom = v20 + *(_DWORD *)(v19 + 40);
      if ( bIntersect(v62, &v75, &v75) && bIntersect(&v75, (const struct _RECTL *)(v17 + 28), &v75) )
      {
        *(_QWORD *)v52 = v19 + 72;
        LODWORD(v51) = v75.left - v18;
        hsurf = 0LL;
        HIDWORD(v51) = v75.top - v20;
        v21 = *(_QWORD *)(v19 + 64);
        v22 = *(struct PALETTE **)(v17 + 64);
        v53 = v21;
        v54 = v22;
        if ( (struct PALETTE *)v21 == v22 )
          goto LABEL_17;
        if ( *(_DWORD *)(v19 + 20) )
        {
          v23 = *(_QWORD *)(v19 + 48);
          v24 = v75.right - v75.left;
          v25 = v75.bottom - v75.top;
          sizl.cx = v75.right - v75.left;
          v26 = *(_DWORD *)(v23 + 2132);
          sizl.cy = v75.bottom - v75.top;
          hsurf = (HSURF)EngCreateBitmap(sizl, 0, v26, 0, 0LL);
          pso = EngLockSurface(hsurf);
          v27 = pso;
          if ( pso )
          {
            v28 = *(_QWORD *)(v23 + 2576);
            v76 = 0LL;
            v77 = v24;
            v78 = v25;
            if ( (*(_DWORD *)(v28 + 112) & 0x400) != 0 )
              v29 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v23 + 2872);
            else
              v29 = EngCopyBits;
            v48 &= OffCopyBits(
                     (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v29,
                     (LONG *)&gptlZero,
                     (__int64)pso,
                     *(int **)v52,
                     v53,
                     0LL,
                     0LL,
                     &v76,
                     &v51);
            v27 = pso;
          }
          v17 = v61;
          v22 = v54;
          v21 = (__int64)v27;
          *(_QWORD *)v52 = &gptlZero;
          v53 = (__int64)v27;
          v51 = 0LL;
LABEL_17:
          if ( v21 )
          {
            v30 = *(_QWORD *)(v17 + 48);
            v55 = 0LL;
            if ( v22 == (struct PALETTE *)v21 )
              goto LABEL_41;
            v31 = *(_DWORD *)(v17 + 24);
            if ( !v31 && !*(_DWORD *)(v19 + 24) )
              goto LABEL_41;
            v32 = *(_QWORD *)(*(_QWORD *)(v19 + 56) + 2576LL);
            v33 = *(_QWORD *)(v17 + 56);
            v70 = v32;
            v65 = *(_QWORD *)(v33 + 2576);
            v68 = ppalDefault;
            v54 = ppalDefault;
            if ( v31 && (*(_DWORD *)(v30 + 2196) & 0x100) != 0 )
            {
              v34 = DrvRealizeHalftonePalette((_QWORD *)v30, 0);
              v32 = v70;
              v54 = v34;
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
                                 (__int64 *)&v55,
                                 pulXlate,
                                 v39,
                                 *(_QWORD *)(v32 + 120),
                                 *(_QWORD *)(v65 + 120),
                                 (__int64)v68,
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
                  v41 = *((_WORD *)v22 + 39);
                  if ( v67 )
                    *((_WORD *)v22 + 39) = v41 | 0x40;
                  if ( (*(_DWORD *)(*(_QWORD *)(v30 + 2576) + 112LL) & 0x400) != 0 )
                    v42 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v30 + 2872);
                  else
                    v42 = EngCopyBits;
                  v48 &= OffCopyBits(
                           (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v42,
                           (LONG *)(v17 + 72),
                           (__int64)v22,
                           *(int **)v52,
                           v53,
                           a3,
                           (__int64)a4,
                           &v75,
                           &v51);
                  *((_WORD *)v22 + 39) = v41;
                }
                else
                {
                  v43 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v22);
                  MULTIBRUSH::LoadElement((MULTIBRUSH *)v74, (struct _DISPSURF *)v17, v43);
                  if ( (*(_DWORD *)(*(_QWORD *)(v30 + 2576) + 112LL) & 1) != 0 )
                    v44 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(v30 + 2864);
                  else
                    v44 = EngBitBlt;
                  v48 &= OffBitBlt(
                           (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v44,
                           (LONG *)(v17 + 72),
                           (__int64)v22,
                           *(_DWORD **)v52,
                           v53,
                           v64,
                           a3,
                           (__int64)a4,
                           &v75,
                           &v51,
                           v63,
                           v71,
                           (_DWORD *)v69,
                           a10);
                  MULTIBRUSH::StoreElement((MULTIBRUSH *)v74, *(_DWORD *)(v17 + 16));
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
            a4 = v66;
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v55);
          }
          v45 = hsurf;
          if ( hsurf )
          {
            EngUnlockSurface(pso);
            EngDeleteSurface(v45);
          }
          v18 = v50;
        }
        v20 = v49;
      }
      v46 = (_QWORD *)*v58;
      v58 = v46;
      if ( !v46 )
        break;
      v19 = v46[1];
    }
    v15 = (_QWORD *)*v59;
    v59 = v15;
  }
  while ( v15 );
  if ( a3 )
    a3->rclBounds = rclBounds;
  v14 = v48;
LABEL_67:
  MULTISORTBLTORDER::~MULTISORTBLTORDER((MULTISORTBLTORDER *)v72);
  return v14;
}
