/*
 * XREFs of ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C00B3280
 * Callers:
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002D9A0 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0030F10 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032210 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     GreRestoreDC @ 0x1C0032D00 (GreRestoreDC.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00A8AD0 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 * Callees:
 *     XEPATHOBJ_vConstructHPATHWrap_0 @ 0x1C0001070 (XEPATHOBJ_vConstructHPATHWrap_0.c)
 *     IsXEPATHOBJ_vConstructHPATHSupported_0 @ 0x1C0001078 (IsXEPATHOBJ_vConstructHPATHSupported_0.c)
 */

XEPATHOBJ *__fastcall XEPATHOBJ::XEPATHOBJ(XEPATHOBJ *this, struct HPATH__ *a2)
{
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 1) = 0LL;
  if ( (int)IsXEPATHOBJ_vConstructHPATHSupported_0() >= 0 )
    XEPATHOBJ_vConstructHPATHWrap_0();
  return this;
}
