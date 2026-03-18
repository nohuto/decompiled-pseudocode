/*
 * XREFs of ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C02703F4
 * Callers:
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C0270D20 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C0270F3C (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0271B2C (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     ?vRefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0013D4C (-vRefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008A54C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008B008 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00F5EF0 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C00FE250 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C014CB60 (OffCopyBits.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C014D0E8 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C025B15C (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C026C100 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C026C228 (--1MULTISURF@@QEAA@XZ.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z @ 0x1C0299904 (-bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall bSpCreateShape(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct PALETTE *a6,
        ULONG a7,
        unsigned int a8,
        struct _RECTL *a9)
{
  SPRITERANGELOCK *v10; // r13
  ULONG v12; // edi
  __int64 v13; // rdx
  signed int v14; // r15d
  signed int v15; // r12d
  SURFOBJ *Surface; // rcx
  _DWORD *v17; // rax
  struct _SURFOBJ *v18; // r14
  _DWORD *v19; // r10
  int v20; // eax
  int v21; // edx
  struct _RECTL *v22; // rax
  unsigned int left; // edi
  LONG top; // r15d
  LONG right; // r12d
  LONG bottom; // ebx
  int v27; // edx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // ecx
  LONG v33; // eax
  struct _SURFOBJ *v34; // rdi
  LONG v35; // eax
  int v36; // ecx
  HDEV hdev; // rbx
  BOOL (__stdcall *v39)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r12
  __int64 v40; // rdi
  __int64 v41; // r15
  __int64 v42; // rbx
  __int64 v43; // rax
  unsigned int v44; // [rsp+50h] [rbp-B0h]
  struct _RECTL *v45; // [rsp+58h] [rbp-A8h] BYREF
  int v46; // [rsp+60h] [rbp-A0h]
  int v47; // [rsp+64h] [rbp-9Ch]
  struct _SURFOBJ *v48; // [rsp+68h] [rbp-98h]
  struct _RECTL v49; // [rsp+70h] [rbp-90h] BYREF
  __int64 v50; // [rsp+80h] [rbp-80h]
  __int64 v51; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v52[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v53[96]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v54; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  __int64 v56; // [rsp+110h] [rbp+10h] BYREF
  LONG v57; // [rsp+118h] [rbp+18h]
  LONG v58; // [rsp+11Ch] [rbp+1Ch]

  v10 = (SPRITERANGELOCK *)(*((_QWORD *)a1 + 2) + 128LL);
  v12 = a7;
  v45 = a9;
  v44 = 0;
  v50 = (__int64)a4;
  v48 = a3;
  *(_QWORD *)&v49.left = a2;
  SPRITERANGELOCK::vLockExclusive(v10);
  v51 = *((_QWORD *)a1 + 18);
  v56 = (__int64)a6;
  XEPALOBJ::vRefPalette((XEPALOBJ *)&v56, v13);
  XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v51);
  *((_QWORD *)a1 + 18) = a6;
  v14 = a5->right - a5->left;
  v15 = a5->bottom - a5->top;
  if ( !a7 )
    v12 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 72LL);
  Surface = (SURFOBJ *)*((_QWORD *)a1 + 16);
  if ( !Surface
    || (Surface->iType || (Surface->fjBitmap & 0x20) != 0) && a8
    || Surface->iBitmapFormat != v12
    || Surface->sizlBitmap.cx < v14
    || Surface->sizlBitmap.cy < v15 )
  {
    if ( (*(_DWORD *)a1 & 0x40) != 0 )
    {
      if ( Surface->iBitmapFormat != v12 )
      {
        EngUnlockSurface(Surface);
        v17 = (_DWORD *)*((_QWORD *)a1 + 1);
        *((_QWORD *)a1 + 16) = 0LL;
        *(_DWORD *)a1 &= ~0x40u;
        Surface = 0LL;
        *((_QWORD *)a1 + 30) = 0LL;
        if ( v17 )
          *v17 &= ~0x40u;
      }
    }
    else
    {
      vSpDeleteSurface(Surface);
      Surface = 0LL;
    }
    if ( (*(_DWORD *)a1 & 0x40) == 0 && *((_QWORD *)a1 + 30) && a8 )
    {
      Surface = EngLockSurface(*((HSURF *)a1 + 30));
      if ( !Surface )
        goto LABEL_21;
      *(_DWORD *)a1 |= 0x40u;
    }
    if ( Surface )
    {
LABEL_22:
      *((_QWORD *)a1 + 16) = Surface;
      goto LABEL_23;
    }
LABEL_21:
    Surface = psoSpCreateSurface(*((struct _SPRITESTATE **)a1 + 2), v12, v14, v15);
    goto LABEL_22;
  }
LABEL_23:
  SPRITERANGELOCK::vUnlock(v10);
  SPRITERANGELOCK::vLockShared(v10);
  v18 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
  if ( !v18 )
    goto LABEL_62;
  v19 = (_DWORD *)((char *)a1 + 136);
  v44 = 1;
  *((_DWORD *)a1 + 34) = -a5->left;
  v20 = -a5->top;
  *((_DWORD *)a1 + 38) = v12;
  *((_DWORD *)a1 + 35) = v20;
  if ( a6 )
    v21 = **((_DWORD **)a6 + 16) | *(_DWORD *)(*((_QWORD *)a6 + 16) + 8LL);
  else
    v21 = 0;
  v22 = v45;
  *((_DWORD *)a1 + 39) = v21;
  left = a5->left;
  top = a5->top;
  right = a5->right;
  bottom = a5->bottom;
  v58 = bottom;
  v56 = __PAIR64__(top, left);
  v57 = right;
  if ( v22 )
  {
    v27 = v22->right - *v19;
    v28 = v22->top - *((_DWORD *)a1 + 35);
    v29 = v22->bottom - *((_DWORD *)a1 + 35);
    LODWORD(v45) = v22->left - *v19;
    v46 = v27;
    HIDWORD(v45) = v28;
    v47 = v29;
    ERECTL::operator*=(&v56, &v45);
    bottom = v58;
    right = v57;
    top = HIDWORD(v56);
    left = v56;
  }
  if ( ERECTL::bEmpty((ERECTL *)&v56) )
    goto LABEL_62;
  if ( (*(_DWORD *)a1 & 0x40) == 0
    || (*(_DWORD *)a1 & 0x200) != 0 && (v30 = SURFOBJ_TO_SURFACE_NOT_NULL(v18), *(HSURF *)(v30 + 336) == v48->hsurf) )
  {
    v31 = *(_QWORD *)&v49.left;
    v32 = **(_DWORD **)&v49.left;
    v33 = **(_DWORD **)&v49.left + left;
    v34 = v48;
    v49.left = v33;
    v35 = v32 + right;
    v36 = *(_DWORD *)(v31 + 4);
    v49.right = v35;
    v49.top = v36 + top;
    v49.bottom = v36 + bottom;
    MULTISURF::MULTISURF((MULTISURF *)v53, v48, &v49);
    v52[0] = 0LL;
    v45 = 0LL;
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x400) != 0 )
    {
      hdev = v18->hdev;
      if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v53, hdev) )
      {
        SPRITERANGELOCK::vUnlock(v10);
        SPRITERANGELOCK::vLockExclusive(v10);
        vSpDeleteSurface(*((SURFOBJ **)a1 + 16));
        *((_QWORD *)a1 + 16) = 0LL;
        SPRITERANGELOCK::vUnlock(v10);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)&v45);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v52);
        MULTISURF::~MULTISURF((MULTISURF *)v53);
        return 0LL;
      }
    }
    else
    {
      hdev = v34->hdev;
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v34) + 112) & 0x400) == 0 )
      {
        v39 = EngCopyBits;
LABEL_40:
        if ( SURFREFVIEW::bMap((SURFREFVIEW *)v52, (struct _SURFOBJ *)v54)
          && SURFREFVIEW::bMap((SURFREFVIEW *)&v45, v18) )
        {
          v40 = 0LL;
          if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x200) == 0 )
          {
            v40 = SURFOBJ_TO_SURFACE_NOT_NULL(v18);
            GreLockDisplayDevice(*(_QWORD *)(v40 + 48));
          }
          v41 = v54;
          v42 = 0LL;
          if ( v54 )
          {
            if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v54) + 112) & 0x4000) != 0
               || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v41) + 112) < 0)
              && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v41) + 112) & 0x200) == 0 )
            {
              v42 = SURFOBJ_TO_SURFACE_NOT_NULL(v41);
              GreLockDisplayDevice(*(_QWORD *)(v42 + 48));
            }
            v41 = v54;
          }
          OffCopyBits(
            (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v39,
            (LONG *)a1 + 34,
            (__int64)v18,
            (int *)&gptlZero,
            v41,
            0LL,
            v50,
            &v56,
            (_DWORD *)v55);
          if ( (*(_DWORD *)a1 & 0x200) != 0 && *((struct _SURFOBJ **)a1 + 16) == v18 )
          {
            v43 = SURFOBJ_TO_SURFACE_NOT_NULL(v18);
            if ( *(HSURF *)(v43 + 336) == v48->hsurf )
              *(_DWORD *)a1 |= 0x80u;
          }
          if ( v42 )
            GreUnlockDisplayDevice(*(_QWORD *)(v42 + 48));
          if ( v40 )
            GreUnlockDisplayDevice(*(_QWORD *)(v40 + 48));
        }
        else
        {
          v44 = 0;
        }
        SURFREFVIEW::bUnMap((SURFREFVIEW *)&v45);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v52);
        MULTISURF::~MULTISURF((MULTISURF *)v53);
        goto LABEL_62;
      }
    }
    v39 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 359);
    goto LABEL_40;
  }
  *(_DWORD *)a1 |= 0x80u;
LABEL_62:
  SPRITERANGELOCK::vUnlock(v10);
  return v44;
}
