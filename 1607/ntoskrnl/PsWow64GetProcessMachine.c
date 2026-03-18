/*
 * XREFs of PsWow64GetProcessMachine @ 0x14051AA00
 * Callers:
 *     PsWow64GetSupportedArchitectures @ 0x1400F7170 (PsWow64GetSupportedArchitectures.c)
 *     DbgkCreateThread @ 0x140459228 (DbgkCreateThread.c)
 *     PsMapSystemDlls @ 0x14046BE08 (PsMapSystemDlls.c)
 *     PspWow64SetupCpuArea @ 0x14051A59C (PspWow64SetupCpuArea.c)
 *     PspSetupUserProcessAddressSpace @ 0x14051A604 (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x14051A834 (PspPrepareSystemDllInitBlock.c)
 *     PspWow64InitThread @ 0x14051AA18 (PspWow64InitThread.c)
 *     DbgkSendSystemDllMessages @ 0x140617E98 (DbgkSendSystemDllMessages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsWow64GetProcessMachine(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1064);
  if ( v1 )
    return *(unsigned __int16 *)(v1 + 8);
  else
    return 34404LL;
}
