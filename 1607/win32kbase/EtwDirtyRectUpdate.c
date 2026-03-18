/*
 * XREFs of EtwDirtyRectUpdate @ 0x1C0078370
 * Callers:
 *     <none>
 * Callees:
 *     Template_pqqqq @ 0x1C00B76F4 (Template_pqqqq.c)
 */

__int64 __fastcall EtwDirtyRectUpdate(int a1, char a2, int a3, char a4, char a5)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return Template_pqqqq(a1, (unsigned int)&DirtyRectUpdate, a3, a1, a2, a3, a4, a5);
  return result;
}
