/*
 * XREFs of ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C00B1DD0
 * Callers:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00336C0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C003A070 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B1E40 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

void __fastcall SURFACE::Free(struct SURFACE *a1)
{
  if ( *((_BYTE *)a1 + 584) && *((_QWORD *)a1 + 9) )
  {
    Win32FreePool();
    *((_QWORD *)a1 + 9) = 0LL;
  }
  FreeObject((__int64)a1);
}
