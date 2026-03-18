/*
 * XREFs of EtwTraceDITResolveDCompInputHandleToHwnd @ 0x1C00056B0
 * Callers:
 *     <none>
 * Callees:
 *     Template_ppxq @ 0x1C00ADE38 (Template_ppxq.c)
 */

__int64 __fastcall EtwTraceDITResolveDCompInputHandleToHwnd(int a1, int a2, int a3, char a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return Template_ppxq(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
