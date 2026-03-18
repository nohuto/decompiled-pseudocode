/*
 * XREFs of ??_ECMonitorPDO@@UEAAPEAXI@Z @ 0x1C00BD540
 * Callers:
 *     <none>
 * Callees:
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C00819B0 (-OPMFreeMemory@@YAXPEAX@Z.c)
 *     ??1CMonitorPDO@@UEAA@XZ @ 0x1C00BD500 (--1CMonitorPDO@@UEAA@XZ.c)
 */

CMonitorPDO *__fastcall CMonitorPDO::`vector deleting destructor'(CMonitorPDO *this, char a2)
{
  char *v4; // r14
  __int64 v5; // rdi
  CMonitorPDO *i; // rbx

  if ( (a2 & 2) != 0 )
  {
    v4 = (char *)this - 8;
    v5 = *((_QWORD *)this - 1);
    for ( i = (CMonitorPDO *)((char *)this + 72 * v5); v5; --v5 )
    {
      i = (CMonitorPDO *)((char *)i - 72);
      CMonitorPDO::~CMonitorPDO(i, a2);
    }
    if ( (a2 & 1) != 0 )
      OPMFreeMemory(v4);
    return (CMonitorPDO *)v4;
  }
  else
  {
    CMonitorPDO::~CMonitorPDO(this, a2);
    if ( (a2 & 1) != 0 )
      OPMFreeMemory(this);
    return this;
  }
}
