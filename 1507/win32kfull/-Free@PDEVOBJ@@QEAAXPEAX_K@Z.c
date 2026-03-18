/*
 * XREFs of ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C01297A8
 * Callers:
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C0031A68 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C01261C0 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?vDelete@PFEOBJ@@QEAAXXZ @ 0x1C01296A0 (-vDelete@PFEOBJ@@QEAAXXZ.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C013EA70 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     GreMakeFontDir @ 0x1C02B3AAC (GreMakeFontDir.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C02B4510 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C0032060 (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00320A4 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::Free(PDEVOBJ *this, void *a2, __int64 a3)
{
  void (__fastcall *v5)(void *, __int64); // rbx
  _BYTE v6[56]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(void (__fastcall **)(void *, __int64))(*(_QWORD *)this + 3056LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v6, this);
    v5(a2, a3);
    ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v6);
  }
}
