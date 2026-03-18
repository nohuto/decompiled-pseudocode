/*
 * XREFs of MmIsWriteErrorFatal @ 0x14008F0EC
 * Callers:
 *     CcIsFatalWriteError @ 0x14008E97C (CcIsFatalWriteError.c)
 *     MiWriteComplete @ 0x14008E9E0 (MiWriteComplete.c)
 *     MiFlushControlArea @ 0x1401DEA98 (MiFlushControlArea.c)
 *     FsRtlLogCcFlushError @ 0x14061DB78 (FsRtlLogCcFlushError.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x14008F154 (FsRtlIsTotalDeviceFailure.c)
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
