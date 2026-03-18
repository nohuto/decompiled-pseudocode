/*
 * XREFs of ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C025B314
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00453F0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     EngCopyBits @ 0x1C0040D90 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

int __fastcall bCopySurface(struct SURFMEM *a1, struct _SURFOBJ *a2)
{
  __int64 v4; // rax
  int v5; // ebx
  ULONG iBitmapFormat; // ecx
  int result; // eax
  SURFOBJ *v8; // rcx
  __int64 v9; // rax
  int v10; // [rsp+60h] [rbp+7h] BYREF
  SIZEL sizlBitmap; // [rsp+64h] [rbp+Bh]
  __int128 v12; // [rsp+6Ch] [rbp+13h]
  int v13; // [rsp+7Ch] [rbp+23h]
  RECTL prclDest; // [rsp+80h] [rbp+27h] BYREF

  v4 = SURFOBJ_TO_SURFACE(a2);
  v5 = 0;
  sizlBitmap = 0LL;
  v12 = 0uLL;
  v13 = 0;
  sizlBitmap = a2->sizlBitmap;
  iBitmapFormat = a2->iBitmapFormat;
  v10 = 0;
  *(_QWORD *)((char *)&v12 + 4) = 0LL;
  HIDWORD(v12) = *(_DWORD *)(v4 + 112) & 0x40000;
  if ( iBitmapFormat == 7 )
  {
    v10 = 2;
  }
  else if ( iBitmapFormat == 8 )
  {
    v10 = 3;
  }
  else
  {
    v10 = iBitmapFormat;
  }
  result = SURFMEM::bCreateDIB(a1, (struct _DEVBITMAPINFO *)&v10, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( result )
  {
    v8 = 0LL;
    prclDest.right = a2->sizlBitmap.cx;
    prclDest.bottom = a2->sizlBitmap.cy;
    v9 = *(_QWORD *)a1;
    *(_QWORD *)&prclDest.left = 0LL;
    if ( v9 )
      v8 = (SURFOBJ *)(v9 + 24);
    LOBYTE(v5) = EngCopyBits(v8, a2, 0LL, xloIdent, &prclDest, (POINTL *)&prclDest);
    return v5;
  }
  return result;
}
