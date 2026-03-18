/*
 * XREFs of EtwTraceEndDelegateInputCallback @ 0x1C0083D90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     Template_cpttttttpppqq @ 0x1C00AD480 (Template_cpttttttpppqq.c)
 */

_UNKNOWN **__fastcall EtwTraceEndDelegateInputCallback(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // r9d
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = &retaddr;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, *(unsigned int *)(a2 + 8)) )
      v6 = *(char *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5) + 1084);
    else
      v6 = -1;
    return (_UNKNOWN **)Template_cpttttttpppqq(
                          -__CFSHR__(*(_DWORD *)(a1 + 92), 7),
                          (unsigned int)&EndDelegateInputCallback,
                          -__CFSHR__(*(_DWORD *)(a1 + 92), 8),
                          v6,
                          a1);
  }
  return result;
}
