/*
 * XREFs of EtwSyscallFilterMessage @ 0x1C00CBFE0
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1C00BC100 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     Template_q @ 0x1C0005214 (Template_q.c)
 */

NTSTATUS __fastcall EtwSyscallFilterMessage(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  result = HIDWORD(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
    return Template_q(a1, &SyscallFilterMessage, a3, a1);
  return result;
}
