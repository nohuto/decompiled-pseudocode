/*
 * XREFs of TraceDxgkBlockThread @ 0x1C0011B40
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

NTSTATUS __fastcall TraceDxgkBlockThread(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (_DWORD)a1 != -1 )
  {
    result = Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      return Template_q(a1, &EventBlockThread, a3, a1);
  }
  return result;
}
