/*
 * XREFs of GreGetBitmapBits @ 0x1C007C7AC
 * Callers:
 *     NtGdiGetBitmapBits @ 0x1C007C6E0 (NtGdiGetBitmapBits.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C014AC2C (-GetCursorHeight@@YAHXZ.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C007CD7C (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     EngCopyBits @ 0x1C00BC250 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetBitmapBits(__int64 a1, ULONG a2, void *a3, unsigned int *a4)
{
  ULONG cjBits; // edi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  LONG v12; // ecx
  LONG v13; // edx
  HDEV v14; // rax
  SURFOBJ *v15; // r14
  __int64 v16; // rbx
  unsigned int v17; // r14d
  struct _SURFOBJ *v18; // rdx
  DYNAMICMODECHANGESHARELOCK *v19; // rcx
  SURFOBJ *v21; // rcx
  char v22[8]; // [rsp+60h] [rbp-A0h] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  char v25; // [rsp+78h] [rbp-88h]
  int v26; // [rsp+7Ch] [rbp-84h]
  int v27; // [rsp+80h] [rbp-80h] BYREF
  __int64 v28; // [rsp+84h] [rbp-7Ch]
  __int128 v29; // [rsp+8Ch] [rbp-74h]
  int v30; // [rsp+9Ch] [rbp-64h]
  __int64 v31; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v32[2]; // [rsp+A8h] [rbp-58h] BYREF
  char v33[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-40h] BYREF
  _SURFOBJ v35; // [rsp+D0h] [rbp-30h] BYREF
  RECTL prclDest; // [rsp+120h] [rbp+20h] BYREF

  cjBits = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v22);
  LOBYTE(v9) = 5;
  v10 = HmgShareLockCheck(a1, v9);
  v31 = v10;
  v11 = v10;
  if ( !v10 || (*(_DWORD *)(v10 + 112) & 0x4000000) == 0 )
  {
    EngSetLastError(6u);
    goto LABEL_22;
  }
  v24 = 0LL;
  v25 = 0;
  v26 = 0;
  v12 = *(_DWORD *)(v10 + 56);
  v13 = *(_DWORD *)(v10 + 60);
  cjBits = v13
         * (((unsigned int)(v12 * *((_DWORD *)&galBitsPerPixel + *(unsigned int *)(v10 + 96)) + 15) >> 3) & 0x1FFFFFFE);
  if ( a3 )
  {
    *(_OWORD *)&v35.dhsurf = 0LL;
    v35.dhpdev = *(DHPDEV *)(v10 + 40);
    v14 = *(HDEV *)(v10 + 48);
    v35.sizlBitmap.cx = v12;
    v35.sizlBitmap.cy = v13;
    prclDest.right = v12;
    prclDest.bottom = v13;
    v35.hdev = v14;
    v35.cjBits = 0;
    memset(&v35.pvBits, 0, 24);
    *(_DWORD *)&v35.iType = 0;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    v34 = *(_QWORD *)(v11 + 48);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v33, (struct PDEVOBJ *)&v34);
    v15 = (SURFOBJ *)(v11 + 24);
    v16 = 0LL;
    if ( v11 != -24
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11 + 24) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11 + 24) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11 + 24) + 112) & 0x200) == 0 )
    {
      v16 = SURFOBJ_TO_SURFACE_NOT_NULL(v11 + 24);
      GreLockDisplayDevice(*(_QWORD *)(v16 + 48));
    }
    v32[0] = 0LL;
    if ( !SURFREFVIEW::bMap((SURFREFVIEW *)v32, (struct _SURFOBJ *)(v11 + 24)) )
      goto LABEL_18;
    if ( *(_WORD *)(v11 + 100) == 3 )
    {
      v28 = 0LL;
      v29 = 0uLL;
      v27 = 0;
      v30 = 0;
      v27 = *(_DWORD *)(v11 + 96);
      v28 = *(_QWORD *)(v11 + 56);
      *(_QWORD *)((char *)&v29 + 4) = 0LL;
      HIDWORD(v29) = *(_DWORD *)(v11 + 112) & 0x40000;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v24, (struct _DEVBITMAPINFO *)&v27, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        cjBits = 0;
LABEL_18:
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v32);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v32);
        if ( v16 )
          GreUnlockDisplayDevice(*(_QWORD *)(v16 + 48));
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v33);
        goto LABEL_21;
      }
      v11 = v24;
      if ( v24 )
        v21 = (SURFOBJ *)(v24 + 24);
      else
        v21 = 0LL;
      EngCopyBits(v21, v15, 0LL, 0LL, &prclDest, &pptlSrc);
    }
    if ( cjBits )
    {
      v17 = *a4;
      if ( (*a4 & 0x80000000) != 0 || v17 >= cjBits )
        goto LABEL_32;
      if ( a2 + v17 > cjBits )
        a2 = cjBits - v17;
      if ( a2 )
      {
        v35.cjBits = a2;
        v18 = 0LL;
        v35.lDelta = v17;
        v35.pvBits = a3;
        if ( v11 )
          v18 = (struct _SURFOBJ *)(v11 + 24);
        bDoGetSetBitmapBits(&v35, v18, 1);
        cjBits = v35.cjBits;
        *a4 = v17 + v35.cjBits;
      }
      else
      {
LABEL_32:
        cjBits = 0;
      }
    }
    goto LABEL_18;
  }
LABEL_21:
  SURFMEM::~SURFMEM((SURFMEM *)&v24);
LABEL_22:
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v31);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v19);
  return cjBits;
}
