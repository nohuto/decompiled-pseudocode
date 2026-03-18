/*
 * XREFs of UserLogError @ 0x1C0006770
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0007F84 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C0010ED8 (RIMApplyPTPConfigRemedy.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C00D3F64 (RIMTransformPhysicalPointToScreen.c)
 * Callees:
 *     <none>
 */

void __fastcall UserLogError(int a1)
{
  _DWORD *ErrorLogEntry; // rax

  ErrorLogEntry = IoAllocateErrorLogEntry(gpWin32kDriverObject, 0x30u);
  if ( ErrorLogEntry )
  {
    ErrorLogEntry[3] = a1;
    IoWriteErrorLogEntry(ErrorLogEntry);
  }
}
