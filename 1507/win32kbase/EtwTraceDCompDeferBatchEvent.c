/*
 * XREFs of EtwTraceDCompDeferBatchEvent @ 0x1C0019270
 * Callers:
 *     <none>
 * Callees:
 *     Template_qpqxxq @ 0x1C00A9E3C (Template_qpqxxq.c)
 */

__int64 __fastcall EtwTraceDCompDeferBatchEvent(int a1, int a2, int a3, char a4, __int64 a5, char a6)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return Template_qpqxxq(a1, a2, a3, a1, a2, a3, a4, a5, a6);
  return result;
}
