/*
 * XREFs of ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C005D854
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C005CFD0 (GreCreatePatternBrushInternal.c)
 * Callees:
 *     IsEngCopyBitsSupported_0 @ 0x1C00015F0 (IsEngCopyBitsSupported_0.c)
 *     EngCopyBits_0 @ 0x1C0001600 (EngCopyBits_0.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0024A30 (--1SURFMEM@@QEAA@XZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0037A60 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0037B20 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B5010 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 */

__int64 __fastcall hbmCreateClone(struct SURFACE *a1, int a2, int a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // r8d
  bool v8; // zf
  struct _ERESOURCE *v9; // rdi
  SURFOBJ *v10; // rdx
  SURFOBJ *v11; // rcx
  __int64 *v12; // rbx
  bool v14; // cc
  __int64 *v15; // [rsp+60h] [rbp-29h] BYREF
  char v16; // [rsp+68h] [rbp-21h]
  int v17; // [rsp+6Ch] [rbp-1Dh]
  struct _ERESOURCE *v18; // [rsp+70h] [rbp-19h] BYREF
  int v19; // [rsp+78h] [rbp-11h] BYREF
  __int64 v20; // [rsp+7Ch] [rbp-Dh]
  __int128 v21; // [rsp+84h] [rbp-5h]
  int v22; // [rsp+94h] [rbp+Bh]
  POINTL pptlSrc; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v24; // [rsp+A0h] [rbp+17h] BYREF
  RECTL prclDest; // [rsp+A8h] [rbp+1Fh] BYREF

  v20 = 0LL;
  v21 = 0uLL;
  v22 = 0;
  v19 = *((_DWORD *)a1 + 24);
  if ( a2 && a3 )
  {
    if ( *((_DWORD *)a1 + 14) < a2 )
      a2 = *((_DWORD *)a1 + 14);
    v14 = *((_DWORD *)a1 + 15) < a3;
    LODWORD(v20) = a2;
    if ( v14 )
      a3 = *((_DWORD *)a1 + 15);
    HIDWORD(v20) = a3;
  }
  else
  {
    v20 = *((_QWORD *)a1 + 7);
  }
  v4 = (_QWORD *)*((_QWORD *)a1 + 15);
  *(_QWORD *)((char *)&v21 + 4) = 0LL;
  if ( v4 )
    *(_QWORD *)((char *)&v21 + 4) = *v4;
  v5 = 0LL;
  HIDWORD(v21) = 1;
  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  if ( (unsigned int)SURFMEM::bCreateDIB(
                       (SURFMEM *)&v15,
                       (struct _DEVBITMAPINFO *)&v19,
                       0LL,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       0,
                       1,
                       0,
                       0) )
  {
    v8 = (*((_DWORD *)a1 + 28) & 0x4000) == 0;
    v9 = 0LL;
    *(_QWORD *)&prclDest.right = v20;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    v18 = 0LL;
    if ( !v8 )
    {
      v24 = *((_QWORD *)a1 + 6);
      v9 = *(struct _ERESOURCE **)(v24 + 64);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v18, (struct PDEVOBJ *)&v24);
      EngAcquireSemaphore((HSEMAPHORE)v9);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemDevLock", v9, 11LL);
    }
    if ( (int)IsEngCopyBitsSupported_0() < 0 )
    {
      v5 = v15[4];
    }
    else
    {
      v10 = (SURFOBJ *)((char *)a1 + 24);
      v11 = 0LL;
      v12 = v15;
      if ( v15 )
        v11 = (SURFOBJ *)(v15 + 3);
      if ( !EngCopyBits_0(v11, v10, 0LL, &xloIdent, &prclDest, &pptlSrc) )
        goto LABEL_14;
      v5 = v12[4];
    }
    v16 |= 1u;
LABEL_14:
    if ( v9 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsemDevLock");
      GreReleaseSemaphoreInternal(v9);
      NEEDGRELOCK::vUnlock(&v18);
    }
    NEEDGRELOCK::vUnlock(&v18);
  }
  SURFMEM::~SURFMEM(&v15, v6, v7);
  return v5;
}
