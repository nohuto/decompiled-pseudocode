/*
 * XREFs of ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C026028C
 * Callers:
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C000AF68 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 * Callees:
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C003BF04 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngCopyBits @ 0x1C00BC250 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z @ 0x1C02606E4 (-vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z.c)
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
  __int64 v13; // rdx
  SURFOBJ *v14; // rbx
  struct DWMSPRITE *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  SURFOBJ *v19; // [rsp+60h] [rbp-A0h] BYREF
  XLATEOBJ *v20; // [rsp+68h] [rbp-98h] BYREF
  XLATEOBJ *pxlo; // [rsp+70h] [rbp-90h] BYREF
  int v22; // [rsp+78h] [rbp-88h] BYREF
  __int64 v23; // [rsp+7Ch] [rbp-84h]
  _BYTE v24[20]; // [rsp+84h] [rbp-7Ch]
  __int64 v25; // [rsp+98h] [rbp-68h] BYREF
  char v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A4h] [rbp-5Ch]
  __int64 v28; // [rsp+A8h] [rbp-58h] BYREF
  char v29; // [rsp+B0h] [rbp-50h]
  int v30; // [rsp+B4h] [rbp-4Ch]
  unsigned int *v31; // [rsp+B8h] [rbp-48h]
  struct SFMLOGICALSURFACE **v32; // [rsp+C0h] [rbp-40h]
  HDEV v33; // [rsp+C8h] [rbp-38h]
  struct DWMSPRITE *v34; // [rsp+D0h] [rbp-30h]
  struct SFMLOGICALSURFACE *v35; // [rsp+D8h] [rbp-28h]
  RECTL prclDest; // [rsp+E0h] [rbp-20h] BYREF

  v31 = a7;
  v32 = a8;
  v23 = 0LL;
  *(_QWORD *)&v24[8] = 0LL;
  *(_QWORD *)v24 = 0LL;
  LODWORD(v23) = a4->sizlBitmap.cx;
  cy = a4->sizlBitmap.cy;
  v19 = a4;
  v35 = a3;
  v34 = a2;
  v33 = a1;
  *(_QWORD *)&v24[12] = 1LL;
  v28 = 0LL;
  v29 = 0;
  v30 = 0;
  v25 = 0LL;
  v26 = 0;
  v27 = 0;
  v22 = 6;
  HIDWORD(v23) = cy;
  *(_QWORD *)&v24[4] = 0LL;
  DIB = SURFMEM::bCreateDIB((SURFMEM *)&v28, (struct _DEVBITMAPINFO *)&v22, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( DIB )
  {
    if ( psoSrc )
    {
      HIDWORD(v23) >>= 1;
      DIB = SURFMEM::bCreateDIB((SURFMEM *)&v25, (struct _DEVBITMAPINFO *)&v22, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    }
    if ( DIB )
    {
      v10 = 0LL;
      if ( v28 )
        v10 = (struct _SURFOBJ *)(v28 + 24);
      v11 = 0LL;
      if ( v25 )
        v11 = (struct _SURFOBJ *)(v25 + 24);
      v20 = 0LL;
      pxlo = 0LL;
      prclDest = *a6;
      if ( v25 )
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
      v14 = v19;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (__int64 *)&v20,
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
        prclDest.bottom += v19->sizlBitmap.cy >> 1;
        DIB = EngCopyBits(v10, v19, 0LL, v20, &prclDest, (POINTL *)&prclDest);
      }
      if ( DIB )
      {
        LODWORD(v19) = 0;
        vSpDwmMaskToARGB(v10, v11, (int *)&v19);
        v15 = v34;
        *((_DWORD *)v34 + 34) ^= (*((_DWORD *)v34 + 34) ^ (4 * ((_DWORD)v19 != 0))) & 4;
        prclDest.top += v14->sizlBitmap.cy >> 1;
        v16 = SURFOBJ_TO_SURFACE_NOT_NULL(v10);
        DIB = bSpDwmUpdateSpriteShape(v33, v15, v35, v10, &prclDest, *(struct PALETTE **)(v16 + 120), v31, 0LL, v32);
      }
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo, v13);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v20, v17);
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v25);
  SURFMEM::~SURFMEM((SURFMEM *)&v28);
  return DIB;
}
