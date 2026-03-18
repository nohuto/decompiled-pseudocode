/*
 * XREFs of GreSetBitmapBits @ 0x1C007CAF0
 * Callers:
 *     NtGdiSetBitmapBits @ 0x1C007CA20 (NtGdiSetBitmapBits.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C007CD7C (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     EngCopyBits @ 0x1C00BC250 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetBitmapBits(__int64 a1, ULONG a2, void *a3, LONG *a4)
{
  ULONG cjBits; // r12d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  HDEV v12; // rdx
  LONG v13; // ecx
  LONG v14; // r13d
  __int64 v15; // r14
  DHPDEV v16; // rax
  __int64 v17; // rdi
  bool v18; // sf
  __int64 v19; // rsi
  struct _SURFOBJ *v20; // rcx
  DYNAMICMODECHANGESHARELOCK *v21; // rcx
  SURFOBJ *v23; // rcx
  BOOL (__stdcall *v24)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v25; // rdx
  char v26[8]; // [rsp+60h] [rbp-A0h] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  char v29; // [rsp+78h] [rbp-88h]
  int v30; // [rsp+7Ch] [rbp-84h]
  int v31; // [rsp+80h] [rbp-80h] BYREF
  __int64 v32; // [rsp+84h] [rbp-7Ch]
  __int128 v33; // [rsp+8Ch] [rbp-74h]
  int v34; // [rsp+9Ch] [rbp-64h]
  char v35[8]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v36[2]; // [rsp+A8h] [rbp-58h] BYREF
  LONG *v37; // [rsp+B8h] [rbp-48h]
  HDEV v38[2]; // [rsp+C0h] [rbp-40h] BYREF
  struct _SURFOBJ v39; // [rsp+D0h] [rbp-30h] BYREF
  RECTL prclDest; // [rsp+120h] [rbp+20h] BYREF

  v37 = a4;
  if ( !a2 )
    return 0LL;
  cjBits = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v26);
  LOBYTE(v9) = 5;
  v10 = HmgShareLockCheck(a1, v9);
  v28 = 0LL;
  v11 = v10;
  v29 = 0;
  v30 = 0;
  if ( v10 && (*(_DWORD *)(v10 + 112) & 0x4000000) != 0 )
  {
    v12 = *(HDEV *)(v10 + 48);
    v13 = *(_DWORD *)(v10 + 56);
    v14 = *a4;
    v15 = v10;
    v16 = *(DHPDEV *)(v10 + 40);
    v39.pvBits = a3;
    v39.dhpdev = v16;
    LODWORD(v16) = *(_DWORD *)(v11 + 60);
    v39.hdev = v12;
    v39.sizlBitmap.cx = v13;
    prclDest.right = v13;
    v38[0] = v12;
    v39.sizlBitmap.cy = (int)v16;
    prclDest.bottom = (int)v16;
    *(_OWORD *)&v39.dhsurf = 0LL;
    v39.cjBits = a2;
    v39.pvScan0 = 0LL;
    v39.lDelta = v14;
    v39.iUniq = 0;
    *(_DWORD *)&v39.iType = 0;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v35, (struct PDEVOBJ *)v38);
    v17 = 0LL;
    if ( v11 != -24
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11 + 24) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11 + 24) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11 + 24) + 112) & 0x200) == 0 )
    {
      v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v11 + 24);
      GreLockDisplayDevice(*(_QWORD *)(v17 + 48));
    }
    v36[0] = 0LL;
    if ( !SURFREFVIEW::bMap((SURFREFVIEW *)v36, (struct _SURFOBJ *)(v11 + 24)) )
      goto LABEL_14;
    if ( *(_WORD *)(v11 + 100) == 3 )
    {
      v32 = 0LL;
      v33 = 0uLL;
      v34 = 0;
      v31 = *(_DWORD *)(v11 + 96);
      v32 = *(_QWORD *)(v11 + 56);
      HIDWORD(v33) = *(_DWORD *)(v11 + 112) & 0x40000;
      *(_QWORD *)((char *)&v33 + 4) = 0LL;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v28, (struct _DEVBITMAPINFO *)&v31, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
LABEL_14:
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v36);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v36);
        if ( v17 )
          GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v35);
        goto LABEL_17;
      }
      v15 = v28;
      v18 = v14 < 0;
      if ( !v14 )
      {
LABEL_10:
        if ( !v18 )
        {
          ++*(_DWORD *)(v11 + 92);
          v19 = *(_QWORD *)(v11 + 48);
          v20 = v15 ? (struct _SURFOBJ *)(v15 + 24) : 0LL;
          bDoGetSetBitmapBits(v20, &v39, 0);
          cjBits = v39.cjBits;
          *v37 = v39.cjBits + v14;
          if ( *(_WORD *)(v11 + 100) == 3 )
          {
            if ( (*(_DWORD *)(v11 + 112) & 0x400) != 0 )
              v24 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v19 + 2872);
            else
              v24 = EngCopyBits;
            v25 = 0LL;
            if ( v15 )
              v25 = v15 + 24;
            cjBits &= -(((unsigned int (__fastcall *)(__int64, __int64, _QWORD, _QWORD, RECTL *, POINTL *))v24)(
                          v11 + 24,
                          v25,
                          0LL,
                          0LL,
                          &prclDest,
                          &pptlSrc) != 0);
          }
        }
        goto LABEL_14;
      }
      v23 = 0LL;
      if ( v28 )
        v23 = (SURFOBJ *)(v28 + 24);
      EngCopyBits(v23, (SURFOBJ *)(v11 + 24), 0LL, 0LL, &prclDest, &pptlSrc);
    }
    v18 = v14 < 0;
    goto LABEL_10;
  }
  EngSetLastError(6u);
LABEL_17:
  SURFMEM::~SURFMEM((SURFMEM *)&v28);
  if ( v11 )
    DEC_SHARE_REF_CNT(v11);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v21);
  return cjBits;
}
