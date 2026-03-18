/*
 * XREFs of ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C00BFB6C
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0026180 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0033330 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0033590 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

void __fastcall SURFACE::Free(struct SURFACE *a1)
{
  if ( *((_BYTE *)a1 + 592) && *((_QWORD *)a1 + 9) )
  {
    Win32FreePool();
    *((_QWORD *)a1 + 9) = 0LL;
  }
  FreeObject((__int64)a1);
}
