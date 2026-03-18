/*
 * XREFs of ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C000CB80
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C000C2C0 (GreCreatePatternBrushInternal.c)
 * Callees:
 *     IsEngCopyBitsSupported_0 @ 0x1C0001650 (IsEngCopyBitsSupported_0.c)
 *     EngCopyBits_0 @ 0x1C0001660 (EngCopyBits_0.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00336C0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0033A80 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0033B40 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B1E40 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 */

__int64 __fastcall hbmCreateClone(struct SURFACE *a1, int a2, int a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rsi
  bool v6; // zf
  HSEMAPHORE v7; // rdi
  __int64 v8; // r8
  SURFOBJ *v9; // rdx
  SURFOBJ *v10; // rcx
  __int64 v11; // rbx
  bool v13; // cc
  __int64 v14; // [rsp+60h] [rbp-29h] BYREF
  char v15; // [rsp+68h] [rbp-21h]
  int v16; // [rsp+6Ch] [rbp-1Dh]
  __int64 v17; // [rsp+70h] [rbp-19h] BYREF
  int v18; // [rsp+78h] [rbp-11h] BYREF
  __int64 v19; // [rsp+7Ch] [rbp-Dh]
  __int128 v20; // [rsp+84h] [rbp-5h]
  int v21; // [rsp+94h] [rbp+Bh]
  POINTL pptlSrc; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+A0h] [rbp+17h] BYREF
  RECTL prclDest; // [rsp+A8h] [rbp+1Fh] BYREF

  v19 = 0LL;
  v20 = 0uLL;
  v21 = 0;
  v18 = *((_DWORD *)a1 + 24);
  if ( a2 && a3 )
  {
    if ( *((_DWORD *)a1 + 14) < a2 )
      a2 = *((_DWORD *)a1 + 14);
    v13 = *((_DWORD *)a1 + 15) < a3;
    LODWORD(v19) = a2;
    if ( v13 )
      a3 = *((_DWORD *)a1 + 15);
    HIDWORD(v19) = a3;
  }
  else
  {
    v19 = *((_QWORD *)a1 + 7);
  }
  v4 = (_QWORD *)*((_QWORD *)a1 + 15);
  *(_QWORD *)((char *)&v20 + 4) = 0LL;
  if ( v4 )
    *(_QWORD *)((char *)&v20 + 4) = *v4;
  v5 = 0LL;
  HIDWORD(v20) = 1;
  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  if ( (unsigned int)SURFMEM::bCreateDIB(
                       (SURFMEM *)&v14,
                       (struct _DEVBITMAPINFO *)&v18,
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
    *(_QWORD *)&prclDest.right = v19;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    v17 = 0LL;
    if ( !v6 )
    {
      v23 = *((_QWORD *)a1 + 6);
      v7 = *(HSEMAPHORE *)(v23 + 64);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v17, (struct PDEVOBJ *)&v23);
      EngAcquireSemaphore(v7);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsemDevLock", (int)v7, 11);
    }
    if ( (int)IsEngCopyBitsSupported_0() < 0 )
    {
      v5 = *(_QWORD *)(v14 + 32);
    }
    else
    {
      v9 = (SURFOBJ *)((char *)a1 + 24);
      v10 = 0LL;
      v11 = v14;
      if ( v14 )
        v10 = (SURFOBJ *)(v14 + 24);
      if ( !EngCopyBits_0(v10, v9, 0LL, &xloIdent, &prclDest, &pptlSrc) )
        goto LABEL_14;
      v5 = *(_QWORD *)(v11 + 32);
    }
    v15 |= 1u;
LABEL_14:
    if ( v7 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"hsemDevLock", (__int64)v7, v8);
      GreReleaseSemaphoreInternal(v7);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v17);
    }
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v17);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v14);
  return v5;
}
