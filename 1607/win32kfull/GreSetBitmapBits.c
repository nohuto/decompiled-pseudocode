/*
 * XREFs of GreSetBitmapBits @ 0x1C00FC310
 * Callers:
 *     NtGdiSetBitmapBits @ 0x1C00FC210 (NtGdiSetBitmapBits.c)
 * Callees:
 *     EngCopyBits @ 0x1C0040D90 (EngCopyBits.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C00FC6A8 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
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
  POINTL pptlSrc; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h] BYREF
  char v25; // [rsp+70h] [rbp-90h]
  int v26; // [rsp+74h] [rbp-8Ch]
  int v27; // [rsp+78h] [rbp-88h] BYREF
  __int64 v28; // [rsp+7Ch] [rbp-84h]
  __int128 v29; // [rsp+84h] [rbp-7Ch]
  int v30; // [rsp+94h] [rbp-6Ch]
  __int64 v31; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v32[8]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v33[2]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v34[32]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v35; // [rsp+D8h] [rbp-28h]
  struct _SURFOBJ v36; // [rsp+E0h] [rbp-20h] BYREF
  RECTL prclDest; // [rsp+130h] [rbp+30h] BYREF

  if ( !a2 )
    return 0LL;
  cjBits = 0;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  SURFREF::SURFREF((SURFREF *)v34, a1);
  v10 = v35;
  v24 = 0LL;
  v25 = 0;
  v26 = 0;
  if ( v35 && (*(_DWORD *)(v35 + 112) & 0x4000000) != 0 )
  {
    v11 = *a4;
    *(_OWORD *)&v36.dhsurf = 0LL;
    v36.dhpdev = *(DHPDEV *)(v35 + 40);
    v36.hdev = *(HDEV *)(v35 + 48);
    v36.sizlBitmap.cx = *(_DWORD *)(v35 + 56);
    v12 = *(_DWORD *)(v35 + 60);
    v36.pvBits = a3;
    v36.pvScan0 = 0LL;
    v36.iUniq = 0;
    *(_DWORD *)&v36.iType = 0;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    v36.sizlBitmap.cy = v12;
    v36.cjBits = a2;
    v36.lDelta = v11;
    prclDest.right = *(_DWORD *)(v35 + 56);
    prclDest.bottom = *(_DWORD *)(v35 + 60);
    v31 = *(_QWORD *)(v35 + 48);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v32, (struct PDEVOBJ *)&v31);
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
    v33[0] = 0LL;
    if ( v35 )
      v14 = (struct _SURFOBJ *)(v35 + 24);
    if ( !SURFREFVIEW::bMap((SURFREFVIEW *)v33, v14) )
      goto LABEL_33;
    v15 = v35;
    if ( *(_WORD *)(v35 + 100) == 3 )
    {
      v27 = 0;
      v28 = 0LL;
      v29 = 0uLL;
      v30 = 0;
      v27 = *(_DWORD *)(v35 + 96);
      v28 = *(_QWORD *)(v35 + 56);
      *(_QWORD *)((char *)&v29 + 4) = 0LL;
      HIDWORD(v29) = *(_DWORD *)(v35 + 112) & 0x40000;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v24, (struct _DEVBITMAPINFO *)&v27, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
LABEL_33:
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v33);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v33);
        if ( v13 )
          GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v32);
        goto LABEL_37;
      }
      v10 = v24;
      if ( v11 )
      {
        v16 = 0LL;
        if ( v35 )
          v16 = (SURFOBJ *)(v35 + 24);
        v17 = 0LL;
        if ( v24 )
          v17 = (SURFOBJ *)(v24 + 24);
        EngCopyBits(v17, v16, 0LL, 0LL, &prclDest, &pptlSrc);
      }
      v15 = v35;
    }
    if ( v11 >= 0 )
    {
      v18 = *(_QWORD *)(v15 + 48);
      ++*(_DWORD *)(v15 + 92);
      v19 = 0LL;
      if ( v10 )
        v19 = (struct _SURFOBJ *)(v10 + 24);
      bDoGetSetBitmapBits(v19, &v36, 0);
      cjBits = v36.cjBits;
      v20 = v35;
      *a4 = v36.cjBits + v11;
      if ( *(_WORD *)(v20 + 100) == 3 )
      {
        if ( (*(_DWORD *)(v20 + 112) & 0x400) != 0 )
          v21 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v18 + 2864);
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
  SURFMEM::~SURFMEM((SURFMEM *)&v24);
  if ( v35 )
    DEC_SHARE_REF_CNT(v35);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v34);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  return cjBits;
}
