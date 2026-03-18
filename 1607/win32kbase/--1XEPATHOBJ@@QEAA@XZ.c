/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00BD79C
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0027340 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C00285B0 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002D064 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C002D1E0 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C00C0878 (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     XEPATHOBJ_vDestructWrap_0 @ 0x1C0001080 (XEPATHOBJ_vDestructWrap_0.c)
 *     IsXEPATHOBJ_vDestructSupported_0 @ 0x1C0001088 (IsXEPATHOBJ_vDestructSupported_0.c)
 *     PopThreadGuardedObject @ 0x1C00648D0 (PopThreadGuardedObject.c)
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
