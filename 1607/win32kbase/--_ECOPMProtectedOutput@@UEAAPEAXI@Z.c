/*
 * XREFs of ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1C00C1230
 * Callers:
 *     <none>
 * Callees:
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C00819B0 (-OPMFreeMemory@@YAXPEAX@Z.c)
 *     ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x1C0084670 (-Destroy@COPMProtectedOutput@@UEAAJXZ.c)
 *     ??1CMonitorPDO@@UEAA@XZ @ 0x1C00BD500 (--1CMonitorPDO@@UEAA@XZ.c)
 */

COPMProtectedOutput *__fastcall COPMProtectedOutput::`vector deleting destructor'(COPMProtectedOutput *this, char a2)
{
  bool v2; // zf

  v2 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &COPMProtectedOutput::`vftable';
  if ( !v2 )
    COPMProtectedOutput::Destroy(this);
  CMonitorPDO::~CMonitorPDO(this, a2);
  if ( (a2 & 1) != 0 )
    OPMFreeMemory(this);
  return this;
}
