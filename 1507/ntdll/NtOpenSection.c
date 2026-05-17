/*
 * XREFs of NtOpenSection @ 0x180093C70
 * Callers:
 *     CsrpConnectToServer @ 0x1800044D4 (CsrpConnectToServer.c)
 *     LdrpFindKnownDll @ 0x18003FFC4 (LdrpFindKnownDll.c)
 *     LdrGetKnownDllSectionHandle @ 0x1800744A0 (LdrGetKnownDllSectionHandle.c)
 *     _ResOpenFileMapping @ 0x1800FA9B0 (_ResOpenFileMapping.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenSection()
{
  __int64 result; // rax

  result = 55LL;
  __asm { syscall; Low latency system call }
  return result;
}
