/*
 * XREFs of EtwpCheckLoggerAccessAndDoRundown @ 0x1406E8394
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x1404D5EA8 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1406E82C4 (EtwpCheckGuidAccessAndDoRundown.c)
 * Callees:
 *     EtwpStackRundown @ 0x14026091C (EtwpStackRundown.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x1404D3244 (EtwpCheckLoggerControlAccess.c)
 *     EtwpLogKernelTraceRundown @ 0x1406E8638 (EtwpLogKernelTraceRundown.c)
 *     EtwpLogPmcCounterRundown @ 0x1406E86D4 (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpCheckLoggerAccessAndDoRundown(unsigned int a1, unsigned int a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // edi
  __int64 v8; // r8

  v5 = EtwpAcquireLoggerContextByLoggerId(a1, 1);
  v6 = v5;
  if ( v5 )
  {
    v7 = EtwpCheckLoggerControlAccess(0x80u, v5);
    if ( v7 >= 0 )
    {
      if ( (*(_DWORD *)(v6 + 12) & 0x2000000) != 0 )
      {
        LOBYTE(v8) = a3;
        EtwpLogKernelTraceRundown(a2, (char *)&EtwpGroupMasks + 32 * *(unsigned __int8 *)(v6 + 834), v8);
      }
      if ( (*(_DWORD *)(v6 + 832) & 0x800) != 0 )
        EtwpLogPmcCounterRundown(v6, a2);
      if ( (*(_DWORD *)(v6 + 832) & 0x1000000) != 0 )
        EtwpStackRundown(*(_QWORD *)(v6 + 856), a2);
    }
    EtwpReleaseLoggerContext((unsigned int *)v6, 1);
  }
  else
  {
    return (unsigned int)-1073741162;
  }
  return (unsigned int)v7;
}
