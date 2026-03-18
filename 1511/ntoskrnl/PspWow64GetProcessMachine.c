/*
 * XREFs of PspWow64GetProcessMachine @ 0x1404A5AB0
 * Callers:
 *     PspWow64InitThread @ 0x1404A46DC (PspWow64InitThread.c)
 *     PspWow64SetupCpuArea @ 0x1404A492C (PspWow64SetupCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspWow64GetProcessMachine(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1064);
  if ( v1 )
    return *(unsigned __int16 *)(v1 + 8);
  else
    return 34404LL;
}
