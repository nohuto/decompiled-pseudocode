/*
 * XREFs of DpiReportSoftwareDevice @ 0x1C00FC6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiReportSoftwareDevice(PDRIVER_OBJECT DriverObject)
{
  _DWORD *DriverObjectExtension; // rax
  _DWORD *v3; // rdi
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v9; // rax

  if ( !DriverObject
    || (DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, DriverObject),
        (v3 = DriverObjectExtension) == 0LL)
    || DriverObjectExtension[4] != 1953656900
    || DriverObjectExtension[5] != 1 )
  {
    LODWORD(v6) = -1073741811;
    v9 = WdLogNewEntry5_WdError(DriverObject);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    goto LABEL_10;
  }
  v4 = IoReportRootDevice(DriverObject);
  v6 = v4;
  if ( v4 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v9 + 24) = v6;
LABEL_10:
    WdLogEvent5_WdError(v9);
    return (unsigned int)v6;
  }
  v7 = WdLogNewEntry5_WdEvent(v5);
  *(_QWORD *)(v7 + 24) = v3;
  WdLogEvent5_WdEvent(v7);
  return (unsigned int)v6;
}
