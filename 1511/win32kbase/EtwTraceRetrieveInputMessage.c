/*
 * XREFs of EtwTraceRetrieveInputMessage @ 0x1C0072E30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     Template_cpppqqq @ 0x1C00AD27C (Template_cpppqqq.c)
 */

__int64 __fastcall EtwTraceRetrieveInputMessage(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // r9d
  int v6; // edx
  int v7; // r8d

  result = MEMORY[0xFFFFF78000000320];
  if ( (Microsoft_Windows_Win32kEnableBits & 0x1000) != 0 )
  {
    LOBYTE(v5) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 1084);
    return Template_cpppqqq(*a1, v6, v7, v5, *a1);
  }
  return result;
}
