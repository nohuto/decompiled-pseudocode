/*
 * XREFs of UserLogError @ 0x1C0009DD0
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C000909C (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C00CFA04 (RIMTransformPhysicalPointToScreen.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00D1390 (RIMApplyPTPConfigRemedy.c)
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
