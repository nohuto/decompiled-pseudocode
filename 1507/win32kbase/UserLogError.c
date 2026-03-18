/*
 * XREFs of UserLogError @ 0x1C0083DC0
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0019D50 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C00CE690 (RIMTransformPhysicalPointToScreen.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00CFFB4 (RIMApplyPTPConfigRemedy.c)
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
