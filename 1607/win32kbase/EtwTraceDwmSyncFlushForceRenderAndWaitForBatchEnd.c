/*
 * XREFs of EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd @ 0x1C0088D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  result = Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return Template_q(a1, &DwmSyncFlushForceRenderAndWaitForBatchEnd, a3, a1);
  return result;
}
