/*
 * XREFs of ??1RFONTOBJ@@QEAA@XZ @ 0x1C0069DA4
 * Callers:
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C003B964 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C005AC00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     RFONTOBJ_dtHelperWrap_0 @ 0x1C00010A0 (RFONTOBJ_dtHelperWrap_0.c)
 *     IsRFONTOBJ_dtHelperSupported_0 @ 0x1C00010A8 (IsRFONTOBJ_dtHelperSupported_0.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00AF894 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::~RFONTOBJ(RFONTOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 0x81) != 0 && (int)IsRFONTOBJ_dtHelperSupported_0() >= 0 )
      RFONTOBJ_dtHelperWrap_0();
    RFONTOBJ::vReleaseCache(this);
  }
}
