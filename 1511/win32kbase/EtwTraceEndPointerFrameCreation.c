/*
 * XREFs of EtwTraceEndPointerFrameCreation @ 0x1C00ABC20
 * Callers:
 *     RIMAbandonHoldingFrame @ 0x1C00C93D4 (RIMAbandonHoldingFrame.c)
 * Callees:
 *     Template_ddd @ 0x1C00AD7BC (Template_ddd.c)
 */

__int64 __fastcall EtwTraceEndPointerFrameCreation(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return Template_ddd(a1, (unsigned int)&EndPointerFrameCreation, a3, a1, a2, a3);
  return result;
}
