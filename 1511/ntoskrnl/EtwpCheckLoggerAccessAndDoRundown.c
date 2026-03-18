/*
 * XREFs of EtwpCheckLoggerAccessAndDoRundown @ 0x140665298
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x1404CE8C8 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1406651C8 (EtwpCheckGuidAccessAndDoRundown.c)
 * Callees:
 *     EtwpStackRundown @ 0x14021154C (EtwpStackRundown.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckLoggerControlAccess @ 0x14046D32C (EtwpCheckLoggerControlAccess.c)
 *     EtwpLogKernelTraceRundown @ 0x140665544 (EtwpLogKernelTraceRundown.c)
 *     EtwpLogPmcCounterRundown @ 0x1406655E0 (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpCheckLoggerAccessAndDoRundown(unsigned int a1, unsigned int a2, char a3)
{
  unsigned int *v5; // rax
  unsigned int *v6; // rbx
  int v7; // edi
  __int64 v8; // r8

  v5 = EtwpAcquireLoggerContextByLoggerId(0LL, a1, 1);
  v6 = v5;
  if ( v5 )
  {
    v7 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v5);
    if ( v7 >= 0 )
    {
      if ( (v6[3] & 0x2000000) != 0 )
      {
        LOBYTE(v8) = a3;
        EtwpLogKernelTraceRundown(a2, (char *)&EtwpGroupMasks + 32 * *((unsigned __int8 *)v6 + 834), v8);
      }
      if ( (v6[208] & 0x800) != 0 )
        EtwpLogPmcCounterRundown(v6, a2);
      if ( (v6[208] & 0x1000000) != 0 )
        EtwpStackRundown(*((_QWORD *)v6 + 107), a2);
    }
    EtwpReleaseLoggerContext(0LL, v6, 1);
  }
  else
  {
    return (unsigned int)-1073741162;
  }
  return (unsigned int)v7;
}
