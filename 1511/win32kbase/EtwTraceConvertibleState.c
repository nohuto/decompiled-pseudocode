/*
 * XREFs of EtwTraceConvertibleState @ 0x1C00AB960
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00AE174 (Template_q.c)
 */

__int64 __fastcall EtwTraceConvertibleState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
    return Template_q(a1, &SystemConvertibleState, a3, (unsigned int)a1);
  return result;
}
