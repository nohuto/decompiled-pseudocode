/*
 * XREFs of ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00BBC94
 * Callers:
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C0039DC8 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C00BC010 (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1C00BC250 (EngCopyBits.c)
 *     EngEraseSurface @ 0x1C00BCB20 (EngEraseSurface.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00BCCB4 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall vProcessCursorShape(
        HDEV a1,
        int a2,
        int a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *psoSrc,
        struct PALETTE *a6,
        struct _RECTL *a7,
        HBITMAP *a8)
{
  SIZEL v10; // rcx
  LONG v11; // r12d
  LONG cy; // eax
  LONG v13; // edx
  LONG v14; // eax
  LONG cx; // ecx
  LONG v16; // edx
  struct _SURFOBJ *p_hdev; // r15
  XLATEOBJ *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r8
  struct _RECTL *v21; // rbx
  LONG bottom; // ecx
  int v23; // eax
  __int64 v24; // rdx
  SURFOBJ *psoDest; // [rsp+70h] [rbp-71h] BYREF
  char v27; // [rsp+78h] [rbp-69h]
  int v28; // [rsp+7Ch] [rbp-65h]
  XLATEOBJ *pxlo; // [rsp+80h] [rbp-61h] BYREF
  LONG v30; // [rsp+88h] [rbp-59h]
  int v31; // [rsp+8Ch] [rbp-55h]
  XLATEOBJ *v32; // [rsp+90h] [rbp-51h] BYREF
  int v33; // [rsp+98h] [rbp-49h] BYREF
  unsigned __int64 v34; // [rsp+9Ch] [rbp-45h]
  __int128 v35; // [rsp+A4h] [rbp-3Dh]
  int v36; // [rsp+B4h] [rbp-2Dh]
  SIZEL *v37; // [rsp+B8h] [rbp-29h]
  RECTL v38; // [rsp+C0h] [rbp-21h] BYREF
  RECTL prcl; // [rsp+D0h] [rbp-11h] BYREF
  RECTL prclDest; // [rsp+E0h] [rbp-1h] BYREF

  v34 = 0LL;
  v10 = (SIZEL)*a8;
  v35 = 0uLL;
  v36 = 0;
  v31 = a2;
  *(_QWORD *)&v38.left = a7;
  v11 = a2 != 0 ? 3 : 0;
  v37 = (SIZEL *)a8;
  psoDest = 0LL;
  v27 = 0;
  v28 = 0;
  v33 = 0;
  if ( v10 )
  {
    ((void (__fastcall *)(_QWORD))GreDeleteObject)(v10);
    *a8 = 0LL;
  }
  vCalculateCursorBounds(a4, 0LL, a7);
  v13 = a4->sizlBitmap.cy >> 31;
  cy = a4->sizlBitmap.cy;
  *(_QWORD *)&prcl.left = 0LL;
  v14 = __SPAIR64__(v13, cy) / 2;
  cx = a4->sizlBitmap.cx;
  v30 = v14;
  v16 = v14;
  prcl.bottom = v14;
  prcl.right = cx;
  if ( a2 )
  {
    cx += 9;
    v16 = v14 + 7;
    prcl.right = cx;
    prcl.bottom = v14 + 7;
  }
  v34 = __PAIR64__(v16, cx);
  HIDWORD(v35) = 1;
  v33 = 6;
  if ( psoSrc && *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc) + 120) )
    *(_QWORD *)((char *)&v35 + 4) = **(_QWORD **)(SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc) + 120);
  else
    *(_QWORD *)((char *)&v35 + 4) = 0LL;
  if ( SURFMEM::bCreateDIB((SURFMEM *)&psoDest, (struct _DEVBITMAPINFO *)&v33, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
  {
    p_hdev = psoDest;
    if ( psoDest )
      p_hdev = (struct _SURFOBJ *)&psoDest->hdev;
    SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc);
    v18 = 0LL;
    v32 = 0LL;
    pxlo = 0LL;
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          (__int64 *)&v32,
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
      goto LABEL_21;
    if ( psoSrc )
    {
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            (__int64 *)&pxlo,
                            0LL,
                            0,
                            (__int64)a6,
                            (__int64)gppalRGB,
                            (__int64)ppalDefault,
                            (__int64)ppalDefault,
                            0,
                            0,
                            0,
                            0) )
      {
LABEL_21:
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo, v19);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v32, v24);
        goto LABEL_22;
      }
      prclDest.right = a4->sizlBitmap.cx;
      *(_QWORD *)&prclDest.left = 0LL;
      v18 = pxlo;
      prclDest.bottom = v30;
      EngCopyBits(p_hdev, psoSrc, 0LL, pxlo, &prclDest, &gptlZero);
      v21 = *(struct _RECTL **)&v38.left;
      vCalculateCursorBounds(a4, p_hdev, *(struct _RECTL **)&v38.left);
      if ( (v18->flXlate & 1) != 0 && psoSrc->iBitmapFormat == 6 )
      {
        EngEraseSurface(p_hdev, &prcl, 0);
        v38.right = v11 + v21->right;
        bottom = v21->bottom;
        v38.left = v11;
        v38.bottom = v11 + bottom;
        v38.top = v11;
        EngCopyBits(p_hdev, psoSrc, 0LL, 0LL, &v38, &gptlZero);
      }
    }
    else
    {
      v21 = *(struct _RECTL **)&v38.left;
    }
    if ( v31 )
    {
      EngEraseSurface(p_hdev, &prcl, 0);
      v23 = bShadowAlphaCursor(p_hdev, a4, psoSrc, v32, v18, v21, a3);
    }
    else
    {
      v23 = a3;
    }
    if ( v23 )
    {
      LOBYTE(v20) = 5;
      v27 |= 1u;
      HmgSetOwner(*(_QWORD *)&psoDest->sizlBitmap, 0LL, v20);
      *v37 = psoDest->sizlBitmap;
    }
    goto LABEL_21;
  }
LABEL_22:
  SURFMEM::~SURFMEM((SURFMEM *)&psoDest);
}
