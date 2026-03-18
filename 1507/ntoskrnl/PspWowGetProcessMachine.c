/*
 * XREFs of PspWowGetProcessMachine @ 0x140531A30
 * Callers:
 *     PspWow64InitThread @ 0x140530C38 (PspWow64InitThread.c)
 *     PspWow64SetupCpuArea @ 0x140530E54 (PspWow64SetupCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspWowGetProcessMachine(__int64 a1)
{
  __int64 result; // rax

  result = 34404LL;
  if ( *(_QWORD *)(a1 + 1064) )
    return 332LL;
  return result;
}
