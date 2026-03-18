/*
 * XREFs of DpiReportSoftwareDevice @ 0x1C00DED90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiReportSoftwareDevice(PDRIVER_OBJECT DriverObject)
{
  _DWORD *DriverObjectExtension; // rax
  __int64 v3; // rcx
  _DWORD *v4; // rdi
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD *v13; // rax

  if ( !DriverObject )
  {
    LODWORD(v10) = -1073741811;
    v13 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
    v13[4] = 0LL;
    v13[3] = DpiReportSoftwareDevice;
LABEL_11:
    v13[5] = -1073741811LL;
    goto LABEL_12;
  }
  DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, DriverObject);
  v4 = DriverObjectExtension;
  if ( !DriverObjectExtension || DriverObjectExtension[4] != 1953656900 || DriverObjectExtension[5] != 1 )
  {
    LODWORD(v10) = -1073741811;
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v3);
    v13[3] = DpiReportSoftwareDevice;
    v13[4] = IoGetDriverObjectExtension;
    goto LABEL_11;
  }
  v5 = IoReportRootDevice(DriverObject);
  v10 = v5;
  if ( v5 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v13[3] = DpiReportSoftwareDevice;
    v13[4] = IoReportDetectedDevice;
    v13[5] = v10;
LABEL_12:
    WdLogEvent5_WdError(v13);
    return (unsigned int)v10;
  }
  v11 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
  *(_QWORD *)(v11 + 24) = DpiReportSoftwareDevice;
  *(_QWORD *)(v11 + 32) = v4;
  WdLogEvent5_WdEvent(v11);
  return (unsigned int)v10;
}
