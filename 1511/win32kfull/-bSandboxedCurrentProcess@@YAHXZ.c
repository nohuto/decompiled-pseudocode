/*
 * XREFs of ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C0147010
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C0146590 (NtGdiSetPUMPDOBJ.c)
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C0146C80 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSandboxedCurrentProcess(__int64 a1)
{
  __int64 result; // rax

  result = PsGetCurrentProcessWin32Process(a1);
  if ( result )
    return *(_DWORD *)(result + 264) | *(_DWORD *)(result + 12) & 0x80u;
  return result;
}
