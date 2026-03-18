/*
 * XREFs of ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1C0082FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C007E0A0 (-OPMFreeMemory@@YAXPEAX@Z.c)
 *     ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x1C0082D20 (-Destroy@COPMProtectedOutput@@UEAAJXZ.c)
 *     ??1CMonitorPDO@@UEAA@XZ @ 0x1C0083320 (--1CMonitorPDO@@UEAA@XZ.c)
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
