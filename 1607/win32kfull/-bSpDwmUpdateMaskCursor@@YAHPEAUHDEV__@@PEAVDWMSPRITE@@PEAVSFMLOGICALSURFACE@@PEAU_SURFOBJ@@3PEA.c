/*
 * XREFs of ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C025DB7C
 * Callers:
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C00D72A4 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngCopyBits @ 0x1C0040D90 (EngCopyBits.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C00518AC (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z @ 0x1C025DFE4 (-vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z.c)
 */

__int64 __fastcall bSpDwmUpdateMaskCursor(
        HDEV a1,
        struct DWMSPRITE *a2,
        struct SFMLOGICALSURFACE *a3,
        struct _SURFOBJ *a4,
        SURFOBJ *psoSrc,
        struct _RECTL *a6,
        unsigned int *a7,
        struct SFMLOGICALSURFACE **a8)
{
  LONG cy; // eax
  unsigned int DIB; // r14d
  struct _SURFOBJ *v10; // r15
  struct _SURFOBJ *v11; // r12
  __int64 v12; // rax
  SURFOBJ *v13; // rbx
  struct DWMSPRITE *v14; // rdi
  __int64 v15; // rax
  SURFOBJ *v17; // [rsp+60h] [rbp-A0h] BYREF
  XLATEOBJ *pxlo; // [rsp+68h] [rbp-98h] BYREF
  XLATEOBJ *v19; // [rsp+70h] [rbp-90h] BYREF
  int v20; // [rsp+78h] [rbp-88h] BYREF
  __int64 v21; // [rsp+7Ch] [rbp-84h]
  _BYTE v22[20]; // [rsp+84h] [rbp-7Ch]
  __int64 v23; // [rsp+98h] [rbp-68h] BYREF
  char v24; // [rsp+A0h] [rbp-60h]
  int v25; // [rsp+A4h] [rbp-5Ch]
  __int64 v26; // [rsp+A8h] [rbp-58h] BYREF
  char v27; // [rsp+B0h] [rbp-50h]
  int v28; // [rsp+B4h] [rbp-4Ch]
  struct DWMSPRITE *v29; // [rsp+B8h] [rbp-48h]
  struct SFMLOGICALSURFACE **v30; // [rsp+C0h] [rbp-40h]
  unsigned int *v31; // [rsp+C8h] [rbp-38h]
  struct SFMLOGICALSURFACE *v32; // [rsp+D0h] [rbp-30h]
  HDEV v33; // [rsp+D8h] [rbp-28h]
  RECTL prclDest; // [rsp+E0h] [rbp-20h] BYREF

  v31 = a7;
  v30 = a8;
  v21 = 0LL;
  *(_QWORD *)&v22[8] = 0LL;
  *(_QWORD *)v22 = 0LL;
  LODWORD(v21) = a4->sizlBitmap.cx;
  cy = a4->sizlBitmap.cy;
  v17 = a4;
  v32 = a3;
  v29 = a2;
  v33 = a1;
  *(_QWORD *)&v22[12] = 1LL;
  v26 = 0LL;
  v27 = 0;
  v28 = 0;
  v23 = 0LL;
  v24 = 0;
  v25 = 0;
  v20 = 6;
  HIDWORD(v21) = cy;
  *(_QWORD *)&v22[4] = 0LL;
  DIB = SURFMEM::bCreateDIB((SURFMEM *)&v26, (struct _DEVBITMAPINFO *)&v20, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( DIB )
  {
    if ( psoSrc )
    {
      HIDWORD(v21) >>= 1;
      DIB = SURFMEM::bCreateDIB((SURFMEM *)&v23, (struct _DEVBITMAPINFO *)&v20, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    }
    if ( DIB )
    {
      v10 = 0LL;
      if ( v26 )
        v10 = (struct _SURFOBJ *)(v26 + 24);
      v11 = 0LL;
      if ( v23 )
        v11 = (struct _SURFOBJ *)(v23 + 24);
      v19 = 0LL;
      pxlo = 0LL;
      prclDest = *a6;
      if ( v23 )
      {
        v12 = SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc);
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&pxlo,
                             0LL,
                             0,
                             *(_QWORD *)(v12 + 120),
                             (__int64)gppalRGB,
                             (__int64)ppalDefault,
                             (__int64)ppalDefault,
                             0,
                             0xFFFFFF,
                             0,
                             0) )
          DIB = EngCopyBits(v11, psoSrc, 0LL, pxlo, &prclDest, (POINTL *)&prclDest);
      }
      v13 = v17;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (__int64 *)&v19,
                           0LL,
                           0,
                           (__int64)ppalMono,
                           (__int64)gppalRGB,
                           (__int64)ppalDefault,
                           (__int64)ppalDefault,
                           0,
                           0xFFFFFF,
                           0,
                           0) )
      {
        prclDest.bottom += v17->sizlBitmap.cy >> 1;
        DIB = EngCopyBits(v10, v17, 0LL, v19, &prclDest, (POINTL *)&prclDest);
      }
      if ( DIB )
      {
        LODWORD(v17) = 0;
        vSpDwmMaskToARGB(v10, v11, (int *)&v17);
        v14 = v29;
        *((_DWORD *)v29 + 34) ^= (*((_DWORD *)v29 + 34) ^ (4 * ((_DWORD)v17 != 0))) & 4;
        prclDest.top += v13->sizlBitmap.cy >> 1;
        v15 = SURFOBJ_TO_SURFACE_NOT_NULL(v10);
        DIB = bSpDwmUpdateSpriteShape(v33, v14, v32, v10, &prclDest, *(struct PALETTE **)(v15 + 120), v31, 0LL, v30);
      }
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v19);
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v23);
  SURFMEM::~SURFMEM((SURFMEM *)&v26);
  return DIB;
}
