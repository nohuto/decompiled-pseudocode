/*
 * XREFs of ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C003AC00
 * Callers:
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C003AD7C (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C005A9B8 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

void __fastcall XEPALOBJ::vMakeNoXlate(XEPALOBJ *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = *(_QWORD *)this;
  v3 = *(_QWORD *)(*(_QWORD *)this + 88LL);
  if ( v3 )
  {
    if ( v3 != *(_QWORD *)(v1 + 72) )
      Win32FreePool();
    *(_QWORD *)(*(_QWORD *)this + 88LL) = 0LL;
  }
  v4 = *(_QWORD *)(*(_QWORD *)this + 80LL);
  if ( v4 )
  {
    if ( v4 != *(_QWORD *)(*(_QWORD *)this + 72LL) )
      Win32FreePool();
    *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)this + 72LL) )
  {
    Win32FreePool();
    *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
  }
}
