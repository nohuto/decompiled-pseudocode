/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00AF640
 * Callers:
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0038890 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003B190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003DDD0 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C003DF50 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C00B32C8 (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     XEPATHOBJ_vDestructWrap_0 @ 0x1C0001080 (XEPATHOBJ_vDestructWrap_0.c)
 *     IsXEPATHOBJ_vDestructSupported_0 @ 0x1C0001088 (IsXEPATHOBJ_vDestructSupported_0.c)
 *     PopThreadGuardedObject @ 0x1C004C300 (PopThreadGuardedObject.c)
 */

void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  if ( (int)IsXEPATHOBJ_vDestructSupported_0() >= 0 )
    XEPATHOBJ_vDestructWrap_0();
  if ( *((_DWORD *)this + 30) )
  {
    PopThreadGuardedObject((_QWORD *)this + 11);
    *((_DWORD *)this + 30) = 0;
  }
}
