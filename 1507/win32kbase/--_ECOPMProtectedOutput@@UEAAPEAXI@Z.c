/*
 * XREFs of ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1C00680E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x1C0067F60 (-Destroy@COPMProtectedOutput@@UEAAJXZ.c)
 *     ??1CMonitorPDO@@UEAA@XZ @ 0x1C0068460 (--1CMonitorPDO@@UEAA@XZ.c)
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C0069F28 (-OPMFreeMemory@@YAXPEAX@Z.c)
 */

COPMProtectedOutput *__fastcall COPMProtectedOutput::`vector deleting destructor'(COPMProtectedOutput *this, char a2)
{
  bool v2; // zf

  v2 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &COPMProtectedOutput::`vftable';
  if ( !v2 )
    COPMProtectedOutput::Destroy(this);
  CMonitorPDO::~CMonitorPDO(this);
  if ( (a2 & 1) != 0 )
    OPMFreeMemory(this);
  return this;
}
