/*
 * XREFs of MmIsWriteErrorFatal @ 0x140030710
 * Callers:
 *     MiWriteComplete @ 0x1400300AC (MiWriteComplete.c)
 *     CcIsFatalWriteError @ 0x1400E4250 (CcIsFatalWriteError.c)
 *     MiFlushControlArea @ 0x1401D0FFC (MiFlushControlArea.c)
 *     FsRtlLogCcFlushError @ 0x1405F3820 (FsRtlLogCcFlushError.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x140030778 (FsRtlIsTotalDeviceFailure.c)
 */

__int64 __fastcall MmIsWriteErrorFatal(int a1, int a2, NTSTATUS a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( (a3 == -1073741740 || !a1 || !a2) && a3 != -1073741672 && a3 != -1073741566 && a3 != -1073741202 )
  {
    if ( a3 == -1073741667 )
    {
      if ( a1 && a2 )
        goto LABEL_7;
    }
    else if ( a3 != -1073741662 || !a1 )
    {
LABEL_7:
      LOBYTE(v3) = FsRtlIsTotalDeviceFailure(a3) == 0;
      return v3;
    }
  }
  return 1LL;
}
