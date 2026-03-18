/*
 * XREFs of ?bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C02A5548
 * Callers:
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C025A93C (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     NtGdiAddEmbFontToDC @ 0x1C0267A90 (NtGdiAddEmbFontToDC.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 */

__int64 __fastcall XDCOBJ::bAddRemoteFont(XDCOBJ *this, struct PFF *a2)
{
  unsigned int v2; // ebx
  _QWORD *v5; // rax

  v2 = 0;
  v5 = PALLOCMEM2(0x10uLL, 1684300103LL, 1);
  if ( v5 )
  {
    v2 = 1;
    v5[1] = *(_QWORD *)(*(_QWORD *)this + 2488LL);
    *(_QWORD *)(*(_QWORD *)this + 2488LL) = v5;
    *v5 = a2;
    ++*((_DWORD *)a2 + 16);
  }
  return v2;
}
