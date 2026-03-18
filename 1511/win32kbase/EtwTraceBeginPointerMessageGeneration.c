/*
 * XREFs of EtwTraceBeginPointerMessageGeneration @ 0x1C00AB790
 * Callers:
 *     <none>
 * Callees:
 *     Template_hh @ 0x1C00ADACC (Template_hh.c)
 */

__int64 __fastcall EtwTraceBeginPointerMessageGeneration(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return Template_hh(a1, &BeginPointerMessageGeneration, a3, (unsigned __int16)a1, a2);
  return result;
}
