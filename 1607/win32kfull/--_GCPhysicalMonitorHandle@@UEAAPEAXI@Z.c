/*
 * XREFs of ??_GCPhysicalMonitorHandle@@UEAAPEAXI@Z @ 0x1C0258540
 * Callers:
 *     <none>
 * Callees:
 *     ?DDCCIFreeMemory@@YAXPEAX@Z @ 0x1C0135AAC (-DDCCIFreeMemory@@YAXPEAX@Z.c)
 *     ?Destroy@CPhysicalMonitorHandle@@UEAAJXZ @ 0x1C0259480 (-Destroy@CPhysicalMonitorHandle@@UEAAJXZ.c)
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
    DDCCIFreeMemory(this);
  return this;
}
