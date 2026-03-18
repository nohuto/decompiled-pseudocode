/*
 * XREFs of OriginFromMonFlags @ 0x1C0037C70
 * Callers:
 *     PhysicalToLogicalDPIMonitorPoint @ 0x1C0037CB0 (PhysicalToLogicalDPIMonitorPoint.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0037DE0 (LogicalToPhysicalDPIRect.c)
 *     LogicalToPhysicalDPIMonitorPoint @ 0x1C00B9420 (LogicalToPhysicalDPIMonitorPoint.c)
 * Callees:
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C003826C (-ValidateMonFlags@@YAHPEAK@Z.c)
 */

__int64 __fastcall OriginFromMonFlags(unsigned int a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  ValidateMonFlags(&v5);
  if ( (v5 & 0x40) != 0 )
  {
    v3 = a2 + 44;
  }
  else
  {
    v3 = a2 + 60;
    if ( (v5 & 0x80u) == 0 )
      v3 = a2 + 28;
  }
  return *(_QWORD *)v3;
}
