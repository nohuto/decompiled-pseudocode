/*
 * XREFs of PsWow64GetProcessMachine @ 0x1404FDDF0
 * Callers:
 *     PsWow64GetSupportedArchitectures @ 0x1400F4FB0 (PsWow64GetSupportedArchitectures.c)
 *     DbgkCreateThread @ 0x1404580F8 (DbgkCreateThread.c)
 *     PsMapSystemDlls @ 0x14046ACD8 (PsMapSystemDlls.c)
 *     PspWow64SetupCpuArea @ 0x1404FD98C (PspWow64SetupCpuArea.c)
 *     PspSetupUserProcessAddressSpace @ 0x1404FD9F4 (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x1404FDC24 (PspPrepareSystemDllInitBlock.c)
 *     PspWow64InitThread @ 0x1404FDE08 (PspWow64InitThread.c)
 *     DbgkSendSystemDllMessages @ 0x140617F4C (DbgkSendSystemDllMessages.c)
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
