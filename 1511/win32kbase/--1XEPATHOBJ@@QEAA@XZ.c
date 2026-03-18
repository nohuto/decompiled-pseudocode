/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00B32E8
 * Callers:
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002D9A0 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0030F10 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032210 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     GreRestoreDC @ 0x1C0032D00 (GreRestoreDC.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00A8AD0 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 * Callees:
 *     XEPATHOBJ_vDestructWrap_0 @ 0x1C0001080 (XEPATHOBJ_vDestructWrap_0.c)
 *     IsXEPATHOBJ_vDestructSupported_0 @ 0x1C0001088 (IsXEPATHOBJ_vDestructSupported_0.c)
 *     PopThreadGuardedObject @ 0x1C003ED40 (PopThreadGuardedObject.c)
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
