/*
 * XREFs of TraceDxgkPerformanceWarning @ 0x1C001F7A0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 */

NTSTATUS __fastcall TraceDxgkPerformanceWarning(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  result = Microsoft_Windows_DxgKrnlEnableBits;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    return Template_q(a1, &EventPerformanceWarning, a3, a1);
  return result;
}
