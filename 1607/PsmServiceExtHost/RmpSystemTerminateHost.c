/*
 * XREFs of RmpSystemTerminateHost @ 0x180037FB8
 * Callers:
 *     ?RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ @ 0x180037304 (-RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     RmpSystemTerminateModernHost @ 0x180038014 (RmpSystemTerminateModernHost.c)
 */

NTSTATUS __fastcall RmpSystemTerminateHost(__int64 a1)
{
  int v2; // ecx
  NTSTATUS result; // eax

  v2 = *(_DWORD *)(a1 + 48);
  if ( v2 )
  {
    if ( v2 != 1 )
      return -1073741811;
    result = NtTerminateJobObject(*(HANDLE *)(a1 + 736), -1073741756);
  }
  else
  {
    result = RmpSystemTerminateModernHost((LPCWSTR)(a1 + 56));
  }
  if ( result >= 0 )
    return 0;
  return result;
}
