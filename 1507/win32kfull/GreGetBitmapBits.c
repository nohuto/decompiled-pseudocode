/*
 * XREFs of GreGetBitmapBits @ 0x1C000EBCC
 * Callers:
 *     NtGdiGetBitmapBits @ 0x1C000EB00 (NtGdiGetBitmapBits.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C0120E0C (-GetCursorHeight@@YAHXZ.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C0010C10 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     EngCopyBits @ 0x1C00131B0 (EngCopyBits.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetBitmapBits(HSURF a1, ULONG a2, void *a3, unsigned int *a4)
{
  ULONG cjBits; // edi
  __int64 v9; // rsi
  LONG v10; // ecx
  LONG v11; // edx
  HDEV v12; // rax
  __int64 v13; // rbx
  struct _SURFOBJ *v14; // rdx
  unsigned int v15; // r14d
  struct _SURFOBJ *v16; // rdx
  DYNAMICMODECHANGESHARELOCK *v17; // rcx
  SURFOBJ *v19; // rdx
  SURFOBJ *v20; // rcx
  _BYTE v21[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  char v23; // [rsp+70h] [rbp-90h]
  int v24; // [rsp+74h] [rbp-8Ch]
  POINTL pptlSrc; // [rsp+78h] [rbp-88h] BYREF
  int v26; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+84h] [rbp-7Ch]
  __int128 v28; // [rsp+8Ch] [rbp-74h]
  int v29; // [rsp+9Ch] [rbp-64h]
  __int64 v30; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v31[2]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v32[8]; // [rsp+B8h] [rbp-48h] BYREF
  _SURFOBJ v33; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v34[32]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v35; // [rsp+130h] [rbp+30h]
  RECTL prclDest; // [rsp+138h] [rbp+38h] BYREF

  cjBits = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v21);
  SURFREF::SURFREF((SURFREF *)v34, a1);
  v9 = v35;
  if ( !v35 || (*(_DWORD *)(v35 + 112) & 0x4000000) == 0 )
  {
    EngSetLastError(6u);
    goto LABEL_25;
  }
  v22 = 0LL;
  v23 = 0;
  v24 = 0;
  v10 = *(_DWORD *)(v35 + 56);
  v11 = *(_DWORD *)(v35 + 60);
  cjBits = v11
         * (((unsigned int)(v10 * *((_DWORD *)&galBitsPerPixel + *(unsigned int *)(v35 + 96)) + 15) >> 3) & 0x1FFFFFFE);
  if ( a3 )
  {
    *(_OWORD *)&v33.dhsurf = 0LL;
    v33.dhpdev = *(DHPDEV *)(v35 + 40);
    v12 = *(HDEV *)(v35 + 48);
    v33.sizlBitmap.cx = v10;
    v33.sizlBitmap.cy = v11;
    prclDest.right = v10;
    prclDest.bottom = v11;
    v33.hdev = v12;
    v33.cjBits = 0;
    memset(&v33.pvBits, 0, 24);
    *(_DWORD *)&v33.iType = 0;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    v30 = *(_QWORD *)(v35 + 48);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v32, (struct PDEVOBJ *)&v30);
    if ( v9 )
    {
      v13 = 0LL;
      if ( v9 != -24
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9 + 24) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9 + 24) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9 + 24) + 112) & 0x200) == 0 )
      {
        v13 = SURFOBJ_TO_SURFACE_NOT_NULL(v9 + 24);
        GreLockDisplayDevice(*(_QWORD *)(v13 + 48));
      }
    }
    else
    {
      v13 = 0LL;
    }
    v14 = 0LL;
    v31[0] = 0LL;
    if ( v35 )
      v14 = (struct _SURFOBJ *)(v35 + 24);
    if ( !SURFREFVIEW::bMap((SURFREFVIEW *)v31, v14) )
      goto LABEL_21;
    if ( *(_WORD *)(v35 + 100) == 3 )
    {
      v26 = 0;
      v27 = 0LL;
      v28 = 0uLL;
      v29 = 0;
      v26 = *(_DWORD *)(v35 + 96);
      v27 = *(_QWORD *)(v35 + 56);
      *(_QWORD *)((char *)&v28 + 4) = 0LL;
      HIDWORD(v28) = *(_DWORD *)(v35 + 112) & 0x40000;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v22, (struct _DEVBITMAPINFO *)&v26, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        goto LABEL_37;
      v19 = 0LL;
      v9 = v22;
      if ( v35 )
        v19 = (SURFOBJ *)(v35 + 24);
      v20 = 0LL;
      if ( v22 )
        v20 = (SURFOBJ *)(v22 + 24);
      EngCopyBits(v20, v19, 0LL, 0LL, &prclDest, &pptlSrc);
    }
    if ( !cjBits )
      goto LABEL_21;
    v15 = *a4;
    if ( (*a4 & 0x80000000) == 0 && v15 < cjBits )
    {
      if ( a2 + v15 > cjBits )
        a2 = cjBits - v15;
      if ( a2 )
      {
        v33.cjBits = a2;
        v33.lDelta = v15;
        v33.pvBits = a3;
        if ( v9 )
          v16 = (struct _SURFOBJ *)(v9 + 24);
        else
          v16 = 0LL;
        bDoGetSetBitmapBits(&v33, v16, 1);
        cjBits = v33.cjBits;
        *a4 = v15 + v33.cjBits;
LABEL_21:
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v31);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v31);
        if ( v13 )
          GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v32);
        goto LABEL_24;
      }
    }
LABEL_37:
    cjBits = 0;
    goto LABEL_21;
  }
LABEL_24:
  SURFMEM::~SURFMEM((SURFMEM *)&v22);
LABEL_25:
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v34);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v17);
  return cjBits;
}
