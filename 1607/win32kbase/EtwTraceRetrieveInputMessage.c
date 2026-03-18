/*
 * XREFs of EtwTraceRetrieveInputMessage @ 0x1C00775C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     Template_cpppqqq @ 0x1C00B6A94 (Template_cpppqqq.c)
 */

__int64 __fastcall EtwTraceRetrieveInputMessage(_QWORD *a1)
{
  __int64 result; // rax
  int v3; // r9d
  int v4; // edx
  int v5; // r8d

  result = MEMORY[0xFFFFF78000000320];
  if ( (Microsoft_Windows_Win32kEnableBits & 0x1000) != 0 )
  {
    LOBYTE(v3) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1108);
    return Template_cpppqqq(*a1, v4, v5, v3, *a1);
  }
  return result;
}
