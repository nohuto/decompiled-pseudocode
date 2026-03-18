/*
 * XREFs of ??_ECMonitorPDO@@UEAAPEAXI@Z @ 0x1C00AF450
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMonitorPDO@@UEAA@XZ @ 0x1C0068460 (--1CMonitorPDO@@UEAA@XZ.c)
 *     operator_delete @ 0x1C0068918 (operator_delete.c)
 */

CMonitorPDO *__fastcall CMonitorPDO::`vector deleting destructor'(CMonitorPDO *this, char a2)
{
  char *v4; // rsi
  __int64 v5; // rdi
  CMonitorPDO *i; // rbx

  if ( (a2 & 2) != 0 )
  {
    v4 = (char *)this - 8;
    v5 = *((int *)this - 2);
    for ( i = (CMonitorPDO *)((char *)this + 72 * v5); ; CMonitorPDO::~CMonitorPDO(i, a2) )
    {
      LODWORD(v5) = v5 - 1;
      if ( (int)v5 < 0 )
        break;
      i = (CMonitorPDO *)((char *)i - 72);
    }
    if ( (a2 & 1) != 0 )
      operator_delete(v4);
    return (CMonitorPDO *)v4;
  }
  else
  {
    CMonitorPDO::~CMonitorPDO(this, a2);
    if ( (a2 & 1) != 0 )
      operator_delete(this);
    return this;
  }
}
