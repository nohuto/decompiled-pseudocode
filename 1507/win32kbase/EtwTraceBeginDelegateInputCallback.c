/*
 * XREFs of EtwTraceBeginDelegateInputCallback @ 0x1C0069530
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     Template_cpttttttpppqq @ 0x1C00A8FD8 (Template_cpttttttpppqq.c)
 */

_UNKNOWN **__fastcall EtwTraceBeginDelegateInputCallback(__int64 a1)
{
  _UNKNOWN **result; // rax
  int v3; // r9d
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = &retaddr;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      v3 = *(char *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1092);
    else
      v3 = -1;
    return (_UNKNOWN **)Template_cpttttttpppqq(
                          -__CFSHR__(*(_DWORD *)(a1 + 92), 7),
                          (unsigned int)&BeginDelegateInputCallback,
                          -__CFSHR__(*(_DWORD *)(a1 + 92), 8),
                          v3,
                          a1);
  }
  return result;
}
