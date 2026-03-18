/*
 * XREFs of ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C00AF604
 * Callers:
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0038890 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003B190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003DDD0 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C003DF50 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C00B32C8 (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     XEPATHOBJ_vConstructHPATHWrap_0 @ 0x1C0001070 (XEPATHOBJ_vConstructHPATHWrap_0.c)
 *     IsXEPATHOBJ_vConstructHPATHSupported_0 @ 0x1C0001078 (IsXEPATHOBJ_vConstructHPATHSupported_0.c)
 *     ??0THREAD_GUARDED_EPATHOBJ@@QEAA@XZ @ 0x1C0025738 (--0THREAD_GUARDED_EPATHOBJ@@QEAA@XZ.c)
 */

XEPATHOBJ *__fastcall XEPATHOBJ::XEPATHOBJ(XEPATHOBJ *this, struct HPATH__ *a2)
{
  THREAD_GUARDED_EPATHOBJ::THREAD_GUARDED_EPATHOBJ(this);
  *((_QWORD *)this + 1) = 0LL;
  if ( (int)IsXEPATHOBJ_vConstructHPATHSupported_0() >= 0 )
    XEPATHOBJ_vConstructHPATHWrap_0();
  return this;
}
