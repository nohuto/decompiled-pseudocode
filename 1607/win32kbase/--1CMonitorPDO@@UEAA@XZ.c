/*
 * XREFs of ??1CMonitorPDO@@UEAA@XZ @ 0x1C00BD500
 * Callers:
 *     ??_ECMonitorPDO@@UEAAPEAXI@Z @ 0x1C00BD540 (--_ECMonitorPDO@@UEAAPEAXI@Z.c)
 *     ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1C00C1230 (--_ECOPMProtectedOutput@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Destroy@CMonitorPDO@@UEAAJXZ @ 0x1C0084C10 (-Destroy@CMonitorPDO@@UEAAJXZ.c)
 *     ??_GCMutex@@QEAAPEAXI@Z @ 0x1C00BD5C4 (--_GCMutex@@QEAAPEAXI@Z.c)
 */

void __fastcall CMonitorPDO::~CMonitorPDO(CMonitorPDO *this, unsigned int a2)
{
  bool v2; // zf
  CMutex *v4; // rcx

  v2 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &CMonitorPDO::`vftable';
  if ( !v2 )
    CMonitorPDO::Destroy(this);
  v4 = (CMutex *)*((_QWORD *)this + 1);
  if ( v4 )
    CMutex::`scalar deleting destructor'(v4, a2);
  *((_QWORD *)this + 1) = 0LL;
}
