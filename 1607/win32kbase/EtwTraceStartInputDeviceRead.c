/*
 * XREFs of EtwTraceStartInputDeviceRead @ 0x1C00B5A50
 * Callers:
 *     <none>
 * Callees:
 *     Template_qq @ 0x1C00B7B64 (Template_qq.c)
 */

__int64 __fastcall EtwTraceStartInputDeviceRead(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return Template_qq(a1, &StartInputDeviceRead, a3, (unsigned __int8)a1, a2);
  return result;
}
