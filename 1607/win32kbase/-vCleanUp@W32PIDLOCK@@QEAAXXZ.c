/*
 * XREFs of ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C000D728
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0026180 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0033330 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0033590 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C002E5F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

void __fastcall W32PIDLOCK::vCleanUp(W32PIDLOCK *this)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 4);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v3);
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    Win32FreePool(v2);
}
