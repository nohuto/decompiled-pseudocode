/*
 * XREFs of PsspCaptureProcessInformation @ 0x1800595B4
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180058F80 (PssNtCaptureSnapshot.c)
 * Callees:
 *     PsspCaptureHandleTrace @ 0x180059734 (PsspCaptureHandleTrace.c)
 *     NtQueryInformationProcess @ 0x180093A90 (NtQueryInformationProcess.c)
 */

NTSTATUS __fastcall PsspCaptureProcessInformation(_QWORD *a1, void *a2, char a3)
{
  NTSTATUS result; // eax

  a1[2] = 64LL;
  result = NtQueryInformationProcess(a2, ProcessBasicInformation, a1 + 2, 0x40u, 0LL);
  if ( result >= 0 )
  {
    result = NtQueryInformationProcess(a2, ProcessTimes, a1 + 10, 0x20u, 0LL);
    if ( result >= 0 )
    {
      result = NtQueryInformationProcess(a2, ProcessPriorityClass, a1 + 14, 2u, 0LL);
      if ( result >= 0 )
      {
        result = NtQueryInformationProcess(a2, ProcessVmCounters, a1 + 15, 0x60u, 0LL);
        if ( result >= 0 )
        {
          if ( NtQueryInformationProcess(a2, ProcessExecuteFlags, a1 + 27, 4u, 0LL) < 0 )
            *((_DWORD *)a1 + 54) = 0;
          if ( NtQueryInformationProcess(a2, ProcessCookie, (char *)a1 + 220, 4u, 0LL) < 0 )
            *((_DWORD *)a1 + 55) = 0;
          if ( (a3 & 0x40) != 0 )
            PsspCaptureHandleTrace(a1, a2);
          *((_WORD *)a1 + 113) = 256;
          *((_WORD *)a1 + 112) = 0;
          a1[29] = a1 + 30;
          if ( NtQueryInformationProcess(a2, ProcessImageFileNameWin32, a1 + 28, 0x110u, 0LL) < 0 )
          {
            a1[28] = 0LL;
            a1[29] = 0LL;
          }
          return 0;
        }
      }
    }
  }
  return result;
}
