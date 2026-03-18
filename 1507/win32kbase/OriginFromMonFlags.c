/*
 * XREFs of OriginFromMonFlags @ 0x1C0011130
 * Callers:
 *     LogicalToPhysicalDPIMonitorPoint @ 0x1C00A65E0 (LogicalToPhysicalDPIMonitorPoint.c)
 *     PhysicalToLogicalDPIMonitorPoint @ 0x1C00A66C0 (PhysicalToLogicalDPIMonitorPoint.c)
 * Callees:
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C001116C (-ValidateMonFlags@@YAHPEAK@Z.c)
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
