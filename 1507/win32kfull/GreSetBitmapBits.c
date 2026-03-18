/*
 * XREFs of GreSetBitmapBits @ 0x1C0010850
 * Callers:
 *     NtGdiSetBitmapBits @ 0x1C0010780 (NtGdiSetBitmapBits.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C0010C10 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     EngCopyBits @ 0x1C00131B0 (EngCopyBits.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBitmapBits(HSURF a1, ULONG a2, void *a3, LONG *a4)
{
  ULONG cjBits; // r14d
  __int64 v10; // rsi
  LONG v11; // r15d
  LONG v12; // eax
  __int64 v13; // rbx
  struct _SURFOBJ *v14; // rdx
  __int64 v15; // rcx
  SURFOBJ *v16; // rdx
  SURFOBJ *v17; // rcx
  __int64 v18; // rdi
  struct _SURFOBJ *v19; // rcx
  __int64 v20; // rcx
  BOOL (__stdcall *v21)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v22; // rdx
  DYNAMICMODECHANGESHARELOCK *v23; // rcx
  _BYTE v24[8]; // [rsp+60h] [rbp-A0h] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  char v27; // [rsp+78h] [rbp-88h]
  int v28; // [rsp+7Ch] [rbp-84h]
  int v29; // [rsp+80h] [rbp-80h] BYREF
  __int64 v30; // [rsp+84h] [rbp-7Ch]
  __int128 v31; // [rsp+8Ch] [rbp-74h]
  int v32; // [rsp+9Ch] [rbp-64h]
  _BYTE v33[32]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-40h]
  _QWORD v35[2]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v36[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v37; // [rsp+E0h] [rbp-20h] BYREF
  struct _SURFOBJ v38; // [rsp+F0h] [rbp-10h] BYREF
  RECTL prclDest; // [rsp+140h] [rbp+40h] BYREF

  if ( !a2 )
    return 0LL;
  cjBits = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v24);
  SURFREF::SURFREF((SURFREF *)v33, a1);
  v10 = v34;
  v26 = 0LL;
  v27 = 0;
  v28 = 0;
  if ( v34 && (*(_DWORD *)(v34 + 112) & 0x4000000) != 0 )
  {
    v11 = *a4;
    *(_OWORD *)&v38.dhsurf = 0LL;
    v38.dhpdev = *(DHPDEV *)(v34 + 40);
    v38.hdev = *(HDEV *)(v34 + 48);
    v38.sizlBitmap.cx = *(_DWORD *)(v34 + 56);
    v12 = *(_DWORD *)(v34 + 60);
    v38.pvBits = a3;
    v38.pvScan0 = 0LL;
    v38.iUniq = 0;
    *(_DWORD *)&v38.iType = 0;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    v38.sizlBitmap.cy = v12;
    v38.cjBits = a2;
    v38.lDelta = v11;
    prclDest.right = *(_DWORD *)(v34 + 56);
    prclDest.bottom = *(_DWORD *)(v34 + 60);
    v37 = *(_QWORD *)(v34 + 48);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v36, (struct PDEVOBJ *)&v37);
    v13 = 0LL;
    if ( v10
      && v10 != -24
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10 + 24) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10 + 24) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10 + 24) + 112) & 0x200) == 0 )
    {
      v13 = SURFOBJ_TO_SURFACE_NOT_NULL(v10 + 24);
      GreLockDisplayDevice(*(_QWORD *)(v13 + 48));
    }
    v14 = 0LL;
    v35[0] = 0LL;
    if ( v34 )
      v14 = (struct _SURFOBJ *)(v34 + 24);
    if ( !SURFREFVIEW::bMap((SURFREFVIEW *)v35, v14) )
      goto LABEL_33;
    v15 = v34;
    if ( *(_WORD *)(v34 + 100) == 3 )
    {
      v29 = 0;
      v30 = 0LL;
      v31 = 0uLL;
      v32 = 0;
      v29 = *(_DWORD *)(v34 + 96);
      v30 = *(_QWORD *)(v34 + 56);
      *(_QWORD *)((char *)&v31 + 4) = 0LL;
      HIDWORD(v31) = *(_DWORD *)(v34 + 112) & 0x40000;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v26, (struct _DEVBITMAPINFO *)&v29, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
LABEL_33:
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v35);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v35);
        if ( v13 )
          GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v36);
        goto LABEL_37;
      }
      v10 = v26;
      if ( v11 )
      {
        v16 = 0LL;
        if ( v34 )
          v16 = (SURFOBJ *)(v34 + 24);
        v17 = 0LL;
        if ( v26 )
          v17 = (SURFOBJ *)(v26 + 24);
        EngCopyBits(v17, v16, 0LL, 0LL, &prclDest, &pptlSrc);
      }
      v15 = v34;
    }
    if ( v11 >= 0 )
    {
      v18 = *(_QWORD *)(v15 + 48);
      ++*(_DWORD *)(v15 + 92);
      v19 = 0LL;
      if ( v10 )
        v19 = (struct _SURFOBJ *)(v10 + 24);
      bDoGetSetBitmapBits(v19, &v38, 0);
      cjBits = v38.cjBits;
      v20 = v34;
      *a4 = v38.cjBits + v11;
      if ( *(_WORD *)(v20 + 100) == 3 )
      {
        if ( (*(_DWORD *)(v20 + 112) & 0x400) != 0 )
          v21 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v18 + 2872);
        else
          v21 = EngCopyBits;
        v22 = 0LL;
        if ( v10 )
          v22 = v10 + 24;
        cjBits &= -(((unsigned int (__fastcall *)(__int64, __int64, _QWORD, _QWORD, RECTL *, POINTL *))v21)(
                      v20 + 24,
                      v22,
                      0LL,
                      0LL,
                      &prclDest,
                      &pptlSrc) != 0);
      }
    }
    goto LABEL_33;
  }
  EngSetLastError(6u);
LABEL_37:
  SURFMEM::~SURFMEM((SURFMEM *)&v26);
  if ( v34 )
    DEC_SHARE_REF_CNT(v34);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v33);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v23);
  return cjBits;
}
