/*
 * XREFs of ??_GCPhysicalMonitorHandle@@UEAAPEAXI@Z @ 0x1C025B400
 * Callers:
 *     <none>
 * Callees:
 *     operator_delete @ 0x1C0132128 (operator_delete.c)
 *     ?Destroy@CPhysicalMonitorHandle@@UEAAJXZ @ 0x1C025C360 (-Destroy@CPhysicalMonitorHandle@@UEAAJXZ.c)
 */

CPhysicalMonitorHandle *__fastcall CPhysicalMonitorHandle::`scalar deleting destructor'(
        CPhysicalMonitorHandle *this,
        char a2)
{
  bool v2; // zf

  v2 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &CPhysicalMonitorHandle::`vftable';
  if ( !v2 )
    CPhysicalMonitorHandle::Destroy(this);
  CMonitorPDO::~CMonitorPDO(this);
  if ( (a2 & 1) != 0 )
    operator_delete(this);
  return this;
}
