/*
 * XREFs of EngDxIoctl @ 0x1C0264EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __stdcall EngDxIoctl(ULONG ulIoctl, PVOID pBuffer, ULONG ulBufferSize)
{
  __int64 v3; // rax

  v3 = WdLogNewEntry5_WdWarning(ulIoctl, pBuffer, ulBufferSize);
  WdLogEvent5_WdWarning(v3);
  return -2147467259;
}
