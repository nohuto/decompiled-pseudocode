/*
 * XREFs of ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C005C034
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C005B700 (GreCreatePatternBrushInternal.c)
 * Callees:
 *     IsEngCopyBitsSupported_0 @ 0x1C0001660 (IsEngCopyBitsSupported_0.c)
 *     EngCopyBits_0 @ 0x1C0001670 (EngCopyBits_0.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0033330 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0033590 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0075010 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00750D0 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

__int64 __fastcall hbmCreateClone(struct SURFACE *a1, int a2, int a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rsi
  bool v6; // zf
  struct _ERESOURCE *v7; // rdi
  SURFOBJ *v8; // rdx
  SURFOBJ *v9; // rcx
  __int64 v10; // rbx
  bool v12; // cc
  __int64 v13; // [rsp+60h] [rbp-29h] BYREF
  char v14; // [rsp+68h] [rbp-21h]
  int v15; // [rsp+6Ch] [rbp-1Dh]
  __int64 v16; // [rsp+70h] [rbp-19h] BYREF
  int v17; // [rsp+78h] [rbp-11h] BYREF
  __int64 v18; // [rsp+7Ch] [rbp-Dh]
  __int128 v19; // [rsp+84h] [rbp-5h]
  int v20; // [rsp+94h] [rbp+Bh]
  POINTL pptlSrc; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+A0h] [rbp+17h] BYREF
  RECTL prclDest; // [rsp+A8h] [rbp+1Fh] BYREF

  v18 = 0LL;
  v19 = 0uLL;
  v20 = 0;
  v17 = *((_DWORD *)a1 + 24);
  if ( a2 && a3 )
  {
    if ( *((_DWORD *)a1 + 14) < a2 )
      a2 = *((_DWORD *)a1 + 14);
    v12 = *((_DWORD *)a1 + 15) < a3;
    LODWORD(v18) = a2;
    if ( v12 )
      a3 = *((_DWORD *)a1 + 15);
    HIDWORD(v18) = a3;
  }
  else
  {
    v18 = *((_QWORD *)a1 + 7);
  }
  v4 = (_QWORD *)*((_QWORD *)a1 + 15);
  *(_QWORD *)((char *)&v19 + 4) = 0LL;
  if ( v4 )
    *(_QWORD *)((char *)&v19 + 4) = *v4;
  v5 = 0LL;
  HIDWORD(v19) = 1;
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  if ( (unsigned int)SURFMEM::bCreateDIB(
                       (SURFMEM *)&v13,
                       (struct _DEVBITMAPINFO *)&v17,
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
    v6 = (*((_DWORD *)a1 + 28) & 0x4000) == 0;
    v7 = 0LL;
    *(_QWORD *)&prclDest.right = v18;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    v16 = 0LL;
    if ( !v6 )
    {
      v22 = *((_QWORD *)a1 + 6);
      v7 = *(struct _ERESOURCE **)(v22 + 64);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v16, (struct PDEVOBJ *)&v22);
      EngAcquireSemaphore((HSEMAPHORE)v7);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemDevLock", v7, 11LL);
    }
    if ( (int)IsEngCopyBitsSupported_0() < 0 )
    {
      v5 = *(_QWORD *)(v13 + 32);
    }
    else
    {
      v8 = (SURFOBJ *)((char *)a1 + 24);
      v9 = 0LL;
      v10 = v13;
      if ( v13 )
        v9 = (SURFOBJ *)(v13 + 24);
      if ( !EngCopyBits_0(v9, v8, 0LL, &xloIdent, &prclDest, &pptlSrc) )
        goto LABEL_14;
      v5 = *(_QWORD *)(v10 + 32);
    }
    v14 |= 1u;
LABEL_14:
    if ( v7 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsemDevLock");
      GreReleaseSemaphoreInternal(v7);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v16);
    }
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v16);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v13);
  return v5;
}
