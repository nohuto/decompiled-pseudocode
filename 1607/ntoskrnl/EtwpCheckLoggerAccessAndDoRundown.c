/*
 * XREFs of EtwpCheckLoggerAccessAndDoRundown @ 0x1406A6DB8
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x140491978 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1406A6CD4 (EtwpCheckGuidAccessAndDoRundown.c)
 * Callees:
 *     EtwpStackRundown @ 0x14022AE4C (EtwpStackRundown.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x140490C98 (EtwpCheckLoggerControlAccess.c)
 *     EtwpLogKernelTraceRundown @ 0x1406A7070 (EtwpLogKernelTraceRundown.c)
 *     EtwpLogPmcCounterRundown @ 0x1406A710C (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpCheckLoggerAccessAndDoRundown(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // edi
  __int64 v9; // r8

  v6 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 1);
  v7 = v6;
  if ( v6 )
  {
    v8 = EtwpCheckLoggerControlAccess(0x80u, v6);
    if ( v8 >= 0 )
    {
      if ( (*(_DWORD *)(v7 + 12) & 0x2000000) != 0 )
      {
        LOBYTE(v9) = a4;
        EtwpLogKernelTraceRundown(a3, (char *)&EtwpGroupMasks + 32 * *(unsigned __int8 *)(v7 + 818), v9);
      }
      if ( (*(_DWORD *)(v7 + 816) & 0x800) != 0 )
        EtwpLogPmcCounterRundown(v7, a3);
      if ( (*(_DWORD *)(v7 + 816) & 0x1000000) != 0 )
        EtwpStackRundown(*(_QWORD *)(v7 + 840), a3);
    }
    EtwpReleaseLoggerContext((unsigned int *)v7, 1);
  }
  else
  {
    return (unsigned int)-1073741162;
  }
  return (unsigned int)v8;
}
