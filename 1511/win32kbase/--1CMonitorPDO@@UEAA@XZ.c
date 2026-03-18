/*
 * XREFs of ??1CMonitorPDO@@UEAA@XZ @ 0x1C0083320
 * Callers:
 *     ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1C0082FA0 (--_ECOPMProtectedOutput@@UEAAPEAXI@Z.c)
 *     ??_ECMonitorPDO@@UEAAPEAXI@Z @ 0x1C00B30F0 (--_ECMonitorPDO@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Destroy@CMonitorPDO@@UEAAJXZ @ 0x1C0083240 (-Destroy@CMonitorPDO@@UEAAJXZ.c)
 *     ??_GCMutex@@QEAAPEAXI@Z @ 0x1C00837C8 (--_GCMutex@@QEAAPEAXI@Z.c)
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
